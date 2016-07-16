/*


Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example:

Given the array [-2,1,-3,4,-1,2,1,-5,4],

the contiguous subarray [4,-1,2,1] has the largest sum = 6.

For this problem, return the maximum sum.
*/

int Solution::maxSubArray(const vector<int> &A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int maxsum=A[0],currsum=A[0];
    for(int i=1;i<A.size();i++)
    {
        currsum=max(A[i],currsum+A[i]);
        maxsum=max(currsum,maxsum);
    }
    return maxsum;
}
