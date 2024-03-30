#include<iostream>
using namespace std;

class QuickSort{
    int a[50], n, i;
public:
    void getdata(){
        cout << "Enter no of elements: ";
        cin >> n;
        
        cout << "Enter the element: ";
        for (i = 0; i < n ; i++){
            cin >> a[i];
        }
    }

    int median3(int left, int right){
        unsigned int center = (left + right) / 2;
        if (a[left] > a[center]){
            swap(a[left], a[center]);
        }
        if (a[left] > a[right]){
            swap(a[left], a[right]);
        }
        if (a[center] > a[right]){
            swap(a[center], a[right]);
        }
        swap(a[center], a[right - 1]);
        return a[right - 1];
    }

    void q_sort(int left, int right){
        int cut_off = 0;
        if ((left + cut_off) < right){
            int pivot = median3(left, right);
            int i = left, j = right - 2;
           
            while (true){
                while (a[i] < pivot){
                    i++;
                }
                while (a[j] > pivot){
                    j--;
                }
                if (i <= j)
                {
                    cout << i << j << a[j] << pivot << endl;
                    swap(a[i], a[j]);
                    i++;
                    j--;
                }
                else
                    break;
            }
            swap(a[i], a[right - 1]);
            q_sort(left, i - 1);
            q_sort(i + 1, right);
        }
    }

    void quick_sort(){
        int one = 0;
        q_sort(one, n - 1);
        insertion_sort();
    }

    void insertion_sort(){
        int tmp;

      
        for (int p = 1; p < n; p++){
            tmp = a[p];
            int j = p;
            while(j  > 0 && tmp < a[j - 1]){
                a[j] = a[j - 1];
                j--;
            }
            a[j] = tmp;
        }   
    }

    void swap(int &a, int &b){
        int tmp = a;
        a = b;
        b = tmp;
    }

    void display(){
        for (i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }

};

int main(){

    int n;
    QuickSort quickSort;
    quickSort.getdata();
    quickSort.quick_sort();
    quickSort.display();

}
