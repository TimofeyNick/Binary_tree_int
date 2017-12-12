#include <iostream>

#include "node.h"
#include "tree.h"

using namespace std;

/* Полагаем, что дерево реализовано на неотрицательных числах
 * соответсвенно если (node->key_ == 1), то это node является абстрактным элементом
 * и дереву не принадлежит, а используется для реализации внутреннего интерфейса
 */

void dump(Tree tree){
//    Node p = tree.find_node(5);
//    cout << "p.key_ = " << p.key_ << endl;
//    cout << "p.parent_ = " << p.parent_ << endl;
//    cout << "p.right_ = " << p.right_ << endl;
//    cout << "p.left_ = " << p.left_ << endl;
    tree.print_tree(&(tree.root_));
    tree.insert(5);
    Node f = tree.root_;
    cout << "-------------------------" << endl;
    cout << "f.key_ = " << f.key_ << endl;
    cout << "f.parent_ = " << f.parent_ << endl;
    cout << "f.right_ = " << f.right_ << endl;
    cout << "f.left_ = " << f.left_ << endl;
    //tree.print_tree(&(tree.root_));
//    Node l = tree.find_node(8);
//    cout << "-------------------------" << endl;
//    cout << "l.key_ = " << l.key_ << endl;
    tree.insert(9);
    tree.insert(13);
    tree.insert(15);
    tree.insert(19);
    tree.insert(23);
    tree.insert(1);
    tree.insert(8);
//    Node q = tree.find_node(19);
//    cout << "-------------------------" << endl;
//    cout << "q.key_ = " << q.key_ << endl;
//    cout << "-------------------------" << endl;
    cout << "-------------------------" << endl;
    cout << "_______print_tree________" << endl;
    tree.print_tree(&(tree.root_));
}

int main()
{
    Tree tree;
    // тесты для проверки работоспособности кода
    dump(tree);
    return 0;
}
