#include <iostream>
#include <bits/stdc++.h>
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
    cout << "Enter root data: " << endl;
    cin >> rootdata;

    TreeNode<int> *root = new TreeNode<int>(rootdata);
    queue<TreeNode<int> *> pendingNode;

    pendingNode.push(root);
    while (pendingNode.size() != 0)
    {
        TreeNode<int> *front = pendingNode.front();
        pendingNode.pop();

        int numdata;
        cout << "Enter num of child of " << front->data << endl;
        cin >> numdata;

        for (int i = 0; i < numdata; i++)
        {
            int childdata;
            cout << "Enter " << i << "th  data of " << front->data << endl;
            cin >> childdata;

            TreeNode<int> *child = new TreeNode<int>(childdata);
            front->children.push_back(child); // Node push
            pendingNode.push(child);
        }
    }
    return root;
}

void printNodeLevelWise(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<TreeNode <int> *> q;
    q.push(root); // q mai node push krna hai

    while (q.size() != 0)
    {
        TreeNode<int> *front = q.front();
        q.pop();
        cout << front->data << ":";

        for (int i = 0; i < front->children.size(); i++)
        {
            if (i == 0)
            {
                cout << front->children[i]->data;
            }

            else
            {
                cout << ","<< front->children[i]->data;
                q.push(front->children[i]);
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