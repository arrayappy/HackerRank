/*
 * Created : 2020-01-02 09:41:09
 * Author : Appala Naidu Gadu
 * Handle : arrayappy
 * Email : arrayappy@gmail.com
 * StopStalk : https://www.stopstalk.com/user/profile/arrayappy
 * Motto : Keep Calm and Code On.
 */
#include<bits/stdc++.h>
using namespace std;
bool check(string a,string b)
{
	return a.length()==b.length()?a>b:a.length()>b.length();
}
int main()
{   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin>>n;
    vector<string> ar;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        ar.push_back(s);
    }
    sort(ar.begin(),ar.end());
    for(int i=ar.size()-1;i>=0;i--)
    {
    	cout<<ar[i]<<endl;
	}
}
