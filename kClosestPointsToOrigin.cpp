#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int,int>> pts;
    int u,v;
    for(int i=0; i<n; i++){
        cin >> u >> v;
        pts.push_back({u,v});
    }

    int k; cin >> k;

    priority_queue<pair<int,pair<int,int>>> maxH;

    for(auto p:pts){
        maxH.push({ p.first*p.first + p.second*p.second,{p.first,p.second}});
        if(maxH.size()>k)
            maxH.pop();
    }

    while(maxH.size()>0){
        cout << maxH.top().second.first << " " << maxH.top().second.second << endl;
        maxH.pop();
    }

    return 0;
}
