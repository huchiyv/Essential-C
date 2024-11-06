/**
 * copyright <NAME>
 * 完成一个两层的stack(堆栈)类体系,其中基类是个纯抽象类,只提供简单的pop(),
 * push(), size(),empty(), full(),full, peek(), print(),等接口。
 * 两个派生类则为LIFO_Stack Peekback_Stark。Peekback_Stark
 * 可以让用户在不更改stack元素的前提下。访问任何一个元素。
 */
#ifndef EX5_1_H  // NOLINT
#define EX5_1_H

#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>

class Stack {
 public:
  const int MAX_SIZE = 10;
  void push(const std::string& item) {
    if (full()) {
      std::cout << "Stack is full!" << std::endl;
      return;
    }
    data_.push_back(item);
  }
std::string pop() {
  if (empty()) {
    std::cout << "Stack is empty!" << std::endl;
    return "";
  }
  std::string item = data_.back();
  data_.pop_back();
  return item;
}
bool empty() const {
    return data_.empty();
}
bool full() const {
    return data_.size() >= MAX_SIZE;
}
size_t size() const {
    return data_.size();
}
void print() const {
    std::cout << typeid(*this).name() << " : ";
    for (const auto& item : data_) {
    std::cout << item << " ";
    }
    std::cout << std::endl;
}
 protected:
  std::vector<std::string> data_;
};

class LIFO_Stack : public Stack {
};

class Peekback_Stack : public Stack {
 public:
  std::string peek() const {
    if (empty()) {
      std::cout << "Stack is empty!" << std::endl;
      return "";
    }
    return data_.back();
  }

  void peekback(int index) const {
    if (index < 0 || index >= data_.size()) {
      std::cout << "Index out of range!" << std::endl;
      return;
    }
    std::cout << "Peekback_Stack[" << index
              << "]: " << data_[data_.size() - 1 - index] << std::endl;
  }
};
#endif  // EX5_1_H  // NOLINT