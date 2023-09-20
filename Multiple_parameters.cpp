#include <iostream> //incliudes the iostream file

using namespace std; // includes the std = standard library


// Parameter datatype  = int
// Parameter name = x


int numbers(int x, int y, int a, int b){

                int resultado = x+y+a+b;
                return resultado;
}

int main (){

    cout << numbers(10,20,112,44) << endl;
    return 0;


    }


