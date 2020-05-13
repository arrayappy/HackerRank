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
    long long int n,sum=0;
    long long int ar[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
    	sum=sum+ar[i];
	}
    cout<<sum;
    return 0;
}

