 //Bubble sort
class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
          int i,j,temp;
        bool swap=false;
        for(i=0;i<n;i++)
        {
            swap=false;
            for(j=0;j<n-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap=true;
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
            if(swap==false)
            {
                break;
            }
        }// for loop end
    }
};