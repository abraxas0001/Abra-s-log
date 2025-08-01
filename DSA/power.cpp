#include<iostream>
using namespace std;
bool isPowerofThree(int n){
    if(n==0)
    return false;
    while(n%3==0)
    n/=3;
    return (n==1);
  }
int main(){
    int n;
    
    while(cin>>n){
     if(isPowerofThree(n))
        cout << n << " is a power of 3" << endl;
    else
        cout << n << " is NOT a power of 3" << endl;
    }

    return 0;
}
    
