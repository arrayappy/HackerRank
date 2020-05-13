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
int main(){
    int a,b;
    while((scanf("%d %d",&a,&b)) == 2){
        int high = 0;
        int x = (a>b)?a:b;
        int y = (a<b)?a:b;
        for(int i = y; i <= x; i++){
        int n = i,count = 1;
            while(n > 1){
                if(n%2)n = 3*n+1;
                else n/=2;
                count++;
            }
            if(count >= high)high = count;
        }
        cout << a << " " << b << " " << high << endl;
    }
    return 0;
}
