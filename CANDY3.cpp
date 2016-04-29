/*
shubhamkhara | Shubham Chaudhary
PROBLEM: CANDY3
DATE: 25-04-2016
*/
include <iostream>
#define ll long long
using namespace std;

int main() {
	
	ll t;
	cin>>t;
	while(t--){
		ll n, sum = 0;
		
		cin>>n;
		ll arr[n];
		for (ll i = 0; i < n; i++){
			cin>>arr[i];
			sum += arr[i]%n;
		}
		if(sum%n)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return 0;
}