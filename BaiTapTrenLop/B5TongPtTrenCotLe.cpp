#include<iostream>
#include<math.h>
#define N 100

using namespace std;

void input(int a[N][N], int n, int m);
void output(int a[N][N], int n, int m);
int tong_pt_cot_le(int a[N][N], int n, int m);

int main(){
	int a[N][N];
	int n, m, x;
	cout << "Nhap vao lan luot gia tri so hang va so cot: " << endl;
	cin >> n >> m;
	cout << "Nhap ma tran: \n"; input(a, n, m);
	cout << "Ma tran vua nhap: \n"; output(a, n, m);
	int tong_le = tong_pt_cot_le(a, n, m);
	cout << "Tong phan tu tren cot le la: " << tong_le;
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
int tong_pt_cot_le(int a[N][N], int n, int m){
	int sum = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if((j+2) % 2 == 0){
				sum += a[i][j];
			}
		}
	}
	return sum;
}


