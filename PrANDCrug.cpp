#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;
class PR 
{	int a, b;

public:  PR  (int l, int r) {
			a = l;
			b = r;
		}
		int getS() { return a*b; };
		int getP() { return 2*(a+b);}
};

class Crug
{	int p;
public: Crug (int e) {
			p = e;
		}
		int getS() {return 3.14*p*p;};
		int getP() {return 2*3.14*p;};
};
void main() {
	setlocale(LC_ALL, "RUS"); 
	int c, d, m;
	cout << "Ââåäèòå ñòîðîíó À: ";
	cin >> c;
	cout << "Ââåäèòå ñòîðîíó B: ";
	cin >> d;
	Square a(c, d);
	cout << "Ïëîùàäü ïðÿìîóãîëüíèêà: " << a.getS() << endl;
	cout << "Ïåðèìåòð ïðÿìîóãîëüíèêà: " << a.getP() << endl;
	cout << "Ââåäèòå ðàäèóñ êðóãà: ";
	cin >> m;
	Circle p(m);
	cout << "Ïëîùàäü êðóãà: " << p.getS() << endl;
	cout << "Ïåðèìåòð êðóãà: " << p.getP() << endl;
	system ("pause");
}
