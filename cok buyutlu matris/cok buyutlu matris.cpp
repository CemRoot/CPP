/*Çok boyutlu matrislere örnek olarak bu örneği seçtim
10 kişilik bir sınıftaki öğrencilerin aldığı 4 not ve ortalmarını 3 farklı ders için yapan programı 3 boyutlu dizi tanımlayarak kodladım*/


#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;
int main() {

    srand(time(0));//karısık sayılar atamak için 
    int i, j, k, x, y, z;//tanımladık 
    double ort;//ortalama
    double A[10][6][3];//10 öğrenci no , 6 not(No ksnv Odev, final 3 dersten olusan cok boyut)

    for (k = 0; k < 3; k++) {//matris adeti
        for (i = 0; i <= 9; i++) {//diziler 0'dan başladıpı için "<=9"dedim 

            A[i][0][k] = i + 1;//öğrenci no al/

            for (j = 1; j < 5; j++) {//dikeyde 5 

                A[i][j][k] = 1 + (int)rand() % 100;

                ort = (((A[i][1][k] * 20) + (A[i][2][k] * 20) + (A[i][3][k] * 60)) * 0.5 / 100 + 100 + (A[i][4][k] * 0.5));

                A[i][5][k] = round(ort);//basarı notu
            }//for j sonu
        }//for i sonu
    }//for k sonu
    cout << "No\tKSnv\tOdev\tVize\tFinl\tBasari notu";
    cout << "\n===\t===\t===\t===\t===\t===\t===\n";
    for (z = 0; z < 3; z++) {
        for (x = 0; x <= 9; x++) {
            for (y = 0; y <= 5; y++) {
                cout << A[x][y][z] << "\t";
            }//for y sonu
            cout << endl;
        }//for x sonu
        cout << z + 1 << ".dersin notudur\n";
    }//for z sonu*/
    return 0;
}
