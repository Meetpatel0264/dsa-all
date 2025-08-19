#include <iostream>

using namespace std;

class Stack{
    protected:
        int *arr;
        int top;
        int size;
        int count;

    public:
        Stack(int size){
            this->count = 0;
            this->top = -1;
            this->size = size;
            this->arr = new int[size];
        }
        ~Stack(){
            delete[] arr;
        }

        void push (int data);
        void display();
        void pop();
        void peek();
        void isEmpty();
        void isFull();
    };

    void Stack::push(int data){
            if(this->top == this->size - 1){
                cout << "Stack is full not push data :"<< endl;
            }else{
                this->top++;
                this->arr[this->top] = data;
                this->count++;
            }
    }

    void Stack::isEmpty(){
        
        if(this->top == -1){
            cout << "stack is empty" << endl;
            return;
        }
    }
  
    void Stack::isFull(){
        
        if(this->top == this->size -1){
            cout << "stack is full" << endl;
            return;
        }
    }

    void Stack::peek(){
            
        if(this->top == -1){
            cout << "stack is empty" << endl;
        }else{
            cout << this->top[arr] << endl;
        }
    }
    
    void Stack::display(){
        if(this->top == -1){
            cout << "stack is empty" << endl;
        }else{
            for(int i = this->top; i >= 0; i--){
            cout << arr[i] << endl;
        }
        }
    }

    void Stack::pop(){
        if (this->top == -1){
            cout << "Stack underflow. Cannot pop from empty stack." << endl;
        } else {
            cout << "Popped element: " << this->arr[this->top] << endl;
            top--;
            count--;
        }
    }

int main(){
    int arr_size;

    cout << "enter any arr size ";
    cin >> arr_size;
     Stack s1(arr_size);
    int choice , data;

    do{
        cout << "Enter 1 to push data :" << endl;
        cout << "Enter 2 to pop data :" << endl ;
        cout << "Enter 3 to peek data :" << endl;
        cout << "Enter 4 to display stack :" << endl;
        cout << "Enter 5 to check if stack is empty :" << endl;
        cout << "Enter 6 to check if stack is full :" << endl;
        cout << "Enter 7 to check size of stack :" << endl;

        cout << "Enter your choice :";
        cin >> choice;

        switch(choice){
            case 1:{
                cout << "Enter the data :" ;
                cin >> data;
                s1.push(data);
            }
            break;
            case 2:{
                s1.pop();
            }
            break;
            case 3:{
                s1.peek();
                break;
            }
            case 4:{
                s1.display();
            }
            break;
            case 5:{
                s1.isEmpty();
                break;
            }
            case 6:{
                s1.isEmpty();
                break;
            }
        }
    }while(choice != 0);

    return 0;
}