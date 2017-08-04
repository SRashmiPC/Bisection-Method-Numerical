#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void BisectionMethod(double a, double b, double tol, int nmax);
void findt(int q);

int main(){
	int a = pow(1,2);
	//cout << a;
	//BisectionMethod(0.4, 0.5, 1e-12, 1000);
	findt(1);
	cin >> a;
	return 0;
}

void BisectionMethod(double a, double b, double tol, int nmax){
	cout << "Enter to bisection method" << endl;
	int No_iterations = 0;
	double ans;
	double val=NULL;
	do{
		cout << No_iterations << "val is: "<< val << endl;
		if (No_iterations == nmax){
			break;
		}

		double temp = (a + b) / 2;
		val = ((3.5e7 + 0.401*pow(1000 / temp, 2))*(temp - 42.7e-3) - 1.3806503e-18*3);
		if (val < tol){
			ans = val;
			cout << "v is = " << ans << endl;
			cout << "nomber of iterations is = " << No_iterations << endl;
			break;
		}
		else{
			double vval = ((3.5e7 + 0.401*pow(1000 / a, 2))*(a - 42.7e-3) - 1.3806503e-18);
			if (vval*val < 0){
				b = temp;
			}
			else{
				a = temp;
			}
			
		}
		No_iterations++;
	} while (true);
}

void findt(int q){
	int a = 1;
	int b = 11;
	int i = 0;
	double val1, val2;
	while (b < INT_MAX){
		cout << b << "\t";
		val1=((3.5e7 + 0.401*pow(1000 / a, 2))*(a - 42.7e-3) - 1.3806503e-18);
		val2 = ((3.5e7 + 0.401*pow(1000 / b, 2))*(b - 42.7e-3) - 1.3806503e-18);
		if (val1*val2 < 0){
			
			BisectionMethod(a, b, 1e-12, 200);
			cout << "range: " << a << "-" << b << endl;
			break;
		}
		else{
			a=a+10;
			b=b+10;
		}
		i++;
	}
	cout << "no " << endl;
}