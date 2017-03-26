#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("hashcode.txt","r",stdin);
	freopen("watermark.txt","w",stdout);
	uint64_t hash;
	scanf("%llu\n",&hash);
	uint64_t temp,res;
	string binary_val;
	temp=hash;
	while(temp!=0)
	{
		binary_val=(temp%2==0?"0":"1")+binary_val;
		temp/=2;
	}
	printf("%s",binary_val.c_str());
	fclose(stdout);
	return 0;
}
