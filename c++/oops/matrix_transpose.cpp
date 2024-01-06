#include <iostream>

class Matrix{
    
    int row;
    int col;
    int **arr;
    
    public:

    Matrix(int r,int c){
        row=r;
        col=c;
        arr =new int *[row];
        for(int i=0;i<row;i++){
            arr[i]=new int[col];
        }
    }

    void inpM(){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                std::cin>>arr[i][j];
            }
        }
    }

    Matrix transpose(){
        Matrix result(row,col);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                result.arr[i][j]=arr[j][i];
            }
        }
        return result;
    }

    void display(){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                std::cout<<arr[i][j]<<" ";
            }
            std::cout<<std::endl;
        }
    }
};


int main(){
    int r,c;
    std::cin>>r;
    std::cin>>c;

    Matrix m1(r,c);
    // Matrix m2(r,c);
    m1.inpM();
    Matrix m2(c,r);
    m2=m1.transpose();
    m2.display();

}