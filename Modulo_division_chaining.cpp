#include <iostream>
using namespace std;
#define SIZE 10
struct HashTable
{
    int data;
    HashTable *ptr_next;
};
void insert()
{
    HashTable *hashArray[SIZE];
    cout << "Enter how many elements do you want to insert: " << endl;
    int ele_size;
    cin >> ele_size;
    int j;
    int arr[ele_size];
    cout << "Enter the elements to be inserted: " << endl;
    for (int i = 0; i < ele_size; i++)
    {
        cin >> arr[i];

    }

    for (int i = 0; i < SIZE; i++)
    {
        for (j = 0; i < ele_size; j++)
        {
            if (arr[j] % SIZE == i)
            {
                hashArray[i]->data = arr[j];
                hashArray[i]->ptr_next=ptr_next;
            }
        }
    }
}
void print_table()
{
}
int main()
{
    HashTable hashtab;

    return 0;
}