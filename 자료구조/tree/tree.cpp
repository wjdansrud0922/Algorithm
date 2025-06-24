#include <iostream>
using namespace std;

// 노드 구조체 정의
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    // 생성자
    TreeNode(int val) {
        data = val;
        left = nullptr;      
        right = nullptr;
    }
};


TreeNode* insert(TreeNode* root, int value) {
    if (root == nullptr)
        return new TreeNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

bool search(TreeNode* root, int value) {
    if (root == nullptr) return false;
    if (root->data == value) return true;
    else if (value < root->data) return search(root->left, value);
    else return search(root->right, value);
}

void inorder(TreeNode* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
TreeNode* findMin(TreeNode* node) {
    while (node && node->left != nullptr)
        node = node->left;
    return node;
}

TreeNode* deleteNode(TreeNode* root, int value) {
    if (root == nullptr) return root;

    //삭제할 노드를 찾는 과정
    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    }

    else {
        // case 1: 자식이 없음
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }
        // case 2: 자식이 하나
        else if (root->left == nullptr) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        // case 3: 자식이 두 개
        TreeNode* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

using namespace std;

int main() {
    TreeNode* root = nullptr;

    // values 배열의 각 값을 insert 함수로 트리에 삽입
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int v : values) {
        root = insert(root, v);
    }

    cout << "초기 트리 (중위 순회): ";
    inorder(root);
    cout << endl;

    int target = 40;
    cout << target << " 탐색 결과: ";
    cout << (search(root, target) ? "존재함" : "존재하지 않음") << endl;

    root = deleteNode(root, 30);
    cout << "30 삭제 후 (중위 순회): ";
    inorder(root);
    cout << endl;

    return 0;
}
