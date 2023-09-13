#include <bits/stdc++.h>
using namespace std;


int main() {
    int k = 0;
    int currentHP;
    int flav;
    int maxHP;


    cin >> flav >> currentHP >> maxHP;

    vector<int> HP(flav);
    for (int i = 0; i < flav; ++i) {
        cin >> HP.at(i);
    }

    while(true){

        if(maxHP <= HP.at(k) + currentHP){ //ここを<ではなく<=にしました
            cout << k+1 << endl;
            break;
        }
        else k++;
    }

    return 0;

}