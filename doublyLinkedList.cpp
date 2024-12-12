#include <iostream>
#include <string>

struct LinkedListNode {
  int val;
  LinkedListNode* nextNode = nullptr;
  LinkedListNode* previousNode = nullptr;
  LinkedListNode() : val(0), nextNode(nullptr), previousNode(nullptr) {}
  LinkedListNode(int x) : val(x), nextNode(nullptr), previousNode(nullptr) {}
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
  tempNode->nextNode->previousNode = tempNode; 
}

int findNode(int val, LinkedListNode* rootNode) {
  LinkedListNode* tempNode = rootNode;
  int i = 0;
  while (tempNode->val != val) {
    tempNode = tempNode->nextNode;
    ++i;
  }
  return i;
}

void deleteNode(int val, LinkedListNode* rootNode) {
  LinkedListNode* tempNode = rootNode;
  while (tempNode->nextNode->val != val) {
    tempNode = tempNode->nextNode;
  }
  tempNode->nextNode = tempNode->nextNode->nextNode;
  std::cout << "Successfully deleted Node with value: " << val << std::endl;
}

int main() {
  LinkedListNode rootNode(1);
  for (int i = 2; i <= 10; ++i) {
    insertNode(i, &rootNode);
  }
  printAllNodes(&rootNode);

  std::cout << findNode(4, &rootNode) << std::endl;
  deleteNode(4, &rootNode);

  printAllNodes(&rootNode);
}
