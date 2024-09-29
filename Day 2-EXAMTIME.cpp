#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 
    
    while (T--) {
        int DDSA, DTOC, DDM;
        int SDSA, STOC, SDM;

        cin >> DDSA >> DTOC >> DDM;
        cin >> SDSA >> STOC >> SDM;

        int totalDragon = DDSA + DTOC + DDM;
        int totalSloth = SDSA + STOC + SDM;

        if (totalDragon > totalSloth) {
            cout << "Dragon" << endl;
        } 
        else if (totalDragon < totalSloth) {
            cout << "Sloth" << endl;
        } 
        else {
            // If total scores are tied, compare DSA scores
            if (DDSA > SDSA) {
                cout << "Dragon" << endl;
            } 
            else if (DDSA < SDSA) {
                cout << "Sloth" << endl;
            } 
            else {
                // If DSA scores are tied, compare TOC scores
                if (DTOC > STOC) {
                    cout << "Dragon" << endl;
                } 
                else if (DTOC < STOC) {
                    cout << "Sloth" << endl;
                } 
                else {
                    
                    cout << "Tie" << endl;
                }
            }
        }
    }

    return 0;
}