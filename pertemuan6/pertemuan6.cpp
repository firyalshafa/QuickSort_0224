// pertemuan6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
    while (true)
    {
        cout << "masukan panjang element array:";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nmaksimum panjang array adalah 20" << endl;

    }

    cout << "\n-------------" << endl;
    cout << "\nenter array element" << endl;
    cout << "\n--------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}



int main()
{
    std::cout << "Hello World!\n";
}




