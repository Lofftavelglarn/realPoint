#include "Point.h"

MyPoint::MyPoint()
{
	x = 0; y = 0; z = 0;
}

MyPoint::MyPoint(double X, double Y, double Z)

{
	x = X; y = Y; z = Z;

}

void MyPoint::Input()
{
	cout << "Input your coordinates " << endl;
	cin >> x >> y >> z;
}

void MyPoint::Output()
{
	cout << "Your MyPoint coordinates is " << x << "  " << y << "  " << z << endl;
}

double MyPoint::get_x()
{
	return x;
}

double MyPoint::get_y()
{
	return y;
}

double MyPoint::get_z()
{
	return z;
}

bool MyPoint::BelongX()
{
	if (fabs(x) < DBL_EPSILON) {
		cout << "Yes" << endl;
		return true;
	}
	cout << "No!" << endl;
	return false;
}

bool MyPoint::BelongY()
{
	if (fabs(y) < DBL_EPSILON) {
		cout << "Yes" << endl;
		return true;
	}
	cout << "No!" << endl;
	return false;
}

bool MyPoint::BelongZ()
{
	if (fabs(z) < DBL_EPSILON) {
		cout << "Yes" << endl;
		return true;
	}
	cout << "No!" << endl;
	return false;
}

bool MyPoint::BelongXY()
{
	if (fabs(x) < DBL_EPSILON && fabs(y) < DBL_EPSILON) {
		cout << "Yes" << endl;
		return true;
	}
	cout << "No!" << endl;
	return false;
}

bool MyPoint::BelongXZ()
{
	if (x == 0 && z == 0) {
		cout << "Yes" << endl;
		return true;
	}
	cout << "No!" << endl;
	return false;
}

bool MyPoint::BelongYZ()
{
	if (y == 0 && z == 0) {
		cout << "Yes" << endl;
		return true;
	}
	cout << "No!" << endl;
	return false;
}

const char* MyPoint::Octant()
{
	if (x >= 0)
		if (y >= 0) {
			if (z >= 0)
				return "XYZ";
			else return "XY(-Z)";
		}
		else if (z >= 0)
			return "X(-Y)Z";
		else return "X(-Y)(-Z)";
	else if (y >= 0) {
		if (z >= 0)
			return "(-X)YZ";
		else return "(-X)Y(-Z)";
	}
	else if (z >= 0)
		return "(-X)(-Y)Z";
	else return "(-X)(-Y)(-Z)";
}

bool MyPoint::BelongOct(MyPoint other)
{
	double X, Y, Z;
	X = other.get_x();
	Y = other.get_y();
	Z = other.get_z();
	if (x >= 0 && X >= 0)
		if (y >= 0 && Y >= 0) {
			if (z >= 0 && Z >= 0) {
				cout << "Yes, Octant XYZ" << endl;
				return true;
			}
			else if (z <= 0 && Z <= 0) {
				cout << "Yes, Octant XY(-Z)" << endl;
				return true;
			}
			else cout << "No" << endl;
		}
		else if (y <= 0 && Y <= 0) {
			if (z >= 0 && Z >= 0) {
				cout << "Yes, Octant X(-Y)Z" << endl;
				return true;
			}
			else if (z <= 0 && Z <= 0) {
				cout << "Yes, Octant X(-Y)(-Z)" << endl;
				return true;
			}
			else cout << "No" << endl;
		}
		else if (x <= 0 && X <= 0) {
			if (y >= 0 && Y >= 0) {
				if (z >= 0 && Z >= 0) {
					cout << "Yes, Octant (-X)YZ" << endl;
					return true;
				}
				else if (z <= 0 && Z <= 0) {
					cout << "Yes, Octant (-X)Y(-Z)" << endl;
					return true;
				}
				else cout << "No" << endl;
			}
			else if (y <= 0 && Y <= 0) {
				if (z >= 0 && Z >= 0) {
					cout << "Yes, Octant (-X)(-Y)Z" << endl;
					return true;
				}
				else if (z <= 0 && Z <= 0) {
					cout << "Yes, Octant (-X)(-Y)(-Z)" << endl;
					return true;
				}
				else cout << "No" << endl;
			}
			else cout << "No" << endl;
		}
		else cout << "No" << endl;

}
bool MyPoint::Symmetry0(MyPoint other)
{
	double X, Y, Z;
	X = other.get_x();
	Y = other.get_y();
	Z = other.get_z();
	if (x == -1 * X && y == -1 * Y && z == -1 * Z) {
		cout << "Yes" << endl;
		return true;
	}
	cout << "No!" << endl;
	return false;
}

bool MyPoint::SymmetryXY(MyPoint other)
{
	double X, Y, Z;
	X = other.get_x();
	Y = other.get_y();
	Z = other.get_z();
	if (x == X && y == Y && z == -1 * Z) {
		cout << "Yes" << endl;
		return true;
	}
	cout << "No!" << endl;
	return false;
}
bool MyPoint::SymmetryXZ(MyPoint other)
{
	double X, Y, Z;
	X = other.get_x();
	Y = other.get_y();
	Z = other.get_z();
	if (x == X && y == -1 * Y && z == Z) {
		cout << "Yes" << endl;
		return true;
	}
	cout << "No!" << endl;
	return false;
}

