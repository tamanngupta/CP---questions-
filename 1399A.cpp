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



    int t;


    
    cin >> t;
    for (int i =0; i<t; i++){
        vector<int> v;
        int n;
        cin >> n;
        for (int j =0; j<n; j++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());



        if (n ==1){
            cout << "YES\n";



        }

        

        else {
            for (int p=0; p<v.size(); p++){
                for (int q =p+1; q<v.size(); q++){
                    if ((v[p] + 1 == v[q]) || (v[p] == v[q])){
                        v.erase(v.begin() +p);
                        --p;
                        break;}




                   
                        
                        
                    
                }

            

            

            
        }

        }
        
        


        if (v.size() ==1 && n!=1){
            cout << "YES" << endl;
        }
        else if(n!=1 && v.size()!=1)
            cout << "NO" << endl;
        
    }

    

    return 0;
}
