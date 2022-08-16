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
    int i;
    if(maxsize >= 100 && loc >= maxsize){
        cout<<"Insertion not possible..!";
        exit(0);
    }
    else{
        for(i = maxsize - 1; i >= loc; i--){
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
    }
    return -1;
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
        cout<<"Enter "<<maxsize<<" number into the array : ";
        for(int i = 0; i < maxsize; i++){
            cin>>x[i];
        }
    }
}

void Array::Display_Element(){
    for(int i = 0; i < maxsize; i++){
        cout<<"The elements of the array are : ";
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
    int key,location,element;
    
    Array arr1;
    arr1.Read_Element();
    arr1.Display_Element();
    cout<<"Enter the element to be searched : ";
    cin>>key;
    int r = arr1.search(key);
    cout<<"The element found at index "<<r<<" ."<<endl;
    cout<<"Insert the location of the element : ";
    cin>>location;
    cout<<"Enter the element you want to insert : ";
    cin>>element;
    arr1.insert(location,element);
    arr1.Display_Element();
    return 0;
}