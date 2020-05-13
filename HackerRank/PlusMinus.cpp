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
	int n,pos=0,neg=0,zero=0;
	float a,b,c;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>0)
			pos++;
		if(arr[i]<0)
			neg++;
		if(arr[i]==0)
			zero++;
	}
	a=pos/n;
	b=neg/n;
	c=zero/n;
	cout<<fixed<<setprecision(6)<<a<<endl;
	cout<<fixed<<setprecision(6)<<b<<endl;
	cout<<fixed<<setprecision(6)<<c<<endl;
	return 0;
}

