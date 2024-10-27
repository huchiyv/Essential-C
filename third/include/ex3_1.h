/**
 * copyright <NAME>
 * 写一个读取文本文件的程序,将文件中的每个单子存人 map,mapy是刚才所说的单字。
 * map
 * valer则是该单字在文本文件中的出现次数。再定义一份由“排除字潮”组成的其中包含
 * anothe的单宁,将某单字放人mp之前,先确定该承字不在“排除
 * 字集”中。一旦文本文件读取完毕,请显示一份单字清单,并显示各单字的出现次数。你甚至可以再
 * 加以扩展。在显示单字之前,允许用户查询某个单字是否出现于文本文件中。
 *
 */
#ifndef EX3_1_H_  // NOLINT
#define EX3_1_H_

#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;  // NOLINT

void read_file(const string& filename, map<string, int>& words);  // NOLINT
void display_words(const map<string, int>& words);
map<string, int>::const_iterator query_word(const map<string, int>& words,
                                            const string& word);

#endif /* EX3_1_H_ */  // NOLINT