#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left, *right;

    Node(int val) : data(val), left(NULL), right(NULL) {}
};

class BinaryTree {
private:
    Node* root;

    void inorder(Node* node) {
        if (node == NULL) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

public:
    BinaryTree() : root(NULL) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        if (root == NULL) {
            root = newNode;
        } else {
            Node* temp = root;
            while (true) {
                if (value < temp->data) {
                    if (temp->left == NULL) {
                        temp->left = newNode;
                        break;
                    }
                    temp = temp->left;
                } else {
                    if (temp->right == NULL) {
                        temp->right = newNode;
                        break;
                    }
                    temp = temp->right;
                }
            }
        }
    }

    void display() {
        inorder(root);
    }
};

int main() {
    BinaryTree tree;
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(2);
    tree.insert(7);

    cout << "Inorder traversal: ";
    tree.display();

    return 0;
}
