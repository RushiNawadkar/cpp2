#include <iostream>
using namespace std;

int main(){
    int n=5,index1=0,index2=0;
    char str1[n]="hello",str2[n]="world",strC[50];

    while(str1[index1]!='\0'){
        strC[index1] = str1[index1];
        index1++;
    }
    index1++;
    while (str2[index2]!='\0')
    {   
        index1++;
        strC[index1]=str2[index2];
        index2++;
    }

    for(int i=0; i<n*3; i++){
        cout<<strC[i];
    }
    
}

