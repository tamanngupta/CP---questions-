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

    string s;
    cin >> s;

    set<char> m;

    for (char ch : s){
        m.insert(ch);


    }

    if (m.size() %2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }

    else{
        cout << "IGNORE HIM!" << endl;
    }



    return 0;
}
