//Time: 7ms
//Space: 8.8mb


#include<iostream>
using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
	int arrR[26] = { 0 };
	int arrM[26] = { 0 };

	for (int i = 0; i < ransomNote.length(); i++)
	{
		arrR[ransomNote[i] - 'a']++;
	}

	for (int i = 0; i < magazine.length(); i++)
	{
		arrM[magazine[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (arrR[i] != 0 && arrM[i] < arrR[i])
			return false;
	}
	return true;
}
int main()
{
	cout << canConstruct("abc", "abcdef") << endl;
	cout << canConstruct("abc", "asjdnasindjiasncjab") << endl;
	cout << canConstruct("abc", "abefgh");
}
