/*
shubhamkhara | Shubham Chaudhary
PROBLEM: EIGHTS
DATE: 25-04-2016
*/
#include <iostream>
#define ll long long
using namespace std;

int main() {
	
	ll t;
	cin>>t;
	while(t--){
		ll n, a, ans;
		cin>>n;
		
		if (n%2==0){
			a = 4;
			n /= 2;
			n -= 1;
			ans = a + n*5;
			ans = ans*100 + 42;
		}
		else{
			a = 1;
			n += 1;
			n /= 2;
			n -= 1;
			ans = a + n*5;
			ans = ans*100 + 92;
		}
		cout<<ans<<endl;
	}
	return 0;
}