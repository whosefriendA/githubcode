// bool isUgly(int n) {
//     if(n<=0){
//         return false;
//     }
//     if(n==1){
//         return true;
//     }
//     while(n%2==0){
//         n/=2;
//     }
//     while(n%3==0){
//         n/=3;
//     }
//     while(n%5==0){
//         n/=5;
//     }
//     return n==1;
// }
// void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//  int *arr = (int*)malloc(sizeof(int)*(m+n));
//     int index=0,left=0,right=0;
//     while(index<nums1Size&&left<m&&right<n){
//         if(nums1[left]<nums2[right]){
//             arr[index++]=nums1[left++];
//         }else if(nums1[left]>nums2[right]){
//             arr[index++]=nums2[right++];
//         }else{
//             arr[index++]=nums1[left++];
//             arr[index++]=nums2[right++];
//         }
//     }
//     while(left<m) arr[index++]=nums1[left++];
//     while(right<n) arr[index++]=nums2[right++];
//     for(int i=0;i<index;i++){
//         nums1[i] = arr[i];
//     }
// }

// 添加备注


// int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize){
//     if (NULL == gas || 0 == gasSize || NULL == cost || 0 == costSize)
//     {
//         return -1;
//     }

//     int totalRemain = 0;
//     int currRemain = 0;
//     int start = 0;
//     int index = 0;

//     for (index = 0; index <= costSize - 1; index++)
//     {
//         currRemain += gas[index] - cost[index];

//         if (currRemain < 0)
//         {
//             start = index + 1;
//             currRemain = 0;
//         }

//         totalRemain += gas[index] - cost[index];
//     }

//     return totalRemain >= 0 ? start : -1;
// }