#include<iostream>
#include<math.h>
#define N 100

using namespace std;

void input(int a[N][N], int n, int m);
void output(int a[N][N], int n, int m);
void xoa_dong(int a[N][N], int n, int m, int x);

int main(){
	int a[N][N];
	int n, m, x;
	cout << "Nhap vao lan luot gia tri so hang va so cot: " << endl;
	cin >> n >> m;
	cout << "Nhap ma tran: \n"; input(a, n, m);
	cout << "Ma tran vua nhap: \n"; output(a, n, m);
	cout << "Nhap dong can xoa: "; cin >> x; 
	
	cout << "Ma tran sau khi xoa dong " << x << " la:\n"; xoa_dong(a, n, m, x);
	return 0;
}
void input(int a[N][N], int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}
void output(int a[N][N], int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << a[i][j];
			cout << "\t";
		}
		cout << endl;
	}
}
void xoa_dong(int a[N][N], int n, int m, int x){
	for(int i = 0; i < n; i++){
		if(i == (x-1)) break;
		else{
			for(int j = 0; j < m; j++){
			cout << a[i][j];
			cout << "\t";
		}
		}
		cout << endl;
	}
}

