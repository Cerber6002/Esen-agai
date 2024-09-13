#include <iostream>
using namespace std;
int main()
{
   double i = 1.0;
   int n = 0;
   while(i*2 !=i){//if i+1 !=i,than n = 53;
       i=i*2;
       n++;
   }
   
   cout<<"Cycles:"<<" "<<n<<endl;

    return 0;
}