**问题**

给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。

**思路**

根据题意可知，首先

1.如果传过来的数组长度为0，则直接返回0；
 
2.因为只要数组长度不为0，那么length至少为1，定义一个变量length=1；

3.用for循环，令i从0开始向后比较与下标为length-1不相等的数，找到之后将那个数放到length的位置上，并且让length的长度加1；

4.最后返回length。






