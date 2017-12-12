#ifndef TREE_H
#define TREE_H

#include "node.h"

class Tree: public Node{
private:
    Node find_node(float data); // возвращает именно Node,а не Node*

public:

    Node root_;

    Tree();
    ~Tree();

    void print_tree(Node *node){
        if (node -> key_ == -1){return;}
        if (node->left_ != nullptr){
            print_tree(node->left_);
        }
        std::cout << node -> key_ << "  ";
        if (node->right_ != nullptr){
            print_tree(node->right_);
        }
    }

    void insert(float data);

};


#endif // TREE_H
