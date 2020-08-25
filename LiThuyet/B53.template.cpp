#include <iostream>
#include <cmath>
using namespace std;

template<class T> T findMax(T a, T b){
	return (a > b)? a : b;
}

template<class T>void show(T *a, size_t n){
	for(size_t i = 0; i < n; i++){
		cout << a[i] << "  ";
	}
	cout << endl;
}

int main(){
//	cout << findMax<char>('c', 'b') << endl;
//	cout << findMax<int>(20, 30) << endl;
//	cout << findMax<float>(23.2f, 23.4f) << endl;
	int a[5] = {1, 2, 4, 5, 6};
	char b[9] = "Thai dui";
	show(a, sizeof(a)/sizeof(int));
	show(b, sizeof(b)/sizeof(char));
	return 0;
}


