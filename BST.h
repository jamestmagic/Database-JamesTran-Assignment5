#include <iostream>
#include "TreeNode.h"
using namespace std;


class BST{
  private:
    TreeNode *root; //root of the BST

  public:
    BST(); //constructor
    ~BST(); //destructor

    bool search(int value); //searches for node given value
    void insert(Student s); //inserts new node into tree

    bool deleteNode(int key); //deletes node with given key

    //helper functions
    bool isEmpty(); //checks if a node is NULL
    TreeNode* getMin(); //returns the node of largest value in the tree
    TreeNode* getMax(); //returns the node of least value in the tree
    void printTree(); //prints the tree from the root
    void recPrint(TreeNode *node); //prints the tree recursively from given node
};


BST::BST(){ //constructor
  root = NULL;
}

BST::~BST(){ //destructor
  delete root;
}

void BST::recPrint(TreeNode *node){ //prints the tree recursively from given node
  if(node == NULL){
    return;
  }
  recPrint(node->left);
  cout << node->key << endl;
  recPrint(node->right);
}

void BST::printTree(){ //prints the tree from the root
  recPrint(root);
}

TreeNode* BST::getMax(){ //returns the node of least value in the tree
  TreeNode *current = root;
  if(current = NULL){
    return NULL;
  }
  while(current->right != NULL){
    current = current->right;
  }

  return (current);
}

TreeNode* BST::getMin(){ //returns the node of largest value in the tree
  TreeNode *current = root;
  if(current = NULL){
    return NULL;
  }
  while(current->left != NULL){
    current = current->left;
  }

  return (current);
}


void BST::insert(Student s){ //inserts new node into tree
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

bool BST::search(int value){ //searches for node given value
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

bool BST::deleteNode(int key){ //deletes node with given key
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
