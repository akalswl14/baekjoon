#include <stdio.h>

int h,w,l;
int mat[205][205];
char find[205];

int diy[8]={0,-1,-1,-1,0,1,1,1};
int dix[8]={1,1,0,-1,-1,-1,0,1};
long long dp[105][205][205];

void search(int y,int x,int k){
   for(int i=0;i<8;i++){
      int new_y=y+diy[i];
      int new_x=x+dix[i];
      
      if(new_y<0 || new_x<0 || new_x>=w || new_y>=h) continue;
      if(mat[new_y][new_x]==find[k-1] && dp[k-1][new_y][new_x]){
         dp[k][y][x]+=dp[k-1][new_y][new_x];
      }
   }
}

void view(int k){
   for(int i=0;i<h;i++){
      for(int j=0;j<w;j++)
         printf("%d ",dp[k][i][j]);
      printf("\n");
   }


}

int main(){
   scanf("%d%d%d",&h,&w,&l);
   for(int i=0;i<h;i++){
      char inf[205]={};
      scanf("%s",inf);
      for(int j=0;inf[j];j++)
         mat[i][j]=inf[j];
   }
   scanf("%s",find);

   for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)
         if(mat[i][j]==find[0])
            dp[0][i][j]=1;

   for(int k=1;k<l;k++){
      for(int i=0;i<h;i++)
         for(int j=0;j<w;j++)
            if(mat[i][j]==find[k])
               search(i,j,k);
   }
   long long ans=0;
   for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)
         ans+=dp[l-1][i][j];
   printf("%lld",ans);   
}   