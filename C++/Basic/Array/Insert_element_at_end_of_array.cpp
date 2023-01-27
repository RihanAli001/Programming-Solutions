#include <iostream>
using namespace std;

void print_arr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[]) {
    int arr[10] = {1, 2, 3, 4, 5}, n = 10, ele, top = 5;
    while (true){
        cout << "Enter element("<<top<<"\\"<<n<<") : ";
        cin >> ele;
        if (top < n){
            arr[top++] = ele;
            print_arr(arr, top);
        }
        else{
            cout << "No space...\n";
        }
    }

    return 0;
}
