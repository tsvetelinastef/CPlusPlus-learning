#include <iostream>
using namespace std;

//  "The final price is: {������ ���� �� ��������} lv."
// � "The discount is: {��������} lv."

int main()
{
	double metersLandscaped;
	cin >> metersLandscaped;

	double landscapedPrice = metersLandscaped * 7.61;
	double discoutAllSum = landscapedPrice * 0.18;
	double discountPrice = landscapedPrice - discoutAllSum;

	cout << "The final price is: " << discountPrice << " lv." << endl;
	cout << "The discount is: " << discoutAllSum << " lv.";

	return 0;
}
