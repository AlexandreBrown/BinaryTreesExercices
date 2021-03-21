#ifndef GTESTSETUP_TREE_H
#define GTESTSETUP_TREE_H

#include "Node.h"

template<typename T>
class Tree {
 public :

  template<typename T2>
  bool isSimilar(const Tree<T2>& otherTree);

 void addToLeft(Node<T>* node);

 private :

  Node<T>* root;

  template<typename T2>
  bool areNodesSimilar(Node<T>* a, Node<T2>* b);
};

#include "Tree.tpp"

#endif
