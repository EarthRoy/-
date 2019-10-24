#include"iostream"
using namespace std;
int main()
{
	int count, temp, C_zero = 0, C_posive = 0,C_negative=0;
	int i;
	float S = 0;
	cout << "Count of Numbers= ";
	cin >> count;

	for (i = 0; i < count; i++) {
		cout << "E1 is:";
		cin >> temp;
		if (temp == 0) {
			C_zero++;
		}
		if (temp < 0) {
			C_negative++;
		}
		if (temp > 0) {
			C_posive++;
		}
		S += temp;
		}
	if (count != 0) {
		S = S / count;
		}
	cout << "Count of Numbers =" << count<<endl;
	cout << "C_Negative =" << C_negative<<endl;
	cout << "C_posive ="<<C_posive<<endl;
	cout << "C_zero ="<<C_zero<<endl;
	system("pause");
}