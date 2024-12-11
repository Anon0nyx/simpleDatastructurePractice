#include <iostream>
#include <string>

struct LinkedListNode {
  int val;
  LinkedListNode* nextNode;
  LinkedListNode() : val(0), nextNode(nullptr) {}
  LinkedListNode(int x) : val(x), nextNode(nullptr) {}
  LinkedListNode(int x, LinkedListNode* node) : val(x), nextNode(node) {}
};

void printAllNodes(LinkedListNode *rootNode) {
  LinkedListNode* tempNode = rootNode;
  while (tempNode) {
    std::cout << tempNode->val << std::endl;
    tempNode = tempNode->nextNode;
  }
  return;
}

void insertNode(int val, LinkedListNode* rootNode) {
  LinkedListNode* tempNode = rootNode;
  while (tempNode->nextNode) {
    tempNode = tempNode->nextNode;
  }
  tempNode->nextNode = new LinkedListNode(val);
}

int main() {
  LinkedListNode newRootNode(0);
  for (int i = 1; i <= 10; ++i) {
    insertNode(i, &newRootNode);
  }
  printAllNodes(&newRootNode);
}
