// Lab_04_3.cpp 
// < Висоцький Володимир > 
// Лабораторна робота № 4.3 
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 1
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double x;
   double a;
   double b;
   double c;
   double xp;
   double xk;
   double dx;
   double F;
   cout << "a = "; cin >> a;
   cout << "b = "; cin >> b;
   cout << "c = "; cin >> c;
   cout << "xp = "; cin >> xp;
   cout << "xk = "; cin >> xk;
   cout << "dx = "; cin >> dx;

   cout << fixed;
   cout << "---------------------" << endl;
   cout << setw(5) << "x" << "    |" << setw(7) << "y" << "   |" << endl;
   cout << "---------------------" << endl;
   x = xp;
   while (x <= xk)
   {
      if (x < 0 && b != 0)
         F = a * (x * x) + b;
      else if (x > 0 && b == 0)
         F = (x - a) / (x - c);
      else
         F = x / c;

      cout << "|" << setw(5) << setprecision(2) << x << "   |" << setw(7) << setprecision(3) << F << "   |" << endl;
      cout << "---------------------" << endl;
      x += dx;
   }
   return 0;
}