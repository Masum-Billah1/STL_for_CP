#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int>mp;
    int i;
    mp["Masum"] = 18;
    mp["Ankar"] = 9;
    mp["Srity"] = 47;
    mp["Aminul"] = 29;
    mp["Zahid"] = 44;
    cout << mp.size()<<endl;
    for(auto it:mp){
        cout <<it.first<<' '<<it.second<<endl;
    }
}
