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
    int i, j, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
       for(j=i; j<n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("#");
        }
    printf("\n");
    }  
    return 0;
}
