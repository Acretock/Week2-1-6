#include <vector>
#include <iostream>

using namespace std;

void Reverse(vector<int>& sourse) {
	int n = sourse.size() - 1;
	int temp;
	for (int i = 0; i < (n + 1)/2; i++)
	{
		temp = sourse[i];
		sourse[i] = sourse[n - i];
		sourse[n - i] = temp;
	}
}

int main()
{
	vector<int> arr = {1, 5, 3, 4, 2 , 6};
	Reverse(arr);
	for (auto i : arr)
		cout << i << ' ';

}
