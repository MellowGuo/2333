#include<iostream>
using namespace std;
int main() {
	int n,m,s;
		cin >> n >> m >> s;		//输入第一行
	int d[n][n] = {};
	int x,y,z,k=0;
	int t[s] = {};
	for(int i=m; i>0; i--
	) {
		cin >> x >> y >> z;
		d[x][y] = z;
		d[y][x] = z;
	//	cout << i;
	}
//	cout << endl;
	for(int i=s; i>0; i--) {
		cin >> x >> y >> z;
		d[x][y] = -z;
		d[y][x] = -z;			//矩阵存储两点间已修和维修的路（未修为负）
		t[0] = z;
	//	cout << i;
	}
	int i,j;
	int lk = k;
	for(i=1; i<=n; i++) {
		for(j=1; j<=n; j++) {
			if(d[i][j] < 0) {		//如果点i和点j之间有待修的路则存为方案（t）1
				t[k]=t[k] < -d[i][j]?t[k]:-d[i][j];	//更新方案t的值是i循环内最小的
		//		cout << t[k];
				k++;
			}
			if(d[i][j] > 0) {		//如果点i和点j之间有路则退出
				if(k > lk) {
					k--;
					t[k] = 0;
				}
				break;
			}
		}
		lk = k;
	}
	int mint=t[0];
	for(i=0; i<s; i++) {
		//	cout << t[i];
		if(t[i]!=0) {
			mint = mint < t[i]?mint:t[i];
		}
	}
	if(t[0] == 0) {
		cout << "Concubines can't do it. " << endl;//如果点i和点j之间没有任何路则输出
	} else {
		cout << mint << endl;
	}
	return 0;
}
