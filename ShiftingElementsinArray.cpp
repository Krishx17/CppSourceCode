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
        int search(int);
        void insert(int loc,int el);
    };
    
void Array::insert(int loc, int element){
    if(maxsize >= 100 && loc >= maxsize){
        cout<<"Insertion not possible..!";
        exit(0);
    }
    else{
        for(int i = maxsize - 1; i >= loc; i--){
            x[i+1] = x[i];
        }
        x[i] = element;
    }
}
    
int Array::search(int k){
    for(int i = 0; i < maxsize; i++){
        if(x[i] == k){
            return i;
        }
        else{
            return 0;
        }
    }
}

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
    cout<<"Enter the element for searching :";
    cin>>key;
    r = arr1.search(key);
    cout<<"The element found at"<<r<<" .";
    cout<<"Insert the location of the element :";
    cin>>location;
    cout<<"Enter the element you want to insert :";
    cin>>element;
    r = arr1.insert(location,element);
    return 0;
}