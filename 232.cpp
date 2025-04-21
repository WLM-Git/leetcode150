// #include <iostream>
// #include <stack>
// using namespace std;
//
// class MyQueue
// {
// public:
//     MyQueue()
//     {
//     }
//
//     void push(int x)
//     {
//         //将第二个栈内的元素推入第一个栈内
//         while (second.size() > 0)
//         {
//             val = second.top();
//             second.pop();
//             first.push(val);
//         }
//         first.push(x);
//     }
//
//     int pop()
//     {
//         //先将第一个栈内的所有元素放入第二个栈内
//         while (first.size() > 0)
//         {
//             val = first.top();
//             first.pop();
//             second.push(val);
//         }
//         //将第二个栈内的元素推出
//         val = second.top();
//         second.pop();
//         return val;
//     }
//
//     int peek()
//     {
//         //先将第一个栈内的所有元素放入第二个栈内
//         while (first.size() > 0)
//         {
//             val = first.top();
//             first.pop();
//             second.push(val);
//         }
//         //返回第二个栈顶元素
//         return second.top();
//     }
//
//     bool empty()
//     {
//         if (first.empty() && second.empty())
//         {
//             return true;
//         }
//         return false;
//
//     }
// private:
//     stack<int> first;
//     stack<int> second;
//     int val;
// };
//
// int main()
// {
//     MyQueue my_queue;
//     my_queue.push(1);
//     my_queue.pop();
//     cout << my_queue.empty() << endl;
// }