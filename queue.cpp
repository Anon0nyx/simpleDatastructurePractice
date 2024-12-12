#include <iostream>

struct Queue {
  int first = 0;
  int last = -1;
  int queueArray[100] = {};
};

static void enqueue(int val, Queue& queue) {
  queue.queueArray[++queue.last] = val;
}

static void dequeue(Queue& queue) {
  ++queue.first;
}

static int peekFirst(Queue& queue) {
  return queue.queueArray[queue.first];
}

static int peekLast (Queue& queue) {
  return queue.queueArray[queue.last];
}

int main() {
  Queue newQueue;
  enqueue(5, newQueue);

  for (int i=1; i < 10; i++) {
    enqueue(i, newQueue);
  }

  std::cout << "Checking first element of Queue: " << peekFirst(newQueue) << std::endl;
  std::cout << "Checking last element of Queue: " << peekLast(newQueue) << std::endl;
  dequeue(newQueue);
  std::cout << "Checking first element of Queue after DeQueue: " << peekFirst(newQueue) << std::endl;
}
