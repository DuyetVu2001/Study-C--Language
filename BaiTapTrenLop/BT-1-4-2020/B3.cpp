#include <iostream>

using namespace std;

void baiToan3(){
	float diem;
	int d = 1;
	cout << "Nhap diem: ";
	cin >> diem;
	
	if(diem >= 8) cout << "Xep loai gioi.";
	else if(diem >= 7) cout << "Xep loai kha.";
	else if(diem >= 5) cout << "Xep loai trung binh.";
	else if(diem >= 3) cout << "Xep loai yeu.";
	else if(diem >= 0 || diem <= 3) cout << "Xep loai kem.";
	
}

int main(){
	baiToan3();
	return 0;
}


