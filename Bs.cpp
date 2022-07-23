 //Bubble sort
//Apni Kaksha
int main()
{
    cout<<"Bubble sort";
    int n,i;
    cout<<"Enter n::";
    cin>>n;
    cout<<"Enter the aray elements::";
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=1;
    while(count<n)
    {
        for(i=0;i<n-count;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        count++;
    }
    cout<<"The sorted elements are::\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
// other method
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
