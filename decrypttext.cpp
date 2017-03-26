#include<bits/stdc++.h>
#include<wchar.h>
#include<locale.h>
#define mp make_pair
using namespace std;

map<char,pair<wchar_t,wchar_t> > homochar;
map<wchar_t,pair<wchar_t,char> > duplicate;
map<int,wchar_t> homospace;

void define_homo_character()
{
	homochar['-']=mp(L'\x2d',L'\x2010');
	homochar[';']=mp(L'\x3b',L'\x037e');
	homochar['C']=mp(L'\x43',L'\x216d');
	homochar['D']=mp(L'\x44',L'\x216e');
	homochar['K']=mp(L'\x4b',L'\x212a');
	homochar['L']=mp(L'\x4c',L'\x216c');
	homochar['M']=mp(L'\x4d',L'\x216f');
	homochar['V']=mp(L'\x56',L'\x2164');
	homochar['X']=mp(L'\x58',L'\x2169');
	homochar['c']=mp(L'\x63',L'\x217d');
	homochar['d']=mp(L'\x64',L'\x217e');
	homochar['i']=mp(L'\x69',L'\x2170');
	homochar['j']=mp(L'\x6a',L'\x458');
	homochar['l']=mp(L'\x6c',L'\x217c');
	homochar['v']=mp(L'\x76',L'\x2174');
	homochar['x']=mp(L'\x78',L'\x2179');
}

void define_duplicate_char()
{
	duplicate[L'\x2010']=mp(L'\x2d','-');
	duplicate[L'\x037e']=mp(L'\x3b',';');
	duplicate[L'\x216d']=mp(L'\x43','C');
	duplicate[L'\x212a']=mp(L'\x44','D');
	duplicate[L'\x212a']=mp(L'\x4b','K');
	duplicate[L'\x216c']=mp(L'\x4c','L');
	duplicate[L'\x216f']=mp(L'\x4d','M');
	duplicate[L'\x2164']=mp(L'\x56','V');
	duplicate[L'\x2169']=mp(L'\x58','X');
	duplicate[L'\x217d']=mp(L'\x63','c');
	duplicate[L'\x217e']=mp(L'\x64','d');
	duplicate[L'\x2170']=mp(L'\x69','i');
	duplicate[L'\x458']=mp(L'\x6a','j');
	duplicate[L'\x217c']=mp(L'\x6c','l');
	duplicate[L'\x2174']=mp(L'\x76','v');
	duplicate[L'\x2179']=mp(L'\x78','x');
}

void define_homo_space()
{
	homospace[0]=L'\x20';
	homospace[1]=L'\x2000';
	homospace[2]=L'\x2004';
	homospace[3]=L'\x2005';
	homospace[4]=L'\x2008';
	homospace[5]=L'\x2009';
	homospace[6]=L'\x202f';
	homospace[7]=L'\x205f';
}

int main()
{
	freopen("output.txt","r",stdin);
	freopen("resultantmark.txt","w",stdout);
	wchar_t ch;
	wstring str;
	while(wscanf(L"%lc",&ch)!=EOF)
	{
		if(ch==' ')
		{
			continue;
		}
		else
		{
			if(









	
