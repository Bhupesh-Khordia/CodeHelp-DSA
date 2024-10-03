#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d) {
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* buildTree(Node* root) {
    int data;
    cout << "Enter the data : ";
    cin >> data;
    cout << endl;
    root = new Node(data);

    if(data == -1) {
        return NULL;
    }

    cout << "LEFT of " << data << " : ";
    root->left = buildTree(root->left);
    
    cout << "RIGHT of " << data << " : ";
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node* root) {
    queue<Node*> Q;
    Q.push(root);
    Q.push(NULL);

    while(!Q.empty()) {
        Node* temp = Q.front();
        Q.pop();

        if(temp == NULL) {
            cout << endl;

            if(!Q.empty()) {
                Q.push(NULL);
            }
        } else {
            cout << temp->data << " ";

            if(temp->left) {
                Q.push(temp->left);
            }

            if(temp->right) {
                Q.push(temp->right);
            }
        }
    }
}


//  https://leetcode.com/problems/binary-tree-level-order-traversal-ii/

vector<vector<int>> levelOrderBottom(Node* root) {
    vector<vector<int>> ans;
    if (root == nullptr) return ans;  // Handle empty tree case

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();  // Number of nodes in the current level
        vector<int> level;  // To store nodes at the current level

        for (int i = 0; i < levelSize; i++) {
            Node* current = q.front();
            q.pop();

            level.push_back(current->data);  // Add the current node's value to the current level

            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }

        ans.push_back(level);  // Add the current level to the result
    }

    reverse(ans.begin(), ans.end());  // Reverse the order to get bottom-up traversal
    return ans;
}

void reverseOrderTraversal(Node* root) {
    queue<Node*> Q;
    stack<Node*> S;
    Q.push(root);
    S.push(root);
    Q.push(NULL);
    S.push(NULL);

    while(!Q.empty()) {
        Node* temp = Q.front();
        Q.pop();

        if(temp == NULL) {
            if(!Q.empty()) {
                Q.push(NULL);
                S.push(NULL);
            }
        } else {
            if(temp->right) {
                Q.push(temp->right);
                S.push(temp->right);
            }
            if(temp->left) {
                Q.push(temp->left);
                S.push(temp->left);
            }
        }
    }

    S.pop();

    while(!S.empty()) {
        if(S.top() == NULL) {
            cout << endl;
            S.pop();
        }
        else {
            cout << S.top() -> data << " ";
            S.pop();
        }
    }
}

void inOrderTraversal(Node* root) {
    if(root == NULL) {
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(Node* root) {
    if(root == NULL) {
        return;
    }

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node* root) {
    if(root == NULL) {
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

Node* BuildLevelOrder(Node* root) {
    queue<Node*> Q;
    int data;
    cout << "Enter data : ";
    cin >> data;
    root = new Node(data);
    Q.push(root);

    while(!Q.empty()) {
        Node* temp = Q.front();
        Q.pop();

        cout << "Enter leftnode of " << temp->data << " : ";
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp->left = new Node(leftData);
            Q.push(temp->left);
        }

        cout << "Enter rightnode of " << temp->data << " : ";
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp->right = new Node(rightData);
            Q.push(temp->right);
        }
    }

    return root;
}

int main() {
    Node* root = NULL;

    // Creating a tree
    root = buildTree(root);

    cout << "\nLevel Order Traversal : " << endl;
    levelOrderTraversal(root);

    cout << "\nReverse Level Order Traversal : " << endl;
    reverseOrderTraversal(root);

    // cout << "\nIn Order Traversal : " << endl;
    // inOrderTraversal(root);
    
    // cout << "\nPre Order Traversal : " << endl;
    // preOrderTraversal(root);
    
    // cout << "\nPost Order Traversal : " << endl;
    // postOrderTraversal(root);

    return 0;
}

// Input Tree form Examples -  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1