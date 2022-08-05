#include <iostream>
#include "Greeter.h"
using namespace std;
int main()
{
    setlocale(LC_ALL,"rus");
    string name;
    Greeter hello;
    cout << "Введите имя: ";
    cin >> name;
    cout<<hello.greet(name);
    return 0;
}
