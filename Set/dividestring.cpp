#include<bits/stdc++.h>
using namespace std;
int main(){
	string str,temp;
	int i;
	set<string>st;
	cin >> str;
	for(i=0;i<str.size()-1;i++){
		temp=str[i];
		temp+=str[i+1];
		st.insert(temp);
	}
	cout << st.size()<<endl;
}
