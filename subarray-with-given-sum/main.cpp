#include <iostream>

using namespace std;
int sub(int arr[],int n,int s){
int cs,i,j;
for(int i=0;i<n;i++){
    cs=arr[i];
    for(int j=i+1;j<n;j++){
        if(cs==s){
            cout<<"found"<<"at"<<i<<"and"<<j-1;
            return 1;
        }
        if(cs>s||j==n){
            break;
        }
        cs=cs+arr[j];
    }

}
cout<<"not found";
return 0;
}
int main()
{
   int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    sub(arr, n, sum);
    return 0;
}
