//add all number of an array size 10
#include<iostream>
using namespace std;
int main ()
{
     int sum=0;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<=9;i++)
    {
        sum=sum+arr[i];
    }

    cout<<"sum of al element of the array is "<<sum;
    return 0;

}