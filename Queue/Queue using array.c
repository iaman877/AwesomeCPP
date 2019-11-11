#include <iostream> 
using namespace std; 
#define MAX_SIZE 5 
class Queue { 
private: 
    int item, i; 
    int arr_queue[MAX_SIZE]; 
    int rear; 
    int front; 
public: 
     Queue():front(0),rear(0) 
    { 
        cout<<"Constructor Called"<<endl; 
    } 
    void insert() { 
        if (rear == MAX_SIZE) 
            cout << "\n## Queue Reached Max!"; 
        else { 
            cout << "\nEnter The Value to be Insert : "; 
            cin>>item; 
            cout << "\n## Position : " << rear + 1 << " , Insert Value  : " << item; 
            arr_queue[rear++] = item; 
        } 
    } 

    void removeData() { 
        if (front == rear) 
            cout << "\n## Queue is Empty!"; 
        else { 
            cout << "\n## Position : " << front << " , Remove Value  :" << arr_queue[front]; 
            front++; 
        } 
    } 
    void display() { 
        cout << "\n## Queue Size : " << (rear - front); 
        for (i = front; i < rear; i++) 
            cout << "\n## Position : " << i << " , Value  : " << arr_queue[i]; 
    } 
}; 
int main() { 
    int choice, exit_p = 1; 
    Queue obj; 
    cout << "\nSimple Queue Example - Class and Memeber Functions in C++"; 
    do { 
        cout << "\n\n Queue Main Menu"; 
        cout << "\n1.Insert \n2.Remove \n3.Display \nOthers to exit"; 
        cout << "\nEnter Your Choice : "; 
        cin>>choice; 
        switch (choice) { 
            case 1: 
                obj.insert(); 
                break; 
            case 2: 
                obj.removeData(); 
                break; 
            case 3: 
                obj.display(); 
                break; 
            default: 
                exit_p = 0; 
                break; 
        } 
    } while (exit_p); 
   return 0; 
} 
