#include <iostream>
#include <vector>
using namespace std;

template <typename T >
class TreeNode{
    public: 
    T data;
    vector <TreeNode <T> *> children ;

    //constructor called for data value 
    TreeNode(T data ){
        this->data = data;

    }
};

//for printing the tree 
void PrintTree(TreeNode <int> * root){
    cout << root->data <<endl ;

    for(int i=0; i< root->children.size() ; i++){

        PrintTree(root ->children[i]);
    }
}

int main() {
     
     TreeNode <int >* root = new TreeNode <int> (1);
     TreeNode <int >* node1 = new TreeNode<int>(2);
     TreeNode <int >* node2 = new TreeNode<int>(3);

     //connection 
     root->children.push_back(node1);
     root->children.push_back(node2);
     PrintTree(root);
     //TODO delete the tree 


}