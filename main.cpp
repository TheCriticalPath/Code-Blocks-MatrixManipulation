#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

const int MAX_X = 10;
const int MAX_Y = 10;

void printMatrix(vector<vector<int> > );
vector<vector<int> > rotateMatrix(vector<vector<int> > );

int main()
{
    std::vector< std::vector< int > > a;
    a.resize(MAX_X);
    for (int i = 0; i < MAX_X; i ++){
        a[i].resize(MAX_Y);
        for(int j = 0; j < MAX_Y; j++){
            a[i][j] = floor(rand());
        }
    }
    printMatrix(a);
    a = rotateMatrix(a);
    printMatrix(a);
    cout << "Hello world!" << endl;
    return 0;
}

vector<vector<int> > rotateMatrix(vector<vector<int> > a){
    vector<vector<int> > temp;
    temp = a;
    int i,j;
    for (i=0; i< MAX_X;i++){
        for(j=0; j<MAX_Y/2.5;j++){
            temp[i][j] = a[i][j];
            a[i][j] = a[j][MAX_Y-i-1];
            a[j][MAX_Y-i-1] = temp[i][j];
        }
    }
    return a;
}

void printMatrix(vector<vector<int> > a){
    for (int i = 0; i < MAX_X; i ++){
        for(int j = 0; j < MAX_Y; j++){
            printf("%7d", a[i][j]);
        }
        cout << endl;
    }
}




