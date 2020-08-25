#include<iostream>
#include<math.h>
#define N 100

using namespace std;

void input(int a[N][N], int n, int m);
void output(int a[N][N], int n, int m);
void swap(int *a, int *b);
void sort(int a[N][N], int n, int m);

int main(){
	int a[N][N];
	int n, m;
	cout << "Nhap vao lan luot gia tri so hang va so cot: " << endl;
	cin >> n >> m;
	cout << "Nhap ma tran: \n"; input(a, n, m);
	cout << "Ma tran vua nhap: \n"; output(a, n, m);
	sort(a, n, m);
	cout << "Ma tran sau khi sap xep dong 2: \n"; output(a, n, m);
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
void sort(int a[N][N], int n, int m){
	for(int j = 0; j < m; j++){
		for(int i = j; i < m; i++){
			if(a[1][j] < a[1][i]){
				swap(a[1][j], a[1][i]);
			}
		}
		
	}
}

