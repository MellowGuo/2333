#include<iostream>
using namespace std;
int maxb(int n,int m);
int main() {
/*	int k = 100;
	int n,m;
	while(k--) {
		cin >> n >> m;
		if(n<=0||n>1E6||m<=0||m>1E9){
			continue;
		}
		double s = m;
		for(int i=1;i<=n;i++){
			cout << maxb(i,m) << ' '; 
			if(maxb(i,m)==1){
				s *= n;
			}
		}
		cout << s << endl;
	}
	return 0; */
	int a,b;
	cin >> a >> b;
	cout << maxb(a,b);
	
}
int maxb(int n,int m) {
	int t;
	if(n<m) {
		t = n;
		n = m;
		m = t;
	}
	while(n/m != 0){
		t = n%m;
		n = m;
		m = t;
	}
	return m;
}
