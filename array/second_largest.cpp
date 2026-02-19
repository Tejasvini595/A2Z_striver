int getSecondLargest(int *arr, int n) 
{
    // code here
    int fl=arr[0], sl=arr[0];// fl=28078, sl=28078
    for(int i=0;i<n;i++)//2242
    {
        if(arr[i]>fl)
        {
         sl= fl;
         fl= arr[i];//28892
        }
        else if (arr[i]>sl && arr[i]!=fl)
        sl= arr[i];
        else if(fl==sl && arr[i]<fl)
        sl= arr[i];//sl=19451
    }
    
    if(fl==sl)
    return -1;
    else
    return sl;
}