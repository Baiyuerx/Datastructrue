//
// Created by selwb on 18-3-30.
//

#ifndef BASICDATASTRUCTURES_SORT_H
#define BASICDATASTRUCTURES_SORT_H

template <class Elem>
void swap(Elem*, int, int);
template <class Elem>
int partition(Elem*, int, int, const Elem&);

template <class Elem>
void InsertSort(Elem* e, int n){
    for (int i = 1; i < n ; ++i) {
        for (int j = i; (j > 0) && (e[j] < e[j-1]) ; --j) {
            swap(e, j, j-1);
        }
    }
}


template <class Elem>
void BubbleSort(Elem* e, int n){
    for (int i = 0; i < n; ++i) {
        for (int j = n-1; j > i; --j) {
            if (e[j] < e[j-1])
                swap(e, j, j-1);
        }
    }
}


template <class Elem>
void SelectSort(Elem* e, int n){
    for (int i = 0; i < n-1; ++i) {
        int lowindex = i;
        for (int j = n-1; j > i ; --j)
            if (e[j] < e[lowindex])
                lowindex = j;
        swap(e, i, lowindex);
    }
}


template <class Elem>
void ShellSort(Elem* e, int n){
    int h = 1;
    while (h < n/3) h = 3*h + 1;

}

template <class Elem>
void QuickSort(Elem* e, int i, int j){
    if(j <= i) return;
    int pivotindex = (i + j)/2;
    swap(e, pivotindex, j);
    int k = partition<Elem> (e, i - 1, j, e[j]);
    swap(e, k, j);
    QuickSort(e, i, k-1);
    QuickSort(e, k+1, j);
}


template <class Elem>
void MergeSort(Elem* e, Elem* tmp, int left, int right){
    if (right == left) return;
    int i, j, k, mid = (left + right)/2;
    MergeSort<Elem>(e, tmp, left, mid);
    MergeSort<Elem>(e, tmp, mid+1, right);
    for (i=mid; i>= left; i--) tmp[i] = e[i];
    for (int j = 1; j <= right - mid; j++)   tmp[right - j + 1] = e[mid + j];
    for(i = left, j= right, k=left; k<=right; k++)
        if (tmp[i]< tmp[j]) e[k] = tmp[i++];
        else e[k] = tmp[j--];
}

template <class Elem>
void swap(Elem* e, int i, int j){
    Elem tmp = e[j];
    e[j] = e[i];
    e[i] = tmp;
}

template <class Elem>
int partition(Elem* e, int l, int r, const Elem& pivot){
    do{
        while (e[++l] < pivot);
        while ((r!=0)&&(e[--r] > pivot));
        swap(e, l, r);
    }while (l < r);
    swap(e, l, r);
    return l;
}
#endif //BASICDATASTRUCTURES_SORT_H
