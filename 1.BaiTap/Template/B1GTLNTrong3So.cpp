#include <iostream>
#include <cmath>
using namespace std;

template <class A> A maxOf3Value(A a, A b, A c){
	return ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
}

int main(){
	cout << maxOf3Value<int>(5, 2, 4) << endl;
	cout << maxOf3Value<float>(5.3f, 5.9f, 100.32f) << endl;
	cout << maxOf3Value<char>('a', 'c', 'b') << endl;
	cout << maxOf3Value<long>(123123343, 3434, 34344);
	return 0;
}


