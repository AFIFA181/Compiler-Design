#include<iostream>
using namespace std;



int main()


 {


  int x[] = {2,20,7,2,1};

    int sum = 0;
    float avg = 0;
    int i= 0;
     int n = sizeof(x) / sizeof(x[0]);

    for (i = 0; i < n; i++) {
        sum += x[i];
    }

   avg = sum / n;

    cout << "The Average is  : " << avg << endl;

}

