#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        
        long long sum = 0;
        bool hasOdd = false;
        
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            sum += A[i];
            if (A[i] % 2 == 1) {
                hasOdd = true;
            }
        }
        
        if (sum % 2 == 0 && hasOdd) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}