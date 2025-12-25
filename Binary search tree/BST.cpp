// BST code
#include <iostream>
using namespace std;

class node
{
public:
    int element;
    node* left;
    node* right;

    node(int value)
    {
        element = value;
        left = right = nullptr;
    }
};

class bst
{
public:
    node* root;

    bst()
    {
        root = nullptr;
    }

    node* insert(node* n, int value)
    {
        if (n == nullptr)
            return new node(value);

        if (value < n->element)
            n->left = insert(n->left, value);
        else if (value > n->element)
            n->right = insert(n->right, value);

        return n;
    }

    void insert(int value)
    {
        root = insert(root, value);
    }

    bool search(node* n, int key)
    {
        if (n == nullptr)
            return false;

        if (key == n->element)
            return true;

        if (key < n->element)
            return search(n->left, key);
        else
            return search(n->right, key);
    }

    void inorder(node* n)
    {
        if (n == nullptr) return;

        inorder(n->left);
        cout << n->element << " ";
        inorder(n->right);
    }

    void preorder(node* n)
    {
        if (n == nullptr) return;

        cout << n->element << " ";
        preorder(n->left);
        preorder(n->right);
    }

    void postorder(node* n)
    {
        if (n == nullptr) return;

        postorder(n->left);
        postorder(n->right);
        cout << n->element << " ";
    }
};

int main()
{
    bst b;

    b.insert(50);
    b.insert(30);
    b.insert(70);
    b.insert(20);
    b.insert(40);

    cout << "Inorder Traversal: ";
    b.inorder(b.root);
    cout << endl;

    cout << "Preorder Traversal: ";
    b.preorder(b.root);
    cout << endl;

    cout << "Postorder Traversal: ";
    b.postorder(b.root);
    cout << endl;

    if (b.search(b.root, 40))
        cout << "Found" << endl;
    else
        cout << "NOT Found" << endl;

    return 0;
}

