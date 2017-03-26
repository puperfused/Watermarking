#include<bits/stdc++.h>
#include<wchar.h>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"");
	freopen("output.txt","r",stdin);
	freopen("decoded.txt","w",stdout);
	wchar_t wc;
	while(wscanf(L"%lc",&wc)!=WEOF)
	{
		wprintf(L"%lc-%#x\n",wc,wc);
	}
	fclose(stdout);
	return 0;
}
