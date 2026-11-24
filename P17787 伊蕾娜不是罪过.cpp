#include <iostream>
#include <string>

using namespace std;

int main()
{
	string n, elainaS = "elaina", sayaS = "saya";
	cin >>n;
	bool elaina = true, saya = true;
	int ebeginN = 0, sbeginN = 0, felaina = 0, fsaya = 0;
	while (elaina != false)
	{
		if (felaina != -1)
		{
			felaina = n.find(elainaS, ebeginN);
			if (felaina != -1)
			{
				n.replace(felaina, 6, "**elaina**");
				ebeginN = felaina + 10;
			}
		}
		if (felaina == -1)
		{	elaina = false;	}
	}
	while (saya != false)
	{
		if (fsaya != -1)
		{
			fsaya = n.find(sayaS, sbeginN);
			if (fsaya != -1)
			{
				n.replace(fsaya, 4, "__saya__");
				sbeginN = fsaya + 8;
			}
		}
		if (fsaya == -1)
		{	saya = false;	}
	}
	cout <<n;
}
