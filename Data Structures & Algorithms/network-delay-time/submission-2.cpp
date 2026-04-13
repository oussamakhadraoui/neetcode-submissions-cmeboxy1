class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>graph[n+1];
        for(auto &t :times){
            graph[t[0]].push_back({t[1],t[2]});
        }
 vector<int> dis(n + 1, INT_MAX);
dis[k] = 0;

priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
pq.push({0, k});

    while (!pq.empty()) {
        auto [cost, node] = pq.top();
        pq.pop();
        for (auto [neighbor, c] : graph[node]) {
            int tot = cost + c;
            if (tot < dis[neighbor]) {
                dis[neighbor] = tot;
                pq.push({tot, neighbor});
            }
        }
    }
    int result=-1;
    for (int i = 1; i <= n; i++) {
        if (dis[i] == INT_MAX) return -1;
        result = max(result, dis[i]);
    }
    return result;

    }
};
