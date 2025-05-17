#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void merge_sort(vector<int> &vec,int start,int end){
        if(start>=end)return;
        int mid=(start+end)/2;
        merge_sort(vec,start,mid);
        merge_sort(vec,mid+1,end);

        merge(vec,start,mid,end);
    }
    void merge(vector<int> &vc,int start,int mid, int end){
        vector<int> temp;
        int left=start;
        int right=mid+1;
        while(left<=mid && right<=end){
            if(vc[left]<=vc[right]){
                temp.push_back(vc[left]);
                left++;

            }
            else{
                temp.push_back(vc[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(vc[left]);
            left++;
        }
        while(right<=end){
            temp.push_back(vc[right]);
            right++;
        }
        for(int i=start;i<=end;i++){
            vc[i]=temp[i-start];
        }
    }
};
int main(){
    Solution obj;
    vector<int> vec={2,4,8,4,2};
    obj.merge_sort(vec,0,4);
    for(auto v:vec){
        cout<<v<<" ";
    }
}