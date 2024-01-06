#include <iostream>

class Matrix{
    public:
    int **arr;
    int row;
    int col;

    public:

    Matrix(int r,int c){
        row=r;
        col=c;
        arr=new int*[row];
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

    Matrix operator +(Matrix other){
        Matrix result(row,col);

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                result.arr[i][j]= arr[i][j]+other.arr[i][j];
            }
        }
        return result;
    }

    void displayM(){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                std::cout<<arr[i][j]<<" ";
            }
            std::cout<<std::endl;
        }
    }

    Matrix operator *(Matrix other){
        if(col!=other.row){
            std::cout<<"not possible"<<std::endl;
        }

        Matrix result(row,other.col);

        for(int i=0;i<row;i++){
            for(int j=0;j<other.col;j++){
                for(int k=0;k<col;k++){
                    result.arr[i][j]+=arr[i][k]*other.arr[k][j];
                }
            }
        }
        return result;
    }

    // ~Matrix(){
    //     // for(int i=0;i<row;i++){
    //     //     delete[] arr[i];
    //     // }

    //     delete[] arr;
    // }
};


int main(){
    int r,c;
    std::cin>>r;
    std::cin>>c;

    Matrix m1(r,c);
    Matrix m2(r,c);

    m1.inpM();
    m2.inpM();
    Matrix m3=m1+m2;
    m3.displayM();

    Matrix m4= m1*m2;
    m4.displayM();



}