#include <iostream>
#include <cmath>
using namespace std;

class A{
	int data;
public:
	A(){
		this->data = 100;
	}
	friend class B;
};

class B{
	public:
		void showA(A);
		void setA(A&);
};
void B::showA(A a){
	cout << a.data << endl;
}

void B::setA(A &a){
	a.data = 113;
}

int main(){
	A a;	
	B b;
	
	b.showA(a);//Hien thi du lieu goc cua ham tao A
	b.setA(a);
	b.showA(a);//Su lieu sau khi class B thay doi
	return 0;
}


