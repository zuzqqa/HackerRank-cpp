#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int n, a, b;
    vector <int> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }

    cin >> a;

    v.erase(v.begin() + a - 1);

    cin >> a >> b;

    v.erase(v.begin() + a - 1, v.begin() + b - 1);

    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
