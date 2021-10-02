// C++ program to find longest common prefix
// of given array of words.
#include<iostream>
#include<algorithm>

using namespace std;

// Function to find the longest common prefix
string longestCommonPrefix(string ar[], int n)
{

	// If size is 0, return empty string
	if (n == 0)
		return "";

	if (n == 1)
		return ar[0];

	// Sort the given array
	sort(ar, ar + n);

	for(int i=0;i<n;i++)
	{
		cout<<"     ARR SORT====     "<<ar[i];
	}
}

// Driver Code
int main()
{
	string ar[] = {"geeksforgeeks", "geeks",
						"geek", "geezer"};
	int n = sizeof(ar) / sizeof(ar[0]);
	cout << "The longest common prefix is: "
		<< longestCommonPrefix(ar, n);
	return 0;
}

// This code is contributed by jrolofmeister

