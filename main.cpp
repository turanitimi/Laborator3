   #include <iostream>

   using namespace std;

   int main(){
       int a[5], nr, i; //int a[] = {1, -3, 6, 7, -12, -4, 2, 9} ha igy teszem nem kell beirni;
       cout << "Cate elemente sa aiba sirul? " << endl;
       cin >> nr;
       for (i=0; i<nr; i++) {
        cout << "a[" << i << "]=";
        cin >> a[i]; //eloszor kiiratja az eredeti sorozatot
       }
       for (i=0; i<nr; i++) {
        if( a[i] < 0)
            a[i] = -a[i];
            cout << a[i] << ", ";
       }
       cout << endl;
      return 0;
   }
