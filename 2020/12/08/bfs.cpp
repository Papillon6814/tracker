#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int r, c;
int sy, sx;
int gy, gx;
char m[51][51];
int d[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

int bfs(int sy, int sx) {
    vector<vector<int>> dist(r, vector<int>(c, INT_MAX));
    queue<pii> q;
    pii g(gy, gx);

    q.push(pii(sy, sx));
    dist[sy][sx] = 0;
    while(!q.empty()) {
        pii t = q.front();
        q.pop();

        if(t == g) return dist[t.first][t.second];
        for(int i=0; i<4; i++) {
            int ty = t.first + d[i][0];
            int tx = t.second + d[i][1];

            if(ty > r || tx < 0 || ty < 0 || m[ty][tx] == '#' || dist[ty][tx] <= dist[t.first][t.second] + 1) continue;
            dist[ty][tx] = dist[t.first][t.second] + 1;
            q.push(pii(ty, tx));
        }
    }

    return -1;
}

int main() {
    cin >> r >> c;
    cin >> sy >> sx;
    cin >> gy >> gx;
    for(int i=0; i<r; i++) cin >> m[i];

    sy--;sx--;gy--;gx--;

    cout << bfs(sy, sx) << endl;

    return 0;
}