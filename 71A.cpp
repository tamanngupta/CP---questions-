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

    int n;
    string s;

    vector<string> m;
    vector<char> c;
    vector<string> v;
    cin >> n;
    string t;

    for (int i =1; i<=n; i++){
        cin >>s;
        m.push_back(s);


    }

    for (string s : m){
        
        if (s.size()>10){
            t = s[0] +( to_string(s.size()-2)) + s[s.size()-1];
            
                
        }

        else{
            t =s;
            

        }

        v.push_back(t);
        
    }


    for (int i =0; i<v.size(); i++ ){
        cout << v[i]<<endl;
    }



}
