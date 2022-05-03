#include <iostream>

using namespace std;

int main()
{   int n=5,i;
int arr[5]= {5682,9874,3377,8492,7856};

int maxi=INT_MAX;
int mini=INT_MIN;

for(i=0;i<n;i++)
{  //finding the max element
    if(arr[i]>mini)
    {
        mini=arr[i];
    }
}

cout<<"MAX number is "<<mini<<endl;

for(i=0;i<n;i++)
{  //finding the min element
    if(arr[i]<maxi)
    {
        maxi=arr[i];
    }
}
cout<<"MIn number is "<<maxi;


    return 0;
}
