#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
int i, brojo;
brojo=0;
char X[]="Koliko slova a ima u ovoj recenici?";
for(i=0;X[i]!='\0';i++)
{
	if(X[i]=='a'||X[i]=='e'||X[i]=='i'||X[i]=='o'||X[i]=='u')
	{
		brojo=brojo+1;
	}
}
cout<<"U znakovnom nizu:"<<endl;
cout<<"Koliko samoglasnika ima u ovoj recenici?"<<endl;
cout<<"Ima "<<brojo<<" samoglasnika."<<endl;
	return 0;
}
