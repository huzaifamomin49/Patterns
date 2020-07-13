//
//  main.cpp
//  patterns
//
//  Created by huzaifa ashpak momin on 2020-06-19.
//  Copyright © 2020 Huzaifa. All rights reserved.
//

#include <iostream>
using namespace std;
void square(int);
void holo_square(int);
void chakra(int);
void pyramid(int);
void half_pyramid(int);
void z_pattern(int);
int main(int argc, const char * argv[]) {
    int n;
    cout<<"ENter number : ";
    cin>>n;
    square(n);
    holo_square(n);
    chakra(n);
    pyramid(n);
    half_pyramid(n);
    z_pattern(n);
    return 0;
}

void square(int n){
    cout<<"printing sqare"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"END"<<endl;
}

void holo_square(int n){
    cout<<"printing holo sqare"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 or i==n-1)
                cout<<"* ";
            else if(j==0 or j==n-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    cout<<"END"<<endl;
}

void chakra(int n){
    cout<<"Printing chakra"<<endl;
    int row=0,col=0;
    int end_row=n-1,end_col=n-1;
    int count=0;
    int chakra[n][n];
    for(int i=0;i<n/2;i++){
        row=col=i;
        end_col=n-i-1;
        while(col<end_col){             //print top row
            chakra[row][col]=count;
            col++;
            count++;
        }
       end_row=n-i-1;
        while(row<end_row){             // print last col
            chakra[row][col]=count;
            row++;
            count++;
        }
        end_col=i;
        while(col>end_col){             // print last row
            chakra[row][col]=count;
            col--;
            count++;
        }
        end_row=i;
        while(row>end_row){             // print last col
            chakra[row][col]=count;
            row--;
            count++;
        }
    }
    if(n%2==1){
        chakra[n/2][n/2]=n*n;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<chakra[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"END"<<endl;
}

void pyramid(int n){
    cout<<"Printing pyramid"<<endl;
    int space=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<space;j++){
            cout<<" ";
        }
       space--;
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
        
    cout<<"END"<<endl;
}

void half_pyramid(int n){
    cout<<"Printing half pyramid"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"END"<<endl;
}

void z_pattern(int n){
    cout<<"Printing z Pattern"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 or i==n-1 or (i+j)==n-1){
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<"END"<<endl;
}

