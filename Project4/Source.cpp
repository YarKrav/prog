#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "\t\t Zadanie 1" << endl << endl;

    int sizeA, sizeB;

    cout << "Enter the size of the first array: ";
    cin >> sizeA;

    cout << "Enter the size of the second array: ";
    cin >> sizeB;

    int* arrA = new int[sizeA];
    int* arrB = new int[sizeB];

    cout << "\n\nFirst array: ";
    for (int x = 0; x < sizeA; x++)
    {
        arrA[x] = rand() % 9 + 1;
        cout << arrA[x] << " ";
    }

    cout << "\n\nSecond array: ";
    for (int x = 0; x < sizeB; x++)
    {
        arrB[x] = rand() % 9 + 1;
        cout << arrB[x] << " ";
    }

    int* arrC = new int[sizeA+sizeB];
    cout << "\n\nThird array: ";
    for (int x = 0; x < sizeA; x++)
    {
        cout << arrA[x];
        cout << " ";
    }

    for (int x = 0; x < sizeB; x++)
    {
        cout << arrB[x];
        cout << " ";
    }




    /*cout << "\t\t Zadanie 2" << endl << endl;

    int sizeA, sizeB;

    cout << "Enter the size of the first array: ";
    cin >> sizeA;

    cout << "Enter the size of the second array: ";
    cin >> sizeB;

    int* arrA = new int[sizeA];
    int* arrB = new int[sizeB];

    cout << "\n\nFirst array: ";
    for (int x = 0; x < sizeA; x++)
    {
        arrA[x] = rand() % 9 + 1;
        cout << arrA[x] << " ";
    }

    cout << "\n\nSecond array: ";
    for (int x = 0; x < sizeB; x++)
    {
        arrB[x] = rand() % 9 + 1;
        cout << arrB[x] << " ";
    }

    int j = 0;
    for (int x = 0; x < sizeA; x++)
    {
        for (int y = 0; y < sizeB; y++)
        {
            if (arrA[x] == arrB[y])
            {
                j++;
            }
        }
    }

    int sizeC = j;
    int* arrJ = new int[sizeC];
    j = 0;
    for (int y = 0; y < sizeB; y++)
    {
        for (int z = 0; z < sizeA; z++)
        {
            if (arrB[y] == arrA[z])
            {
                arrJ[j] = arrB[y];
                j++;
            }
        }
    }

    int* arrC = new int[sizeC];
    cout << "\n\nThird array: ";
    for (int x = 0; x < sizeC; x++)
    {
        arrC[x] = arrJ[x];
        cout << arrC[x] << " ";
    }*/
}
