class TreeNode{
  public:
    TreeNode();
    TreeNode(int k); //k is the key which is also the value of the data
    ~TreeNode(); //when creatinga template class, the destructor must be virtual

    int key;
    TreeNode *left;
    TreeNode *right;

};

TreeNode::TreeNode(){
  key = NULL;
  left = NULL;
  right = NULL;
}

TreeNode::TreeNode(int k){
  key= k;
  left = NULL;
  right = NULL;
}

TreeNode::~TreeNode(){

}
