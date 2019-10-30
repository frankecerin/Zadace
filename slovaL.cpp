  #include <iostream>
#include <cstdlib>

using namespace std;

int main() {
int i,b;
b=0;
char X[]="Lipanj";
for(i=0;X[i]!='\0';i++)
{
	if(X[i]=='l'||X[i]=='L'){
		b=b+1;
	}
	cout<<X[i]<<endl;
}
if(b>0){
	cout<<"Slovo L/l postoji.";
}
else{
	cout<<"Slovo L/l ne postoji.";
}
	system("PAUSE");
	return 0;
}
