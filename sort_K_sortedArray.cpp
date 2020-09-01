#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int k; cin >> k;

    priority_queue <int, vector<int>, greater<int>> minH;

    for(int i=0; i<=k; i++){
        minH.push(a[i]);
    }

    int ind = 0;

    for(int i=k+1; i<n; i++){
        a[ind++] = minH.top();
        minH.pop();
        minH.push(a[i]);
    }
    while(minH.size()>0){
        a[ind++] = minH.top();
        minH.pop();
    }

    for(auto i:a)
        cout << i << " ";

    return  0;
}
