#include<iostream>
int pwr3(int n);
int main() {
	using namespace std;

	int n=1,s,x;
	int a[3];
	while(n!=0) {
		cin >> n;
		if(n>=1000 || n<100) continue;
		x = n;
		s = 0;
		for(int i=0; i<3; i++) {
			a[i]= x % 10;
			x /= 10;
			s += pwr3(a[i]);
//			cout << a[i] << ' ' << pwr3(a[i]) << endl;
		}
		if(s == n) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}
int pwr3(int n) {
	n = n*n*n;
	return n;
}
