﻿// Lab_13_1.cpp#include <iostream>#include <math.h>#include <iomanip>#include "dod.h"#include "sum.h"#include "var.h"using namespace std;using namespace nsDod;using namespace nsSum;using namespace nsVar;int main(){	cout << "xp = "; cin >> x_p;	cout << "xk = "; cin >> x_k;	cout << "dx = "; cin >> dx;	cout << "eps = "; cin >> eps;	x = x_p;	while (x <= x_k) {		sum(); // виклик процедури обчислення суми		cout << "-------------------------------------------------" << endl;		cout << "|" << setw(5) << "x" << " |"			<< setw(10) << "cos(x)" << " |"			<< setw(7) << "S" << " |"			<< setw(5) << "n" << " |"			<< endl;		cout << "-------------------------------------------------" << endl;		cout << "|" << setw(7) << setprecision(2) << x << " |"			<< setw(10) << setprecision(5) << cos(x) << " |"			<< setw(10) << setprecision(5) << s << " |"			<< setw(5) << n << " |"			<< endl; // тут слід використовувати форматний вивід		x += dx;	}	cin.get();	return 0;}