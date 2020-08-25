	#include <iostream>
#include <string>
using namespace std;

void matrix_input(float A[][100], int m, int n);
void matrix_outut(float A[][100], int m, int n);
void find_min(float A[][100], int m, int n);
void find_max_on_column(float A[][100], int m, int n);
void find_max_sum_column(float A[][100], int m, int n);
void result_AxB(float A[][100], int m, int n);

int main(){
	float A[100][100];
	int m = 0, n = 0, chon = 0;
	cout << "Nhap vao hai so nguyen duong m, n: ";
	cin >> m >> n;
	matrix_input(A, m, n);
	if(m > 0 && n > 0){
		do{
			cout << "\n\n=======MENU=======\n";
			cout << "Bam 1: Hien thi ma tran A.\n";
			cout << "Bam 2: GTNN cua ma tran A.\n";
			cout << "Bam 3: GTLN tren cac cot cua ma tran A.\n";
			cout << "Bam 4: Tim cot co tong lon nhat.\n";
			cout << "Bam 5: Ket qua ma tran A x B.\n";
			cout << "Ban chon: ";
			cin >> chon;
			
			switch(chon){
				case 0:{
					
					break;
				}
				case 1:{
					matrix_outut(A, m, n);
					break;
				}
				case 2:{
					find_min(A, m, n);
					break;
				}
				case 3:{
					find_max_on_column(A, m , n);
					break;
				}
				case 4:{
					find_max_sum_column(A, m, n);
					break;
				}
				case 5:{
					result_AxB(A, m, n);
					break;
				}
				default:{
					cout << "\nSAI GIA TRI! VUI LONG CHON LAI.";
					break;
				}
			}
		}while(chon);
	}
	else{
		cout << "Sai gia tri m, n!";
	}
	return 0;
}

void matrix_input(float A[][100], int m, int n){
	cout << "Nhap vao ma tran A: \n";
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << "Nhap A[" << i+1 << "][" << j+1 << "]: ";
			cin >> A[i][j];
		}
	}
}

void matrix_outut(float A[][100], int m, int n){
	cout << "\n\nHIEN THI MA TRAN A:\n";
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << A[i][j] << "   ";
		}
		cout << endl;
	}
}

void find_min(float A[][100], int m, int n){	
	float min = A[0][0];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(min > A[i][j]){
				min = A[i][j];
			}
		}
	}
	cout << "\n\nGTNN CUA MA TRAN A LA: " << min << endl;
}

void find_max_on_column(float A[][100], int m, int n){
	float max = 0;
	for(int j = 0; j < n; j++){
		max = A[0][j];
		cout << "\nGTLN cua cot " << j+1 << " la: ";
		for(int i = 0; i < m; i++){
			if(max < A[i][j]){
				max = A[i][j];
			}
		}
		cout << max << endl;
	}
}

void find_max_sum_column(float A[][100], int m, int n){
	float sum = 0, maxSum = 0;
	int index = 0;
	for(int j = 0; j < n; j++){
		sum = 0;
		for(int i = 0; i < m; i++){
			sum +=A[i][j];
			}
		if(maxSum < sum){
			maxSum = sum;
			index = j;
		}
	}
	cout << "\n\nCot " << index+1 << " co tong cac phan tu lon nhat.\nSum = " << maxSum;
}
void result_AxB(float A[][100], int m, int n){
	float B[100][100], C[100][100];
	//Ma tran thuan nghich cua A
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			B[j][i] = A[i][j];
		}
	}
	//In ma tran A
	cout << "\nA x B: \n\n";
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << A[i][j] << "   ";
		}
		cout << endl;
	}
	cout << "\nX\n\n";
	//In ma tran B
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << B[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "\n=\n\n";
	//Nhan 2 ma tran
	for(int k = 0; k < m; k++){
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				C[k][i] += A[k][j] * B[j][i];
			}
		}
	}	
	//Ket qua AxB;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++){
			cout << C[i][j] << "  ";
		}
		cout << endl;
	}
}

