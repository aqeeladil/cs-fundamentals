#include <iostream>
using namespace std;

class Queue
{

    int *arr;
    int qfront;
    int rear;
    int size;

public:
    // this can also be done using the constructor(parameter) method like we did in stack implementation.
    Queue()
    {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    // insertion/push
    void enqueue(int data)
    {
        if (rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    // deletion/pop
    int dequeue()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }

    bool isEmpty()
    {
        if (qfront == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Queue q;

    q.enqueue(22);
    q.enqueue(32);
    q.enqueue(62);
    cout << q.front() << endl;

    q.dequeue();
    cout << q.front() << endl;
    
    if (q.isEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not Empty" << endl;
    }

    return 0;
}