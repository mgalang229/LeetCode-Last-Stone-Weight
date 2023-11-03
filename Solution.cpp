class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for (int& x : stones) {
            pq.push(x);
        }
        while (pq.size() > 1) {
            int first = pq.top();
            pq.pop();
            if (pq.empty()) {
                break;
            }
            int second = pq.top();
            pq.pop();
            if (first != second) {
                pq.push(first - second);
            }
        }
        if (pq.empty()) {
            pq.push(0);
        }
        return pq.top();
    }
};
