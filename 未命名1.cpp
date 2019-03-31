#include<iostream>
#include<string>
using namespace std;  
int main() {
	int t;
	while(1) {
		cin >> t;
		if(t<0 || t>10) {
			continue;
		} else {
			break;
		}
	}
	char a[1E6];
	while(t--) {
		cin >> a[t];
		b[t] = x16(a[t]);
		cout << b[t] << endl;
	}
	return 0;
}

