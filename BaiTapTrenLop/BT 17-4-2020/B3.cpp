#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void dem(string a){//Dem so khoang trang trong xau a
	int dem = 0;
	for(int i = 0; i < a.length(); i++){
		if(a[i] == ' ' || a[i] == '\t'){
			dem++;
		}
	}
	cout << "So ki tu khoang trang trong xau a la: " << dem << endl;
}

void tim(string a){// Tim ki tu nhap vao
	char c;
	cout << "Nhap vao ky tu can tim: ";
	c = getchar();
	int dem = 1, dem1 = 0;
	cout << "Chu cai " << c << " xuat hien o vi tri cac tu: ";
	for(int i = 0; i < a.length(); i++){
		if(a[i] != ' ' && a[i+1] == ' '){
			dem++;					
		}
		if(a[i] == c){
			cout << setw(5) << dem;
			dem1++;
		}
	}
	if(dem1 == 0){
		cout << "Rat tiec chu cai " << c << " khong co trong day!" << endl;
	}
}
int main(){
	string a;
	cout << "Nhap vao xau ki tu a: ";
	getline(cin, a);
	cout << "Xau vua nhap: " << a << endl;
	dem(a);
	tim(a);
	return 0;
}


