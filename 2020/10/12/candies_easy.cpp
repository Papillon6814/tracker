#include <cstdio>
#include <iostream>
using namespace std;

int sum(int n);

int main() {
    int n;

    cin >> n;

    cout << sum(n) << "\n";

    return 0;
}

int sum(int n) {
    int s = 0;

    for(int i=1; i<=n; i++) {
        s += i;
    }

    return s;
}