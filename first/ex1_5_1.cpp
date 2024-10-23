/*
编写一个程序,能够询问用户的姓名,并读取用户所输入的内容。请确保用户输入的名称长度大
于两个字符。
如果用户的确输入了有效名称,就响应一些信息。请以两种方式实现:第一种使用C-style
字符串,第二种使用 string 对象。
Copyright [2024] <huchiyu>
*/

#include <cstring>
#include <iostream>
#include <string>

using namespace std;  // NOLINT

int main() {
  char name[100];
  string name_str;

  cout << "Please enter your name(char): ";
  cin.getline(name, 100);

  if (strlen(name) > 2) {
    cout << "Hello, " << name << "!" << endl;
  } else {
    cout << "Invalid name. Please enter a name with at least two characters."
         << endl;
  }

  cout << "Please enter your name(string): ";
  getline(cin, name_str);
  if (name_str.length() > 2) {
    cout << "Hello, " << name_str << "!" << endl;
  } else {
    cout << "Invalid name. Please enter a name with at least two characters."
         << endl;
  }

  return 0;
}
