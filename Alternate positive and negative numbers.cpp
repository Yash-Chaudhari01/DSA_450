void rearrange(int arr[], int n) {
    stack<int> positive;
    stack<int> negative;
    
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= 0) {
            positive.push(arr[i]);
        } else {
            negative.push(arr[i]);
        }
    }
    
    int count = 0;
    while (!positive.empty() && !negative.empty()) {
        arr[count++] = positive.top();
        positive.pop();
        arr[count++] = negative.top();
        negative.pop();
    }
    
    while (!positive.empty()) {
        arr[count++] = positive.top();
        positive.pop();
    }
    
    while (!negative.empty()) {
        arr[count++] = negative.top();
        negative.pop();
    }
}
