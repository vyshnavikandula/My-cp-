#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n;
        cin >> s;

        int changes = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] != s[(i + 1) % n])
                changes++;
        }

        if (changes == 0)
            cout << 1 << "\n";
        else
            cout << changes << "\n";
    }

    return 0;
}
