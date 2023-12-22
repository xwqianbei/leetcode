[1962. 移除石子使总数最小](https://leetcode.cn/problems/remove-stones-to-minimize-the-total/)

已解答

中等

相关标签

相关企业

提示

给你一个整数数组 `piles` ，数组 **下标从 0 开始** ，其中 `piles[i]` 表示第 `i` 堆石子中的石子数量。另给你一个整数 `k` ，请你执行下述操作 **恰好** `k` 次：

* 选出任一石子堆 `piles[i]` ，并从中 **移除** `floor(piles[i] / 2)` 颗石子。

 **注意：** 你可以对 **同一堆** 石子多次执行此操作。

返回执行 `k` 次操作后，剩下石子的 **最小** 总数。

`floor(x)` 为 **小于** 或 **等于** `x` 的 **最大** 整数。（即，对 `x` 向下取整）。

**示例 1：**

<pre><strong>输入：</strong>piles = [5,4,9], k = 2
<strong>输出：</strong>12
<strong>解释：</strong>可能的执行情景如下：
- 对第 2 堆石子执行移除操作，石子分布情况变成 [5,4,<strong><em>5</em></strong>] 。
- 对第 0 堆石子执行移除操作，石子分布情况变成 [<strong><em>3</em></strong>,4,5] 。
剩下石子的总数为 12 。
</pre>

**示例 2：**

<pre><strong>输入：</strong>piles = [4,3,6,7], k = 3
<strong>输出：</strong>12
<strong>解释：</strong>可能的执行情景如下：
- 对第 2 堆石子执行移除操作，石子分布情况变成 [4,3,<strong><em>3</em></strong>,7] 。
- 对第 3 堆石子执行移除操作，石子分布情况变成 [4,3,3,<strong><em>4</em></strong>] 。
- 对第 0 堆石子执行移除操作，石子分布情况变成 [<strong><em>2</em></strong>,3,3,4] 。
剩下石子的总数为 12 。
</pre>

**提示：**

* `1 <= piles.length <= 10<sup>5</sup>`
* `1 <= piles[i] <= 10<sup>4</sup>`
* `1 <= k <= 10<sup>5</sup>`
