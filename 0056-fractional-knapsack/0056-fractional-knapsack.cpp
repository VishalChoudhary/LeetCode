struct Item {
    int value;
    int weight;
};
class Solution {
  public:
    bool static comparator(Item i1,Item i2){
        double r1=(double) i1.value/(double)i1.weight;
        double r2=(double) i2.value/(double)i2.weight;
        return r1>r2;
    }
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n) {
        // Your code here
        sort(arr,arr+n,comparator);
         int curWt=0;
         double finalValue=0.0;
         for(int i=0;i<n;i++){
             if(arr[i].weight<=w){
             finalValue+=arr[i].value;
             w-=arr[i].weight;
            }
            else{
                finalValue+=(arr[i].value/(double)arr[i].weight)*(double)w;
                break;
            }
         }
        return finalValue;
    }
};
