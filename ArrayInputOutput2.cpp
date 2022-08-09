#include <iostream>
using namespace std;
class Array{
    public:
        int x[100];
        int maxsize;
        Array();
        void Read_Element();
        void Display_Element();
        void Display_Element_Backward();
};
Array::Array(){
    cout<<"Enter the size of the array : ";
    cin>>maxsize;
}

void Array::Read_Element(){
    if(maxsize > 100){
        cout<<"Array maxed out!";
    }
    else{
        cout<<"Enter"<<maxsize<<" number into the array";
        for(int i = 0; i < maxsize; i++){
            cin>>x[i];
        }
    }
}

void Array::Display_Element(){
    for(int i = 0; i < maxsize; i++){
        cout<<"the element of the array";
        cout<<x[i]<<endl;
    }
}

void Array::Display_Element_Backward(){
    for(int i = maxsize - 1; i >= 0; i--){
        cout<<x[i];
    }
}

int main()
{
    Array arr1;
    arr1.Read_Element();
    arr1.Display_Element();
    
    return 0;
}