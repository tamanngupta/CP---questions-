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
        int n, count1=0, count2=0;
        
        cin >>n;
        for (int j =0; j<n; j++){
            int x;
            cin >> x;
           

            if (x==1){
                count1++;
            }
            else{
                count2++;
            }


           
        }

        if (count1%2 ==0  && count1!=0 || (count1%2 ==0 && count1==0 && count2%2==0)){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }

    }


    return 0;



}
