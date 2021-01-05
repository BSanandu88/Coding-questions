//Given two integers A and B. The task is to swap two numbers. Swapping here means to interchange the values of A and B.
void swap(int *P, int *Q){
    
    // Your code here
    int temp = *P;
    *P = *Q;
    *Q = temp;
    
}

// Function to swap A and B
// using reference
void swap(int &A, int &B){
  
    // Your code here
    int temp = A;
    A = B;
    B = temp;
  
}