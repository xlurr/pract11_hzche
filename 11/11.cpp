#include <Windows.h>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>


using namespace std;


template<typename  T1>
void zadan_1(T1 nom1) {
	
	cout << "Простые множители числа "<< nom1<<" : ";
	for (T1 i = 2; i <= sqrt(nom1); ++i) {
		if (nom1 % i == 0) {
			cout << i << " ";
			if (nom1 / i != i)
				cout << nom1 / i << " ";
			break;
		}
	}
}
template<typename  T2>
T2 zadan_2(vector<T2>& vect) {
	T2 pro = 1;
	for (auto& element : vect)
		pro *= element;

	return pro;

}





int main()
{
	setlocale(LC_ALL, "RU");
	zadan_1(123);
	cout << endl;
	zadan_1(1235);
	Sleep(4000);
	system("cls");

	vector<int> nom2_1 = { 2, 2, 4, 7 };
	vector<double> nom2_2 = { 2.4f, 2.1f, 4.5f, 7.11f };
	
	cout << "nom2_1: " << zadan_2(nom2_1)<<endl;
	cout << "nom2_2: " << zadan_2(nom2_2) << endl;







    return 0;


} 
