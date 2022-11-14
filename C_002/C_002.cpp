#include <iostream>
using namespace std;

//Задание 1. Написать перегруженные функции и протестировать их в основной программе :
//■ Нахождение максимального значения в одномерном массивные;

int myMax(int arr[], int lenght)
{
	int res = arr[0];
	for (size_t i = 1; i < lenght; i++)
	{
		if (res < arr[i])
		{
			res = arr[i];
		}
	}
	return res;
}
//■ Нахождение максимального значения в двумерном массивные;


int myMax(int arr[][100], int n, int m)
{
	int res = arr[0][0];
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			if (res < arr[i][j])
			{
				res = arr[i][j];
			}
		}
	}
	return res;
}

//■ Нахождение максимального значения двух целых;

int myMax(int a, int b)
{
	return a > b ? a : b;
}

//■ Нахождение максимального значения трех целых.
int myMax(int a, int b, int c)
{
	return a > b ? a : (b > c ? b : c);
}



//Задание 2. Написать шаблоны функции(int, double, char) для выполнения следующих задач :
//■ Инициализация квадратной матрицы;

template <typename T>
T** initArr(int n)
{
	T** arr = new T* [n];
	for (int i = 0; i < n; i++)
		arr[i] = new T[n];
	return arr;
}

//■ Вывод матрицы на экран;

template <typename T>
void myPrint(T** arr, int row, int column)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < column; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

//■ Определение максимального и минимального элемента на главной диагонали матрицы;

template <typename T>
T myMax2(T** arr, int n)
{
	T res = arr[0][0];
	for (size_t i = 1; i < n; i++)
	{
		if (res < arr[i][i]) {
			res = arr[i][i];
		}
	}
	return res;
}

//■ Сортировка элементов по возрастанию отдельно для каждой строчки матрицы.

template <typename T>
void mySort(T** arr, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (int startIndex = 0; startIndex < n - 1; ++startIndex)
		{
			int smallestIndex = startIndex;
			for (int currentIndex = startIndex + 1; currentIndex < n; ++currentIndex)
			{
				if (arr[i][currentIndex] < arr[i][smallestIndex])
					smallestIndex = currentIndex;
			}
			swap(arr[i][startIndex], arr[i][smallestIndex]);
		}
	}
}


int main()
{
	//int mas1[] = { 2,4,9,6,7 };
	//cout << myMax(mas1, 5) << endl;

	//int mas2[][100] = { {2,3,4}, {8,9,10}, {5,6,7} };
	//cout << myMax(mas2, 3, 3) << endl;

	//int a = 2;
	//int b = 4;
	//cout << myMax(a,b) << endl;

	//int c = 1;
	//cout << myMax(a, b, c) << endl;




	//int** arrInt = initArr<int>(3);
	//double** arrDouble = initArr<double>(3);

	//arrInt[0][0] = 7;
	//arrInt[0][1] = 6;
	//arrInt[0][2] = 8;
	//arrInt[1][0] = 3;
	//arrInt[1][1] = 4;
	//arrInt[1][2] = 5;
	//arrInt[2][0] = 3;
	//arrInt[2][1] = 2;
	//arrInt[2][2] = 1;
	//myPrint(arrInt, 3, 3);

	//cout << myMax2(arrInt, 3) << endl;

	//mySort(arrInt, 3);
	//myPrint(arrInt, 3, 3);

}