#include <iostream>
using namespace std;


void reversestring(string &str)
{
 int start=0;
        int end= str.length()-1;
        
        while(start<end)
        {
            char temp=str[start];
            str[start]=str[end];
            str[end]=temp;
            start++;
            end--;
        }


}
int main()
{
    string str;
    getline(cin,str);
    
    reversestring(str);
    cout<<str<<endl;
    return 0;
}
