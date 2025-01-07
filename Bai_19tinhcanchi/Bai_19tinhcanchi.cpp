// Bai_19tinhcanchi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int nam;
    cout << "Nhap nam: "; cin >> nam;
    string canArr[10] = { "Canh","Tan","Nham","Quy","Giap","At ty","binh","dinh","Mau","ky" };
    string chiArr[12] = { "ty'","suu","dan","mao","thin","ty","ngo","mui","than","dau","tuat","hoi" };
    cout << nam << ": " << canArr[nam % 10] << " "<< chiArr[nam % 12] << endl;
       
        
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
