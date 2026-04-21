#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N, x;
    cin >> T;

    while (T--) {

        cin >> N;

        int alive[500000];
        int size = 0;

        for (int i = 0; i < N; i++) {

            cin >> x;

    
            while (size > 0 && alive[size - 1] <= x) {
                size--;
            }

            
            alive[size++] = x;

        
            cout << size;
            if (i < N - 1) cout << " ";
        }

        cout << '\n';
    }
}