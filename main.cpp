#include "BinaryTree.h"
#include <iostream>

int main() {
    BinaryTree tree;

    tree.InsertNodeIter(10);
    tree.InsertNodeIter(5);
    tree.InsertNodeIter(15);
    tree.InsertNodeIter(2);
    tree.InsertNodeIter(7);

    // Traversals
    std::cout << "Preorder: ";
    tree.PrintPreorder();
    std::cout << std::endl;

    std::cout << "Inorder: ";
    tree.PrintInorder();
    std::cout << std::endl;

    std::cout << "Postorder: ";
    tree.PrintPostorder();
    std::cout << std::endl;

    std::cout << "Level Order: ";
    tree.PrintLevelOrder();
    std::cout << std::endl;

    // Delete operations
    tree.DeleteNodeBST(5);
    tree.PrintLevelOrder();
    std::cout << " BST Level Order after deletion" << std::endl;

    tree.DeleteNodeBST(2);
    tree.PrintLevelOrder();
    std::cout << " after deleting leaf" << std::endl;

    tree.DeleteNodeBST(15);
    tree.PrintLevelOrder();
    std::cout << " after deleting 15" << std::endl;

    tree.DeleteNodeBST(10);
    tree.PrintLevelOrder();
    std::cout << " after deleting root" << std::endl;

    // Search operations
    if (tree.BSTSearch(7))
        std::cout << "Node found in BST" << std::endl;
    else
        std::cout << "Node not found in BST" << std::endl;

    if (tree.BSTSearch(100))
        std::cout << "Node found in BST" << std::endl;
    else
        std::cout << "Node not found in BST" << std::endl;

    // Recursive insertion tree
    BinaryTree tree2;

    tree2.InsertNodeRec(10);
    tree2.InsertNodeRec(5);
    tree2.InsertNodeRec(15);
    tree2.InsertNodeRec(2);
    tree2.InsertNodeRec(7);

    std::cout << "Recursive BST Level Order: ";
    tree2.PrintLevelOrder();
    std::cout << std::endl;

    if (tree2.BSTSearch(2))
        std::cout << "Node found in recursive BST" << std::endl;
    else
        std::cout << "Node not found in recursive BST" << std::endl;

    if (tree2.BSTSearch(99))
        std::cout << "Node found in recursive BST" << std::endl;
    else
        std::cout << "Node not found in recursive BST" << std::endl;

    return 0;
}
