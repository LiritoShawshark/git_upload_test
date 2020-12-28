#include <stdio.h>
#include <iostream>
using namespace ::std;

char vuln(int num) {
	return 'a' + num;
}

int main()
{	
	char a = '1';
	printf("%d", a == '2');
	
	for (int i = 0; i <= 2; i++)
	{
		cout << vuln(i) << endl;
	}
	cout << "Hello world!" << endl;
}