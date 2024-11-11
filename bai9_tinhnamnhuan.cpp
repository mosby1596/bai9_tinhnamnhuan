#include <iostream>
#include <cmath>
using namespace std;
bool isnamnhuan(int sonam);
int main() {
	int nam;
	cout << "nhap nam:";
	cin >> nam;
	if (isnamnhuan(nam))
	{
		cout << "nam nhuan";
	}
	else { cout << "nam khong nhuan"; }
	return 0;
	

}
bool isnamnhuan(int sonam) {
	if(sonam% 4== 0 && sonam % 100 !=0|| sonam % 400==0)
	{
		return true;
	}
	else { 
		return false; }
}

