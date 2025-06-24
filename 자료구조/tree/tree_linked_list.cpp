#include <iostream>

struct Tree {
    int data;
    Tree* L;
    Tree* R;

    Tree(int data) {
        this->data = data;
        L = nullptr;
        R = nullptr;
    }
};

Tree* addNode(Tree* root, int data) {
    if (root == nullptr) {
        return new Tree(data);
    }

    if (data < root->data) {
        root->L = addNode(root->L, data);
    } else if (data > root->data) {
        root->R = addNode(root->R, data);
    }

    return root;
}

void preorder (Tree* root) {
    if (root == nullptr) {
        return;
    }

    std::cout << root -> data << " ";
    preorder (root -> L);
    preorder (root -> R);
}

void inorder (Tree* root) {
    if (root == nullptr) {
        return;
    }

    inorder (root -> L);
    std::cout << root -> data << " ";
    inorder (root -> R);
}

void postorder (Tree* root) {
    if (root == nullptr) {
        return;
    }

    postorder (root -> L);
    postorder (root -> R);
    std::cout << root -> data << " ";
}

int main() {
    Tree* root = nullptr;

    root = addNode(root, 50);
    addNode(root, 30);
    addNode(root, 70);
    addNode(root, 20);
    addNode(root, 40);
    addNode(root, 60);
    addNode(root, 80);

    return 0;
}
