/*
 * Created : 2020-01-01 09:41:09
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
	int a[3],b[3];
	cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2];
	int alice=0,bob=0;
		if(a[0]>b[0])alice++;
		if(a[0]<b[0])bob++;
		if(a[1]>b[1])alice++;
		if(a[1]<b[1])bob++;
		if(a[2]>b[2])alice++;
		if(a[2]<b[2])bob++;
	cout<<alice<<" "<<bob;	
	return 0;
}

