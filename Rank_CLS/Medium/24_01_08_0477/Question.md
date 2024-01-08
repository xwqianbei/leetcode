[447. 回旋镖的数量](https://leetcode.cn/problems/number-of-boomerangs/)

已解答

中等

相关标签

相关企业

给定平面上 `n` 对 **互不相同** 的点 `points` ，其中 `points[i] = [x<sub>i</sub>, y<sub>i</sub>]` 。**回旋镖** 是由点 `(i, j, k)` 表示的元组 ，其中 `i` 和 `j` 之间的距离和 `i` 和 `k` 之间的欧式距离相等（ **需要考虑元组的顺序** ）。

返回平面上所有回旋镖的数量。

 **示例 1：**

<pre><strong>输入：</strong>points = [[0,0],[1,0],[2,0]]
<strong>输出：</strong>2
<strong>解释：</strong>两个回旋镖为 <strong>[[1,0],[0,0],[2,0]]</strong> 和 <strong>[[1,0],[2,0],[0,0]]</strong>
</pre>

**示例 2：**

<pre><strong>输入：</strong>points = [[1,1],[2,2],[3,3]]
<strong>输出：</strong>2
</pre>

**示例 3：**

<pre><strong>输入：</strong>points = [[1,1]]
<strong>输出：</strong>0
</pre>

**提示：**

* `n == points.length`
* `1 <= n <= 500`
* `points[i].length == 2`
* `-10<sup>4</sup> <= x<sub>i</sub>, y<sub>i</sub> <= 10<sup>4</sup>`
* 所有点都 **互不相同**
