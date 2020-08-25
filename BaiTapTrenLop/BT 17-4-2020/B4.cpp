#include <iostream>
#include <cmath>

using namespace std;

void tu_ngan_nhat(string a){
	int dem = 1, min = a.length(), index = 0, j;
	for(int i = 0; i < a.length(); i++){
		dem = 1;
		j = i;
		for(; i < a.length() - 1; i++){
			if(a[i] != ' ' && a[i+1] != ' '){
				dem++;
			}
			else{
				i++;
				break;
			}
		}
		if(min > dem){
			min = dem;
			index = j;
		}
	}
	for(int i = index;i < index + min; i++){
		cout << a[i];
	}	
}

void kt_doi_xung(string a){
	int n = a.length(), kt = 1;
	for(int i = 0; i < a.length()/2; i++){
		if(a[i] != a[n-1-i]){
			kt = 0;
		}
	}
	if(kt == 1){
		cout << "\nChuoi b co doi xung." << endl;
	}
	else{
		cout << "\nChuoi b khong doi xung.";
	}
}
int main(){
	string a, b;
	cout << "Nhap xau a: ";
	getline(cin, a);
	cout << "Nhap xau b: ";
	getline(cin, b);
	cout << "Hien thi xau a: " << a << endl;
	cout << "Hien thi xau b: " << b << endl;
	cout << "Tu ngan nhat cua mang a la: ";
	tu_ngan_nhat(a);
	cout << "\nTu ngan nhat cua mang b la: ";
	tu_ngan_nhat(b);
	kt_doi_xung(b);
	return 0;
}


