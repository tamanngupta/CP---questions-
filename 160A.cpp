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

   vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    // 2 coins os 1 and 2 ; i can only take 2
    // 3 coins 1,2,3; 3,2 ;
    // 3 coins 4,5,5; - 

    sort(v.begin(), v.end());
    


    vector<int> count;

    count.push_back(v[v.size()-1]);
    v.pop_back();


    int sum = accumulate(v.begin(), v.end(), 0);
    int sum1 = accumulate(count.begin(), count.end(), 0);


    while(sum1<sum){
        int t= v[v.size()-1];

        sum = sum -t;
        sum1 = sum1 +t;
        count.push_back(t);
        v.pop_back();
       


    }


    if (sum == sum1){
        cout << count.size() +1 << endl;
    }

    else {
        cout<<count.size()<< endl;
    }









    return 0;
}
