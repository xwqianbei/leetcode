[1154. 一年中的第几天](https://leetcode.cn/problems/day-of-the-year/)

已解答

简单

相关标签

相关企业

提示

给你一个字符串 `date` ，按 `YYYY-MM-DD` 格式表示一个 [现行公元纪年法](https://baike.baidu.com/item/%E5%85%AC%E5%85%83/17855) 日期。返回该日期是当年的第几天。

**示例 1：**

<pre><strong>输入：</strong>date = "2019-01-09"
<strong>输出：</strong>9
<strong>解释：</strong>给定日期是2019年的第九天。</pre>

**示例 2：**

<pre><strong>输入：</strong>date = "2019-02-10"
<strong>输出：</strong>41
</pre>

**提示：**

* `date.length == 10`
* `date[4] == date[7] == '-'`，其他的 `date[i]` 都是数字
* `date` 表示的范围从 1900 年 1 月 1 日至 2019 年 12 月 31 日
