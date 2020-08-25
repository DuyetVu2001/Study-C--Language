#include <iostream>

using namespace std;

int student_input(){
	int n;
	do{
		cout << "Nhap vao so hoc sinh (nho hon 200): ";
		cin >> n;
	}while(n < 1 || n > 199);
}

void marks_input(float a[][4], int hs){
	for(int i = 0; i < hs; i++){
		cout << "\nNhap vao diem cua hoc sinh thu " << i + 1 << "."<< endl;
		
		cout << "Diem toan: ";
		cin >> a[i][1];
		cout << "Diem van: ";
		cin >> a[i][2];
		cout << "Diem anh: ";
		cin >> a[i][3];
		
		a[i][4] = (a[i][1] + a[i][2] + a[i][3]) / 3;
	}
}

void marks_output(float a[][4], int hs){
	cout << "\n\nDANH SANH DIEM.\n";
	for(int i = 0; i < hs; i++){
		cout << "\n\nHoc sinh thu " << i + 1 << ".";
		cout << "\nDiem toan: " << a[i][1];
		cout << "\nDiem van: " << a[i][2];
		cout << "\nDiem anh: " << a[i][3];
		cout << "\nDiem tb: " << a[i][4];
	}
}

void find_maxAverage(float a[][4], int hs){
	float max = a[0][4];
	cout << "\nDIEM TB CAO NHAT: ";
	for(int i = 1; i < hs; i++){
		if(max < a[i][4]){
			max = a[i][4];
		}
	}
	cout << max;
}

void average_output(float a[][4], int hs){
	float tong = 0, tb = 0;
	cout << "\nDIEM TB VA TB CHUNG.\n\n";
	for(int i = 0; i < hs; i++){
		cout << "Diem trung binh cua hoc sinh " << i + 1 << " la: " << a[i][4] << endl;
		tong += a[i][4];
	}
	tb = tong / hs;
	cout << "Diem trung binh chung cua cac mon la: " << tb << endl;
}

void swap(float &a, float &b){
	float tmp = a;
	a = b;
	b = tmp;
}

void sort_average(float a[][4], int hs){
	cout << "\nSAP XEP DIEM TB THEO CHIEU GIAM DAN.\n\n";
	for(int i = 0; i < hs-1; i++){
		if(a[i][4] < a[i+1][4]){
			swap(a[i][4], a[i+1][4]);
		}
	}
	for(int i = 0; i < hs; i++){
		cout << "Hoc sinh thu " << i + 1 << ": " << a[i][4] << endl;
	}
}

int main(){
	int hs = student_input();
	int chon = 0;
	float a[hs][4];//Mang diem. cot 1,2,3 diem toan, van, anh. cot diem tb
	
	marks_input(a, hs);
	
	do{
		cout << "\n\n======MENU======\n";
		cout << "Ban chon: ";
		cin >> chon;
		switch(chon){
			case 0:{
				
				break;
			}
			case 1:{
				marks_output(a, hs);
				break;
			}
			case 2:{
				find_maxAverage(a, hs);
				break;
			}
			case 3:{
				average_output(a, hs);
				break;
			}
			case 4:{
				sort_average(a, hs);
				break;
			}
			default:{
				cout << "Sai gia tri! Vui long chon lai.";
				break;
			}
		}
	}while(chon);
	return 0;
}









