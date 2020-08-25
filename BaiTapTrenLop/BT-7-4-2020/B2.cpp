#include <iostream>
#include <cmath>

using namespace std;

void swap(int &a , int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

void arrayA_input(int *a, int m){
	for(int i = 0; i < m; i++){
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void arrayB_input(int *b, int n){
	for(int i = 0; i < n; i++){
		cout << "Nhap b[" << i << "]: ";
		cin >> b[i];
	}
}

void mix_array(int *a, int *b, int *c, int m, int n){
	for(int i = 0; i < m; i++){
		c[i] = a[i];
	}
	
		for(int i = 0; i < n; i++){
		c[m+i] = b[i];
	}	
}

void sortC_output(int *c, int m, int n){
	for(int i = 0; i < m+n - 1; i++){
		for(int j = i+1; j < m+n; j++){
			if(c[i] >= c[j]){
			swap(c[i], c[j]);
		}
		}
	}
	cout << "Mang moi: \n";
	for(int i = 0; i < m+n; i++){
		cout << c[i] << endl;
	}
}

int main(){
	int a[100], b[100], c[200], m, n;
	cout << "Nhap vao so phan tu cua mang a: ";
	cin >> m;
	arrayA_input(a, m);
	cout << "Nhap vao so phan tu cua mang b: ";
	cin >> n;
	arrayB_input(b, n);	
	mix_array(a, b, c, m, n);
	sortC_output(c, m, n);
	return 0;
}


