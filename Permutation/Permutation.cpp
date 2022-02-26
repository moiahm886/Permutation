#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n = 0, k = 0;
	cin >> n >> k;
	vector<int>vect;
	for (int i = 0; i < 5; i++)
	{
		vect.push_back(i + 1);
	}
	int j = 0;
	stringstream ss;
	int m;
	do
	{
		j++; 
		if (j == k)
		{
			for (auto x : vect)
			{
				ss << x;
			}
			ss >> m;
			string z = to_string(m);
			cout << z << endl;
		}
	} while (next_permutation(vect.begin(), vect.end()));

}