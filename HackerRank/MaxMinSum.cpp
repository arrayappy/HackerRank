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
int main()
{   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	long long int min=0,max=0;
	vector<int> arr;
	for(int i=0;i<5;i++)
	{	int a;cin>>a;
		arr.push_back(a);
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<5-1;i++)
	{
		min+=arr[i];
	}	
	for(int i=1;i<5;i++)
	{
		max+=arr[i];
	}
	cout<<min<<" "<<max;
	return 0;
}

