#include <iostream>
#include <stack>
using namespace std;

struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };

class BSTIterator {
public:
    BSTIterator(TreeNode *root) {
        while(root != NULL){
            stack1.push(root);
            root = root->left;
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return (!stack1.empty());
    }

    /** @return the next smallest number */
    int next() {
        TreeNode* current = stack1.top();
        TreeNode* res = current;
        stack1.pop();
        current = current->right;
        while(current != NULL){
            stack1.push(current);
            current = current->left;
        }
        return res->val;
    }

private:
    stack<TreeNode *> stack1;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}