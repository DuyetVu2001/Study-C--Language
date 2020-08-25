#include <iostream>
using namespace std;

template<class T> class Data
{
	private:
		T* data;
		size_t n;
	public:
		Data(T *data, size_t n);
		void showData();
		void copyData(T *data, size_t n);
};

template<class T> Data<T>::Data(T *data, size_t n){
	this->data = new T[n];
	this->n = n;
	copyData(data, n);
}

template<class T> void Data<T>::showData(){
	for(size_t i = 0; i < n; i++){
		cout << this->data[i] << "  ";
	}
	cout << endl;
}

template<class T> void Data<T>::copyData(T *data, size_t n){
	for(size_t i = 0; i < n; i++){
		this->data[i] = data[i];
	}
}

int main(){
	int a[] = {1, 2, 3, 4, 5};
	char b[] = "Hoang biu";
	double c[] = {1.2, 3.2, 3.4, 2.23, 123.3};
	Data<int> data1(a, sizeof(a) / sizeof(int));
	Data<char> data2(b, sizeof(b) / sizeof(char));
	Data<double> data3(c, sizeof(c) / sizeof(double));
	data1.showData();
	data2.showData();
	data3.showData();
	
	return 0;
}






