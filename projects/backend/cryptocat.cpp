#include <random>
#include <iostream>
using namespace std;
void printHeader(){
	cout<<"==============\n"
	      "  Crypto Cat\n"
	      "==============\n\n";
	return;
}
int main(){
	printHeader();
	int passlong;
	do{
		cout<<"Введите длину пароля: ";
		cin>>passlong;
		if(passlong<1){
			cout<<"Неправильная длина пароля.\n";
		}
	}while(passlong<1);
	cout<<"\n";
	int password[passlong];
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(0,9);
	for(int i=0;i<passlong;i++){
		int symbol=dist(gen);
		password[i]=symbol;
	}
	cout<<"Ваш пароль: ";
	for(int i=0;i<passlong;i++){
		cout<<password[i];
	}
	return 0;
}
