#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int countU = 0;
        for (char c : s) {
            if (c == 'U') {
                countU++;
            }
        }

        if (countU % 2 == 1) {
            cout << "YES" << endl;  // Alice wins
        } else {
            cout << "NO" << endl;   // Bob wins
        }
    }
}

int main() {
    solve();
    return 0;
}
