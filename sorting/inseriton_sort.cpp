#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    void insertion_sort(vector<int> &vec){
        for(int i=0;i<vec.size();i++){
            int j=i;
            while(j>0 && vec[j-1]>vec[j]){
                int temp=vec[j-1];
                vec[j-1]=vec[j];
                vec[j]=temp;
                j--;
            }
            
        }
    }
};
int main(){
    Solution obj;
    vector<int> vec={4,5,3,2,7,9,2,1};
    obj.insertion_sort(vec);
    for(auto v:vec){
        cout<<v<<" ";
    }
}