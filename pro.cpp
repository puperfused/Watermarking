#include<bits/stdc++.h>
#include<wchar.h>
using namespace std;
int main()
{

    // latin captial letter C in UTF is 0x43
    //roman capital letter C in UTF is 0x216d
    freopen("latin.txt","r",stdin);
    //freopen("roman.txt","w",stdout);
    char ch[4];
    //wchar_t ch[2];
    setlocale(LC_ALL,"");
    //scanf("%ls",ch);
    scanf("%s",ch);
    printf("0x%0.2x\n",ch);
    fflush(stdin);
    /*ch[1]=wchar_t(0x006d);
    ch[0]=wchar_t(0x21);*/
    ch="\u216D";
    printf("%s\n",ch);
    fclose(stdout);
    return 0;
}
