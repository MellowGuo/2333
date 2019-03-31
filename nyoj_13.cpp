//nyoj_13  fibonacci 
#include<iostream>
int main() {
	using namespace std;

	int n,m=1;
	cin >> m;
	while(m-->0) {
		cin >> n;
		if(n>=20) continue;
		int a[20]= {1,1};
		for(int i=2; i<20; i++) {
			a[i] = a[i-1] + a[i-2];
		}
		cout << a[n-1] <<endl;
	}
}
