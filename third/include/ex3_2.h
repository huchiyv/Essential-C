/**
 * copyright <NAME>
 * 读取文本文件内容—————和练习11———————内容储存于vector,以字符串长度为依据。矿
 * vector 排序。定义一个function object 并传给sort() 长度小于第二字符串的长度时,就返回
 * object 接受两个字符串,当第一字符串的这一function 后打印的内容。
 */
#ifndef EX3_2_H  // NOLINT
#define EX3_2_H
#include <string>
#include <vector>
using namespace std;  // NOLINT
class StrLenLess {
 public:
  bool operator()(const std::string& s1, const std::string& s2) const {
    return s1.length() < s2.length();
  }
};



#endif // EX3_2_H  // NOLINT

