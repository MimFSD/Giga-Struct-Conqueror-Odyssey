#include <iostream>
using namespace std;

int find(int parent[], int i) {
    if (parent[i] == i) return i;
    return parent[i] = find(parent, parent[i]);  // Path compression
}

void unionSets(int parent[], int rank[], int x, int y) {
    int rootX = find(parent, x);
    int rootY = find(parent, y);

    if (rootX != rootY) {
        if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }
}

int main() {
    int n = 5;
    int parent[n], rank[n];

    for (int i = 0; i < n; ++i) {
        parent[i] = i;
        rank[i] = 0;
    }

    unionSets(parent, rank, 0, 1);
    unionSets(parent, rank, 1, 2);
    unionSets(parent, rank, 3, 4);

    cout << "Find(0): " << find(parent, 0) << endl;
    cout << "Find(3): " << find(parent, 3) << endl;
    return 0;
}
