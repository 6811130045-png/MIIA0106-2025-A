// LAB3-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(void) {
    int nam ;
    string id;
    string name;

    cout << "Enter Enter student ID: ";
    cin >> id;

    cout << "Enter student name: ";
    cin.ignore();
    getline(cin,name);

    cout << "Enter score: ";
    cin >> nam;

    cout << "Student ID :" << id << endl;
    cout << "Name       :" << name << endl;
    cout << "Score      :" << nam << endl;

    if (nam >= 90) {
        cout << "Grade      :A" << endl;
    }
    else if (nam >= 80) {
        cout << "Grade      :B" << endl;
    }
    else if (nam >= 70) {
        cout << "Grade      :C" << endl;
    }
    else {
        cout << "Grade      :F" << endl;
    }
    
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
