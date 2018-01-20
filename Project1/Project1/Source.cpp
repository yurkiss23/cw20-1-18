#include<iostream>
using namespace std;

int main()
{
	const int SIZE = 5;
	//float sum = 0, total;
	//int mult = 1, num_p = 0, num_up=0, sum_p = 0, sum_up = 0;
	int arr[SIZE] = { 2,10,15,20,-3 };
	//ex.1
	/*for (int ind = 0; ind < SIZE;++ind) {
	cout << ind << "\t" << arr[ind] << "\n";
	sum += arr[ind];
	mult *= arr[ind];
	if (arr[ind]%2) {
	num_p++;
	sum_p += arr[ind];
	}
	else {
	num_up++;
	sum_up += arr[ind];
	}
	}
	cout << endl;
	for (int ind = SIZE-1; ind >= 0;--ind) {
	cout << ind << "\t" << arr[ind] << "\n";
	}
	cout << endl;
	total = sum / SIZE;
	cout << "sum: "<<sum <<"\t mult: "<<mult<< "\ttotal: "<<total << endl;
	cout << "kilkist parnix: " << num_p << "\tsum parnix: " << sum_p << endl;
	cout << "kilkist neparnix: " << num_up << "\tsum neparnix: " << sum_up << endl;*/

	//ex.2
	int max, ind_max, min, ind_min;
	for (int i = 0; i < SIZE; ++i) {
		cout << "input el #" << i << ":";
		cin >> arr[i];
	}
	for (int i = 1; i < SIZE; ++i) {
		max = arr[0];
		ind_max = 0;
		min = arr[0];
		ind_min = 0;
		if (arr[i] > max) {
			max = arr[i];
			ind_max = i;
		}
		if (arr[i]<min) {
			min = arr[i];
			ind_min = i;
		}
	}
	cout << max << "\n" << ind_max << endl;
	cout << min << "\n" << ind_min << endl;
	arr[ind_min] = max;
	arr[ind_max] = min;
	for (int i = 0; i < SIZE; ++i) {
		cout << "el #" << i << ":" << arr[i] << endl;
	}
	return 0;
}