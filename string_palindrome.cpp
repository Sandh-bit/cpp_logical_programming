#include <iostream>
using namespace std;
bool ispalindrome(char str[])
{
    int len=0;
    while(str[len]!='\0')
    len++;
    int start=0;
    int end=len-1;
    
    while(start<end)
    {
        if(str[start]!=str[end])
        return false;
        start++;
        end--;
    }
    return true;
}
int main()
{
    char str[]="level";
    if(ispalindrome(str))
    {
        cout<<"palindrome"<<endl;
    }
    else
    cout<<"not palindrome"<<endl;
    
    

    return 0;
}
