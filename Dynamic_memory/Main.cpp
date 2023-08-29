#include <iostream>

template<typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }" << std::endl;
}

int main() {
	system("chcp 1251>nul");
	int n, m;
	
	//ВЫДЕЛЕНИЕ ДИНАМИЧЕСКОЙ ПАМЯТИ
	/*

	//создаем указатель на динамическую память
	//операция new int это выделение динамической памяти для хранения значения типа int
	//операция возвращает адрес выделенной памяти, который записывается в указатель pointer
	int* pointer = new int;


	std::cout << "pointer = " << pointer << std::endl;
	*pointer = 7;
	std::cout << "*pointer = " << *pointer << std::endl;

	//освобождение памяти, выделенной под хранение значения типа int
	delete pointer;
	//
	pointer = new int;//перенаправление указателя на новую область дин. памяти

	std::cout << "pointer = " << pointer << std::endl;
	*pointer = 15;
	std::cout << "*pointer = " << *pointer << std::endl;


	delete pointer;//профилактическое освобождение памяти в конце работы
	*/

	//Динамические массивы
	/*int dynamic_size;
	std::cout << "Введите размер массива ->";
	std::cin >> dynamic_size;
	int* dynamic_arr = new int[dynamic_size];

	//dynamic_arr[0] = 42;
	//std::cout << dynamic_arr[0] << std::endl;

	for (int i = 0; i < dynamic_size; i++) {
		dynamic_arr[i] = (i + 1) * 100;
		std::cout << dynamic_arr[i] << ' ';
	}
	std::cout << std::endl;

	delete[] dynamic_arr;*/

	//Добавление нового элемента в конец динамического массива
	std::cout << "Введите размер массива -> \n";
	int size;
	std::cin >> size;
	int* arr = new int[size];//Создание массива - шаг 0

	std::cout << "Изначальный массив:\n";
	for (int i = 0; i < size; i++)
		arr[i] = (i + 1) * 10;
	print_arr(arr, size);

	int* tmp = new int[size + 1] {};//шаг 1 - создание нового временного массива необходимой длины,
	//заполненного нулями
	for (int i = 0; i < size; i++)//шаг2 - копирование элементов первого массива во второй массив
		tmp[i] = arr[i];
	delete[] arr;//шаг3 - удаление первого массива из памяти
	arr = tmp;//шаг4 - перенаправление указателя на новый массив
	size++;//шаг5 - увеличение переменной отвечающей за размер массива
	std::cout << "Итоговый массив ->\n";
	print_arr(arr, size);





	return 0;
}