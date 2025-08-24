#include <iostream>

using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int count;
    int size;
    int largest;

public:
    Stack(int size)
    {
        this->arr = new int[size];
        this->top = -1;
        this->count = 0;
        this->size = size;
        this->largest = 0;
    }

    void Push(int);
    void Pop();
    void Display();
    void isEmpty();
    void isFull();
    void SecondLargeData();
};

void Stack::Push(int data)
{

    if (this->top == this->size -1)
    {
        cout << "\n-------------------------------\n";
        cout << "Stack is Full..." << endl;
        cout << "-------------------------------\n\n";
        return;
    }

    this->top++;
    this->arr[top] = data;
    this->count++;

    cout << "\n-------------------------------\n";
    cout << "Data Added successfully..." << endl;
    cout << "-------------------------------\n\n";

}

void Stack::Pop()
{
    if (this->count == 0)
    {
        cout << "\n-------------------------------\n";
        cout << "Stack is Empty..." << endl;
        cout << "-------------------------------\n\n";
        return;
    }

    this->arr[top] = 0;
    this->top--;
    this->count--;

    cout << "\n-------------------------------\n";
    cout << "Data Deleted successfully..." << endl;
    cout << "-------------------------------\n\n";
}

void Stack::Display()
{
    if (this->count == 0)
    {
        cout << "\n-------------------------------\n";
        cout << "Stack is Empty..." << endl;
        cout << "-------------------------------\n\n";
        return;
    }
    cout << "\n-------------------------------\n";
    for (int i = this->top; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
    cout << "-------------------------------\n\n";
}

void Stack::isEmpty()
{
    if (this->count == 0)
    {
        cout << "\n-------------------------------\n";
        cout << "Stack is Empty..." << endl;
        cout << "-------------------------------\n\n";
    }
    else
    {
        cout << "\n-------------------------------\n";
        cout << "No, Stack is not Empty..." << endl;
        cout << "-------------------------------\n\n";
    }
}

void Stack::isFull()
{
    if (this->size == this->count)
    {
        cout << "\n-------------------------------\n";
        cout << "Stack is Full..." << endl;
        cout << "-------------------------------\n\n";
    }
    else
    {
        cout << "\n-------------------------------\n";
        cout << "No, Stack is not Full..." << endl;
        cout << "-------------------------------\n\n";
    }
}

void Stack::SecondLargeData(){

    if (this->count == 0)
    {
        cout << "\n-------------------------------\n";
        cout << "Stack is Empty..." << endl;
        cout << "-------------------------------\n\n";
        return;
    }
    
    return;
}


int main()
{
    
    int size;
    int choice;
    
    cout << "Enter The Stack Size : ";
    cin >> size;

    Stack s(size);

    do
    {   
        cout << "\n=================================================\n";
        cout << "Press 1. For Push The Element" << endl;
        cout << "Press 2. For Pop The Element" << endl;
        cout << "Press 3. For Display The Elements" << endl;
        cout << "Press 4. For Check The Stack is Empty" << endl;
        cout << "Press 5. For Check The Stack is Full" << endl;
        cout << "Press 6. For Second Large Element" << endl;
        cout << "Press 0. For Exit" << endl;
        cout << "=================================================\n\n";

        cout << "Enter the Your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int data;

            cout << "Enter the data : ";
            cin >> data;

            s.Push(data);
            break;
        }
        case 2:
        {
            s.Pop();
            break;
        }
        case 3:
        {
            s.Display();
            break;
        }
        case 4:
        {
            s.isEmpty();
            break;
        }
        case 5:
        {
            s.isFull();
            break;
        }
        case 6:
        {
            s.SecondLargeData();
            break;
        }
        case 0:
        {
            cout << "\n-------------------------------\n";
            cout << "Thank You for Using Stack..." << endl;
            cout << "-------------------------------\n\n";
            break;
        }
        }
    } while (choice != 0);

    return 0;
}