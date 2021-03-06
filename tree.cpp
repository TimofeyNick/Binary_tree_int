#include <iostream>

#include "tree.h"


Tree::Tree(){}

Tree::~Tree(){}

// возвращает именно Node,а не Node*
Node Tree::find_node(float data){
    Node* p = &root_;
    Node l;
    while(p -> key_ != -1 && p -> key_ != data){
            if(data > p->key_){
                if (p->right_ == nullptr){
                    return l;
                }
                else{
                    p = p->right_;
                }
            }
            else{
                if (p->left_ == nullptr){
                    return l;
                }
                else{
                    p = p->left_;
                }
            }
    }
    return *p;
}

//void Tree::print_tree(Node node){
//    if (node.key_ == -1){return;}
//    //print_tree(*(node.left_));
//    std::cout << node.key_ << "  ";
//    print_tree(*(node.right_));
//}

//void Tree::insert(float data){
//    Node p = find_node(data);
//    if (p.key_ != -1){return;}
//    Node node;
//    node.update_key(data);
//    if (root_.key_ == -1){
//        root_ = node;
//        return;
//    }
//    Node* f = &root_;
//    while(1 == 1){
//        if(data < (f -> key_)){
//            if(f->left_->key_ == -1){
//                f -> left_ = &node;
//                node.parent_ = f;
//                return;
//            }
//            else{
//                f = f -> left_;
//            }
//        }
//        else{
//            if(f -> right_-> key_ == -1){
//                f -> right_ = &node; // or * ???
//                node.parent_ = f;
//                return;
//            }
//            else{
//                f = f -> right_;
//            }
//        }
//    }
//}

void Tree::insert(float data){
    Node p = find_node(data);
    if (p.key_ != -1){return;}

    // node - вершина которую хотим добавить в дерево
    Node* node = new Node;
    node->update_key(data);

    if (root_.key_ == -1){
        root_ = *node;
        return;
    }

    Node* f = &root_;

    while(1 == 1){
        if(data < (f -> key_)){
            if (f -> left_ == nullptr){
                f -> left_ = node;
                node->parent_ = f;
                return;
            }
            else if(f -> left_ -> key_ == -1){
                f -> left_ = node;
                node->parent_ = f;
                return;
            }
            else{
                f = f -> left_;
            }
        }
        else{
            if (f -> right_ == nullptr){
                f -> right_ = node;
                node->parent_ = f;
                return;
            }
            else if(f -> right_ -> key_ == -1){
                f -> right_ = node;
                node->parent_ = f;
                return;
            }
            else{
                f = f -> right_;
            }
        }
    }
}
