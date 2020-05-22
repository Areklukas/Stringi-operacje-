#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char** argv) 
{
	fstream plik;  
   	string t[1000];
   	int s[1000];
   	int i=0;
   	plik.open("c:\\plik.txt");
   	if(plik.good()) 
    while(!plik.eof())  
    {
        plik>>t[i];
        plik>>s[i];
		t[i]=t[i].erase(0,s[i]);
        i++;
    }
    plik.close();
	plik.open("c:\\plik.txt"); 
	for(int w=0;w<i;w++)
	{
		plik<<t[w]<<endl;
	}
 	plik.close(); 
 	
	return 0;
}
