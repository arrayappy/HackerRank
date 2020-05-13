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
int main() {
  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  int n, c = 0;
  cin >> n;
  int ar[n];
  for (int i = 0; i < n; i++) {
    cin >> ar[i];
  }
  sort(ar, ar + n);
  for (int i=n;i>0;i--) {
    if (ar[i] == ar[i-1]){
      c++;
    }
	else {
      break;
    }
  }
  cout << c;
  return 0;
}
