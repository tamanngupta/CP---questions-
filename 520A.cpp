#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <numeric>
using namespace std;

typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> m;


    for (char &ch : s){
        ch = tolower(ch);

    }

    for (char ch = 'a'; ch<= 'z'; ch++){
        m[ch] = 0;
    }

    for (char ch : s){
        auto it = m.find(ch);
        if (it != m.end()){
            it ->second++;
        }



    }

    int t =0;

    for (auto &pair : m){
        if (pair.second == 0){
            t=0;
            break;
        }

        else {
            t=1;
        }

       
    }

    if (t ==0){
        cout << "NO" << endl;
    }

    else {
        cout << "YES" << endl;
    }
  

    return 0;

}

