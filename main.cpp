#include <iostream>

using namespace std;
/*
Au final, on mettra la matrice représentatn le problème ici,
Idéalment, juste ça, puis on appelle le solveu et on fait un c out pour la solution
*/
int main()
{
 //   cout << "Hello world!" << endl;

 int tableau[3][3];
 tableau[0][0] =0;
 tableau[1][1] =0;
 tableau[2][2] =0;
 tableau[0][1] =1;
 tableau[1][0] =1;
 tableau[2][0] =2;
   tableau[0][2] =2;
   tableau[1][2] =3;
   tableau[2][1] =3;

   cout << tableau<< endl;
    return 0;
}
