#include <iostream>

using namespace std;

void baiToan4(){
	float a, b;
	cout << "Co phuong trinh tong quat:\nax + b = 0\n";
	cout << "\nNhap vao lan luot he so a, b:";
	cin >> a >> b;	
	
	if(a == 0){
		if(b ==0) cout << "Phuong trinh vo so nghiem.";
		else cout << "Phuong trinh vo nghiem.";
	}
	else{
		cout << "Nghiem cua phuong trinh la: " << -b/a;
	}
}

int main(){
	baiToan4();
	return 0;
}


