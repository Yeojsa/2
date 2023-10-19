//Богодухов А.А.
#include <iostream> //подключаемый код файла
#include <cmath>
#include <cassert> 
#include <iomanip>
#include "2void.h"

using namespace std; // пространство имен

const float eps = 10e-3;

int main(int argc, char* argv[])
{   
    if (argc < 2) {
        cout << "Необходимо передать аргументы командной строки\n";
        return 1;
    }



    float x, y, z, a, b; //переменные


    //функция ValuesA при x=4 и y=3 проверяет значение близкое к 0.026
    ValuesA(4, 3, a); 
    assert(fabs(a - 0.026) < eps); 
    //функция ValuesA при x=1 и y=1 проверяет значение близкое к -0.571
    ValuesA(1, 1, a);
    assert(fabs(a - (-0.571)) < eps);
    // функция ValuesA при x=2 и y=3 проверяет значение близкое к -0.084
    ValuesA(2, 3, a);
    assert(fabs(a - (-0.084)) < eps);
    // функция ValuesB при x=4 и z=6 проверяет значение близкое к 5.626
    ValuesB(4, 6, b);
    assert(fabs(b - 5.626) < eps);
    // функция ValuesB при x=1 и z=3 проверяет значение близкое к 1.267
    ValuesB(1, 3, b);
    assert(fabs(b - 1.267) < eps);
    // функция ValuesB при x=1 и z=3 проверяет значение близкое к 2.871
    ValuesB(2, 7, b);
    assert(fabs(b - 2.871) < eps);

    for (int i = 1; i < argc; ++i) {
        cout << "Argument " << i << ": " << argv[i] << "\n";
    }

    x = atoi(argv[1]);
    y = atoi(argv[2]);
    z = atoi(argv[3]);

    //cout << "Enter a number x: "; //ввод x
    //cin >> x; 

    //cout << "Enter a number y: "; //ввод y
    //cin >> y;

    //cout << "Enter a number z: "; //ввод z
    //cin >> z;
	///Функция поиска a по условию
    ValuesA(x, y, a);
    ///Функция поиска b по условию
    ValuesB(x, z, b);


    cout << fixed << setprecision(3);//ограничитель до 3 знаков после запятой
    cout << "Value a: " << a << endl;//вывод a
    cout << "Value b: " << b << endl;//вывод b

    return 0;  
}