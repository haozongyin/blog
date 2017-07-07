#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

const int maxn = 100000 + 10;
int from[maxn];
vector<int> to[maxn];

int main()
{
    int test = 0;
    int old = test;
    for (int i = 1; i <= 100000; i++) {
        if (test > test + i) cout << "fuck!" << endl;
        test += i;
    }
    int T, n, m, a, b; scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &n, &m);
        memset(from, 0, sizeof(from));
        for (int i = 1; i <= n; i++) to[i].clear();
        while (m--) {
            scanf("%d %d", &a, &b);
            to[a].push_back(b);
            from[b]++;
        }
        priority_queue<int> q;
        for (int i = 1; i <= n; i++) {
            if (from[i] == 0) q.push(i);
        }
        int min_value = n + 1;
        int sum = 0;
        while (!q.empty()) {
            int temp = q.top(); q.pop();
            min_value = min(min_value, temp);
            sum += min_value;
            for (int i = 0; i < to[temp].size(); i++) {
                from[to[temp][i]]--;
                if (from[to[temp][i]] == 0) q.push(to[temp][i]);
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
