#include <iostream>
using namespace std;

int main(){

    /*
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    */
/*
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i;
        j++;
    }
    cout<<endl;
    i++;
   }*/
/*
   int n;
   cin>>n;
   int i=1;
   int k=1;
   while(i<=n){
    int j=1;
    while(j<=i){
        cout<<k;
        j++;
        k++;
    }
    cout<<endl;
    i++;
   } */
/*
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i+j-1;
        j++;
    }
    cout<<endl;
    i++;
   }*/

/*upper wale question ka better solution.
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
    int j=1;
    int val=i;
    while(j<=i){
        cout<<val;
        j++;
        val++;
    }
    cout<<endl;
    i++;
   } */

//     int n;
//    cin>>n;
//    int i=1;
//    while(i<=n){
//     int j=1;
//     int val=i;
//     while(j<=i){
//        cout<<val; 
//         j++;
//         val--;
//     }
//     cout<<endl;
//     i++;
//    }

// int n;
// cin>>n;
// int i=1;
// char ch='A';
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<ch;
//         j++;
//     }
//     cout<<endl;
//     i++;
//     ch++;
// }

// int n;
// cin>>n;
// int i=1;
// char k='A';
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<k;
//         k++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// int n;
// cin>>n;
// int i=1;
// char k='A';
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<char(k+i+j-2);
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// int n;
// cin>>n;
// int i=1;
// char k='A';
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<char(k+i+j-2);
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// int n;
// cin>>n;
// int i=1;
// char k='A';
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<char(k+n-i+j-1);
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     // space
//     int s=1;
//     while(s<=n-i){
//         cout<<"_";
//         s++;
//     }
//     //stars 
//     int j=1;
//     while(j<=i){
//         cout<<'*';
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n-i+1){
//         cout<<'*';
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     //space
//     int s=1;
//     while(s<i){
//         cout<<" ";
//         s++;
//     }
//     //star
//     int j=1;
//     while(j<=n-i+1){
//         cout<<'*';
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// good question
// int n;
// cin>>n;
// int i=1;
// //rows
// while(i<=n){
//     //spaces
//     int s=1;
//     while(s<=n-i){
//         cout<<" ";
//         s++;
//     }
//     //1st traingle
//     int j=1;
//     while(j<=i){
//         cout<<j;
//         j++;
//     }
//     //2nd traingle
//     int g=i-1;
//     int k=1;
//     while(k<i){
//         cout<<g;
//         k++;
//         g--;
//     }


//     cout<<endl;
//     i++;
// }

// good question.

int n;
cin>>n;
// rows
int i=1;
while(i<=n){
    //1st traingle
    int j=1;
    while(j<=n-i+1){
        cout<<j;
        j++;
    }
    //2nd traingle
    int k=1;
    while(k<i){
        cout<<'*';
        k++;
    }
    //3rd traingle
    int r=1;
    while(r<i){
        cout<<'*';
        r++;
    }
    //4th traingle
    int c=1;
    int y=n-i+1;
    while(c<=n-i+1){
        cout<<y;
        y--;
        c++;
    }
    cout<<endl;
    i++;
}





}