#include<iostream>
using namespace std;


int main(){
    //Pattern 1
    cout<<"Pattern 1 "<<endl;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            cout << j;
        }
        cout << endl;
    }


    //Pattern 2
    cout<<"Pattern 2 "<<endl;
    int n=1;
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            cout<<n;
            n++;
        }
        cout<<endl;
    }

    //Triangle pattern
    cout<<"Triangle Pattern "<<endl;
    for(int i=0; i<5;i++){
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //Triangle pattern with reverse numbers
    cout<<"Triangle pattern with reverse numbers."<<endl;
    for(int i=1; i<=4; i++){
        int num = i;
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }

    //Inverted triangle pattern
    int num2 = 4;
    cout<<"Inverted Triangle pattern."<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int k=0; k<num2-i; k++){
            cout<<(i+1);
        }
        cout<<endl;
    }

    //Pyramid Pattern
    cout<<"Pyramid pattern ."<<endl;
    int num3 = 4;
    for(int i=0; i<num3; i++){
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //num1
        for(int k=1; k<=i+1; k++){
            cout<<k;
        }
        //num2
        for(int j=i; j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }

    //Hollow pyramid
    cout<<"Hollow Pyramid pattern"<<endl;

    //top part
    int num4=4;
    for(int i=0; i<num4; i++){
        //space
        for(int j=0; j<num4-i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        if(i != 0){
            for(int j=0; j<2*i-1; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    //bottom part
    for(int i=0; i<num4-1; i++){
        //space
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        //star
        cout<<"*";
        if(i!=num4-2){
            for(int j=0; j<2*(num4-i)-5; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
        
    }

    //Butterfly Pattern

    cout<<"Butterfly pattern: "<<endl;
    //top part
    for(int i=0; i<num4; i++){
        //first pattern
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        //middle space
        for(int j=0; j<2*(num4-i-1); j++){
            cout<<" ";
        }
        //second pattern
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;

    }
    //bottom part
    for(int i=num4-1; i>=0; i--){
        //first pattern
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        //space 
        for(int j=0; j<2*(num4-i-1); j++){
            cout<<" ";
        }
        //second pattern
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}


