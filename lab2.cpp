#include <iostream>
using namespace std;

int main()




{


    int i,n;
cout<<"Enter the  size of the array: ";
cin>>n;


float arr[n];
cout<<"\n";

for (i=0; i<n ;i++)

{

  cout<<"Enter the  number ";
cin>>arr[i];
}
for (i=1; i<n ;i++)

{
      if (arr[0] < arr [i])

      {
           arr [0] = arr [i];

      }
}


cout<<"Enter the max number: "<< arr [0];
cout<<"\n";


for (i=0; i<n ;i++)

{
      if (arr[0] > arr [i])

      {
           arr[0] = arr [i];

      }
}




cout<<"Enter the min number: "<<arr [0]<<endl;


return 0;
}
