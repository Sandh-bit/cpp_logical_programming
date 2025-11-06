// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

char nonrepeatingchar(char str[])
{
    int i,j;
    for(int i=0;str[i]!='\0';i++)
    {
        bool isrepeated=false;
        for(int j=0;str[j]!='\0';j++)
        {
            if(i!=j&&str[i]==str[j])
            {
             isrepeated =true;
            break;
            }
        }
        if(!isrepeated)
        return str[i];
    }
    return '\0';
}
int main()
{
    char str[100];
    cout<<"enter string"<<endl;
    cin>>str;
    char result= nonrepeatingchar(str);
    
   if(result!='\0')
   {
       cout<<"first non repeated char :"<<result<<endl;
   }
   else
   cout<<"not found"<<endl;
    return 0;
}


