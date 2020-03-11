#include<iostream>
#include<Windows.h>
#include<math.h>
#include<ctime>
#include<string>
#include<conio.h>
#include<list>
#include<fstream>
using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

struct info {

	string name;
	string second_name;
	int age;
	string phone_number;
	string email;



};


int main() {
	setlocale(LC_CTYPE, "");
	srand(time(0));


	//fstream - універсальний
	//ofstream - запис данних
	//ifstream - читання з файлу


	//ofstream fout;
	//string fileName = "ITSTEP.txt";
	//fout.open(fileName, fstream::app);

	//bool is_open = fout.is_open();
	//if (is_open == false) {
	//	cout << "Error: file not open" << endl;
	//}
	//else {
	//	/*cout << "File open" << endl;
	//	fout << "Dima" << endl;
	//	fout << "Hladunov" << endl;
	//	fout << "dg646726@gmail.com" << endl;*/
	//	//fout << "Okey" << endl;
	//	string text;
	//	cout << "Enter name:";
	//	cin >> text;
	//	fout << text << endl;
	//}
	//fout.close();

	/*ofstream fout;
	fout.open("Mystat.txt", fstream::app);
	
	info user_info;

	cout << "Enter name:";
	cin >> user_info.name;
	cout << "Enter second name:";
	cin >> user_info.second_name;
	cout << "Enter age:";
	cin >> user_info.age;
	cout << "Enter phone number:";
	cin >> user_info.phone_number;
	cout << "Enter email:";
	cin >> user_info.email;
	fout << user_info.name << endl;
	fout << user_info.second_name << endl;
	fout << user_info.age << endl;
	fout << user_info.phone_number << endl;
	fout << user_info.email << endl;

	fout.close();*/

	string file_name = "ITSTEP.txt";

	ifstream fin;
	fin.open(file_name);

	bool is_open = fin.is_open();
	if (is_open == false) {
		cout << "Error: File not open" << endl;

	}
	else
	{
		cout << "File open" << endl;

	//1. По символах
		/*char data1;
		while (fin.get(data1)){


			cout << data1;
		}*/

	//2. До пробілу
		/*string data2;
		while (!fin.eof())
		{
			data2 = "";
			fin >> data2;
			cout << data2 << endl;
		}*/

	//3. ***Цілий рядок
		/*string data3;
		while (!fin.eof())
		{
			data3 = "";
			getline(fin, data3);
			cout << data3 << endl;
		}*/

	//4. Цілий рядок(але має обмеження)
		/*char data4[50];
		while (!fin.eof())
		{
			fin.getline(data4, 50);
			for (int i = 0; i < 50; i++)
			{
				cout << data4[i];
			}
		}*/
		
	}












	system("pause");
	return 0;
}