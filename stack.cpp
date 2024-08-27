#include <iostream>
using namespace std;

#define MAXSIZE 200

class Stack {
private:
    int stack[MAXSIZE];
    int top;

public:
    Stack() : top(-1) {}  // Constructor to initialize the stack

    void push();
    void pop();
    void display();
    void search();
    void topele();
    void size();
    void check();
    void clear();
};

void Stack::push() {
    int y;
    if (top >= MAXSIZE - 1) {
        cout << "STACK IS FULL\n";
    } else {
        cout << "ENTER THE VALUE TO PUSH: ";
        cin >> y;
        stack[++top] = y;
        cout << y << " HAS BEEN ADDED\n";
    }
}

void Stack::pop() {
    if (top < 0) {
        cout << "STACK IS EMPTY\n";
    } else {
        int a = stack[top--];
        cout << "ELEMENT DELETED BY POP FUNCTION IS " << a << "\n";
    }
}

void Stack::display() {
    if (top < 0) {
        cout << "STACK IS EMPTY\n";
    } else {
        cout << "THE NO OF ELEMENTS IN THE STACK IS: " << (top + 1) << "\n";
        cout << "THE STACK ELEMENTS ARE: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << "\n";
    }
}

void Stack::search() {
    int k;
    cout << "ENTER THE ELEMENT TO SEARCH: ";
    cin >> k;
    
    bool found = false;
    for (int i = 0; i <= top; i++) {
        if (k == stack[i]) {
            cout << "ELEMENT " << k << " IS IN THE POSITION " << i << "\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "THE ENTERED ELEMENT IS NOT IN THE STACK\n";
    }
}

void Stack::topele() {
    if (top >= 0) {
        cout << "TOP ELEMENT OF THE STACK: " << stack[top] << "\n";
    } else {
        cout << "STACK IS EMPTY\n";
    }
}

void Stack::size() {
    cout << "THE STACK SIZE: " << (top + 1) << "\n";
}

void Stack::check() {
    if (top < 0) {
        cout << "STACK IS EMPTY\n";
    } else {
        cout << "STACK IS NOT EMPTY\n";
    }
}

void Stack::clear() {
    top = -1;
    cout << "STACK IS CLEARED\n";
}

int main() {
    Stack stack;
    int ch;
    
    do {
        cout << "\nSTACK OPERATIONS";
        cout << "\n1. PUSH ITEM";
        cout << "\n2. POP ITEM";
        cout << "\n3. DISPLAY ITEM";
        cout << "\n4. SEARCHING POSITION";
        cout << "\n5. TOP ELEMENT OF STACK";
        cout << "\n6. SIZE OF STACK";
        cout << "\n7. CHECK STACK IS EMPTY OR NOT";
        cout << "\n8. CLEAR STACK";
        cout << "\n9. EXIT";
        cout << "\nENTER YOUR CHOICE: ";
        cin >> ch;
        
        switch (ch) {
            case 1: stack.push(); break;
            case 2: stack.pop(); break;
            case 3: stack.display(); break;
            case 4: stack.search(); break;
            case 5: stack.topele(); break;
            case 6: stack.size(); break;
            case 7: stack.check(); break;
            case 8: stack.clear(); break;
            case 9: break;
            default: cout << "\nPLEASE ENTER VALUE BETWEEN 1 AND 9\n";
        }
    } while (ch != 9);
    
    return 0;
}

