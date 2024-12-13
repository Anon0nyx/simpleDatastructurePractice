#ifndef NEW_QUAD_TREE_IMPL_H
#define NEW_QUAD_TREE_IMPL_H

#include <cmath>
#include <iostream>
#include "CustomQuadTree.h"

// Insert a node into the quadtree
template <typename EntityType>
void Quad<EntityType>::insert(Node<EntityType>* node) {
    if (node == nullptr)
        return;

    if (!inBoundary(node->pos))
        return;

    if (abs(topLeft.x - botRight.x) <= 1 && abs(topLeft.y - botRight.y) <= 1) {
        if (ourNode == nullptr)
          std::cout << "We have set our root node" << std::endl;  
          ourNode = node;
        return;
    }

    if ((topLeft.x + botRight.x) / 2 >= node->pos.x) {
        if ((topLeft.y + botRight.y) / 2 >= node->pos.y) {
            if (topLeftTree == nullptr)
                topLeftTree = new Quad(topLeft, Point((topLeft.x + botRight.x) / 2, (topLeft.y + botRight.y) / 2));
            topLeftTree->insert(node);
        } else {
            if (botLeftTree == nullptr)
                botLeftTree = new Quad(Point(topLeft.x, (topLeft.y + botRight.y) / 2), Point((topLeft.x + botRight.x) / 2, botRight.y));
            botLeftTree->insert(node);
        }
    } else {
        if ((topLeft.y + botRight.y) / 2 >= node->pos.y) {
            if (topRightTree == nullptr)
                topRightTree = new Quad(Point((topLeft.x + botRight.x) / 2, topLeft.y), Point(botRight.x, (topLeft.y + botRight.y) / 2));
            topRightTree->insert(node);
        } else {
            if (botRightTree == nullptr)
                botRightTree = new Quad(Point((topLeft.x + botRight.x) / 2, (topLeft.y + botRight.y) / 2), botRight);
            botRightTree->insert(node);
        }
    }
}

// Find a node in a quadtree
template <typename EntityType>
Node<EntityType>* Quad<EntityType>::search(Point p) {
    if (!inBoundary(p))
        return nullptr;

    if (ourNode != nullptr)
        return ourNode;

    if ((topLeft.x + botRight.x) / 2 >= p.x) {
        if ((topLeft.y + botRight.y) / 2 >= p.y) {
            if (topLeftTree == nullptr)
                return nullptr;
            return topLeftTree->search(p);
        } else {
            if (botLeftTree == nullptr)
                return nullptr;
            return botLeftTree->search(p);
        }
    } else {
        if ((topLeft.y + botRight.y) / 2 >= p.y) {
            if (topRightTree == nullptr)
                return nullptr;
            return topRightTree->search(p);
        } else {
            if (botRightTree == nullptr)
                return nullptr;
            return botRightTree->search(p);
        }
    }
}

// Check if current quadtree contains the point
template <typename EntityType>
bool Quad<EntityType>::inBoundary(Point p) {
    return (p.x >= topLeft.x && p.x <= botRight.x && p.y >= topLeft.y && p.y <= botRight.y);
}

template <typename EntityType>
void Quad<EntityType>::printNode() {
  if (ourNode != nullptr) 
    std::cout << ourNode->data.id << std::endl;
}

// Print the IDs of the entities in the quadtree
template <typename EntityType>
void Quad<EntityType>::printIDs() {
    if (ourNode != nullptr) {
        std::cout << "Entity ID: " << ourNode->data.id << " at (" << ourNode->pos.x << ", " << ourNode->pos.y << ")\n";
    }
    std::cout << "Checking Top Left" << std::endl;
    if (topLeftTree != nullptr) topLeftTree->printIDs();
    std::cout << "Checking Top Right" << std::endl;
    if (topRightTree != nullptr) topRightTree->printIDs();
    std::cout << "Checking Bottom Left" << std::endl;
    if (botLeftTree != nullptr) botLeftTree->printIDs();
    std::cout << "Checking Bottom Right" << std::endl;
    if (botRightTree != nullptr) botRightTree->printIDs();
}

#endif // NEW_QUAD_TREE_IMPL_H
