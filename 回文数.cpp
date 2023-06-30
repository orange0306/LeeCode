class Solution {
public:
    bool isPalindrome(int x) 
    {
       	if (x < 0)
	{
		cout << "false" << endl;
		return false;
	}
	else
	{
		int a[33];
		int i = 0;
		while (x != 0)
		{
			a[i++] = x % 10;
			x /= 10;
		}
		int j = 0;
		while (j < i / 2)
		{
			if (a[j] != a[i - 1 - j])
			{
				return false;
			}
			j++;
		}
		return true;
	}
    }
};
