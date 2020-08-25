#include <iostream>
#include <cmath>

using namespace std;

void baiToan2(){
	float x = 0, y = 0, z = 0, GTLN = 0, GTNN = 0;
	
	cout << "Nhap vao so thuc x: ";
	cin >> x;
	cout << "Nhap vao so thuc y: ";
	cin >> y;
	cout << "Nhap vao so thuc z: ";
	cin >> z;
	
	x < y ? (x < z ? GTNN = x : GTNN = z) : (y < z ? GTNN = y : GTNN = z);
	x > y ? (x > z ? GTLN = x : GTLN = z) : (y > z ? GTLN = y : GTLN = z);
	
	cout << "Gia tri nho nhat trong 3 so la: "	<< GTNN << endl;
	cout << "Gia tri lon nhat trong 3 so la: "	<< GTLN << endl;
}

int main(){
	baiToan2();
	return 0;
}


