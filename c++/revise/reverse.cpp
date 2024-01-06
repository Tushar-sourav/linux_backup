#include <iostream>
#include <vector>

void spiralPrint(std::vector<std::vector<int>> arr){
   int row=arr.size();
   int col=arr[0].size();


   int count=0;
   int total=row*col;

   int sr=0;
   int sc=0;
   int er=row-1;
   int ec=col-1;
   std::vector<int> ans;

   while(count<total){
      // printing first row
      for(int i=sr;i<=er;i++){
         ans.push_back(arr[sr][i]);
         count++;
      }
      sr++;

      //
      for(int j=sr;j<=er;j++){
         ans.push_back(arr[j][ec]);
         count++;
      }
      ec--;

      //
      for(int k=ec;k>=sc;k--){
         ans.push_back(arr[er][k]);
         count++;
      }
      er--;

      //
      for(int h=er;h>=sr;h--){
         ans.push_back(arr[h][sc]);
         count++;
      }
      sc++;
   }


   for(int i=0;i<ans.size();i++){
      std::cout<<ans[i]<<" ";
   }
   std::cout<<std::endl;
}


int main(){
   std::vector<std::vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
   spiralPrint(arr);
}