[1954. 收集足够苹果的最小花园周长](https://leetcode.cn/problems/minimum-garden-perimeter-to-collect-enough-apples/)

已解答

中等

相关标签

相关企业

提示

给你一个用无限二维网格表示的花园，**每一个** 整数坐标处都有一棵苹果树。整数坐标 `(i, j)` 处的苹果树有 `|i| + |j|` 个苹果。

你将会买下正中心坐标是 `(0, 0)` 的一块 **正方形土地** ，且每条边都与两条坐标轴之一平行。

给你一个整数 `neededApples` ，请你返回土地的 **最小周长** ，使得 **至少** 有 `neededApples` 个苹果在土地  **里面或者边缘上** 。

`|x|` 的值定义为：

* 如果 `x >= 0` ，那么值为 `x`
* 如果 `x < 0` ，那么值为 `-x`

**示例 1：**

![](https://pic.leetcode-cn.com/1627790803-qcBKFw-image.png)

<pre><b>输入：</b>neededApples = 1
<b>输出：</b>8
<b>解释：</b>边长长度为 1 的正方形不包含任何苹果。
但是边长为 2 的正方形包含 12 个苹果（如上图所示）。
周长为 2 * 4 = 8 。
</pre>

**示例 2：**

<pre><b>输入：</b>neededApples = 13
<b>输出：</b>16
</pre>

**示例 3：**

<pre><b>输入：</b>neededApples = 1000000000
<b>输出：</b>5040
</pre>

**提示：**

* `1 <= neededApples <= 10<sup>15</sup>`
