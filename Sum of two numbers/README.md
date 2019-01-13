**问题**

给定一个整数数组和一个目标值，找出数组中和为目标值的两个数。
可以假设每个输入只对应一种答案，且同样的元素不能被重复利用。

**思路**

根据题意可知，同样的元素不能被重复利用。
首先两数相加之和表示为x+y=sum；当x=2时，y取7,11,15，因为元素不能被重复利用，且题目说明了假设只对应一种情况，当x=7时，y取11,15,以此类推。
简单点理解就是，第一层循环控制第一个数，第二层循环，控制第一个数的加数。


