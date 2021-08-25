
#include <iostream>
#include <queue>
 
using namespace std;
 
void printPriorityQueue(priority_queue<int> processQueue)
{
    priority_queue<int> process = processQueue;
    while (!process.empty()) {
        cout << '\t' << process.top();
        process.pop();
    }
    cout << '\n';
}

void printQueue(queue<int> processQueue)
{
    queue<int> process = processQueue;
    while (!process.empty()) {
        cout << '\t' << process.front();
        process.pop();
    }
    cout << '\n';
}
 
int main()
{
    priority_queue<int> processQueue;
    queue<int> unorderQueue;

    for (int i = 0; i < 10; i++)
    {
        int randomInt = rand() % 10 + 1;
        processQueue.push(randomInt);
        unorderQueue.push(randomInt);
    }

    cout << "Cola de procesos original: "; 
    printQueue(unorderQueue);
 
    // Print size
    cout << "\nSize de cola de procesos: " << processQueue.size();

    // Print process list.
    cout << "\nList a de procesos despues del algoritmo: ";
    printPriorityQueue(processQueue);
 
    return 0;
}