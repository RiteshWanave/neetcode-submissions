/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/


class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == nullptr)
            return nullptr;

        unordered_map<Node*, Node*> clones;
        stack<Node*> st;

        clones[node] = new Node(node->val);
        st.push(node);

        while (!st.empty()) {
            Node* curr = st.top();
            st.pop();

            for (Node* neighbor : curr->neighbors) {
                if (!clones.count(neighbor)) {
                    clones[neighbor] = new Node(neighbor->val);
                    st.push(neighbor);
                }

                clones[curr]->neighbors.push_back(clones[neighbor]);
            }
        }

        return clones[node];
    }
};
