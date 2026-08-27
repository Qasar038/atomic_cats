#include <iostream>
#include <fstream>
#include <clocale>
int main(){
	setlocale(LC_ALL, "ru_RU.UTF-8");
	int choise;
	std::string task;
	std::string line;
	while(true){
		std::cout<<"Выберите действие:\n"
			"1. Очистить задачи\n"
			"2. Добавить задачу\n"
			"3. Прочитать задачи\n"
			"4. Выйти\n";
		std::cin>>choise;
		switch(choise){
			case 1: {
				std::ofstream file("tasks.txt");
				file<<"";
				file.close();
				break;
			}
			case 2: {
				std::ofstream file("tasks.txt", std::ios::app);
				std::cin.ignore(1000, '\n'); 
				std::cin>>task;
				file<<task<<"\n";
				file.close();
				break;
			}
			case 3:	{
				std::ifstream file("tasks.txt");
				while(getline(file, line)){
					std::cout<<line<<"\n";
				}
				file.close();
				break;
			}
			case 4: {
				std::cout<<"До свидания!";
				return 0;
				break;
			}
			default: {
				std::cout<<"Неверный номер действия\n";
				break;
			}
		}
	}
	return 0;
}
