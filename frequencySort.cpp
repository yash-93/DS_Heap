#include <bits/stdc++.h>
using namespace std;

/*bool Comp(pair<int,int> a, pair<int,int> b){
    if(a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}*/

int main(){
    int n; cin >> n;
    vector<int> a(n);
    unordered_map<int,int> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
        m[a[i]] += 1;
    }

    priority_queue <pair<int,int>> maxH;

    for(auto i=m.begin(); i!=m.end(); i++){
        maxH.push({i->second,i->first});
    }

    int ind = 0;
    while(!maxH.empty()){
        for(int i=0; i<maxH.top().first; i++){
            a[ind] = maxH.top().second;
            ind++;
        }
        maxH.pop();
    }

    for(auto i:a)
        cout << i << " ";

    return 0;
}
