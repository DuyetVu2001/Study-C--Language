#include <iostream>
#include <cmath>

using namespace std;

template <class T> T tbc(T *a , int n){
	float tong = 0;
	for(int i = 0; i < n; i++){
		tong += a[i];
	}
	return 1.0 * tong / n;
}

int main(){
	int a[] = {1, 2, 3, 4, 5};
	float b[] = {1.1, 1.2, 1.1343, 1.1244, 1.5};
	long c[] = {1000, 2000, 3000, 4000, 5000};
	cout << "TBC cua cac mang tren la: " << endl;
	cout << tbc<int>(a, sizeof(a) / sizeof(int)) << endl;
	cout << tbc<float>(b, 5) << endl;
	cout << tbc<long>(c, 5);
	return 0;
}


