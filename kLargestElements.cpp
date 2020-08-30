#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int k; cin >> k;

    priority_queue <int, vector<int>, greater<int>> minH;

    for(int i=0; i<n; i++){
        minH.push(a[i]);
        if(minH.size()>k)
            minH.pop();
    }

    while(minH.size()>0){
        cout << minH.top() << " ";
        minH.pop();
    }

    return  0;
}
