#include<iostream>
#include<cmath>

using namespace std;

 int adiff(int A,int B)
 {
       int C , D ;
       if(A<B){
        C = B-A;
        D = C%360;
        if(D>180){
          return 360-D;
        }else{
          return D;
        }
       }else{
        C = A-B;
        D = C%360; 
        }
        if(D>180){
          return 360-D;
        }else{
          return D;
       }
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);

    return 0;
}
