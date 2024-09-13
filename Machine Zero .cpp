#include <iostream>
using namespace std;
int main()
{
   float z = 1;//float-->double z = 1.0,в этом варианте ответ выходит n=324
   int n = 0;
   while(2*z>z){
       z=z/10;
       n++;
   }
   
   cout<<"Cycles:"<<" "<<n<<endl;//Здесь ответ выходит 46

    return 0;
}