#include <iostream>
using namespace std;
class point
{
protected:
	int x, y;

public:
	point(int, int);
	void display(void);
	~point() { cout << "Point Destructor Called" << endl; }
};
point::point(int a, int b)
{
	cout << "Point Class Constructor Called" << endl;
	x = a;
	y = b;
}
void point::display(void)
{
	cout << "Point = [" << x << "," << y << "]" << endl;
}
class circle : public point
{
protected:
	double radius;

public:
	circle(int, int, double);
	void display(void);
	~circle() { cout << "Circle Destructor Called!" << endl; }
};
circle::circle(int a, int b, double c) : point(a, b)
{
	cout << "Circle Constructor Called!" << endl;
	radius = c;
}
void circle::display(void)
{
	point::display();
	cout << "and Radius = " << radius << endl;
}

class cylinder : public circle
{
	double height;

public:
	cylinder(int, int, double, double);
	void display(void);
	double getvolume(void);
	~cylinder() { cout << "Cylinder Destructor Called!" << endl; }
};
cylinder::cylinder(int a, int b, double r, double h) : circle(a, b, r)
{
	cout << "Cylinder Constructor Called!" << endl;
	height = h;
}
double cylinder::getvolume(void)
{
	return 3.14 * radius * radius * height;
}
void cylinder::display(void)
{
	circle::display();
	cout << "Height = " << height << endl;
}
int main(void)
{
	cylinder c(3, 4, 2.5, 3.7);
	return 0;
}