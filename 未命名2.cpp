#include<iostream>
using namespace std;
int main() {
	int n,m,s;
		cin >> n >> m >> s;		//�����һ��
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
		d[y][x] = -z;			//����洢��������޺�ά�޵�·��δ��Ϊ����
		t[0] = z;
	//	cout << i;
	}
	int i,j;
	int lk = k;
	for(i=1; i<=n; i++) {
		for(j=1; j<=n; j++) {
			if(d[i][j] < 0) {		//�����i�͵�j֮���д��޵�·���Ϊ������t��1
				t[k]=t[k] < -d[i][j]?t[k]:-d[i][j];	//���·���t��ֵ��iѭ������С��
		//		cout << t[k];
				k++;
			}
			if(d[i][j] > 0) {		//�����i�͵�j֮����·���˳�
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
		cout << "Concubines can't do it. " << endl;//�����i�͵�j֮��û���κ�·�����
	} else {
		cout << mint << endl;
	}
	return 0;
}