bool MyPoint::SymmetryYZ(MyPoint other)
{
	double X, Y, Z;
	X = other.get_x();
	Y = other.get_y();
	Z = other.get_z();
	if (x == -1 * X && y == Y && z == Z) {
		cout << "Yes" << endl;
		return true;
	}
	cout << "No!" << endl;
	return false;
}
double MyPoint::Length0()
{
	double res = sqrt(x * x + y * y + z * z);
	cout << res << endl;
	return res;
}

bool MyPoint::Equal(MyPoint other)
{
	double X, Y, Z;
	X = other.get_x();
	Y = other.get_y();
	Z = other.get_z();
	if (x == X && y == Y && z == Z)
		cout << "These MyPoints is equal" << endl;
	else {
		cout << "These MyPoints isn't equal" << endl;
		return false;
	}
	return true;
}

/*bool MyPoint::NotEqu(MyPoint)
{
	return false;
}*/

const char* MyPoint::Comparison(MyPoint other)
{
	double X, Y, Z;
	X = other.get_x();
	Y = other.get_y();
	Z = other.get_z();
	double res = sqrt(x * x + y * y + z * z);
	double res2 = sqrt(X * X + Y * Y + Z * Z);
	if (res < res2)
		return "A < B";
	else if (res > res2)
		return "A > B";
	else return "A = B";
}

double MyPoint::Mult(int a)
{
	x *= a;
	y *= a;
	z *= a;
	return x;
}

double MyPoint::LengthX()
{
	double X, Y, Z, res;
	X = x - x;
	Y = 0 - y;
	Z = 0 - z;
	res = sqrt(X * X + Y * Y + Z * Z);
	return res;
}

double MyPoint::LengthY()
{
	double X, Y, Z, res;
	X = 0 - x;
	Y = y - y;
	Z = 0 - z;
	res = sqrt(X * X + Y * Y + Z * Z);
	return res;
}

double MyPoint::LengthZ()
{
	double X, Y, Z, res;
	X = 0 - x;
	Y = 0 - y;
	Z = z - z;
	res = sqrt(X * X + Y * Y + Z * Z);
	return res;
}

bool MyPoint::SymmetryX(MyPoint other)
{
	double X, Y, Z;
	X = other.get_x();
	Y = other.get_y();
	Z = other.get_z();
	if (x == X && y == -1 * Y && z == -1 * Z) {
		return true;
	}
	return false;
}

bool MyPoint::SymmetryY(MyPoint other)
{
	double X, Y, Z;
	X = other.get_x();
	Y = other.get_y();
	Z = other.get_z();
	if (x == -1 * X && y == Y && z == -1 * Z) {
		cout << "Yes" << endl;
		return true;
	}
	cout << "No!" << endl;
	return false;
}

bool MyPoint::SymmetryZ(MyPoint other)
{
	double X, Y, Z;
	X = other.get_x();
	Y = other.get_y();
	Z = other.get_z();
	if (x == -1 * X && y == -1 * Y && z == Z) {
		cout << "Yes" << endl;
		return true;
	}
	cout << "No!" << endl;
	return false;
}

bool MyPoint::Triangle(MyPoint other, MyPoint other_1)
{
	double Bx, By, Bz;
	Bx = other.get_x();
	By = other.get_y();
	Bz = other.get_z();

	double Cx, Cy, Cz;
	Cx = other_1.get_x();
	Cy = other_1.get_y();
	Cz = other_1.get_z();

	double side_a = sqrt((Bx - Cx) * (Bx - Cx) + (By - Cy) * (By - Cy) + (Bz - Cz) * (Bz - Cz)),
		side_b = sqrt((x - Cx) * (x - Cx) + (y - Cy) * (y - Cy) + (z - Cz) * (z - Cz)),
		side_c = sqrt((x - Bx) * (x - Bx) + (y - By) * (y - By) + (z - Bz) * (z - Bz));
	double pp = (side_a + side_b + side_c) / 2;
	double S = sqrt(pp * (pp - side_a) * (pp - side_b) * (pp - side_c));
	if (S < 1e-8)
		return false;
	else return true;
}

double MyPoint::SquareTriangle(MyPoint other, MyPoint other_1)
{
	double Bx, By, Bz;
	Bx = other.get_x();
	By = other.get_y();
	Bz = other.get_z();

	double Cx, Cy, Cz;
	Cx = other_1.get_x();
	Cy = other_1.get_y();
	Cz = other_1.get_z();

	double side_a = sqrt((Bx - Cx) * (Bx - Cx) + (By - Cy) * (By - Cy) + (Bz - Cz) * (Bz - Cz)),
		side_b = sqrt((x - Cx) * (x - Cx) + (y - Cy) * (y - Cy) + (z - Cz) * (z - Cz)),
		side_c = sqrt((x - Bx) * (x - Bx) + (y - By) * (y - By) + (z - Bz) * (z - Bz));
	double pp = (side_a + side_b + side_c) / 2;
	double S = sqrt(pp * (pp - side_a) * (pp - side_b) * (pp - side_c));
	cout << S << endl;
	return S;
}
