#include "ex5_2.h"

void test_stacks() {
  // 测试 LIFO_Stack
  LIFO_Stack lifo_stack;
  std::cout << "Testing LIFO_Stack:" << std::endl;

  lifo_stack.push("A");
  lifo_stack.push("B");
  lifo_stack.push("C");
  lifo_stack.print();

  std::cout << "Popped: " << lifo_stack.pop() << std::endl;
  lifo_stack.print();

  // 测试 Peekback_Stack
  Peekback_Stack peekback_stack;
  std::cout << "Testing Peekback_Stack:" << std::endl;

  peekback_stack.push("X");
  peekback_stack.push("Y");
  peekback_stack.push("Z");
  peekback_stack.print();

  std::cout << "Peek: " << peekback_stack.peek() << std::endl;
  peekback_stack.peekback(0);  // Peek at the last element (Z)
  peekback_stack.peekback(1);  // Peek at the second to last element (Y)
  peekback_stack.peekback(2);  // Peek at the third to last element (X)

  std::cout << "Popped: " << peekback_stack.pop() << std::endl;
  peekback_stack.print();

  // 测试堆栈满满
  for (int i = 0; i < 10; ++i) {
    lifo_stack.push(std::to_string(i));
  }
  lifo_stack.push("Overflow");  // 尝试溢出

  // 清空堆栈
  while (!lifo_stack.empty()) {
    lifo_stack.pop();
  }

  std::cout << "LIFO_Stack is empty now." << std::endl;
  lifo_stack.print();
}

void test_ex5_2() {
  LIFO_Stack lifoStack;

  // 测试 LIFO_Stack
  std::cout << "***********Testing LIFO_Stack:" << std::endl;
  lifoStack.push("A");
  lifoStack.push("B");
  lifoStack.push("C");
  lifoStack.print();  // 应该打印 A B C

  std::cout << "Popped item: " << lifoStack.pop() << std::endl;  // 应该弹出 C
  lifoStack.print();  // 应该打印 A B
  std::cout << "================test LIFO_Stack success================\n";
  // 测试 Peekback_Stack
  Peekback_Stack peekbackStack;

  std::cout << "\n***********Testing Peekback_Stack:" << std::endl;
  peekbackStack.push("X");
  peekbackStack.push("Y");
  peekbackStack.push("Z");
  peekbackStack.print();  // 应该打印 X Y Z

  std::cout << "Peeked item: " << peekbackStack.peek()
            << std::endl;     // 应该返回 Z
  peekbackStack.peekback(1);  // 应该打印 Y

  peekbackStack.pop();    // 弹出 Z
  peekbackStack.print();  // 应该打印 X Y

  peekbackStack.peekback(2);  // 应该提示 Index out of range
  std::cout << "================test ex5_2 end =================\n";
}

int main() {
  test_ex5_2();
  return 0;
}
