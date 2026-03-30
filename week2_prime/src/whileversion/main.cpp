// while version
#include <iostream>
using namespace std;
int main() {
	int prime[100], n;
	cout << "Please input an integer for listing all the primes less than the integer:";
	cin >> n;
	cout << "Primes less than " << n << " are ";
	int i = 2;
	while(i<n){
		int j = 2;
		bool isprime = true;
		while (j * j <=i ) {
			if (i % j == 0) {
				isprime = false;
				break;
			}
			j++;
		}
		if (isprime)
			cout << i<<" ";
		i++;
	}
	cout << endl;
	return 0;
}
