//Богодухов А.А.

#include <cmath>
///Функция поиска a по условию задачи 11а
void ValuesA(float x, float y, float& a) {
    a = (sqrt(fabs(x - 1)) - cbrt(fabs(y))) / (1 + (pow(x, 2) / 2) + (pow(y, 2) / 4));
}
///Функция поиска b по условию задачи 11а
void ValuesB(float x, float z, float& b) {
    b = x * (atan(z) + exp(-(x + 3)));
}