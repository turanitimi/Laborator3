   #include <iostream>
   #include <windows.h>  //  Pentru a putea apela Sleep()

   using namespace std;

   int main(){
       int a[20], i;
    for (i = 0; i < 20; i++) {
      a[i] = i + 1;
   }
    for (i = 0; i < 20; i++) {
      cout << "a[" << i << "]=" << a[i] << endl;
   }
      cout << endl;
      return 0;
   }
