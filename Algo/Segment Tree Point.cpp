struct SegTree {
    vector<int> tree;
    vector<int> v;
    int n;
    SegTree(int num, vector<int> &arr) {
        n = num;
        tree.resize(4 * n, 0LL);
        v = arr;
    }
    void Build(int start, int end, int node) {
        if(start == end) {
            tree[node] = v[start];
            return;
        }
        int left = 2 * node, right = (2 * node) + 1;
        int mid = (start + end) / 2;
        Build(start, mid, left);
        Build(mid + 1, end, right);
        tree[node] = tree[left] + tree[right];
    }
    void Update(int start, int end, int node, int l, int change) {
        if(start == end) {
            tree[node] = change;
            v[l] = change;
            return;
        }
        int left = 2 * node, right = (2 * node) + 1;
        int mid = (start + end) / 2;
        if(l <= mid) {
            Update(start, mid, left, l, change);
        }
        else {
            Update(mid + 1, end, right, l, change);
        }
        tree[node] = tree[left] + tree[right];
    }
    int Query(int start, int end, int node, int l, int r) {
        if(l > r  || r < start || end < l) {
            return 0;
        }
        // l <= start && end <= r
        if(l <= start && end <= r && start <= end) {
            return tree[node];
        }
        int left = 2 * node, right = (2 * node) + 1;
        int mid = (start + end) / 2;
        int q1 = Query(start, mid, left, l, r), q2 = Query(mid + 1, end, right, l, r);
        return q1 + q2;
    }
};
