#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    unordered_map<int,int> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
        m[a[i]] += 1;
    }

    int k; cin >> k;

    priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minH;

    for(auto i=m.begin(); i!=m.end(); i++){
        minH.push({i->second,i->first});
        if(minH.size()>k)
            minH.pop();
    }

    while(!minH.empty()){
        cout << minH.top().second << " ";
        minH.pop();
    }

    return 0;
}
