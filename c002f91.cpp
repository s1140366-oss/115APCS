#include <iostream> //AC c575 二分搜 c002 b967 a867
#define fast_as_a_fuckboy ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int f91(int x){
  if(x <= 100){
    return f91(f91(x+11));
  }
  else{
    return x - 10;
  }
}

int main(){
  fast_as_a_fuckboy; 
  int n;
  while(cin >> n && n != 0){
    cout << "f91(" << n << ") = " << f91(n) << "\n";
  }
}
