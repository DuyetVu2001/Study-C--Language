#include <iostream>
#include <cmath>

using namespace std;

int n_input(){
	int n;
	do{
		cout << "Nhap n nguyen duong la so cot: ";
		cin >> n;
	}while(n < 1);
	return n;
}

int m_input(){
	int m;
	do{
		cout << "Nhap m nguyen duong la so hang: ";
		cin >> m;
	}while(m < 1);
	return m;
}

void matrix_input(int a[][50], int m, int n){
	cout << "Nhap va ma tran a: \n";
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << "Nhap a[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> a[i][j];
		}
	}	
}

void matrix_output(int a[][50], int m, int n){
	cout << "Ma tran a: \n";
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << "  " <<a[i][j];
		}
		cout << endl;
	}
}

void find_max(int a[][50], int m, int n){
	
	int max = a[0][0];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(max < a[i][j]){
				max = a[i][j];
			}
		}
	}
	cout << "\nPhan tu lon nhat cua ma tran la: " << max << endl;
}

void find_maxLine(int a[][50], int m , int n){
	int max = a[0][0];
	for(int i = 0; i < m; i++){	 
		for(int j = 0; j < n; j++){
			if(max < a[i][j]){
				max = a[i][j];
			}
		}
		cout << "\nPhan tu lon nhat cua dong " << i + 1 << " la: " << max << endl;
	}
}

int main(){
	int a[50][50], m = 0, n = 0, chon = 0;
	m = m_input();
	n = n_input();
	matrix_input(a, m, n);

	do{
		cout << "\n\n======MENU======\n\n";
		cout << "Bam 1: hien thi ma tran A.\n";
		cout << "Bam 2: tim phan tu lon nhat cua ma tran.\n";
		cout << "Bam 3: tim phan tu lon nhat tren dong cua ma tran.\n";
		cout << "Bam 0: thoat chuong trinh.\n";
		cout << "Ban chon: ";
		cin >> chon;
		switch(chon){
			case 0:{
				
				break;
			}
			case 1:{
				matrix_output(a, m, n);
				break;
			}
			case 2:{
				find_max(a, m ,n);
				break;
			}
			case 3:{
				find_maxLine(a, m, n);
				break;
			}
			default:{
				cout << "Sai gia tri! Vui long chon lai.";
				break;
			}
		}
	}while(chon);
	return 0;
}






