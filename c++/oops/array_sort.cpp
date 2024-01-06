#include <iostream>

class ArrayS{
    int *arr;
    int size;

    public:
    ArrayS(int size){
        this->size=size;
        arr= new int[size];
    }

    ~ArrayS(){
        delete[] arr;
    }

    void inputArray(){
        for(int i=0;i<size;i++){
            std::cin>>arr[i];
        }
    }

    void sortA(){
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }

    void displayA(){
        for(int i=0;i<size;i++){
            std::cout<<arr[i]<<" ";
        }
        std::cout<<std::endl;
    }


};

int main(){
    int lenght;
    std::cin>>lenght;

    ArrayS sorter(lenght);

    sorter.inputArray();

    sorter.sortA();

    sorter.displayA();
}