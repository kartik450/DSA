#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> selection_sort(vector<int> &vec){
        if(vec.empty()){
            return (vec);
        }
        // int min=0;
        for(int i=0;i<vec.size()-1;i++){
            int min=i;
            for(int j=i;j<vec.size();j++){
                if(vec[j]<vec[min]){
                    min=j;
                }
            }
            int temp=vec[min];
            vec[min]=vec[i];
            vec[i]=temp;
        }
        return vec;
    }
};
int main(){
    Solution obj;
    vector<int> vecc={1,2,6,3,4,8,5,1};
    vector<int> vt;
    vt=obj.selection_sort(vecc);
    for(auto v:vt){
        cout<<v<<" ";
    }

}