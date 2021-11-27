#include<bits/stdc++.h>
using namespace std ; 


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ios_base::sync_with_stdio(0); cin.tie(0);

	int t ; 
	cin >> t; 
	while(t--){
		long long n ; 
		cin >> n ;
	
		long long maxy = 1 ; 
	
		long long found = 2 ;

		for (int i = 2 ; i <= sqrt(n) ; i++){     // for optimization we are running the loop upto sqrt(n)
		long long count = 0 ;
			if(n % i == 0){
				long long div = n ; 
			
			 	while (div % i == 0){count++;div=div/i;}   // counting maximum length of sequence according to the conditon  
			
				if(count >= maxy) found = i ;  // saving the value of prime factor by which max length can be optained
				maxy = max(maxy,count) ;    // storing the max sequence 
			}

		}

		cout << maxy << "\n" ; 
		while (n % found == 0 && (n/found) % found == 0) {cout << found <<" "; n = n / found ;}  // printing the sequence
		cout << n ; // printing the last possible value of sequence 
		cout << "\n" ;

	}

}
