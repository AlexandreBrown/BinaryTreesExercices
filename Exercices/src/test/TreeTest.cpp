#include <gtest/gtest.h>
#include "../main/Tree.h"

namespace {
    class TreeTest : public testing::Test {

    public:
      Tree<size_t> tree;

        void SetUp() override {
          tree = Tree<size_t>{};
        }
    };
}

TEST_F(TreeTest, isSimilar_returns_true_when_both_trees_are_empty) {

  auto otherTree = Tree<size_t>{};

  auto isSimilar = tree.isSimilar(otherTree);

  ASSERT_TRUE(isSimilar);
}