#include <iostream>
#include <string.h>
using namespace std;

void demChuThuong(char *a){
	int n = strlen(a) - 1;
	int dem = 0;
	for(int i = 0; i < n; i++){
	if(a[i] > 96 && a[i] < 143){// tron bang ma ascii ki tu 97 -> 142 la chu thuong
			dem++;
		}
	}
	cout << "So chu cai thuong la: " << dem << endl;;
}

void xoa_a(char *a){
	int n = strlen(a);
	for(int i = 0; i < n-1; i++){
		if(a[i] == 'a' && i == n - 1){
			n--;
		}
		else if(a[i] == 'a'){
			for(int j = i; j < n-1; j++){
				a[j] = a[j+1];
			}
			i--;
			n--;
		}
	}
	cout << "Chuoi sau khi xoa a: \n";
	for(int i = 0; i < n - 1; i++){
		cout << a[i];
	}
}

int main(){
	char a[100];
	cout << "Nhap vao xau ki tu a: ";
	fgets(a, 99, stdin);
	cout << "Xau vua nhap: " << a;
	demChuThuong(a);
	xoa_a(a);
	return 0;
}


