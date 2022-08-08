/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;



class Array{
    public:
        int x[10];
        Array(){
        
    }
    void Read_Element();
    void Display_Element();
    
};
void Array::Read_Element(){
    cout<<"Enter the element of the array";
    for(int i = 0; i < 5; i++){
        cin>>x[i];
    }
}

void Array::Display_Element(){
    for(int i = 0; i < 5; i++){
        cout<<"the element of the array";
        cout<<x[i]<<endl;
    }
}

int main()
{
    Array arr1;
    arr1.Read_Element();
    arr1.Display_Element();
    
    return 0;
}