#include<iostream>
using namespace std;
/*
* Указатель н объект является константным
* следовательно через него изменить значение объекта нельзя
*/

/*
	dynamic_cast - динамическое приведение типа проверяет законность выполнение приведения типа
*/

//void test_pow(const int* v)
//{
//	int* temp;
//	//Снимаеим модификатор const
//	temp = const_cast<int*> (v);
//	*temp = *v * *v;
//}

//int test_pow(volatile int* v)//-volatile-обозначает то что значение типа const изменяется
//{
//	return *v *= *v;
//}

//Базовый класс
//class B
//{
//public:
//	//виртуальная функция для последующего определения в потомке
//	virtual void Test()
//	{
//		cout << "Test B- ";
//	}
//
//};
//
//class D :public B
//{
//public:
//	//Переопределение виртуальной функции
//	virtual void Test()
//	{
//		cout << "Test D- ";
//	}
//
//};



int main()
{
	setlocale(LC_ALL, "Rus");

	//int x = 10;
	//cout << "\nДо- " << x << "\n\n";
	//test_pow(&x); 
	//cout << "\nПосле- " << x << "\n\n";

	////Указатель на класс-родитель. объект класса-родителя
	//B* ptr_b, obj_b;
	////Указатель на класс-потомок. объект класса-потомока
	//D* ptr_d, obj_d;
	////Приводим адрес объекта (D*) к указателю типа D*
	//ptr_d = dynamic_cast<D*>(&obj_d);
	//if (ptr_d)
	//{
	//	cout << "\nУспех-";
	//	ptr_d->Test();
	//}
	//else
	//{
	//	cout << "\nОшибка";
	//}
	////Приводим адрес объекта (D*) к указателю типа B*
	//ptr_b = dynamic_cast<B*>(&obj_d);
	//if (ptr_b)
	//{
	//	cout << "Успех\n";
	//	ptr_b->Test();
	//}
	//else
	//{
	//	cout << "Ошибка\n";
	//}
	//ptr_b = dynamic_cast<B*>(&obj_b);
	//if (ptr_b)
	//{
	//	cout << "Успех\n";
	//	ptr_b->Test();
	//}
	//else
	//{
	//	cout << "Ошибка\n";
	//}
	//
	//ptr_d = dynamic_cast<D*>(&obj_b);//-невозможно привести к потомку но к родителю возможно
	//if (ptr_d)
	//{
	//	cout << "Успех\n";
	//	ptr_d->Test();
	//}
	//else
	//{
	//	cout << "Ошибка\n";
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << static_cast<double>i / 3 << " ";
	//}


	////Целочисленная переменная
	//int x;
	////Строка
	//const char* str { "This if string" };
	////Пребразование 
	//x = reinterpret_cast<int>(str);
	//cout << x << "\n\n";


	int x;
	//Строка
	char* str = new char;
	cin >> str;
	//Пребразование 
	x = reinterpret_cast<int>(str);
	cout << x << "\n\n";

	int* y;
	y = reinterpret_cast<int*>(str);
	cout << *y;

	return 0;
}