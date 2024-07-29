#include <iostream>

using namespace std;

int n, x[20], p[20];

void afisare() {
    for (int i = n; i > 0; i--) {
        cout << x[i] << ' ';
    }
    cout << "\n";
}

void back(int k) {
    for (int i = 1; i <= n; i++) {
        if (!p[i]) {
            p[i] = 1;
            x[k] = i;
            if (k < n)
                back(k + 1);
            else
                afisare();
            p[i] = 0;
        }
    }
}

int main() {

    cin >> n;
    back(1);

    return 0;
}
