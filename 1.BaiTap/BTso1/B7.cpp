#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float r, c, s;
	cout << "Nhap vao ban kinh hinh tron: ";
	cin >> r;
	
	c = 2 * M_PI * r;
	s = M_PI * r * r;
	
	cout << "\nChu vi hinh chu tron la: " << c;
	cout << "\n Dien tich hinh tron la: " << s;
	return 0;
}


