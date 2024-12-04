#include<iostream>
#include<vector>
int main()
{
	std::vector<int> con;
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		int n;
		std::cin >> n;
		if (con.size() == 0)
		{
			con.push_back(n) ;
		}
		else 
		{
			bool boolen = false;
			for (int j = 0;j<con.size(); j++)
			{
				if (con[j] == n)
					boolen = true;
			}
			if (boolen == false)
			{
				con.push_back(n);
			}
				
		}
	}
	for (int num:con)
	{
		std::cout <<num<<"\t";
	}
	return 0;
}