#include<iostream>
using namespace std;

class Heap_Sort{
    int a[20], n;
public:
    void hsort(){
        for(int i=n/2; i>0; i--){
            percdown(i, n);
        }
        for(int i = n; i >= 2; i--){
            int tmp = a[1];
            a[1] = a[i];
            a[i] = tmp;
            percdown(1, i - 1);
        }
    }

    void percdown(unsigned int i, const unsigned int N){
        unsigned int child;
        int tmp = a[i];
        for(; i*2<=N; i=child){
            child = i*2;
            if(child != N && a[child + 1] > a[child]){
                child++;
            }
            if(tmp < a[child]){
                a[i] = a[child];
            }
            else{
                break;
            }
        }
        a[i] = tmp;
    }

    void get(){
        int i;
        cout << "Number of elements: ";
        cin >> n;

        cout << endl << "Given array of elements: ";
        for(i=1; i<=n; i++)
                {
            cout << endl << "Enter the Element Number "<<i<<": ";
            cin >> a[i];
    }
    }

    void disp(){
        for(int i=1; i<=n; i++){
            cout << a[i] << " ";
        }
    }
};

int main() {
    //clrscr();
    Heap_Sort heapSort;
    heapSort.get();
    cout << endl << "Before Sorted the values are: " << endl;
    heapSort.disp();
    heapSort.hsort();
    cout << endl << "After Sorted the  values are: " << endl;
    heapSort.disp();
}
