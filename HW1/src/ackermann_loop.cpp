#include <iostream>

using namespace std;
int ackermann(int m, int n) {
    while (true) {
            if (m == 0) {
                return n + 1;
            }
            else if (n == 0) {
                m = m - 1;
                n = 1;
            }
            else {
                n = ackermann(m, n - 1);
                m = m - 1;
            }
    }
    return n;
}

int main() {
    int m, n;
    cout << "¿é¤Jm n" << endl;
    cin >> m >> n;

    cout << ackermann(m, n) << endl;

    return 0;
}
