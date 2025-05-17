#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void Bubble_sort(vector<int> &vec){
        for(int i=0;i<vec.size()-1;i++){
            for(int j=0;j<vec.size();j++){
                if(vec[j]>vec[j+1]){
                    int temp=vec[j];
                    vec[j]=vec[j+1];
                    vec[j+1]=temp;
                }
            }
        }

    }
};
int main(){
    Solution obj;
    vector<int> vec={2,3,1,8,5,3,4};
    obj.Bubble_sort(vec);
    for(auto x: vec){
        cout<<x<<" ";
    }
}