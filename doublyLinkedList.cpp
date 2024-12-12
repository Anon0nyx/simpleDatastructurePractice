#include <iostream>
#include <string>

struct LinkedListNode {
  int val;
  LinkedListNode* nextNode;
  LinkedListNode* previousNode;
  LinkedListNode() : val(0), nextNode(nullptr), previousNode(nullptr) {}
  LinkedListNode(int x) : val(x), nextNode(nullptr), previousNode(nullptr) {}
  LinkedListNode(int x, LinkedListNode* node) : val(x), nextNode(node), previousNode(nullptr) {}
  LinkedListNode(int x, LinkedListNode* priorNode, LinkedListNode* newNode) : val(x), previousNode(priorNode), nextNode(newNode) {}
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
}

int main() {
  LinkedListNode newRootNode(0);
  for (int i = 1; i <= 10; ++i) {
    insertNode(i, &newRootNode);
  }
  printAllNodes(&newRootNode);

}
