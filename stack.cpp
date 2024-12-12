#include <iostream>

struct Stack {
  int top = -1;
  int stackArray[100] = {};
};

static void push(int value, Stack& stack) {
  if (stack.top >= 99) {
    std::cout << "Stack Overflow." << std::endl;
    return;
  }
  stack.stackArray[++stack.top] = value;
}

static void printStack(Stack& stack) {
  for (int i = stack.top; i >= 0; --i) {
    std::cout << stack.stackArray[i] << std::endl;
  }
}

int main() {
  Stack newStack;
  push(1, newStack);
  push(2, newStack);
  push(3, newStack);

  printStack(newStack);
}
