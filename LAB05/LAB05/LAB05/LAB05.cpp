#include <iostream>
#include <cmath>
using namespace std;

double circleArea(double radius)
{
    double PI = 3.14159;
    double circlearea = PI * radius * radius;
    return circlearea;
}

double rectArea(double width, double height)
{
    double rectarea = width * height;
    return rectarea;
}

int main()
{
    double radius, width, height;
    cout << "Enter radius :";
    cin >> radius;

    cout << "Enter width :";
    cin >> width;
    cout << "Enter height :";
    cin >> height;

    double Circle_Area = circleArea(radius);
    double Rectangle_Area = rectArea(width, height);
    cout << "Circle Area = " << Circle_Area << endl;
    cout << "Rectangle Area = " << Rectangle_Area << endl;

    return 1;
}