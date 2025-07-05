float my_average(int *grades, int count) {
    int total = 0;
    double average;

    for (int i = 0; i<count; i++) {
        total += grades[i];
    }
  
    average = total/count;
    return average;
    
};