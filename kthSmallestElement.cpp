#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int k; cin >> k;

    priority_queue<int> maxH;

    for(int i=0; i<n; i++){
        maxH.push(a[i]);
        if(maxH.size()>k)
            maxH.pop();
    }

    cout << maxH.top();

    return  0;
}
