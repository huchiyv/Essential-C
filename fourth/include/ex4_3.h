/**
 * copyright <NAME>
 */
#ifndef EX4_3_H_  // NOLINT
#define EX4_3_H_

#include <iostream>
#include <string>

using std::string;

class ProgramInfo {
 public:
  // Getter 和 Setter for program_name
  string GetProgramName() const { return program_name; }

  void SetProgramName(const string& name) { program_name = name; }

  // Getter 和 Setter for version_stamp
  string GetVersionStamp() const { return version_stamp; }

  void SetVersionStamp(const string& stamp) { version_stamp = stamp; }

  // Getter 和 Setter for version_number
  int GetVersionNumber() const { return version_number; }

  void SetVersionNumber(int number) { version_number = number; }

  // Getter 和 Setter for tests_run
  int GetTestsRun() const { return tests_run; }

  void SetTestsRun(int run) { tests_run = run; }

  // Getter 和 Setter for tests_passed
  int GetTestsPassed() const { return tests_passed; }

  void SetTestsPassed(int passed) { tests_passed = passed; }

 private:
  string program_name;   // 隐藏属性
  string version_stamp;  // 隐藏属性
  int version_number;    // 隐藏属性
  int tests_run;         // 隐藏属性
  int tests_passed;      // 隐藏属性
};

#endif /* EX4_3_H_ */  // NOLINT