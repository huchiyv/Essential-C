/**
 * copyright 2020, <NAME>
 */
#include <iostream>
#include "ex3_1.h"  // NOLINT
#include "ex3_2.h"  // NOLINT
#include <iterator>  // NOLINT
#include <string>    // NOLINT
#include <vector>    // NOLINT
#include <algorithm>  // NOLINT
#include <fstream>   // NOLINT
#include <map>       // NOLINT
#include <ex3_3.h>  // NOLINT
#include <ex3_4.h>  // NOLINT
using namespace std;  // NOLINT

const std::string RED = "\033[31m";     // 红色  // NOLINT
const std::string GREEN = "\033[32m";   // 绿色  // NOLINT
const std::string YELLOW = "\033[33m";  // 黄色  // NOLINT
const std::string BLUE = "\033[34m";    // 蓝色  // NOLINT
const std::string RESET = "\033[0m";    // 重置颜色  // NOLINT

void cout_color(const std::string& color, const std::string& message) {
    std::cout << color << message << RESET << std::endl;
}

int TestEx3_1(int argc, char* argv[]) {
  if (argc < 0) {
    std::cout << RED << "Usage: " << argv[0] << " <number>" << RESET
              << std::endl;
    return 1;
  }
  if (argc == 2) {
    string filename = argv[1];
    cout_color(GREEN, "Reading file: " + filename);
    map<string, int> word_count;
    cout_color(BLUE, "Counting words...");
    read_file(filename, word_count);
    cout_color(GREEN, "Done.");
    display_words(word_count);
    return 0;
  } else if (argc == 3) {
    string filename = argv[1];
    string keyWord = argv[2];
    cout_color(GREEN, "Reading file: " + filename);
    map<string, int> word_count;
    read_file(filename, word_count);
    cout_color(BLUE, "Searching for keyword: " + keyWord);
    auto result = query_word(word_count, keyWord);
    if (result == word_count.end()) {
      cout_color(RED, "Keyword not found.");
    } else {
      cout_color(GREEN,
                 "Found " + result->first + " : " + to_string(result->second));
    }
    return 0;
  }
  return 1;
}

int TestInput(int argc, char* argv[]) {
  return 0;
}
int TestEx3_2(int argc, char* argv[]) {
  string input_file_name(argv[1]);
  ifstream input_file(input_file_name);
  if (!input_file.is_open()) {
    cout_color(RED, "Failed to open file: " + string(argv[1]));
    return 1;
    }
    cout_color(GREEN, "Reading file: " + string(argv[1]));
    istream_iterator<string> in_iter(input_file);
    istream_iterator<string> eof;
    vector<string> words(in_iter, eof);
    sort(words.begin(), words.end(), StrLenLess());
    for (auto word : words) {
      cout_color(BLUE, word);
    }

    return 0;
}

int TestEx3_3(int argc, char* argv[]) {
    map<string, vector<string>> familyMap;
    initMap(familyMap);
    cout_color(GREEN, "Family Map:");
    printMap(familyMap);
    string name(argv[1]);
    cout_color(BLUE, "Querying for " + name + ":");
    queryMap(familyMap, name);
    return 0;
  }

int TestEx3_4(int argc, char* argv[]) {
  vector<string> inputParams;
  for (int i = 1; i < argc-1; ++i) {
    inputParams.push_back(argv[i]);  // 直接将 char* 转换为 std::string
  }
  vector<int> numbers;
  for (auto& param : inputParams) {
    numbers.push_back(stoi(param));
  }
  readNumbers(numbers);
  cout_color(GREEN, "read done.");
  return 0;
}

int main(int argc, char* argv[]) { return TestEx3_4(argc, argv); }
