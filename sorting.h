void swap(int &a,int &b);
void sort(int *a,int N);
void display(int *a,int N);
void selectionSort(int *a, int N);

void display(int *a, int N){
    //array[0]
    //N elements in array
    for(int i = 0; i < N; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void sort(int *a, int N){
    int i, j;
    int sorted;
    sorted = 0;
    for(j=0; j<N-1; j++){
        for(i=0; i<N-1-j; i++){
            //For ascending order
            if(a[i] > a[i+1]) 
                swap(a[i],a[i+1]);
                sorted = 1;
        }
        if (sorted == 0) break;
    }
}

void selectionSort(int *a, int N){
    int i, j, loc;

    for(j = 0; j < N-1; j++){
        int min=a[j];
        loc = j;
        for(i=j+ 1; i<N; i++){
            if(min > a[i]){
                min = a[i];
                loc = i;
            }
        }
        swap(a[j], a[loc]);
    }
}


