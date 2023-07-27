//Short with index
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n = 5,i;
	int array[5] = {5,2,1,3,4};
	int index[5] = {1,2,3,4,5};
		
	vector<pair<int,int> >v(n);
	for(i=0;i<n;i++){
	    v[i].first = array[i];
	    v[i].second = index[i];
	}
	sort(v.begin(),v.end());
		
	cout <<"array: ";
	for(i=0;i<n;i++)
		cout << v[i].first<<' ';
	cout << endl;
	cout <<"index: ";
	for(i=0;i<n;i++)
		cout << v[i].second<<' ';
	cout << endl;
}
