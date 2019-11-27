#include <iostream>
#include "TreeNode.h"
//#include "Student.h"
using namespace std;


class BST{
  private:
    TreeNode *root;

  public:
    BST();
    ~BST();

    bool search(int value);
    void insert(Student s);

    //delete placeholder
    bool deleteNode(int key);

    //helper functions
    bool isEmpty();
    TreeNode* getMin();
    TreeNode* getMax();
    void printTree();
    void recPrint(TreeNode *node);
};


BST::BST(){
  root = NULL;
}

BST::~BST(){

}

void BST::recPrint(TreeNode *node){
  if(node == NULL){
    return;
  }

  recPrint(node->left);
  cout << node->key << endl;
  recPrint(node->right);
}

void BST::printTree(){
  recPrint(root);
}

TreeNode* BST::getMax(){
  TreeNode *current = root;
  if(current = NULL){
    return NULL;
  }
  while(current->right != NULL){
    current = current->right;
  }

  return (current);
}

TreeNode* BST::getMin(){
  TreeNode *current = root;
  if(current = NULL){
    return NULL;
  }
  while(current->left != NULL){
    current = current->left;
  }

  return (current);
}


void BST::insert(Student s){
  TreeNode *node = new TreeNode(s);

  if(root == NULL){
    //empty TreeNode
    root = node;
  }
  else{
    //tree is not empty, we need to find the insertion location
    TreeNode *current = root;
    TreeNode *parent = NULL;

    while(true /*or curr != NULL*/){
      parent = current;
      if(s.getID()<current->key){//going left
        current = current->left;
        if(current == NULL){
          //found insertion point
          parent->left = node;
        }
      }
      else{//going right
        current = current->right;
        if(current == NULL){
          //found insertion point
          parent->right = node;
        }
      }
    }
  }
}

bool BST::search(int value){
  if(root == NULL){//empty tree
    return false;
  }
  else{
    TreeNode *current = root;
    while(current->key != value){
      if(value < current->key){
        current = current->left;
      }
      else{
        current = current->right;
      }

      if(current == NULL){//no value found
        return false;
      }
    }
  }
  return true;
}

bool BST::deleteNode(int key){
  if(root == NULL){
    return false;
  }
  TreeNode *current = root;
  TreeNode *parent = root;
  bool isLeft = true;

  //look for node
  while(current->key != key){
    parent = current;
    if(key < current->key){
      isLeft = true;
      current = current->left;
    }
    else{
      isLeft = false;
      current = current->right;
    }

    if(current == NULL){//no value found
      return false;
    }
  }

  //if we make it here, then we found the node we need to delete
  //check different cases

  //no children
  if(current->left == NULL && current->right == NULL){
    if(current == root){
      root = NULL;
    }
    else if(isLeft){
      parent->left = NULL;
    }
    else{
      parent->right = NULL;
    }
  }
}
