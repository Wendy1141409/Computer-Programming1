// do-while version
#include <iostream>
using namespace std;
int main() {
	int  n;
	cout << "Please input an integer for listing all the primes less than the integer:";
	cin >> n;
	cout << "Primes less than " << n << " are ";
	int i = 2;
	if (n > 2) {
		do {
			int j = 2;
			bool isprime = true;
			do {
				if (j * j > i)
					break;
				if (i % j == 0) {
					isprime = false;
					break;
				}
				j++;
			} while (true);
			if(isprime)
				cout << i << " ";
			i++;
		} while (i < n);
	}
	cout << endl;
	return 0;
}
