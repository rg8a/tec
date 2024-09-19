#include <iostream>
using namespace std;

int main()
{
    char c = '3';
    int s = 5;
    int i = 9;

    char *pc = &c;
    int *ps = &s;
    int *pi = &i;
    void *pv;

    cout << "c :" << c << endl
         << "s :" << s << endl
         << "i :" << i << endl;

    cout << "pc" << pc << endl
         << "ps :" << ps << endl
         << "pi :" << pi << endl
         << "pv :" << pv << endl;

    int arr[3] = {1, 2, 3};
    int *ptr = arr;
    cout << "*ptr : " << *ptr << endl;
}