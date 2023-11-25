#include <iostream>
using namespace std;

// class node
// {
// public:
//     int val;
//     node *next;
//     node(int value, node *nextNode = nullptr)
//     {
//         this->val = value;
//         this->next = nextNode;
//     }
// };


// class linkedList{
//     public:
//         node* head=nullptr;
//         node* end=nullptr;
//         int length;
//         linkedList(){
//             head->next = nullptr;
//             end->next = nullptr;
//             length =0;
//         }

//         void addFirstValue(int val){
//             head->val = val;
//             head->next = end;
//             end->next = nullptr;
//         }

//         void addValue(int Val){
//             if(length <1){
//                 addFirstValue(Val);
//             }
//             else{
//                 node NewNode(Val);

//             }
//         }

// };

int main()
{
    int newArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        cout << "entered values:" << newArray[i] << endl;
    }
}