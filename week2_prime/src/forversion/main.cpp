// for version
#include <iostream>
using namespace std;
int main() {
	int prime[100], n;
	cout << "Please input an integer for listing all the primes less than the integer:";
	cin >> n;
	cout << "Primes less than " << n << " are ";
	for (int i = 2;i < n;i++) {
		bool isprime = true;
		for (int j = 2;j * j <= i;j++) {
			if (i % j == 0) {
				isprime = false;
				break;
			}
		}
		if (isprime)
			cout << i << " ";
	}
	cout << endl;
	return 0;
}
