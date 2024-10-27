/**
 * copyright (c) 2019, <NAME>
 */
#include "ex3_1.h"  // NOLINT

#include <iomanip>   // 用于 std::setw
#include <iterator>  // NOLINT
#include <set>       // NOLINT
#include <vector>    // NOLINT

void read_file(const string& filename, map<string, int>& words) {  // NOLINT
    ifstream input_file(filename);
    if (!input_file.is_open()) {
      throw runtime_error("Failed to open file: " + filename);
    }
    istream_iterator<string> inIt(input_file);  // NOLINT
    istream_iterator<string> eofIt;

    vector<string> words_vec(inIt, eofIt);
    set<string> eliminationOfWords = {
        "the",     "and",     "of",        "to",      "in",    "a",     "an",
        "that",    "is",      "for",       "with",    "on",    "at",    "by",
        "this",    "which",   "or",        "from",    "as",    "be",    "but",
        "not",     "you",     "we",        "are",     "they",  "have",  "has",
        "had",     "do",      "did",       "will",    "can",   "could", "may",
        "might",   "must",    "if",        "then",    "else",  "when",  "where",
        "who",     "how",     "what",      "why",     "how",   "which", "what",
        "where",   "when",    "why",       "how",     "who",   "whom",  "whose",
        "whereby", "wherein", "whereupon", "whether", "which", "who",   "whom",
        "whose"};

    for (auto word : words_vec) {
      if (eliminationOfWords.find(word) == eliminationOfWords.end()) {
        words[word]++;
      }
    }
}

void display_words(const map<string, int>& words) {
  if (words.empty()) {
    throw std::runtime_error("词频表为空，无法显示内容。");
  }

  std::cout << "Words and their frequencies:" << std::endl;
  std::cout << "---------------------------------------------"
            << std::endl;
  std::cout << "|  Word        "<< std::setw(30) <<"|  Count  |" << std::endl;
  std::cout << "---------------------------------------------"
            << std::endl;

  for (const auto& word : words) {
    std::cout << "|  " << std::setw(30) << std::left << word.first << " |  "
              << std::setw(5) << word.second << "  |" << std::endl;
  }

  std::cout << "---------------------------------------------" << std::endl;
}

map<string, int>::const_iterator query_word(const map<string, int>& words,
                                            const string& word) {
  return words.find(word);
}
