#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    while(true){
        int a,b;
        cout<<"Enter The Operation U Want to Perform on Two Numbers(+,-,*,/,%(Modulo))"<<endl;
        cout<<endl;
        cout<<"*If You Want to End the Operation,Then Enter #*"<<endl;
        cin>>ch;
        if(ch=='+'){
            cout<<"Enter The Two Numbers"<<endl;
            cin>>a>>b;
            cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        }
        else if(ch=='*'){
            cout<<"Enter The Two Numbers"<<endl;
            cin>>a>>b;
            cout<<a<<" * "<<b<<" = "<<a*b<<endl;
        }
        else if(ch=='-'){
            cout<<"Enter The Two Numbers"<<endl;
            cin>>a>>b;
            cout<<a<<" - "<<b<<" = "<<a-b<<endl;
        }
        else if(ch=='/'){
            cout<<"Enter The Two Numbers"<<endl;
            cin>>a>>b;
            cout<<float(a)<<" / "<<float(b)<<" = "<<float(a)/float(b)<<endl;
        }
        else if(ch=='%'){
            cout<<"Enter The Two Numbers"<<endl;
            cin>>a>>b;
            cout<<a<<" % "<<b<<" = "<<a%b<<"(Remainder)"<<endl;
        }
        else if(ch=='#'){
            break;
        }
        else{
            cout<<"Enter Valid Option"<<endl;
        }
    }
    return 0;
}