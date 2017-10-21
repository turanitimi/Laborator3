   #include <iostream>
   #include <windows.h>  //  Pentru a putea apela Sleep()

   using namespace std;

   int main(){
      for (int i = 10; i > 0; i--) {
         cout << i << endl;
         Sleep(1000);         // Temporizare 1s
      }
      cout << "Racheta lansata." << endl;
      return 0;
   }
