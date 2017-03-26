#include<bits/stdc++.h>
#include<wchar.h>
#include<locale.h>
using namespace std;
int main()
{
	freopen("output.txt","r",stdin);
	//freopen("text1.txt","w",stdout);
	wchar_t wc;
	//char wc;
	int i=0;
	do	
	{
		wscanf(L"%lc",&wc);
		i++;
		wprintf(L"%lc\n",wc);
	}while(wscanf(L"%lc",&wc)!=WEOF);
	wprintf(L"\ncoming out of while with %d",i);
	fclose(stdout);
	return 0;
}


