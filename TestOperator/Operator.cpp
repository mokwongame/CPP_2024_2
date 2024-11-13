#include "Point2.h"

int main(void)
{
	using namespace std;

	Point2 pt(5, 7);
	pt.print(); cout << endl;
	Point2 pt2;
	pt2 = pt; // 이때는 할당 연산자(operator=)가 호출됨
	pt2.print();
	cout << endl << pt2 << endl << pt << endl;

	Point2 pt3 = pt + pt2;
	cout << endl << "pt3 = " << pt3 << endl;
	return 0;
}