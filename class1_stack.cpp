
#include <iostream>
using namespace std;
int maxsize = 5;
int stack[5];
int tos =-1;

int isfull(){
    if(tos == maxsize - 1){
        return 1; 
        
    }
    return 0;
    
}

int isempty(){
    if(tos ==  - 1){
        return 1; 
        
    }
    return 0;
}    

void peek(){
    cout<<"Data in top of stack is:"<<stack[tos]<<endl;
}

void push(){
    if(!isfull()){
        int data;
        cout<<"Enter data to push: "<< endl;
        cin>>data;
        tos++;
        stack[tos]=data;
    }
    else{
        cout<<"Stack Overflow!!"<<endl;
    }
}

void pop(){
    if(!isempty()){
        int data;
        data = stack[tos];
        tos--;
        cout<< "Popped"<< data<< "from tos"<<endl;
    }
    else{
        cout<<"Stack Underflow!!"<<endl;
    }
}




int main()
{
    int choice;
    while(1){
        cout<<"Enter your choice: "<< endl;
        cout<<"Enter 1 to push "<<endl;
        cout<<"Enter 2 to pop "<<endl;
        cout<<"Enter 3 to peak "<<endl;
        cout<<"Enter 4 to exit "<<endl;
        cin>>choice; 
        if (choice ==1 ){
            push();
        }
        else if (choice ==2 ){
            pop();
        }
        else if (choice ==3 ){
            peek();
        }
        else if (choice ==4 ){
            break;
        }
        else {
            cout<<"Invalid Entry, Please Enter again!~"<<endl;
        }
    }
    return 0;
}