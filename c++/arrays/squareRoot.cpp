#include <iostream>


int sqR(int n){
    int s=0;
    int e=n;
    int ans;
    int mid=s+((e-s)/2);

    while(s<=e){
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
       mid=s+((e-s)/2);
    }
    return ans;
}

double mP(int n,int p){
    double answer=sqR(n);
    double fact=1;

    for(int i=0;i<p;i++){
        fact=fact/10;
        // std::cout<<fact<<std::endl;
        for(double j=answer;j*j<n;j=j+fact){
            // std::cout<<"loda"<<j*j<<" "<< fact<<std::endl;
            answer=j;
        }
    }

    return answer;
}

int main(){
    int n;
    std::cin>>n;

    double a=mP(n,3);
    std::cout<<a<<std::endl;
}