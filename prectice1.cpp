#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class TreeNode
{
    public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data)
    {
        this->data = data;
    }
};

TreeNode<int> * takeInput()
{
    int rootdata;
    cout << "Enter data: " << endl;
    cin >> rootdata;

    TreeNode <int > * root = new TreeNode <int> (rootdata);

    int n; // number of children
    cout << "Enter the number of children of " << rootdata << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // takeInput() ;  for connection purpose we can use this
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

void printNode(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";

    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;

    for (int i = 0; i < root->children.size(); i++)
    {
        printNode(root->children[i]);

        // we can proccess recursive case with no base case
    }
}

int main()
{
    TreeNode<int> *root = takeInput();
    printNode(root);
}
