// Aaj hum banayenge, array se queue...
#include<iostream>
using namespace std;

class Queuearr{
public:
    int n;
    int a[100];
    int b[100];
    Queuearr(int x){
        n =x;
        a[n];
        b[n];
        //Initialise them both to zero as default
        for(int i=0;i<n;i++){
            a[i] = 0;
        }
        for(int i=0;i<n;i++){
            b[i] = 0;
        }
    }
    
    // Numbers Ghusedo
    void enqueue(int value){
        //If queue length is 0
        if(n==0){cout << "Queue is empty" << endl; return;}
        
        //Send all values of array a into array b
        for(int i=0;i<n;i++){
            b[i] = a[i];
        }
        
        //Fill pos 1 of a and bring all the rest values back
        a[0] = value;
        for(int i=0;i<n-1;i++){
            a[i+1] = b[i];
        }
    }
    
    //Numbers aage se nikalo
    void dequeue(){
        //If Queue length is 0
        if(n==0){cout << "Queue is empty" << endl; return;}
        
        //Last element zero kar do
        if(a[n-1]!=0){a[n-1] = 0;}
        
        else{
            int i=n-1;
            while(a[i]=0){
                i=i-1;
            }
            a[i-1]=0;
        }
    }
    
    //Kitne bade ho bhai?
    void size(){
        cout << "This Queue can store upto " << n << " elements." << endl;
    }
    //Khali to nahi h?
    void isEmpty(){
        if(n==0){cout << "This Queue is empty."<<endl;}
        else {
            cout << "This Queue can never be empty as it will contain zero if you don't give any input"<<endl;
        }
    }
    //Upar kya h?
    void top(){
        cout << "The top is " << a[0] << endl;
    }
    //Stack dikhao mujhe
    void disp(){
        for(int i=0;i<n;i++){
            cout << a[i] << "->";
        }
        cout << "\b\b  " << endl;
    }
    
};

int main(){
    int n;
    cout << "How long is Queue supposed to be?" << endl;
    cin >> n;
    Queuearr q1(n);
    
    for(int i=1;i<=n;i++){
        q1.enqueue(i);
    }
    q1.disp();
    q1.dequeue();
    q1.dequeue();
    q1.disp();
    q1.isEmpty();
    q1.top();
    q1.size();
    q1.enqueue(8);
    q1.disp();
    q1.dequeue();
    q1.disp();
    
    return 0;
}
