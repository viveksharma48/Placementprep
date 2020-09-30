#include <iostream>
#include<set>
#include <vector>
#include <algorithm>

int main() {
    using namespace std;
    vector<int> v;
    set<int> s;
    int size, inc, opp = 0;
    cin >> size;
    cin >> inc;
    for (int i = 0; i < size; ++i) {
        int k;
        cin >> k;
        v.push_back(k);
    }

//================================================INPUT================
    for (int i = 0; i < size; ++i) {
        s.insert(v[i] % inc);
    }
    if (s.size() > 1) {
        cout << "-1";
        return 0;
    }
    sort(v.begin(), v.end());
    for (int j = 0; j < size-1; ++j) {
        opp += (v[size - 1] - v[j]) / inc;
    }
    cout << opp;

    return 0;
}
