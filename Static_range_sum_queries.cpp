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

int main(){
    int n,q;
    cin >> n>>q;
    
    ll arr[n];

    for (int j=0; j<n; j++){
        int x;
        cin >> x;
        arr[j] =x;
    }
    ll prefix[n];
    
    for(int p=0; p<=n; p++){
        prefix[p]=arr[p-1] + prefix[p-1];
    }

    for (int t=0; t<q; t++){

        ll sum;
        int a, b;
        cin >> a >> b;

        if (b==0){
            sum = arr[0];
            
        }

        else{
            sum = prefix[b]-prefix[a-1];

        }
        
        cout << sum << "\n";
    }
    
    return 0;
}