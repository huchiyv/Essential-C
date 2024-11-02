/**
 * copyright <NAME>
 * 练习 44 一份“用户概况记录(user
 * profile)”类内含以下数据:登录记录,实际姓名,登录次数、猜过次数。
 * 猜对次数等，等级——————包括初级、中级、高级、专家、以及精对百分比(可实时计算获得,或将其值储
 * 在起来备用)。请写出一个名为UserProfile 提供以下操作:输入、输出,相等测试,不等
 * 测试, constructor 必须能够处理默认的用户等级,默认的名称对于同样名为
 * 的多个用户,你如何保证每个guest有他自己独有的登录会话(login
 * session),不会和其他人混淆?
 */
#ifndef EX4_4_H  // NOLINT
#define EX4_4_H
#include <string>
#include <vector>
#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::vector;

static int s_ID = 0;
class UserProfile {
 public:
  enum Level {
    LEVEL_PRIMARY,
    LEVEL_INTERMEDIATE,
    LEVEL_ADVANCED,
    LEVEL_EXPERT
  };
  explicit UserProfile(string name = "Guest", Level level = LEVEL_PRIMARY);
  bool operator==(const UserProfile& rhs) const;
  bool operator!=(const UserProfile& rhs) const;
  bool CalculateAccuracy();

  // Set 和 Get 函数

  void setUserName(const string& userName) { m_userName = userName; }
  string getUserName() const { return m_userName; }

  void setLevel(Level level) { m_level = level; }
  Level getLevel() const { return m_level; }

 private :
  int m_ID;
  string m_userName;
  int m_loginNums;
  int m_loginTime;
  int m_guessNums;
  int m_guessRightNums;
  double m_Accuracy;
  Level m_level;
};
#endif  // EX4_4_H   // NOLINT;