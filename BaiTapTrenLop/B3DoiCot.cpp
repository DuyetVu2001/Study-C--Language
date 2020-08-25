#include<iostream>
#include<math.h>
#define N 100

using namespace std;

void input(int a[N][N], int n, int m);
void output(int a[N][N], int n, int m);
void swap(int *a, int *b);
void doi_cho_cot(int a[N][N], int n, int m);

int main(){
	int a[N][N];
	int n, m;
	cout << "Nhap vao lan luot gia tri so hang va so cot: (m > 2 please!!)" << endl;
	cin >> n >> m;
	cout << "Nhap ma tran: \n"; input(a, n, m);
	cout << "Ma tran vua nhap: \n"; output(a, n, m);
	doi_cho_cot(a, n, m);
	cout << "Ma tran sau khi doi cho cot 2 cho 3: \n"; output(a, n, m);
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
void swap(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void doi_cho_cot(int a[N][N], int n, int m){
	for(int i = 0; i < n; i++){
		swap(a[i][1], a[i][2]);
	}
}















