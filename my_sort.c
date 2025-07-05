void my_sort(int *nlist, int size) {
    int tmp;
    for (int i = 0;  i < size; i++) {
        int mini = i;
        for (int j = i+1; j <= size; j++) {
            if (nlist[j] < nlist[mini]) {
                mini = j;
            }
        }
        tmp = nlist[i];
        nlist[i] = nlist[mini];
        nlist[mini] = tmp;
    }
}