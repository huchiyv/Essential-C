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

class Stack {
 public:
  virtual void push(const std::string& item) = 0;
  virtual std::string pop() = 0;
  virtual bool empty() const = 0;
  virtual bool full() const = 0;
  virtual size_t size() const = 0;
  virtual void print() const = 0;
};

class LIFO_Stack : public Stack {
 public:
  const int MAX_SIZE = 10;
  void push(const std::string& item) override {
    if (full()) {
      std::cout << "Stack is full!" << std::endl;
      return;
    }
    data_.push_back(item);
  }

  std::string pop() override {
    if (empty()) {
      std::cout << "Stack is empty!" << std::endl;
      return "";
    }
    std::string item = data_.back();
    data_.pop_back();
    return item;
  }

  bool empty() const override { return data_.empty(); }

  bool full() const override { return data_.size() <= MAX_SIZE ? false : true; }

  size_t size() const override { return data_.size(); }

  void print() const override {
    std::cout << "LIFO_Stack: ";
    for (const auto& item : data_) {
      std::cout << item << " ";
    }
    std::cout << std::endl;
  }

 private:
  std::vector<std::string> data_;
};

class Peekback_Stack : public Stack {
 public:
  const int MAX_SIZE = 10;
  void push(const std::string& item) override {
    if (full()) {
      std::cout << "Stack is full!" << std::endl;
      return;
    }
    data_.push_back(item);
  }

  std::string pop() override {
    if (empty()) {
      std::cout << "Stack is empty!" << std::endl;
      return "";
    }
    std::string item = data_.back();
    data_.pop_back();
    return item;
  }

  bool empty() const override { return data_.empty(); }

  bool full() const override { return data_.size() <= MAX_SIZE ? false : true; }

  size_t size() const override { return data_.size(); }

  void print() const override {
    std::cout << "Peekback_Stack: ";
    for (const auto& item : data_) {
      std::cout << item << " ";
    }
    std::cout << std::endl;
  }

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
    std::cout << "Peekback_Stack[" << index << "]: " << data_[data_.size() - 1 - index] << std::endl;
  }

 private:
  std::vector<std::string> data_;
};
#endif // EX5_1_H  // NOLINT