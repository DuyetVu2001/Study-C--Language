#include <bits/stdc++.h>

using namespace std;
int tiendien(int n)
	{
		float  k ;
		if(n<=50) k = n * 1678;
		else if(n<=100) k = 50*1678 + (n-50)*1734;
		else if(n<=200) k = 50*1678 + 50*1734 + (n-100)*2014;
		else if(n<=300) k = 50*1678 + 50*1734 + 100*2014 + (n-200)*2536;
		else if(n<=400) k = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (n-300)*2834;
		else k = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (n-400)*2927;
		return k ;
	}
void nhap(char hodem[1000][50],char ten[1000][10] ,int K[] ,int T[],int n)
{
	cout<<"Nhap vao lan luot thong tin su dung dien cua tung ho gia dinh :"<<endl;
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"Gia dinh thu "<<i+1<<" :"<<endl;
		cout<<"+ Ho Dem  : ";
		fflush(stdin);
		gets(hodem[i]);
		cout<<"+ Ten : ";
		fflush(stdin);
		gets(ten[i]);
		cout<<"+So kwh : : ";
		cin>>K[i];
		T[i] = tiendien(K[i]);
	}
}
void danhsach(char hodem[1000][50],char ten[1000][10] ,int K[] ,int T[],int n)
{
	int i;
	cout<<setw(5)<<"STT"<<setw(20)<<"Ho dem"<<setw(20)<<"Ten"<<setw(30)<<"Dien tieu thu(kWh)"<<setw(20)<<"Tien phai tra"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<setw(5)<<i+1<<setw(20)<<hodem[i]<<setw(20)<<ten[i]<<setw(30)<<K[i]<<setw(20)<<T[i]<<endl;
	}
}
void tongtien(int T[], int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum = sum + T[i];
	}
	cout<<"Tong tien phai tra cua tat ca cac ho gia dinh la : "<<sum;
}
void sapxep(char hodem[1000][50],char ten[1000][10] ,int K[] ,int T[],int n)
{
	int tg;
	char temp[50];
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(strcmp(ten[i],ten[j])>0)
			{
				strcpy(temp,ten[i]);
				strcpy(ten[i],ten[j]);
				strcpy(ten[j],temp);
				strcpy(temp,hodem[i]);
				strcpy(hodem[i],hodem[j]);
				strcpy(hodem[j],temp);
				tg = K[i];
				K[i] = K[j];
				K[j] = tg;
				tg = T[i];
				T[i] = T[j];
				T[j] = tg;
			}
		}
	}
	cout<<"Danh sach sau khi da sap xep :"<<endl;
	danhsach(hodem,ten,K,T,n);
}
void Max(char hodem[1000][50],char ten[1000][10] ,int K[] ,int T[],int n)
{	int j=1;
	int max = K[0];
	for(int i=1;i<n;i++)
	{
		if(max<K[i])
		max = K[i];
	}
	cout<<"Danh sach ho gia dinh dung dien nhieu nhat la :"<<endl;
	cout<<setw(5)<<"STT"<<setw(20)<<"Ho dem"<<setw(20)<<"Ten"<<setw(30)<<"Dien tieu thu(kWh)"<<setw(20)<<"Tien phai tra"<<endl;
	for(int i=0;i<n;i++)
	{
		if(K[i] == max)
			{
				cout<<setw(5)<<j<<setw(20)<<hodem[i]<<setw(20)<<ten[i]<<setw(30)<<K[i]<<setw(20)<<T[i]<<endl;
				j++;
			}
		}
}
void hienthi(char hodem[1000][50],char ten[1000][10] ,int K[] ,int T[],int n)
{
	int j=1;
	cout<<"Danh sach ho gia dinh co ten bat dau bang chu 'L' la :"<<endl;
	cout<<setw(5)<<"STT"<<setw(20)<<"Ho dem"<<setw(20)<<"Ten"<<setw(30)<<"Dien tieu thu(kWh)"<<setw(20)<<"Tien phai tra"<<endl;
	for(int i=0;i<n;i++)
	{
		if(ten[i][0]=='L')
			{
				cout<<setw(5)<<j<<setw(20)<<hodem[i]<<setw(20)<<ten[i]<<setw(30)<<K[i]<<setw(20)<<T[i]<<endl;
				j++;
			}
		}
}
void chen(char hodem[1000][50],char ten[1000][10] ,int K[] ,int T[],int n)
{
	cout<<"Nhap vao lan luot thong tin cua ho gia dinh moi :"<<endl;
	char hodemM[50],tenM[10];
	int KM,TM;
	cout<<"+ Ho dem : ";
	fflush(stdin);
	gets(hodemM);
	cout<<"+ Ten : ";
	fflush(stdin);
	gets(tenM);
	cout<<" So kwh : ";
	cin>>KM;
	TM = tiendien(KM);
	int i;
	for(i=n;i>=2;i--)
	{
		strcpy(ten[i],ten[i-1]);
		strcpy(hodem[i],hodem[i-1]);
		K[i] = K[i-1];
		T[i] = T[i-1];
	}
	strcpy(ten[1],tenM);
	strcpy(hodem[1],hodemM);
	K[1] = KM;
	T[1] = TM;
	cout<<"Danh sach sau khi da sap xep :"<<endl;
	cout<<setw(5)<<"STT"<<setw(20)<<"Ho dem"<<setw(20)<<"Ten"<<setw(30)<<"Dien tieu thu(kWh)"<<setw(20)<<"Tien phai tra"<<endl;
	for(i=0;i<n+1;i++)
	{
		cout<<setw(5)<<i+1<<setw(20)<<hodem[i]<<setw(20)<<ten[i]<<setw(30)<<K[i]<<setw(20)<<T[i]<<endl;
	}
}
int main()
{
	int i,n;
	cout<<"Nhap vao so ho gia dinh : ";
	cin>>n;
	char hodem[1000][50],ten[1000][10];
	int K[n],T[n];
	nhap(hodem,ten,K,T,n);
	char letter;
	cout<<"*********************MENU***********************"<<endl;
	cout<<"========================================================"<<endl;
	cout<<" Bam phim 1 de Hien thi danh sach n ho gia dinh "<<endl;
	cout<<" Bam phim 2 de Tinh tong tien phai tra cua tat ca cac ho gia dinh va hien thi ket qua "<<endl;
	cout<<" Bam phim 3 de Sap xep danh sach theo ten voi thu tu tu dien va hien thi ket qua "<<endl;
	cout<<" Bam phim 4 de Hien thi danh sach nhung ho gia dinh su dung dien nhieu nhat  "<<endl;
	cout<<" Bam phim 5 de Hien thi danh sach nhung ho gia dinh co len bat dau bang chu 'L'  "<<endl;
	cout<<" Bam phim 6 de Nhap thong tin mot ho gia dinh moi vao STT thu 2 va hien thi ket qua "<<endl;
	cin>>letter;
	switch(letter)
	{
		case '1' : cout<<"Danh sach vua nhap la : "<<endl;
			danhsach(hodem,ten,K,T,n) ; break;
		case '2' : tongtien(T,n) ; break;
		case '3' : sapxep(hodem,ten,K,T,n) ; break;
		case '4' : Max(hodem,ten,K,T,n) ; break;
		case '5' : hienthi(hodem,ten,K,T,n) ; break;
		case '6' : chen(hodem,ten,K,T,n) ; break;
	}
	return 0;
}
















