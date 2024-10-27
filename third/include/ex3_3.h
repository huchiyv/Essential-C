/**
 * copyright <NAME>
 * 定义一个map,以家庭姓氏为key,以vector<string>为value,其中vector是家庭所有小孩的名字,令此map至少容纳六笔数据。
 * 允许用户根据姓氏来查询,并得以打印map内的每一笔数据。
 */
#ifndef EX3_3_H  // NOLINT
#define EX3_3_H

#include <map>
#include <vector>
#include <string>

using namespace std;  // NOLINT

void initMap(map<string, vector<string>>& familyMap);  // NOLINT
void printMap(const map<string, vector<string>>& familyMap);
void queryMap(const map<string, vector<string>>& familyMap, const string& familyName);

#endif // EX3_3_H  // NOLINT