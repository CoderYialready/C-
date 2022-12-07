#include<bits/stdc++.h>

using namespace std;

int num[30];

int maxnum;

int main(){

    string str;

    cin>>str;

    int len=str.length();

    for(int i=0;i<len;i++){

        num[str[i]-'A'+1]++;

        maxnum=max(maxnum,num[str[i]-'A'+1]);

    }

    for(int i=1;i<=26;i++){

        if(num[i]==maxnum){

            printf("%c",'A'-1+i);

        }

    }

    system("pause");

    return 0;

}


