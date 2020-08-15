#include <iostream>
using namespace std;

void mostRecent(char *, char *);

int main(int argc, char* argv[]) {
	cout << "иди ахуй" << endl;

	const int buff_size = 1001;
	char buff_text[buff_size];
	char word[30];

	mostRecent(gets(buff_text), word);
	for (int counter = 0; counter < strlen(word); counter++)
		word[counter] = toupper(word[counter]);
	cout << "самое частове встречаюшиевся блять" << endl;
	return 0;
}

void mostRecent(char * text, char *word) {
	int words_counter = 0;
	char *arrayPtr[1000];
	arrayPtr[0] = strtok(text, "");

	while (arrayPtr[words_counter] != NULL) {
		words_counter++;
		arrayPtr[words_counter] = strtok(NULL, "");
	}

	bool frist_iter = true, go = false;
	int max_number1 = 0, // количество слов
		max_number2 = 0, // количество слов
		max_word = 0,    // индекс самого часто встречающегося слова
		flag = 0;

	int index1, index2;
	for (int counter1 = 0; counter1 < (words_counter - 1); counter1++) // перебор слов, начиная с первого и заканчивая предпоследним
	{
		flag++; // инкремент итераций
		for (int counter2 = counter1 + 1; counter2 < words_counter; counter2++) // перебор слов, начиная со второго и заканчивая предпоследним
		{
			if (strcmp(arrayPtr[counter1], arrayPtr[counter2]) == 0) // сравниваем два слова
				if (first_iter) // если первая итерация (то есть сюда заходим один раз)
				{
					max_number1++; // инкремент переменной, подсчитывающей количество одинаковых слов
					first_iter = false; // меняем условие оператора if
					index1 = counter1;
				}
				else
				{
					max_number2++; // инкремент переменной, подсчитывающей количество одинаковых слов
					index2 = counter1;
				}
			if (flag == 2 || go) // если прошли две итерации, или поэлементный проход разрешён
			{
				if (max_number1 >= max_number2) // если количество первого слова больше количества второго слова
				{
					max_word = index1; // присваиваем индекс самого часто повторяющегося слова
				}
				else { max_word = index2; max_number1 = max_number2; } // присваиваем индекс самого часто повторяющегося слова и количество появления второго слова присваиваем переменной max_number1
				flag = 0; // обнуляем счётчик итераций
				go = true; // разрешить поэлементный проход
			}
			max_number2 = 0; // обнуляем накопленное количество появления второго слова
		}

		strcpy(word, arrayPtr[max_word]);
	}
}