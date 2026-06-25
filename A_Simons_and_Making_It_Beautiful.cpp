#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        int pos = 0;
        for (int i = 0; i < n; i++) {
            if (p[i] == n) {
                pos = i;
                break;
            }
        }

        if (n > 1) {
            if (pos != 0)
                swap(p[0], p[pos]);
            else
                swap(p[0], p[1]);
        }

        for (int i = 0; i < n; i++) {
            cout << p[i];
            if (i + 1 < n) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
