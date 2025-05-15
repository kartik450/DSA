#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,float> p={5,6.5f};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,double>> q={4,{6,7.8}};
    cout<<p.first<<" "<<q.second.first<<" "<<q.second.second<<endl;
    pair<int,string> arr[]={{2,"two"},{3,"three"},{4,"four"}};
    cout<<arr[0].first<<" "<<arr[2].second;

}