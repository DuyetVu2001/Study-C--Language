#include <iostream>
#include <string>
using namespace std;

class Calculator{
public:
	int sum(int a, int b){
		return a + b;
	}
	int sum(int a, float b){
		return a + b;
	}
	float sum(float a, float b){
		return a + b;
	}
	long sum(long a, long b){
		return a + b;
	}
	int sum(int *a, size_t n){
		int s = 0;
		for(int i = 0; i < n; i++){
			s += a[i];
		}
		return s;
	}
};

int main(){
	Calculator c;
	int a[] = {1, 2, 3};
	cout << c.sum(10, 5) << endl;
	cout << c.sum(2.5f, 3.4f) << endl;
	cout << c.sum(a, 3);
	return 0;
}


