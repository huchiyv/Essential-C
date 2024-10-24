/*
Copyright [2024] <huchiyu>
使用你最称手的编辑工具,输入两行(或更多)文字并存盘。然后编写一个程序,打开该文本文
件,将其中每个字都读取到一个 vector<string>对象中。遍历该
vector,将内容显示到cout。然后 利用泛型算法 sort(),对所有文字排序:
#include <algorithm>
sort(container.begin(), container.end());
再将排序后的结果输出到另一个文件。
*/

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;  // NOLINT

int main() {
    vector<string> container;
    ifstream in("hello.txt");
    string line;
    while (getline(in, line)) {
        for (auto c : line) {
            container.push_back(string(1, c));
        }
    }
    in.close();
    for (auto c : container) {
        cout << c << " ";
    }
    cout << endl;
    cout << "Sorting..." << endl;
    sort(container.begin(), container.end());
    ofstream out("sorted.txt");
    for (auto c : container) {
        out << c << " ";
        cout << c << " ";
    }
    out.close();
    return 0;
}
