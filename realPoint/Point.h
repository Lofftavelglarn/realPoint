#pragma once
#include < iostream>
#include < stdlib.h>
#include < stdio.h>
#define _USE_MATH_DEFINES
#include < math.h>
#include < locale.h>
#include < conio.h>

using namespace std;

class MyPoint
{
	double x, y, z;

public:
	MyPoint();
	MyPoint(double, double, double);
	void Input();
	void Output();

	double get_x();
	double get_y();
	double get_z();

	bool BelongX();
	bool BelongY();
	bool BelongZ();

	bool BelongXY();
	bool BelongXZ();
	bool BelongYZ();

	const char* Octant();
	bool BelongOct(MyPoint);

	bool Symmetry0(MyPoint);

	bool SymmetryXY(MyPoint);
	bool SymmetryXZ(MyPoint);
	bool SymmetryYZ(MyPoint);

	double Length0();

	bool Equal(MyPoint);

	const char* Comparison(MyPoint);

	double Mult(int);

	double LengthX();
	double LengthY();
	double LengthZ();

	bool SymmetryX(MyPoint);
	bool SymmetryY(MyPoint);
	bool SymmetryZ(MyPoint);
	bool Triangle(MyPoint, MyPoint);
	double SquareTriangle(MyPoint, MyPoint);
};