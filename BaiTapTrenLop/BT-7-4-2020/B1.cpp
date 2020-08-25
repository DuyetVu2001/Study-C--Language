#include <iostream>
#include <cmath>

using namespace std;

int input_n(){
	int n;
	do{
		cout << "Nhap so luong phan tu cua mang (n > 1): ";
		cin >> n;
	}while(n < 2);
	return n;
}

void array_input(float *a, int n){
	for(int i = 0; i < n; i++){
		cout << "Nhap a[" << i + 1 << "]: ";
		cin >> a[i];
	}
}

void swap(float &a, float &b){
	float tmp = a;
	a = b;
	b = tmp;
}

void check_sort(float *a, int n){
	int k = 1;
	for(int i = 0; i < n - 1; i++){
		k = 1;
		if(a[i] < a[i+1]){
			k = 1;	
		}		
		else{
			k = 0;
			break;
		}
	}
	if(k == 1){
		cout << "Day tang ngat.";
		exit(0);
	}
	
	for(int i = 0; i < n - 1; i++){
		k = 1;
		if(a[i] > a[i+1]){
			k = 1;	
		}		
		else{
			k = 0;
			break;
		}
	}
	if(k == 1){
		cout << "Day giam ngat.";
		exit(0);
	}
	
	for(int i = 0; i < n - 1; i++){
		k = 1;
		if(a[i] <= a[i+1]){
			k = 1;	
		}		
		else{
			k = 0;
			break;
		}
	}
	if(k == 1){
		cout << "Day tang.";
		exit(0);
	}
	
	for(int i = 0; i < n - 1; i++){
		k = 1;
		if(a[i] >= a[i+1]){
			k = 1;	
		}		
		else{
			k = 0;
			break;
		}
	}
	if(k == 1){
		cout << "Day giam.";
		exit(0);
	}
	
	if(k == 0){
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] >= a[j]){
					swap(a[i], a[j]);
				}
			}
		}
		cout << "\nDay chua duoc sap xep. Sap xep lai theo chieu tang dan:\n";
		for(int i = 0; i < n; i++){
			cout << a[i] << endl;
		}
	}
}

int main(){
	float a[1000];
	int n = 0;
	n = input_n();
	array_input(a, n);
	check_sort(a, n);
	return 0;
}
