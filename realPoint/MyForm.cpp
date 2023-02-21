#include "MyForm.h"
#include "Point.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	realPoint::MyForm form;
	Application::Run(% form);
}

System::Void realPoint::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	int x1 = Int32::Parse(X1box->Text);
	int x2 = Int32::Parse(X2box->Text);
	int x3 = Int32::Parse(X3box->Text);
	int y1 = Int32::Parse(Y1box->Text);
	int y2 = Int32::Parse(Y2box->Text);
	int y3 = Int32::Parse(Y3box->Text);
	int z1 = Int32::Parse(Z1box->Text);
	int z2 = Int32::Parse(Z2box->Text);
	int z3 = Int32::Parse(Z3box->Text);
	MyPoint A(x1, y1, z1), B(x2,y2,z2), C(x3,y3,z3);
	OxOs->Text = A.BelongX() ? "true" : "false";
	OyOs->Text = A.BelongY() ? "true" : "false";
	OzOs->Text = A.BelongZ() ? "true" : "false";
	xOyPl->Text = A.BelongXY() ? "true" : "false";
	xOzPl->Text = A.BelongXZ() ? "true" : "false";
	yOzPl->Text = A.BelongYZ() ? "true" : "false";
	//whatOct->Text = System::Convert::ToString(A.Octant());
	bothOct->Text = A.BelongOct(B) ? "true" : "false";
	Sym0->Text = A.Symmetry0(B) ? "true" : "false";
	SymxOy->Text = A.SymmetryXY(B) ? "true" : "false";
	SymxOz->Text = A.SymmetryXZ(B) ? "true" : "false";
	SymyOz->Text = A.SymmetryYZ(B) ? "true" : "false";
	distanceto0->Text = System::Convert::ToString(A.Length0());
	pointEqu->Text = System::Convert::ToString(A.Equal(B));
	/*if(A.Comparison(B) == "A < B")
		pointComp->Text = "A < B";
	else if(A.Comparison(B) == "A > B")
		pointComp->Text = "A > B";
	else if (A.Comparison(B) == "A = B")
		pointComp->Text = "A = B";*/
	//Mult
	distancetoxyz->Text = System::Convert::ToString(A.LengthX()) + " " + System::Convert::ToString(A.LengthY()) + " " + System::Convert::ToString(A.LengthZ()) + " ";
	SymOx->Text = A.SymmetryX(B) ? "true" : "false";
	SymOy->Text = A.SymmetryY(B) ? "true" : "false";
	SymOz->Text = A.SymmetryZ(B) ? "true" : "false";
	isTriangle->Text = A.Triangle(B, C) ? "true" : "false";
	triangleArea->Text = System::Convert::ToString(A.SquareTriangle(B, C));
	return System::Void();
}

System::Void realPoint::MyForm::AboutProgramm_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Здесь находится данные об программе!", "Информация об программе!");

	return System::Void();
}

System::Void realPoint::MyForm::Exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();

	return System::Void();
}
