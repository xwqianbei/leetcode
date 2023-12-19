[1901. 寻找峰值 II](https://leetcode.cn/problems/find-a-peak-element-ii/)

已解答

中等

相关标签

相关企业

提示

一个 2D 网格中的 **峰值** 是指那些 **严格大于 **其相邻格子(上、下、左、右)的元素。

给你一个** 从 0 开始编号 **的 `m x n` 矩阵 `mat` ，其中任意两个相邻格子的值都** 不相同** 。找出 **任意一个 峰值** `mat[i][j]` 并  **返回其位置 ** `[i,j]` 。

你可以假设整个矩阵周边环绕着一圈值为 `-1` 的格子。

要求必须写出时间复杂度为 `O(m log(n))` 或 `O(n log(m))` 的算法

**示例 1:**

![](https://assets.leetcode.com/uploads/2021/06/08/1.png)

<pre><strong>输入:</strong> mat = [[1,4],[3,2]]
<strong>输出:</strong> [0,1]
<strong>解释:</strong> 3 和 4 都是峰值，所以[1,0]和[0,1]都是可接受的答案。
</pre>

**示例 2:**

![](https://assets.leetcode.com/uploads/2021/06/07/3.png)

<pre><strong>输入:</strong> mat = [[10,20,15],[21,30,14],[7,16,32]]
<strong>输出:</strong> [1,1]
<strong>解释:</strong> 30 和 32 都是峰值，所以[1,1]和[2,2]都是可接受的答案。
</pre>

**提示：**

* `m == mat.length`
* `n == mat[i].length`
* `1 <= m, n <= 500`
* `1 <= mat[i][j] <= 10<sup>5</sup>`
* 任意两个相邻元素均不相等.
