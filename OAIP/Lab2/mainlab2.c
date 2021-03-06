﻿#include <stdio.h> // подключие библиотеки ввода/ вывода
#include <math.h> // подлючение библиотеки математический функций
#include <locale.h> // подключение библиотеки языка

int main() // сообщаю о наличии функции main, которой возвращаю значения int 
{
	setlocale(LC_ALL, "Rus"); //перевод консоли на русский язык
	float x, y, z, n; // обозначаю вещественные переменные
	printf("1) Уравнение:  "); // Ввывод сообщения
	printf("5x^2 - 6y + 14 = z\n"); // Ввывод сообщения
	printf("Введите x="); // Ввывод сообщения
	scanf_s("%f", &x); // Ввод х
	printf("Введите y="); // Ввывод сообщения
	scanf_s("%f", &y); // Ввод y
	z = (5 * x * x - 6 * y + 14); // первая функия
	printf("5 * %.1f^2 - 6 * %.1f + 14 = %.2f\n",x,y,z ); // вывод результата в консоль
	printf("2) Уравнение:  ");
	printf("(5x^2- 6y + 14) / sqrt(y)=z\n");
	printf("Введите x=");
	scanf_s("%f", &x);
	printf("Введите y=");
	scanf_s("%f", &y);
	if ((y == 0.0f) || (y < 0)) { // проверка является ли y положительным числом 
		printf("Результат неопределён\n");
	}
	else {
		z = (5 * x * x - 6 * y + 14) / sqrt(y); // второе уравнение 
		printf("(5 * %.1f^2 - 6 * %.1f + 14) / sqrt(y) = %.2f \n", z); // вывод второго результата на экран
	}
	printf("3) Неравенство:  ");
	printf("x^z > y\n");
	printf("Введите x=");
	scanf_s("%f", &x);
	printf("Введите y=");
	scanf_s("%f", &y);
	z = 0; // обнуляю переменную для решения третьего неравенства 
	n = pow(x, z); // возвожу число x в степень z
	while (n <= y) { // цикл с условием для нахождения стпенеи z, при котором x^z будет больше y
		if (x > 1) {  // если x>1 увеличиваю Z на 1
			z = z + 1;
			n = pow(x, z);
		}
		else {
			if (x==0) { 
				printf("x в степени z всегда будет меньше y");
				break; // выход из цикла(иначе он будет бесконечно выводить сообщяние)
			}
			else { //если x меньше 1 и не равно 0, то уменьшаю степень
				z = z - 1;
				n = pow(x, z);
			}
		}
	}
	if (x != 0) { // если x был равень 0 разельтат не будет выведен
		printf("%.2f^%.2f > %.2f", x, z, y); //вывод результата третьего неравенства
		printf("z = %f");
	}
		return 0; // возвращаю функции main значение 0
}