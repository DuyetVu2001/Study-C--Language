#include <iostream>

using namespace std;

int main(){
	int a = 1, b = 2, c = 3, d = 4;
	int max = 0;
	
	cout << "Nhap vao lan luot a, b, c, d: \n";
	cin >> a >> b >> c >> d;
	
	if(max < a) max = a;
	if(max < b) max = b;
	if(max < c) max = c;
	if(max < d) max = d;
	
	if(a == b && b == c && c == d){
		cout << a << " " << b << " " << c << " " << d << " bang nhau." ;
	}
	else cout << "So lon nhat la: " << max;
	return 0;
}


