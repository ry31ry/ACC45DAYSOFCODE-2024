#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

      
        int pointsA = 500;
        int pointsB = 1000;

     
        int score1 = max(0, pointsA - 2 * X) + max(0, pointsB - 4 * (X + Y));


        int score2 = max(0, pointsB - 4 * Y) + max(0, pointsA - 2 * (X + Y));

        int maxScore = max(score1, score2);
        cout << maxScore << endl;
    }

    return 0;
}



