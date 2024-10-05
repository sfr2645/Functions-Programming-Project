//this program will calculate the radius, diameter, circumference, and area of a circle after the center point and any other point on the circle is inputted
#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
const double PI = 3.1416;

double distance(double,double,double,double);
double radius(double,double,double,double);
double circumference(double);
double area(double);
void getPoint(double&,double&);

int main() 
{
double x1,y1,x2,y2,r;

cout << fixed << showpoint << setprecision(2);
cout << "Enter the Center coordinates for your circle\n";
getPoint(x1,y1);
cout <<"Enter the coordinates for a point located on your circle\n";
getPoint(x2,y2);

r = radius(x1,y1,x2,y2);

cout << "Radius = " << r << std::endl;
cout << "Diameter = " << 2*r << std::endl;
cout << "Circumference = " << circumference(r) << std::endl;
cout << "Area = " << area(r) << std::endl;

    return 0;
}

double distance(double x1,double y1, double x2, double y2)
{
  return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

double radius(double x1,double y1,double x2, double y2)
{
  return distance(x1,y1,x2,y2);
}

double circumference(double r)
{
  return 2 * PI * r; 
}

double area(double r)
{
  return PI * pow(r,2);
}

void getPoint(double& x, double& y)
{
  cout << "x: ";
  cin >> x;
  cout << "y: ";
  cin >> y;
}