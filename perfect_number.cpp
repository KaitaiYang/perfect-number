#include <iostream>
using namespace std;

int IsPerfect(int number) {
	int i = 1;
	int sum = 0;

	while(i < number / 2 + 1) {
		if(number%i == 0) {
			sum += i;
		}
		i++;
	}

	if(sum == number) {
		return 1;
	} else {
		return 0;
	}
}

void factor(int number) {
	int i = 1;

	while(i < number / 2 + 1) {
		if(number%i == 0 && i < number / 2) {
			cout<<i<<" + ";
		} else if(number%i == 0) {
			cout<<i;
		}
		i++;
	}
}

int main() {
	
	int n;

	cout<<"Please input an integer n: ";
	cin>>n;
	cout<<"Perfect number(s) between 2 and "<<n<<":"<<endl;
	for (int i = 1; i < n; i++) {
		if(IsPerfect(i)) {
			cout<<i<<" = ";
			factor(i);
			cout<<endl;
		}
	}

	return 0;
}