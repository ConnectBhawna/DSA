/*
https://codeforces.com/problemset/problem/1030/A
*/
#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		sum+=x;
		
	}
	
	if(sum){
		cout<<"HARD"<<endl;
	}
	else {
		cout<<"EASY"<<endl;
	}

	return 0;
}