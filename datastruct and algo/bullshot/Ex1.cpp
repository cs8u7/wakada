#include <iostream>
#include <queue>

using namespace std;

struct order {
    int id;
    int number;
    order(int id, int number) : id(id), number(number) 
    {
    }
};

queue<order> init(int guest){
    queue<order> orders;
    return orders;
}

void enqueue(int guest, queue<order> orders) {
    for (int i = 1; i < guest+1;i ++) {
        int id;
        int number;
        cout << "Enter Customer " << i << "'s order:\n";
        cout << "Which fruit: \n";
        cout << "[1] Apple\n[2] Banana\n[3] Orange\nEnter: ";
        cin >> id;
        cout << "How many: ";
        cin >> number;
        orders.push(order(id, number));
    }
}

void dequeue(int guest, queue<order> orders, int good[]){
    cout << "RESULT ------------------------------\n";
    cout << orders.front().id;
    for (int i = 1; i < guest+1; i++) {
        if (orders.front().number <= good[orders.front().id-1]) {
            //good[i] -= orders.front().number;
            cout << "Customer " << i << " buys SUCCESSFULLY!\n";
            orders.pop();
        }
        else {
            cout << "Customer " << i << " buys FAILED!\n";
            orders.pop();
        }
    }
}

int main(){
    int good[3] = {250, 430, 270};
    int guest;
    cout << "Enter guest number: ";
    cin >> guest;
    queue<order> orders;
    enqueue(guest, orders);
    dequeue(guest, orders, good);

}