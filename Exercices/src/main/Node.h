#ifndef EXERCICES_SRC_MAIN_NODE_H_
#define EXERCICES_SRC_MAIN_NODE_H_

template<typename T>
struct Node {
  T data;
  Node* left;
  Node* right;
};

#endif