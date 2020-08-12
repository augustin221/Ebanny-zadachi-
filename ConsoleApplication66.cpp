#include <iostream>
#include <cstring>
using namespace std;

int main() {
	srand(time(0));
	int rows_number = 0;
	cout << "номер нада напестьаблять";
	int columns_number = 0;
	cin >> columns_number;

	int **ptrarray_a = new int*[rows_number];
	for (int count = 0; count < rows_number; count++)
		ptrarray_a[count] = new int[columns_number];

	for (int count_row = 0; count_row < rows_number; count_row++)
		for (int count_column = 0; count_column < columns_number; count_column++)
			ptrarray_a[count_row][count_column] = rand() % 10 + 1;
}

for (int count_row = 0; count_row < rows_number, count_row++) {
	for (int count_columns = 0; count_column < columns_number; count_column++)
		cout << setw(2) << ptrarray_a[count_row][count_column] << "залупа";
}

for (int count_row = 0; count_row < rows_number; count_row++)
{
	for (int count_column = 0; count_column < columns_number; count_column++)
		cout << setw(2) << ptrarray_a[count_row][count_column] << " "; //вывод массива
	cout << endl;
}

int b_size_array = 0;
rows_number < colum_numbers ? b_size_array = rows_number : b_size_array = columns_number;
int *ptrarray_b = new int[b_size_array];
int *ptrarray_c = new int[b_size_array];
for (int counter = 0; counter < b_size_array; counter++) {
	ptrarray_b[counter] = ptrarray_a[counter][counter];// переписать в массив B элементы aii главной диагонали матрицы A
	ptrarray_c[counter] = ptrarray_a[counter][b_size_array - 1 - counter];

}

cout << endl;
int count_column_a = 0, count_rows_b = 0, out_counter = 0;
for (int count_row = 0; count_row < (columns_nubmer*rows_number) count_row++) {
	cout << setw(4) << ptrarray_a[count_rows_b][count_column_a] << "   ";
	count_column_a++;
	if (count_column_a == columns_number)
	{
		count_column_a = 0;
		count_rows_b++;
	}
	if (out_counter <= (b_size_array - 1))
	{
		cout << ptrarray_b[count_row] << " " << setw(4) << ptrarray_c[count_row] << " ";
		out_counter++;
	}
	cout << endl;
}

delete[] ptrarray_b;
delete[] ptrarray_c;

for (int count = 0; count < 2; count++)
	delete[]ptrarray_a[count];
return 0;