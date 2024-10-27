/**
 * copyright (c) 2019, <NAME>
 */
#include "ex3_3.h"  // NOLINT
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;  // NOLINT

void initMap(map<string, vector<string>>& familyMap) {  // NOLINT

    vector<string> emptyVec;
    emptyVec.push_back("Jane");
    emptyVec.push_back("Bob");
    familyMap["John"] = emptyVec;
    familyMap["Jane"] = vector<string>{"John", "Alice"};
    familyMap["Bob"] = vector<string>{"John", "Alice"};
    familyMap["Alice"] = vector<string>{"Jane", "Bob"};
    familyMap["David"] = vector<string>{"Emily", "Frank"};
    familyMap["Emily"] = vector<string>{"David", "Grace"};
    familyMap["Frank"] = vector<string>{"David", "Grace"};
    familyMap["Grace"] = vector<string>{"Emily", "Frank"};
}

void printMap(const map<string, vector<string>>& familyMap) {
  for (const auto& family : familyMap) {
    cout << family.first << " : " << endl;  // 打印家庭名称
    for (const auto& member : family.second) {
      cout << "  |___  " << member << endl;  // 打印成员，前面加上缩进
    }
  }
}

void queryMap(const map<string, vector<string>>& familyMap,
              const string& familyName) {
                auto it = familyMap.find(familyName);
                if (it == familyMap.end()) {
                    cout << "Family not found." << endl;
                    return;
                }
                cout << "Family members: " << endl;
                for (const auto& member : it->second) {
                    cout << "  |___ " << member << endl;  // 打印成员，前面加上缩进
                }
              }
