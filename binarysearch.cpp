
#include <bits/stdc++.h>
using namespace std;
#include <vector>
class Solution
{
public:
  int search(vector<int> &nums, int target)
  {
    int s = 0;
    int e = nums.size();
    while (s <= e)
    {
      int mid = (s + e) / 2;
      if (nums[mid] == target)
        return mid;
      else if (target < nums[mid])
        e = mid - 1;
      else
        s = mid + 1;
    }
    return -1;
  }
};
int main()
{
  vector<int> nums(6);
  for (int i = 0; i < nums.size(); i++)
  {
    cin >> nums[i];
  }

  int target;
  cin >> target;
  class Solution sob;
  cout << sob.search(nums, target);
} //-1,0,3,5,9,12
  // #include<bits/stdc++.h>
  // using namespace std;
  // class search{
  //   public:
  //      int binarysearch(vector<int> &v,int target){
  //               int start=0;
  //               int end=v.size();
  //               while(start<=end-1){
  //                 int mid=end-start/2;
  //                 if(v[mid]==target) return mid;
  //                 else if(v[mid]>target) start=mid+1;
  //                 else end=mid-1;
  //               }
  //               return -1;
  //      }

// };
// int main(){
//   int target;

//   vector<int> v(6);
//   for (auto element:v){
//     cin>>element;
//   }
//    cin>>target;
//   class search bs;
//   cout<<bs.binarysearch(v,target);

// }