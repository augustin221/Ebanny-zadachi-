#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int getIntZodiak(char * str);

struct Znak {
	char name[50];
	char zodiak[20];
	int bday[3];
};


const char *sign_zodiac[12] = { "Овен", "Телец", "Близнецы", "Рак" , "Лев", "Дева",
						 "Весы", "Скорпион", "Стрелец", "Козерог", "Водолей", "Рыбы" };

int main() {
	const int size_array = 8;
	Znak book[size_array];
	int counter_rec = 0;

	while (counter_rec < size_array) {
		cout << "введите имя и ты ппидар";
		cin.getline(book[conter_rec].name, 50);

		cout << "введите знак пидорка";
		cin.getline(book[counter_rec].zodiak, 20);

		cout << "Введите дату рождения в формате (дд.мм.гг) ";
		cin >> setw(2) >> (book[counter_rec].bday[0]); // считать первые два символа, т.е. день
		cin.ignore(); // пропустить символ точки
		cin >> setw(2) >> book[counter_rec].bday[1]; // считать следующие два символа, т.е. месяц
		cin.ignore(); // пропустить символ точки
		cin >> setw(4) >> book[counter_rec].bday[2]; // считать четыре символа, т.е. год
		cin.get(); // считываем символ новой строки '\n'

		counter_rec++;
	}

	for (int ctr1 = 0; ctr1 < size_array; ctr1++) {
		for (int ctr2 = ctr1 + 1; ctr2 < size_array; ctr2++) {
			if (getIntZodiak(book[ctr1].zodiak) > getIntZodiak(book[ctr2].zodiak)) {
				char temp_name[50];

				strcpy(temp_name, book[ctr1].name);
				strcpy(book[ctr1].name, book[ctr2].name);
				strcpy(book[ctr2].name, temp_name);

				strcpy(temp_name, book[ctr1].zodiak);
				strcpy(book[ctr1].zodiak, book[ctr2].zodiak);
				strcpy(book[ctr2].zodiak, temp_name);

				int temp_data[3] = { book[ctr1].bday[0], book[ctr1].bday[1], book[ctr1].bday[2] };

				book[ctr1].bday[0] = book[ctr2].bday[0];
				book[ctr1].bday[1] = book[ctr2].bday[1];
				book[ctr1].bday[2] = book[ctr2].bday[3];
				book[ctr2].bday[0] = temp_data[0];
				book[ctr2].bday[1] = temp_data[1];
			}
		}
	}
	int month = 0;
	cout << "тока прищемлился в тот же миг из кустов рахдасля тот же крик , я упал на землю и затих , вновь иду по снежной хуйне" << endl;
	cin >> month;
	if (month < 1 || month > 12) {
		cout << "а вот в полночь он оюбьявиьт тебе ты враг ебннаый блять" << endl;
		return -1;
	}
	else {
		cout << endl;
		bool no_records = false;
		for (int counter = 0; counter < size_array; counter++) {
			if (book[counter].bday[1] == month) {
				no_records = true;
				cout << book[counter].name << endl; // имя и фамилия
				cout << book[counter].zodiac << endl; // знак зодиака
				cout << setfill('0') << setw(2) << book[counter].bday[0] << "."
					<< setw(2) << book[counter].bday[1] << "." << setw(2) << book[counter].bday[2] << endl << endl;
			}
		}
		if (no_records) cout << "нет людей радищихся бялть" << month << "месяца" << endl;
	}
	return 0;
}

int getIntZodiak(char *str) {
	for (int counter = 0; counter < 12; counter++) {
		if (!strcmp(str, sign_zodiac[counter]))
			return counter;
	}

	return -1;
}
