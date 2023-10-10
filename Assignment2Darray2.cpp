#include<iostream>
using namespace std;
int main(){//Q 1
int n;
cout<<"Enter number of columns/rows in the matrix : ";
cin>>n;
int arr[n][n];
cout<<"Enter elements of matrix : ";
for(int i =0;i<n;i++){
for(int j =0;j<n;j++){
cin>>arr[i][j];
}
}
cout<<"Requred output : "<<endl;
for(int i =0;i<n;i++){
for(int j =0;j<n;j++){if( (i == j) || (j == n-i-1)){
cout<<arr[i][j]<<" ";
}
else{ cout<<"  ";}

}
cout<<endl;
}
//Q 2
int n,m;
cout<<"Enter number of columns & rows respctively in the matrix : ";
cin>>n>>m;
int arr[m][n];
cout<<"Enter elements of matrix : ";
for(int i =0;i<m;i++){
for(int j =0;j<n;j++){
cin>>arr[i][j];
}
}
cout<<"Required matrix : "<<endl;
for(int j =n-1;j>=0;j--){
for(int i =0;i<m;i++){
    cout<<arr[i][j]<<" ";
}
cout<<endl;}
//Q 3
int n,m;
cout<<"Enter number of columns & rows respctively in the matrix : ";
cin>>n>>m;
int arr[m][n];
cout<<"Enter elements of matrix : ";
for(int i =0;i<m;i++){
for(int j =0;j<n;j++){
cin>>arr[i][j];
}
}
cout<<"Required matrix : "<<endl;
for(int j =0;j<n;j++){
for(int i =0;i<m;i++){if(j%2 != 0){
    cout<<arr[i][j]<<" ";
}
else{cout<<arr[m-1-i][j]<<" ";}
}
}
//Q 4
int n;
cout<<"Entrer the value for n : ";
cin>>n;
int arr[n][n];

int minr =0,maxr =n-1;
    int minc = 0,maxc = n-1;
    int a =1,r = minr,c;
    char ch = 'R';
    while(true){if(ch == 'R'){
        for(int i = minc;i<=maxc;i++){
            arr[r][i]= a;
            a++;
        }
        minr++;
        ch = 'D';
        c = maxc;
    }
     else  if(ch == 'D'){
        for(int i = minr;i<=maxr;i++){
            arr[i][c]=a;
            a++;
        }
        maxc--;
        ch = 'L';
        r = maxr;
    }
else  if(ch == 'L'){
        for(int i = maxc;i>=minc;i--){
            arr[r][i] = a;
            a++;
        }
        maxr--;
        ch = 'U';
        c = minc;
    }
else  if(ch == 'U'){
        for(int i = maxr;i>=minr;i--){
            arr[i][c] = a;
            a++;
        }
        minc++;
        ch = 'R';
        r = minr;
    }
  if(a == n*n +1){
    break;
  }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    }










