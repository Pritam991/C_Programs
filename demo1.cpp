#include <bits/stdc++.h>
using namespace std;

int main()
{
  char a[100],b[100];
  int len1,len2,c=0,k=0,i,j;
  cout<<"Enter the two strings ::";
  cin>>a>>b;
  len1=strlen(a);
  len2=strlen(b);
    for(i=0;i<len1;i++)
     {
       for(j=0;j<len1;j++)
       {
         if(a[i]==a[j] && j!=i)
         {k++;}
       }
     }
    for(i=0;i<len1;i++)
    {
      for(j=0;j<len2;j++)
      {
        if(a[i]==b[j])
        {c++;}
      }
    }
   
  if(c-k==len1)
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
  }
  return 0;
}