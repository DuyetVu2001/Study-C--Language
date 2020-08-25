#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;


void dem_chu_thuong(char *a);
void xoa_a(char *a);
void dem_tu(char *a);
void in_tren_dong(char *a);


int main(){
	char a[100];
	cout << "Nhap chuoi: ";
	fgets(a, 99, stdin);
	int chon = 0;
	do{
		cout << "\n\n=======MENU=======\n";
		cout << "Bam 1: Dem chu cai thuong.\n";
		cout << "Bam 2: Xoa moi ki tu 'a'.\n";
		cout << "Bam 3: Dem so tu cua mang.\n";
		cout << "Bam 4: Hien thi tren tung dong.\n";
		cout << "Ban chon: ";
		cin >> chon;
		switch(chon){
			case 0:{
				
				break;
			}
			case 1:{
				dem_chu_thuong(a);
				break;
			}
			case 2:{
				xoa_a(a);
				break;
			}
			case 3:{
				dem_tu(a);
				break;
			}
			case 4:{
				in_tren_dong(a);
				break;
			}
		}
	}while(chon);
	return 0;
}

void dem_chu_thuong(char *a){
	int dem = 0;
	for(int i = 0; a[i] != '\0'; i++){
		if(a[i] > 96 && a[i] < 143){// tron bang ma ascii ki tu 97 -> 142 la chu thuong
			dem++;
		}
	}
	cout << "\nSo chu cai thuong la: " << dem;
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
void dem_tu(char *a){
	int dem = 0;
	for(int i = 0; a[i] != '\0'; i++){
		if(a[i] != ' '){
			dem++;
		}
	}
	dem--;
	cout << "\nSo tu trong chuoi la: " << dem;
}
void in_tren_dong(char *a){
	cout << "\nHIEN THI TREN DONG: \n";
	for(int i = 0; a[i] != '\0'; i++){
		cout << a[i];
		if(a[i] == ' '){
			cout << endl;
		}
	}
}

