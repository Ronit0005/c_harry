#include <iostream>
using namespace std ;
int x = 10;
void sum(){
    cout<<x;
}
int main(){
    int x = 100 ;
    cout<<x;
    sum();
    bool is_true = false ;
    if (is_true == true){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    cout<<"\n"<<is_true ; 
    return 0;
}