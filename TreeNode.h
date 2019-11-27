#include <iostream>
using namespace std;

class TreeNode{
  public:
    TreeNode();
    TreeNode(Student s); //k is the key which is also the value of the data
    ~TreeNode(); //when creating a template class, the destructor must be virtual

    int key;
    TreeNode *left;
    TreeNode *right;

};

TreeNode::TreeNode(){
  key = NULL;
  left = NULL;
  right = NULL;
}

TreeNode::TreeNode(Student s){
  s.getID() = k;
  left = NULL;
  right = NULL;
}

TreeNode::~TreeNode(){

}
