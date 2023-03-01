class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums, n);
        return nums;
    }

    //helper function
    void mergeSort(vector<int> &A, int n)
    {
        //if the size of array is less than two, it means it contains only a single element so there is no need of sorting -> simply return
        if (n < 2)
            return;
        //calculate the middle position
        int mid = n / 2;

        //initialize two array left and right to store the two parts of array
        vector<int> L;
        vector<int> R;

        for (int i = 0; i < n; i++)
        {
        //if the value of pointer is less than middle position push the element in left subarray
            if (i < mid)
            {
                L.push_back(A[i]);
            }
        //else push the element in right subarray
            else
                R.push_back(A[i]);
        }

        //sort both left and right subarray individually
        mergeSort(L, L.size());
        mergeSort(R, R.size());

        //merge left and right subarray after sorting them
        mergeArrays(A, L, R);
    }

    void mergeArrays(vector<int> &A, vector<int> &L, vector<int> &R)
    {

        int sizeL = L.size();
        int sizeR = R.size();
        //initialize pointers for each array -> left, right and final
        int i = 0, j = 0, k = 0;

        while (i < sizeL && j < sizeR)
        {
            //if element at position i of left array is less than or equal to element at position j of right -> update the position k of final array with left[i]
            if (L[i] <= R[j])
            {
                A[k] = L[i];
                i++;
            }
            //similarlly is element of right is less than element of left -> update the position of final array with element of right
            else
            {
                A[k] = R[j];
                j++;
            }
            k++;
        }

        //if still there are remaining element in an array , simply append them into the final array
        while (i < sizeL)
        {
            A[k] = L[i];
            i++;
            k++;
        }
        while (j < sizeR)
        {
            A[k] = R[j];
            j++;
            k++;
        }
    }
};
