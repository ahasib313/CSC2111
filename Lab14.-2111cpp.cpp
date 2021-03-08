#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

template<class Data>
struct Node {
    Data info;
    Node* link;
};

template<class Data>
class ListType {
protected:
    Node<Data>* first;
    Node<Data>* last;
    int count;
public:
    ListType();
    void initializeList();
    void destroyList();
    void reset();
    void print() const;
    int length() const;
    Data front() const;
    Data back() const;
    bool isEmpty() const;
    bool search(const Data& searchItem) const;
    void insertFirst(const Data& newItemData);
    void insertLast(const Data& newItemData);
    void deleteNode(const Data& newItemData);
    Data elementK(int);
    void deleteElementK(int);
};
template<class Data>
Data elementK(int)
{
    assert(k > 0 && k < count);
    Node<Data>* current = first;
    while (k > 0)
    {
        current = current->link;
        k--;
    }
    return current->info;
}
template<class Data>
void ListType<Data>::deleteElementK(int k)
{
    assert(k > 0 && k < count);
    if (k == 0)
    {
        Node<Data>* temp = first;
        first = first->link;
        delete temp;
    }
    else
    {
        Node<Data>* del = first;
        Node<Data>* prevDel = NULL;
        while (k != 0)
        {
            prevDel = del;
            del = del->link;
            k--;
        }
        if (last == del)
        {
            last = prevDel;
            prevDel = link = NULL;
            delete del;
        }
        else
        {
            prevDel->link = del->link;
            delete del;
        }
    }
}
template<class Data>
ListType<Data>::ListType() {
    first = NULL;
    last = NULL;
    count = 0;
}
template<class Data>
void ListType<Data>::initializeList()
{
    destroyList();
}


template<class Data>
void ListType<Data>::destroyList() {
    Node<Data>* temp;

    while (first != NULL) {
        temp = first;
        first = first->link;
        delete temp;
    }
    last = NULL;
    count = 0;
}

template<class Data>
void ListType<Data>::reset() {
    destroyList();
}

template<class Data>
void ListType<Data>::print() const {
    Node<Data>* current;
    current = first;
    while (current != NULL) {
        cout << current->info << " "; //overload the operator<<
        current = current->link;
    }
    cout << endl; 
}

template<class Data>
int ListType<Data>::length() const{ return count; }

template<class Data>
Data ListType<Data>::front() const { 
    assert(first != NULL);
    return first->info;
}

template<class Data>
Data ListType<Data>::back() const { 
    assert(last != NULL);
    return last->info;
}

template<class Data>
bool ListType<Data>::isEmpty() const { 
    //return (count == 0);
    // return (first == NULL);
    return (last == NULL);
}

template<class Data>
bool ListType<Data>::search(const Data& searchItem) const {
    Node<Data>* current;
    current = first;
    while (current != NULL) {
        if (current->info == searchItem)
            return true;
        current = current->link;
    }
    return false;
}

template<class Data>
void ListType<Data>::insertFirst(const Data& newItemData) {
    Node<Data>* newNode;
    newNode = new Node<Data>;
    newNode->info = newItemData;
    newNode->link = first;
    first = newNode;

    count++;

    if (last == NULL) {
        last = newNode;
    }
}

template<class Data>
void ListType<Data>::insertLast(const Data& newItemData) {
    Node<Data>* newNode;
    newNode = new Node<Data>;
    newNode->info = newItemData;
    newNode->link = NULL;
    
    if(first == NULL) {
        first = newNode;
        last = newNode;
    } else {
        last->link = newNode;
        last = newNode;
    }
    count++;    
}

template<class Data>
void ListType<Data>::deleteNode(const Data& deleteItemData) {
    Node<Data>* del;
    Node<Data>* prevDel;

    if (first==NULL) { //first case where the list is empty
        cout << "The list is empty!" << endl;
    } else {
        if (first->info == deleteItemData) { // second case: first node is deleted
            del = first;
            first = first->link;
            delete del;
            count--;

            if (first==NULL) {
                last = NULL;
                delete del;
            }
        } else {
            bool found = false;
            prevDel = first;
            del = first->link;

            while (del != NULL && !found) {
                if (del->info != deleteItemData) {
                    del = del->link;
                    prevDel = prevDel->link;
                } else {
                    found = true;
                }
            }
            if (found) {
                prevDel->link = del->link;
                if (last == del) {
                    last = prevDel;
                }
                count--;
                delete del;
            } else {
                cout << "The item is not in the list." << endl;
            }
        }
    }
}

template <class Type>
class orderLinkedList : public linkedList<Type> {
public:
    bool search(const Type& searchItem) const;
    void insert(const Type& newItem);
    void insertFirst(const Type& newItem); 
    void insertLast(const Type& newItem); 
    void deleteNode(const Type& deleteItem);
};

template <class Type>
bool orderLinkedList::search(const Type& searchItem) const {
    bool found = false;
    Node<Type>* current = first;

    while (current != NULL && !found) {
        if (current->info >= searchItem) { // 2 3 4 5 6 8 9 NULL... seach 5
            found = true;
        } else {
            current = current->link;
        }
    }

    if (found) {
        return (current->info == seachItem);
    }

    return false;
}

template <class Type>
void orderLinkedList::insert(const Type& newItem) {
    Node<Type>* newNode = new Node<Type>;
    newNode->info = newItem;
    newNode->link = NULL;

    if (first == NULL) { //Case 1
        first = newNode;
        last = newNode;
    } else {
        Node<Type>* pos = first;
        Node<Type>* prev;

        bool found = false;

        while (pos != NULL && !found) {
            if (pos->info >= newItem) { // 2 3 4 5 6 8 9 NULL... add 1
                found = true;
            } else {
                prev = pos;
                pos = pos->link;
            }
        }

        if (pos == first) { //Case 2
            newNode->link = first;
            first = newNode;
        } else {
            newNode->link = pos;
            prev->link = newNode;

            if (pos == NULL) {
                last = newNode;
            }
        }
    }
    count++;
}

template <class Type>
void orderLinkedList::insertFirst(const Type& newItem) {
    insert(newItem);
}

template <class Type>
void orderLinkedList::insertLast(const Type& newItem) {
    insert(newItem);
}

template <class Type>
void orderLinkedList::deleteNode(const Type& delItem) {
    if (first == NULL) { // Case 1
        cout << "The list is empty." << endl;
        return;
    }

    Node<Data>* del;
    Node<Data>* preDel;
    bool found = false;

    del = first;
    while (del != NULL && !found) { // 2 3 4 5 6 8 9 NULL... delete 2
        if(del->info >= delItem) {
            found = true;
        } else {
            preDel = del;
            del = del->link;
        }
    }

    if (del->info != delItem) {
        cout << "Item is not in the list" << endl;
        return;
    }

    if (first == del) { // case 2
        first = first->link;

        if (first == NULL) {
            last = NULL;
        }
    } else { // Case 3
        preDel->link = del->link;

        if (del == last) { //Check if del is last node
            last = preDel; // update last
        }        
    }
    
    delete del;
    count--;
}
