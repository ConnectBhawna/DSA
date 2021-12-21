/*

PROBLEM NAME =  HOTEL

A holiday weekend is coming up, and Hotel Bytelandia needs to find out if it has enough rooms to accommodate all potential guests. A number of guests have made reservations. Each reservation consists of an arrival time, and a departure time. The hotel management has hired you to calculate the maximum number of guests that will be at the hotel simultaneously. Note that if one guest arrives at the same time another leaves, they are never considered to be at the hotel simultaneously (see the second example).

Input
Input will begin with an integer T, the number of test cases. Each test case begins with an integer N, the number of guests. Two lines follow, each with exactly N positive integers. The i-th integer of the first line is the arrival time of the i-th guest, and the i-th integer of the second line is the departure time of the i-th guest (which will be strictly greater than the arrival time).

Output
For each test case, print the maximum number of guests that are simultaneously at the hotel.

Sample Input
3
3
1 2 3
4 5 6
5
1 2 3 4 5
2 3 4 5 6
7
13 6 5 8 2 10 12
19 18 6 9 9 11 15
Sample Output
3
1
3

*/
#include <bits/stdc++.h>
//#include <bits/stdc++>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr,dep;
	    vector<pair<int,int>> time;
	    
	    for(int i=0;i<n;i++){
	        cin>>arr;
	        time.push_back({arr,1});
	    }
	    for(int i=0;i<n;i++){
	        cin>>dep;
	        time.push_back({dep,0});
	    }
	    sort(time.begin(),time.end());
	    int ans=0,count=0;
	    for(pair<int,int> i : time){
	        if(i.second==1){
	            count++;
	        }
	        else{
	            count--;
	        }
	        ans=max(ans,count);
	    }
	    cout<<ans<<endl;
    }
    return 0;

}    