#include <iostream>
using namespace std;

int main()
{
   int matA[2][2]={4,8,2,10};
   
   int transpose[2][2];
   
   cout << "matriks A" << endl;
   for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
        cout << matA[i][j] << " ";
        transpose[j][i] = matA[i][j];
    }
    cout << endl;
   }
   
   cout << "Hasil Transpose matriks A : " << endl;
   for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
        cout << transpose[i][j] << " ";
    }
    cout << endl;
   }
   
   system ("Pause");
   return 0;
}
