#include <iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
/*
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }

    }
}
int findUnique(int arr, int size)
{
    int ans=0;
    for(int i=0;i<size;i++){
        arr = arr ^ arr[i];
    }
    return ans;
}


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int i = 0;
        while(i < nums.size()-1){
            if(nums[i] == nums[i+1]){
                ans.push_back(nums[i]);
                i = i+2;
            }
            else{
                i++;
            }
        }
        return ans;
        
    }
};

class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        sort(a.begin(), a.end());
        sort(b.begin() , b.end());
        int i=0 , j=0;
        set<int> st;
        vector<int>ans;
        while(i<a.size() and j<b.size()){
            if(a[i]==b[j]){
                st.insert(a[i]);
                i++;
                j++;
            }
            else if(a[i]>b[j]){
                j++;
            }
            else{
                i++;
            }
        }
       
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};

class Solution {
public:
    vector<vector<int> > pairSum(vector<int> &arr, int s) {
        vector<vector<int> > ans;
        for (int i = 0; i < arr.size();i++){
            for (int j = i+1; j <arr.size();j++){
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    return ans;
     
    }
};
*/
void sortOne(int arr[],int n){
    int i=0,j = n-1;
    while(i>=j){
        if(arr[i] == 0){
            i++;
        }
        else if(arr[j] == 1){
            j--;
        }
        else if(arr[i] == 1 && arr[j] == 0){
            swap(arr[i],arr[j]);
            i++; j--;
        }
    }
}

int main(){
    //int even[8] = {5,2,9,4,7,6,1,0};
    //int odd[5] = {11,33,9,78,43};
   // swapAlternate(even,8);
    //printArray(even,8);
    //cout<<endl;
    //swapAlternate(odd,5);
    //printArray(odd,5);

    int arr[8] = {1,0,1,1,0,0,0,1} ;
    sortOne(arr,8);
    printArray(arr,8);
    
 
}