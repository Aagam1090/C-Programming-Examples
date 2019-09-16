/*
Write a Program to Implement Static Functions and Static Variables.
*/
#include <iostream.h>
#include <conio.h>
class product {
    char name[20];
    int p_id;
    int p_price;

public:
    static int count;
    void getdata();
    void printdata();
    static void printcount();
};
int product::count;
void product::getdata()
{
    cout << "enter the name " << endl;
    cin >> name;
    cout << "enter the product id " << endl;
    cin >> p_id;
    cout << "enter the product price " << endl;
    cin >> p_price;
}
void product::printdata()
{
    cout << "-------------------------" << endl;
    cout << "the name is " << endl;
    cout << name << endl;
    cout << "product id is" << endl;
    cout << p_id << endl;
    cout << "product price is " << endl;
    cout << p_price << endl;
}
void product::printcount()
{
    count++;
    cout << "the count is " << endl;
    cout << count << endl;
}
void main()
{
    int i, n;
    clrscr();
    product p[100];
    cout << "enter the no of object" << endl;
    cin >> n;
    for (i = 0; i < n; i++) {
        p[i].getdata();
    }
    for (i = 0; i < n; i++) {
        p[i].printdata();
        p[i].printcount();
    }

    getch();
}

//Developed by Aagam Shah
