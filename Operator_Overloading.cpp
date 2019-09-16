/*
Write a Program to Overload the operator '-' and show it using the subtraction of 2 Complex Number
*/
#include <iostream.h>
#include <conio.h>
class complex {
    int real, imag;

public:
    complex();
    complex(int, int);
    complex operator+(complex c2)
    {
        complex c;
        c.real = real + c2.real;
        c.imag = imag + c2.imag;
        return c;
    }
    friend complex operator-(complex, complex);
    void display();
};
void complex::display()
{
    cout << "the complex no is " << endl;
    cout << real << "+i" << imag << endl;
}

complex operator-(complex c1, complex c2)
{
    complex c;
    c.real = c1.real - c2.real;
    c.imag = c1.imag - c2.imag;
    return c;
}
complex::complex()
{
    real = imag = 0;
}
complex::complex(int r, int i)
{
    real = r;
    imag = i;
}
int main()
{
    int a, b;
    clrscr();
    cout << "enter the complex no" << endl;
    cin >> a >> b;
    complex c1(a, b);
    cout << "enter the complex no" << endl;
    cin >> a >> b;
    complex c2(a, b), c3, c4;
    c3 = c1 + c2;
    c3.display();
    c4 = c1 - c2;
    c4.display();
    getch();
    return 0;
}
//Developed by Aagam Shah
