#include<iostream>
#include<math.h>
#define N 100

using namespace std;

void input(int a[N][N], int n, int m);
void output(int a[N][N], int n, int m);
void ham_chan(int a[N][N], int n, int m);
int find_sum(int a[N][N], int n, int m);
int find_max(int a[N][N], int n, int m);

int main(){
	int a[N][N];
	int n, m;
	cout << "Nhap vao lan luot gia tri so hang va so cot: " << endl;
	cin >> n >> m;
	cout << "Nhap ma tran: \n"; input(a, n, m);
	cout << "Ma tran vua nhap: \n"; output(a, n, m);
	cout << "In ra nhung hang chan: \n"; ham_chan(a, n, m);
	int sum = find_sum(a, n, m);
	int max = find_max(a, n, m);
	cout << "Tong gia tri pt tren cac ham chan: " << sum << endl; 
	cout << "Gia tri lon nhat tren cot 1 cua ma tran: " << max << endl; 
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
void ham_chan(int a[N][N], int n, int m){
	for(int i = 0; i < n; i++){
		if((i+1) % 2 == 0){
			for(int j = 0; j < m; j++){
				cout << a[i][j];
				cout << "\t";
			}
		}
		cout << endl;
	}
}
int find_sum(int a[N][N], int n, int m){
	int sum = 0;
	for(int i = 0; i < n; i++){
		if((i+1) % 2 == 0){
			for(int j = 0; j < m; j++){
			sum += a[i][j];
			}
		}
	}
	return sum;
}
int find_max(int a[N][N], int n, int m){
	int max = a[0][0];
	for(int i = 1; i < n; i++){
		if(max < a[i][0])
			max = a[i][0];
	}
	return max;
}
















