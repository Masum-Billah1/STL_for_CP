#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	n = 5;
	int a[5]={1,2,2,4,5};
	map<int,int>mp;
	for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    //How many number of specific index value
    for(int i=1;i<=n;i++)
    	cout << mp[i]<<' ';
    cout << endl;
}