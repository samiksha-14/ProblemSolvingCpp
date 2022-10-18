# Best time to buy and sell stock
Crux of the problem :: **Buy low & sell high** (to earn the max profilt)
Buy at ith day ,sell at jth day j>i
​
While iterating from left to right in an array just keep the track of the minimum element.
And calculate the max profit along the way.
So, with the help of above approach you know that while standing on ith index , you already know the minimum price at which you have bought it. So you can perform your calculations.
TC::O(n)
SC::O(1)