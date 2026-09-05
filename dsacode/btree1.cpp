#include<iostream>
#include<vector>
using namespace std;

struct Node {
    vector<int> keys;
    vector<Node*> children;

    Node(vector<int> k = {}) {
        keys = k;
    }
};

void print(Node* root, int level = 0)
{
    if (!root) return;

    for (int i = 0; i < level; i++)
        cout << "    ";

    cout << "[ ";
    for (int x : root->keys)
        cout << x << " ";
    cout << "]\n";

    for (Node* child : root->children)
        print(child, level + 1);
}

int main()
{
    // ---------------- Level 0 (root) ----------------
    Node* root = new Node({10, 20});   // 2 keys → 3 children

    // ---------------- Level 1 ----------------
    Node* n1 = new Node({5, 7});
    Node* n2 = new Node({12, 15});
    Node* n3 = new Node({25, 30});

    root->children = {n1, n2, n3};

    // ---------------- Level 2 (leaves only) ----------------

    // children of n1
    n1->children = {
        new Node({1, 2}),
        new Node({6}),
        new Node({8, 9})
    };

    // children of n2
    n2->children = {
        new Node({11}),
        new Node({13, 14}),
        new Node({16, 18})
    };

    // children of n3
    n3->children = {
        new Node({21, 22}),
        new Node({26, 27}),
        new Node({31, 35})
    };

    print(root);

    return 0;
}