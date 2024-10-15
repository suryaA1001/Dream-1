#include<iostream>
using namespace std;
bool search(char *a, char target)
{
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        if(*(a+i)==target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    char a[]= "hello";
    char target='e';
    int n=sizeof(a)/sizeof(a[0]);
    if(search(a,target))
    {
        cout<<"present"<<endl;
    }
    else
    {
        cout<<"absent";
    }
}
