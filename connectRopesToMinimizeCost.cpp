#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    priority_queue<int,vector<int>,greater<int>> minH;

    for(auto i:a)
        minH.push(i);

    int sum = 0;

    while(minH.size()>1){
        int temp = 0;
        temp += minH.top();
        minH.pop();
        temp += minH.top();
        minH.pop();
        sum += temp;
        minH.push(temp);
    }

    cout << sum;

    return 0;
}
