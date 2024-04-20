// For Directed Graphs
bool has_cycle(vector<vector<int>> &digraph, vector<int> &nodeState, int node) {
    // stack<pair<node, index>>
    stack<pair<int, int>> st;
    st.push(mp(node, 0));
 
    while (!st.empty()) {
        int cnode = st.top().first;
        int index = st.top().second;
        nodeState[cnode] = 1;
 
        if (index < digraph[cnode].size()) {
            if (nodeState[digraph[cnode][index]] == 2) {
                st.top().second++;
                continue;
            }
            if (nodeState[digraph[cnode][index]] == 1) return true;
            st.top().second++;
            st.push(mp(digraph[cnode][index], 0));
        } else {
            nodeState[cnode] = 2;
            st.pop();
        }
    }
    return false;
}
// Use it
void solve() {
  vector<int> nodeState(n + 1, 0);
 
    FOR(n) {
        if (!nodeState[i + 1]) {
            if (has_cycle(digraph, nodeState, i + 1)) {
                // Code
            }
        }
    }
}