#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Заполните строку: ";
	string str;
	cin >> str;

	string letter = "aeiouy";

	for (int i = 0; i < str.length(); i++)
		for (int j = 0; j < letter.length(); j++)
			if (str[i] == letter[j])
					cout << str[i];

	

	return 0;
}