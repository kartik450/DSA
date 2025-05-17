#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void quick_sort(vector<int> &vec,int low,int high){
        if(low<high){
            int index=f(vec,low,high);
            quick_sort(vec,low,index-1);
            quick_sort(vec,index+1,high);
        }
    }
    int f(vector<int> &vc,int low, int high){
    int pivot = vc[low];
    int i = low, j = high;
    while(i < j){
        while(vc[i] <= pivot && i <= high){
            i++;
        }
        while(vc[j] > pivot && j >= low){
            j--;
        }
        if(i < j){
            swap(vc[i], vc[j]);
        }
    }
    swap(vc[low], vc[j]);
    return j;
}

};
int main(){
    Solution obj;
    vector<int> vec={2,4,8,4,2};
    obj.quick_sort(vec,0,4);
    for(auto v:vec){
        cout<<v<<" ";
    }
}