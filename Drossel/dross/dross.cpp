// dross.cpp: ������� ���� �������.

#include "stdafx.h"
#include "Form1.h"
#include <cmath>

using namespace dross;
//using namespace std;
/*
float Induct (int N, int mu, float l1vn, float l1vt, float l2vn, float l2vt, float h, float *mass1)
{
double mu0 = 1.25664*pow(10.0,-6.0);
float Pvt,Pvn,lsr,Sc,kf,Ld;
float *massout=new float[];
//str s;
//���������
Pvn = 2*(l1vn + l2vn);
Pvt = 2*(l1vt + l2vt);
//������ ������� �����
lsr = (Pvn + Pvt)/2;
//(*������ ������� ����������� ������� ��������������*)
Sc = (l1vn - l1vt)*h/2;
//(*������ �����. ����� ����������*)
kf = (Pvn /Pvt + 1)/(Pvn/Pvt - 1)*log(Pvn/Pvt)/2;
//(*������ ������������� �������� � ������������� ����������� � �������������� ������*)
Ld = (Sc*kf*mu*mu0*N*N)/lsr;
mass1[0]=1;
mass1[1]=2;
mass1[2]=3;
for (int i=0;i<=2;i++)
{
	massout[i]=mass1[i];
}
//delete [] mass1;
return *massout;
}
*/

float *Induct (int N, int mu, float l1vn, float l1vt, float l2vn, float l2vt, float h)
{
/*float SP;
	SP=pow(2.0,6.0);
*/
double mu0 = 1.25664*pow(10.0,-6.0);
float Pvt,Pvn,lsr,Sc,kf,Ld;
//float *massout=new float[];
//str s;
//���������
Pvn = 2*(l1vn + l2vn);
Pvt = 2*(l1vt + l2vt);
//������ ������� �����
lsr = (Pvn + Pvt)/2;
//(*������ ������� ����������� ������� ��������������*)
Sc = (l1vn - l1vt)*h/2;
//(*������ �����. ����� ����������*)
kf = (Pvn /Pvt + 1)/(Pvn/Pvt - 1)*log(Pvn/Pvt)/2;
//(*������ ������������� �������� � ������������� ����������� � �������������� ������*)
Ld = (Sc*kf*mu*mu0*N*N)/lsr;
massout[0]=Ld;
massout[1]=kf;
massout[2]=lsr;
massout[3]=Sc;
return massout;
}

float Induct1 (int N, int mu, float kf, float lsr, float Sc)
{
double mu0 = 1.25664*pow(10.0,-6.0);
float Ld;
//(*������ ������������� �������� � ������������� ����������� � �������������� ������*)
Ld = (Sc*kf*mu*mu0*N*N)/lsr;
return Ld;
}

float Saturation (int N, int mu, float lsr, float I)
{
//double mu0 = 1.25664*pow(10.0,-6.0);
double a=0.01,b=2.65*pow(10.0,-6.0),c=1.7;
float H, mu_s, K;
H=(0.4*3.14*N*I)/lsr;
K=1/(a+b*powf(H,c));
mu_s=mu*K/100;
return mu_s;
}

float Saturation1 (int N, float mu, float lsr, float I, float a, float b, float c)
{
float H, mu_s, K;
H=(0.4*3.14*N*I)/lsr;
K=1/(a+b*powf(H,c));
mu_s=mu*K/100;
return mu_s;
}

float mu_vz (float lvz, float mu_vh, float lsr)
{
float kc=0.95;
mu_ekv=mu_vh/(1/kc+mu_vh*(lvz/lsr));
return mu_ekv;
}

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew Form1());
	return 0;
}
