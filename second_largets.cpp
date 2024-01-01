#include<climits>
class Solution{
public:	
int print2largest(int a[], int n) {
int max=INT_MIN;
int max1=INT_MIN;
int k=max1;                    //copying the value of max1 
for(int i=0;i<n;i++)
{                              //finding the maximum element of the array 
if(a[i]>max)
{
  max=a[i];
}
} 
for(int i=0;i<n;i++)
{
if(a[i]==max)
{                         //here we are finding the second lagrest element of the array continue;
}
else{
if(a[i]>max1)
{
max1=a[i]; 
}
}
}
if(max1==k)
{
max1=-1;                         // time complexity is O(n) 
return max1;                    //overall sapce complexity is O(n)
}
else 
{
return max1;
}
}
};
