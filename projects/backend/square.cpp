#include <iostream>
using namespace std;
int main(){
	int ScaleOfSquare;
	string a;
	string b;
	cout<<"Введите размер квадрата:"; cin>>ScaleOfSquare; cout<<"\n";
	for(int i=0;i<ScaleOfSquare;i++){
		a+='_';
		b+=' ';
	}
	cout<<"_"<<a<<"_\n"
		"|"<<b<<"|\n"
		"|"<<b<<"|\n"
	        "|"<<b<<"|\n"
		"|"<<a<<"|\n";
}
