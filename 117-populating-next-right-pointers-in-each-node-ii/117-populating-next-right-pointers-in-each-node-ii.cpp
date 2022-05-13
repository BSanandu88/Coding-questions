/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(! root) return root;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int x = q.size();
            while(x--){
                Node* s = q.front();
                q.pop();
                if(x == 0) s->next = NULL;
                else s->next = q.front();
                if(s->left) q.push(s->left);
                if(s->right) q.push(s->right);
            }
        }
        return root;
    }
};