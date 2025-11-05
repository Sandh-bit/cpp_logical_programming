#include <iostream>
using namespace std;
void reversechar(char str[],int start,int end)
{
    while(start<end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
void reversewords(char str[])
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    reversechar(str,0,len-1);
    int start=0;
    for(int i=0;i<=len;i++)
    {
        if(str[i]==' '|| str[i]=='\0')
        {
            reversechar(str,start,i-1);
            start=i+1;
        }
    }
}
int main() {
    char str[]="hello world";
    reversewords(str);
    cout<<str<<endl;

    return 0;
}
