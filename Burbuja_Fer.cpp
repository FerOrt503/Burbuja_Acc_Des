#include <iostream>
using namespace std;

void burbuja(int arr[], int n, char opcion) {
    for(int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (opcion == 'a' && arr[j] > arr[j+1]) {
                //intercambiar para orden ascendente
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } else if (opcion == 'b' && arr[j] < arr[j+1]) {
                //intercambiar  para orden descendente
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main() {
    cout << "Selecciona una opcion:\n";
    cout << "a) Ascendente\n";
    cout << "b) Descendente\n";
    int arr[] = {64, 34, 25, 12, 22, 11, 90, -4, 20, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    char opcion;
    cout << "Escoge 'a' para orden ascendente o 'b' para orden descendente: ";
    cin >> opcion;
    burbuja(arr, n, opcion);
    cout<<"Array ordenado : \n";
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    return 0;
}
