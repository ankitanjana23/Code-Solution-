#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    // constructor called for data value
    TreeNode(T data)
    {
        this->data = data;
    }
};

// for printing the tree
void PrintTree(TreeNode<int> *root)
{

    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";

    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ","; // IMP for batter understanding
    }
    cout << endl;

    for (int i = 0; i < root->children.size(); i++)
    {

        PrintTree(root->children[i]);
    }
}

// return type because we can return root

TreeNode<int> *takeInput()
{
    int rootdata;
    cout << "Enter the Data: " << endl;
    cin >> rootdata;

    TreeNode<int> *root = new TreeNode<int>(rootdata);
    int n;
    cout << "Enter number of children of " << rootdata << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // call takeInput()
        TreeNode<int> *child = takeInput();
        // connection
        root->children.push_back(child);
    }
    return root;
}

int main()
{

    TreeNode <int> * root = takeInput() ;
    PrintTree(root);
    // TODO delete the tree
}