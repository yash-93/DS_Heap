#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int x; cin >> x;
    int k; cin >> k;

    priority_queue <pair<int,int>> maxH;

    for(int i=0; i<n; i++){
        maxH.push({abs(a[i]-x),a[i]});
        if(maxH.size()>k)
            maxH.pop();
    }

    while(!maxH.empty()){
        cout << maxH.top().second << " ";
        maxH.pop();
    }

    return  0;
}
