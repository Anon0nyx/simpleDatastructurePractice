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

static void pop(Stack& stack) {
  if (stack.top >= 99) {
    std::cout << "Stack Overflow." << std::endl;
    return;
  }
  --stack.top;
}

static void peek(Stack& stack) {
  std::cout << "Peeking the top of the Stack: ";
  std::cout << stack.stackArray[stack.top] << "\n" << std::endl;
}

static void printStack(Stack& stack) {
  std::cout << "Printing Entire Stack: " << std::endl; 
  for (int i = stack.top; i >= 0; --i) {
    std::cout << stack.stackArray[i] << std::endl;
  }
  std::cout << std::endl;
}

int main() {
  Stack newStack;
  push(1, newStack);
  push(2, newStack);
  push(3, newStack);

  printStack(newStack);

  pop(newStack);
  pop(newStack);
  printStack(newStack);
 
  push(19, newStack);
  peek(newStack);
}
