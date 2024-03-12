int minValue(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min =arr[i];
        }
    }
    return min;
}

int maxValue(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max =arr[i];
        }
    }
    return max;
}