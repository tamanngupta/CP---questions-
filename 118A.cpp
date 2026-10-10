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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    for (char &ch : s){
        ch = tolower(ch);
        

    }

    for (int i=0; i<s.size(); i++){
        if (s[i] == 'a' || s[i] =='i' || s[i] == 'e'|| s[i]=='o' || s[i]=='u' || s[i]=='y'){
            s.erase(i,1);
            i--;

        }


    }

    string t="";
    for (char ch : s) {
        t += string(".") + ch;
    }

    cout << t << endl;

    return 0;




}
