#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string word, text;
    getline(cin, word);
    getline(cin, text);

    for (char &c : word) c = tolower(static_cast<unsigned char>(c));
    for (char &c : text) c = tolower(static_cast<unsigned char>(c));

    int count = 0, first = -1;
    for (int i = 0; i + static_cast<int>(word.size()) <= static_cast<int>(text.size()); i++) {
        bool leftOK = (i == 0 || text[i - 1] == ' ');
        int end = i + word.size();
        bool rightOK = (end == static_cast<int>(text.size()) || text[end] == ' ');
        if (leftOK && rightOK && text.substr(i, word.size()) == word) {
            count++;
            if (first == -1) first = i;
        }
    }
    if (count == 0) cout << -1 << '\n';
    else cout << count << ' ' << first << '\n';
    return 0;
}
