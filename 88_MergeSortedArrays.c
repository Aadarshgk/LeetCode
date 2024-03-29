void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i=0,min,j,temp;
    while(i<n){
        nums1[m+i]=nums2[i];
        i++;
    }
    i=0;
    while(i<m+n-1){
        min=i;
        j=i+1;
        while(j<m+n){
            if(nums1[j]<nums1[min]){
                min=j;
            }
            j++;
        }
        temp=nums1[i];
        nums1[i]=nums1[min];
        nums1[min]=temp;
        i++;
    }
}