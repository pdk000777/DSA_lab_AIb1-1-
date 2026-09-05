#include <stdio.h>
int main() {
    //------traversal-------------
    int arr[5] = {1,2,33,44,5};

    for (int i=0; i<5 ; i++){
        printf("%d ",arr[i]);
    }
    //-------Linear Search----------------
    void linearSearch(int arr[], int n, int val){
        for (int i = 0; i < n; i++) {
            if(arr[i] == val){
                printf("\nthe value %d found at position %d\n", val, i + 1);
                return;
            }
        }
        printf("\nvalue not found\n");
    }

    linearSearch(arr,5,33);
    //------------Finding Min ----------------
    void find_min(int arr[],int n){
        int min = arr[0];
        for(int i = 1;i<n ; i++){
            if(arr[i] < min){
                min = arr[i];
            }
        }
        printf("the min no is %d ",min);
    }
    
    find_min(arr,5);
    //------------Finding Max ----------------
    void find_max(int arr[], int n) {
        int max = arr[0];
        for(int i = 1;i<n ; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        printf("\n the max no is %d \n",max);
    }
    find_max(arr,5);
    
    
    //--------------insertion------------------
    void insertion(int arr[],int n){
        int pos = 2;
        int val = 99;
        for(int i = 5;i >=pos; i--){
            arr[i + 1] = arr[i];
        }
        arr[pos] = val;
        n++;
        printf("Insertion at particular position :\n");
        for(int i = 0; i<n;i++){
            printf("%d, ",arr[i]);
        }       
        printf("\n");     
        
        int begin = 0;
        int value = 99;
        printf("Insertion at beginning :\n");
        for(int i = 5;i >=begin; i--){
            arr[i + 1] = arr[i];
        }
        arr[begin] = value;
        n++;
        for(int i = 0; i<n;i++){
            printf("%d, ",arr[i]);
        }
        printf("\n");
    }
    
    //-----------------deletion------------------------
    void deletion(int arr[],int n){
        int pos = 2;
        int val = 99;
        printf("Deletion at particular position :\n");
        for(int i = pos;i <n; i++){
            arr[i] = arr[i+1];
        }
        n--;
        for(int i = 0; i<n;i++){
            printf("%d, ",arr[i]);
        }       
        printf("\n");     
        
        int begin = 0;
        int value = 99;
        printf("Deletion at beginning :\n");
        for(int i = 0;i <n; i++){
            arr[i] = arr[i+1];
        }
        n--;
        for(int i = 0; i<n;i++){
            printf("%d, ",arr[i]);
        }
        printf("\n");
    }
    
    insertion(arr, 5);
    deletion(arr,5);
    
}




