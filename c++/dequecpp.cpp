#include <iostream>
#include <deque>
 
using namespace std;
 
void showdeque(deque <int> g)
{
    deque <int> :: iterator iter;
    for (iter = g.begin(); iter != g.end(); ++iter)
        cout << '\t' << *iter;
    cout << '\n';
}
 
int main()
{
    deque <int> que;
    que.push_back(10);
    que.push_front(20);
    que.push_back(30);
    que.push_front(15);
    cout << "The deque que is : ";
    showdeque(que);
 
    cout << "\nque.size() : " << que.size();
    cout << "\nque.max_size() : " << que.max_size();
 
    cout << "\nque.at(2) : " << que.at(2);
    cout << "\nque.front() : " << que.front();
    cout << "\nque.back() : " << que.back();
 
    cout << "\nque.pop_front() : ";
    que.pop_front();
    showdeque(que);
 
    cout << "\nque.pop_back() : ";
    que.pop_back();
    showdeque(que);
 
    return 0;
}
