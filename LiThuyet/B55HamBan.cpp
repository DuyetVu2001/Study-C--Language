#include <iostream>
#include <cmath>
using namespace std;
class A;

class B{ // Muon truy cap A phai khai bao tren class A
	public:
		void showA(A);
};

class A{
	int data;
public:
	A(){
		data = 100;
	}
	void show();
	friend void setData(A &);
	friend void B::showA(A);
};

void A::show(){
	cout << this->data << endl;
}

void setData(A& a){
	a.data = 256;
}

void B::showA(A a){// Phai khai bao ben duoi class A
	cout << a.data;
}
int main(){
	A a;
	setData(a);
//	a.show();
	
	B a1;
	a1.showA(a);
	return 0;
}


