#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
	int amount , lenght , x , varNumber;
	bool varCncat;
	char *str1;
	char *str4;
	char *str3;
	char *strSearch;
	char *strConcat;

public: 
	String() {
		amount = 3;
		lenght = 31;
	}

	int searchString() {
		str1 = new char[lenght];
		int str2 = new char[lenght];
		str3 = new char[lenght];
		strSearch = new char[lenght];
		strConcat = new char[lenght*amount];
		
		for (int i = 0; i < lenght; i++) {
			str1[i] = '\0';
			str2[i] = '\0';
			str3[i] = '\0';
			strSearch = '\0';
		}

		for (int i = 0; i < lenght*amount; i++)//заполним строку символами \0
		{
			strConcat[i] = '\0';
		}

		cout << "Введите три строки (латиницей)." << endl;
		for (int i = 0; i < amount; i++)
		{
			cout << "Введите строку №" << i + 1 << " (не более 30-ти символов): ";
			if (i == 0)cin.getline(str1, lenght);
			if (i == 1)cin.getline(str2, lenght);
			if (i == 2)cin.getline(str3, lenght);
		}

		cout << "выведте намер сука блять" << endl;
		cin.getline(strSearch, lenght);

		x = strSearch();
		if (x == 1) cout << "\nНомер введенной Вами строки в наборе строк = 1" << endl;
		else if (x == 2) cout << "\nНомер введенной Вами строки в наборе строк = 2" << endl;
		else if (x == 3) cout << "\nНомер введенной Вами строки в наборе строк = 3" << endl;
		else cout << "\nСтрока не найдена!!!\n\n";
	}

	void getString()//вывод строк на экран
	{
		cout << "\n\n";
		cout << "Если вы хотите отобразить все строки - введите 0.";
		cout << "\nЕсли вы хотите вывести на экран конкретную строку, введите ее номер (1, 2 или 3): ";
		cin >> varNumber;

		cout << "\n\n";
		if (varNumber == 1) cout << "Строка 1:   " << str1 << endl << endl;
		else if (varNumber == 2) cout << "Строка 2:   " << str2 << endl << endl;
		else if (varNumber == 3) cout << "Строка 3:   " << str3 << endl << endl;
		else//в данном случае если пользователь ввел 0
		{
			cout << "Строка 1:   " << str1 << endl << endl;
			cout << "Строка 2:   " << str2 << endl << endl;
			cout << "Строка 3:   " << str3 << endl << endl;
		}

	}

	void concat() {
		cout << "залпупа" << endl;
		if (!varCncat) cout << "залупа 2" << endl;
		else {
			strcat(strConcat, str1);
			strcat(strConcat, str2);
			strcat(strConcat, str3);
			cout << "обьедяненние строки" << strConcat << endl << endl;
		}

		void del() {
			delete strConcat;
			delete strSearch;
			delete str3;
			delete str2;
			delete str1;
		}

		int main() {
			String strings;
			strings.setString();
			strings.getString();
			strings.concat();
			string.del();

			return 0;
		}
	}
};