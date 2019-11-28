#include <iostream>
#include "Student.h"
using namespace std;

class TreeNode{
  public:
    TreeNode(); //constructor
    TreeNode(Student s); //k is the key which is also the value of the data, overloaded constructor
    ~TreeNode(); //destructor

    int key;
    TreeNode *left;
    TreeNode *right;

};

TreeNode::TreeNode(){ //constructor
  key = 0;
  left = NULL;
  right = NULL;
}

TreeNode::TreeNode(Student s){ //overloaded constructor
  key = s.getID();
  left = NULL;
  right = NULL;
}

TreeNode::~TreeNode(){ //destructor

}
