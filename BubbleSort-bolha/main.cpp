#include <iostream>

using namespace std;

int main()
{
    int array [10] = {10,9,3,2,5,6,4,8,7,1};
    int aux;

    for(int i=1;i<10;i++){
        for(int j=0;j<9;j++){
            if(array[j] > array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }

    }

    for(int p=0;p<10;p++){
       cout<<array[p]<<endl;
    }
    return 0;
}

