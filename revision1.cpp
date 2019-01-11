//exercise program on pointers
#include<iostream>
using namespace std;
int main(){
    //initialising integer
    int b= 2;
    // declaring and initialising a pointer
    int *a = &b;
    cout<< &b <<endl;//address of integer
    cout<<b<<endl;//value of integer
    cout<< sizeof(b) <<"bytes"<<endl;//size of integer
    
    cout<< &a<<endl;
    cout<< *a<<endl;
    cout << a<<endl;
    cout<< sizeof(a)<<"bytes"<<endl;
    
    char y;
    char x= y;
    char *z = &x;
    cout<< &y <<endl;
    cout<<y<<endl;
    cout<< sizeof(y) <<"bytes"<<endl;
    
    cout<< &z<<endl;
    cout<< *z<<endl;
    cout << z<<endl;
    cout<< sizeof(z)<<"bytes"<<endl;
    
    
    double m = 3 ;
    double *n = &m ;
    cout<<&m<<endl;
    cout<<m<<endl;
    cout<< sizeof(m) <<"bytes"<<endl;
    
    cout<< &n<<endl;
    cout<< *n<<endl;
    cout << n<<endl;
    cout<< sizeof(n)<<"bytes"<<endl;
    
    return 0;
}
