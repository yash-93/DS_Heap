#include <bits/stdc++.h>
using namespace std;

int kthSmallestElement(vector<int> a, int k){
    priority_queue<int> maxH;
    for(auto i:a){
        maxH.push(i);
        if(maxH.size()>k)
            maxH.pop();
    }
    return maxH.top();
}

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    int k1, k2;
    cin >> k1 >> k2;

    int x = kthSmallestElement(a,k1);
    int y = kthSmallestElement(a,k2);

    int sum = 0;

    for(auto i:a){
        if(i > x && i < y)
            sum += i;
    }

    cout << sum;

    return 0;
}
