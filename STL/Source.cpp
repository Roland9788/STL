#include<iostream>
using namespace std;
/*
* ��������� � ������ �������� �����������
* ������������� ����� ���� �������� �������� ������� ������
*/

/*
	dynamic_cast - ������������ ���������� ���� ��������� ���������� ���������� ���������� ����
*/

//void test_pow(const int* v)
//{
//	int* temp;
//	//�������� ����������� const
//	temp = const_cast<int*> (v);
//	*temp = *v * *v;
//}

//int test_pow(volatile int* v)//-volatile-���������� �� ��� �������� ���� const ����������
//{
//	return *v *= *v;
//}

//������� �����
//class B
//{
//public:
//	//����������� ������� ��� ������������ ����������� � �������
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
//	//��������������� ����������� �������
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
	//cout << "\n��- " << x << "\n\n";
	//test_pow(&x); 
	//cout << "\n�����- " << x << "\n\n";

	////��������� �� �����-��������. ������ ������-��������
	//B* ptr_b, obj_b;
	////��������� �� �����-�������. ������ ������-��������
	//D* ptr_d, obj_d;
	////�������� ����� ������� (D*) � ��������� ���� D*
	//ptr_d = dynamic_cast<D*>(&obj_d);
	//if (ptr_d)
	//{
	//	cout << "\n�����-";
	//	ptr_d->Test();
	//}
	//else
	//{
	//	cout << "\n������";
	//}
	////�������� ����� ������� (D*) � ��������� ���� B*
	//ptr_b = dynamic_cast<B*>(&obj_d);
	//if (ptr_b)
	//{
	//	cout << "�����\n";
	//	ptr_b->Test();
	//}
	//else
	//{
	//	cout << "������\n";
	//}
	//ptr_b = dynamic_cast<B*>(&obj_b);
	//if (ptr_b)
	//{
	//	cout << "�����\n";
	//	ptr_b->Test();
	//}
	//else
	//{
	//	cout << "������\n";
	//}
	//
	//ptr_d = dynamic_cast<D*>(&obj_b);//-���������� �������� � ������� �� � �������� ��������
	//if (ptr_d)
	//{
	//	cout << "�����\n";
	//	ptr_d->Test();
	//}
	//else
	//{
	//	cout << "������\n";
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << static_cast<double>i / 3 << " ";
	//}


	////������������� ����������
	//int x;
	////������
	//const char* str { "This if string" };
	////������������� 
	//x = reinterpret_cast<int>(str);
	//cout << x << "\n\n";


	int x;
	//������
	char* str = new char;
	cin >> str;
	//������������� 
	x = reinterpret_cast<int>(str);
	cout << x << "\n\n";

	int* y;
	y = reinterpret_cast<int*>(str);
	cout << *y;

	return 0;
}