**Brute force** :
* With using two for loops to interate over all subarrays and
* calculating their sum<br>
* TC:O(n) Space : O(1) <br>
**Optimized Soln** <br>
Kadane's algorithm ::
The  idea is to only consider a subarray until it is giving you
the positive sum and keep the max count. if you encounter a subaaray
giving you the neg sum just start considering the new subarray after
it by initializing sum as 0<br>
TC: O(n) space O(1)
