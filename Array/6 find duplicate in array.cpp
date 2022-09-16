int findDuplicate(vector<int> &arr)
{
    int ans =0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];   //doing XOR with every element in the array
    }//XOR 1,n-1
    for(int i=1;i<arr.size();i++){
        ans = ans^i;
    }
    return ans;
}
