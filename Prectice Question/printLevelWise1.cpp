#include <iostream>
#include <vector>
#include <queue>
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

TreeNode<int> *takeInputLevelWise()
{
    int rootdata;
    cout << "Enter root Data: " << endl;
    cin >> rootdata;

    TreeNode<int> *root = new TreeNode<int>(rootdata);

    // making queue for input include library
    queue<TreeNode<int> *> pendingNode;
    pendingNode.push(root);

    while (pendingNode.size() != 0)
    {
        TreeNode<int> *front = pendingNode.front();
        pendingNode.pop();
        int numchild;
        cout << "Enter num of children of " << front->data << endl; // front or root same in this time
        cin >> numchild;

        for (int i = 0; i < numchild; i++)
        {

            int datachild;
            cout << "Enter " << i << "th child of " << front->data << endl;
            cin >> datachild;

            // we save node inside the queue
            TreeNode<int> *child = new TreeNode<int>(datachild);
            front->children.push_back(child);
            pendingNode.push(child);
        }
    }
    return root;
}

TreeNode<int> *takeInput()
{
    int rootdata;
    cout << "Enter data: " << endl;
    cin >> rootdata;

    TreeNode<int> *root = new TreeNode<int>(rootdata);

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
    cout << root->data << ": ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printNode(root->children[i]);
    }
}

void printNodeLevelWise(TreeNode<int> *root)
{
    cout << root->data << ":";
    queue<TreeNode<int> *> pendingNode;
    pendingNode.push(root); // Node push kiya

    while (pendingNode.size() != 0)
    {
        TreeNode<int> *front = pendingNode.front();
        pendingNode.pop();

        for (int i = 0; i < front->children.size(); i++)
        {

            // Remember d is only data convert into node
            if (i == 0)
            {
                cout << front->children[i]->data;
            }
            else
            {
                cout << "," << front->children[i]->data;
                pendingNode.push(front->children[i]);
            } 
        }
        cout << endl;
    }
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    printNodeLevelWise(root);
}

/// code remember

/* void printLevelWise(TreeNode<int>* root) {
    // Write your code here
     if (root == NULL)
    return;
  queue<TreeNode<int> *> q;
  q.push(root);
  while (q.size() != 0) {
    TreeNode<int> *front = q.front();
    q.pop();
    cout << front->data << ":";
    for (int i = 0; i < front->children.size(); i++) {
      if (i == 0)
        cout << front->children[i]->data;
      else
        cout << "," << front->children[i]->data;
      q.push(front->children[i]);
    }
    cout << "\n";
  }
} */
