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

    string s1,s2;
    cin >> s1;
    cin >> s2;
    vector<string> v;
   
   
    
    for (int i = 0; i < s1.size(); i++) {
        s1[i] = tolower(s1[i]);
    }

     for (int i = 0; i < s2.size(); i++) {
        s2[i] = tolower(s2[i]);
    }


  
    v.push_back(s1);
    v.push_back(s2);
    sort(v.begin(), v.end());

    if (v[0] == s1 && s1 !=s2){
        cout << -1 << endl;

    }

    else if (v[0] == s2 && s1!=s2){
        cout << 1 << endl;
    }

    else if (s1 == s2){
        cout << 0 << endl;
    }



    return 0;
}
