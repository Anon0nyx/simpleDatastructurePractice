#include <iostream>
#include <chrono>
#include <vector>
#include <unordered_set>
#include "QuadTree.h"

// Define a simple entity type for testing
struct CollidableEntity {
  int id;
  std::vector<int> midpoint;
  int size;
  int defense{};
  int attack{};
  std::vector<int> collidingEntities;
  std::string color;
};

struct Troop : public CollidableEntity {
  int movement{};
  int attackDistance{};
  int cost{};
  int foodCost{};
};

int main() {
  const int numTests = 1000;
  const int numEntities = 1000;
  double totalInsertionTime = 0.0;
  double totalQueryTime = 0.0;
  double totalRemovalTime = 0.0;

  Quad<CollidableEntity> center(Point(0,0), Point(1500,600));

  Troop initialEntity = { 1, { 150, 500 }, 5 }; 
  Node<CollidableEntity> initialEnter(Point(initialEntity.midpoint[0], initialEntity.midpoint[1]), initialEntity);
  center.insert(&initialEnter);

  center.printIDs();
 
  return 0;
}
