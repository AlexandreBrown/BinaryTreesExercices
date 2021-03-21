#include "Tree.h"

template<typename T>
template<typename T2>
bool Tree<T>::isSimilar(const Tree<T2>& otherTree) {
  return areNodesSimilar(root, otherTree.root);
}

template<typename T>
template<typename T2>
bool Tree<T>::areNodesSimilar(Node<T>* a, Node<T2>* b) {

  if (a == nullptr || b == nullptr) {
    return a == nullptr && b == nullptr;
  }

  return areNodesSimilar(a->left, b->left) && areNodesSimilar(a->right, b->right);
}
