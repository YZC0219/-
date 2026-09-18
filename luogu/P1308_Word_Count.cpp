/*
题号：P1308
题目：统计单词数
题干：给定一个单词和一篇文章，不区分大小写地统计该单词作为完整单词出现的次数，并找出第一次出现的位置；只作为其他单词的一部分时不计。
输入：目标单词和文章各一行。输出：出现次数与首次位置；没有出现则输出 -1。
原题：https://www.luogu.com.cn/problem/P1308
*/

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
