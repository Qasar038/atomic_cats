/*
 * Автор: Qasar038
 * Проект: Сортировка строк по длине
 * Описание: Простая программа, которая сортирует строки по длине
*/
#include <string>
#include <iostream>
using namespace std;
void sort()
{
	string a;
	string b;
	string c;
	cin>>a;
	cin>>b;
	cin>>c;
	int aa = a.size();
	int bb = b.size();
	int cc = c.size();
	cout<<a<<", "<<b<<", "<<c<<"\n";
	if(aa<bb)
	{
		swap(a, b);
		swap(aa, bb);
	}
	if(aa<cc)
	{
		swap(a, c);
		swap(aa, cc);
	}
	if(bb<cc)
	{
		swap(b, c);
		swap(bb, cc);
	}
	cout<<a<<", "<<b<<", "<<c<<"\n";
	return;
}
int main()
{
	sort();
}
