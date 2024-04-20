void DFS(vector<vector<int>> &g, int node) {
    const int n = g.size() - 1;
    bool visit[n + 1] = {false};

    // stack<pair<node, index>>
    stack<pair<int, int>> st;
    st.push(mp(node, 0));

    while (!st.empty()) {
        int cnode = st.top().first;
        int index = st.top().second;

        if (index < g[cnode].size()) {
            int adj = g[cnode][index];

            // If first visit
            if (index == 0) {
            }

            if (!visit[adj]) {
                st.top().second++;
                st.push({adj, 0});
            }

            // if visited
            else {
                st.top().second++;
                continue;
            }
        }
        else {
            // If the algorithm leaves the node
            st.pop();
        }
    }
}