struct Dsu {
    int n;
    vector<int> par, sz;
    // vector<int> rank;
    int comp = 0;
    Dsu(int num) {
        n = num;
        par.resize(n, -1);
        sz.resize(n, 0);
        // rank.resize(n + 1, 0);
    };
    void Make(int v) {
        if(par[v] == v) {
            return;
        }
        par[v] = v;
        // rank[v] = 0;
        sz[v] = 1;
        comp++;
    }
    int Find(int v) {
        if(par[v] == -1) {
            return -1;
        }
        if (v == par[v]) {
            return v;
        }
        return par[v] = Find(par[v]);
    }
    void Union(int a, int b) {
        a = Find(a);
        b = Find(b);
        if(a == -1 || b == -1) {
            return;
        }
        if (a != b) {
            if (sz[a] < sz[b]) {
                swap(a, b);
            }
            /*
            if (rank[a] < rank[b]) {
                swap(a, b);
            }
            parent[b] = a;
            if (rank[a] == rank[b]) {
                rank[a]++;
            }
            */
            par[b] = a;
            sz[a] += sz[b];
            comp--;
        }
    }
};
