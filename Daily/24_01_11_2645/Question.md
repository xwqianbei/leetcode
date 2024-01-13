[2645. 构造有效字符串的最少插入数](https://leetcode.cn/problems/minimum-additions-to-make-valid-string/)

已解答

中等

相关标签

相关企业

提示

给你一个字符串 `word` ，你可以向其中任何位置插入 "a"、"b" 或 "c" 任意次，返回使 `word` **有效** 需要插入的最少字母数。

如果字符串可以由 "abc" 串联多次得到，则认为该字符串 **有效** 。

**示例 1：**

<pre><strong>输入：</strong>word = "b"
<strong>输出：</strong>2
<strong>解释：</strong>在 "b" 之前插入 "a" ，在 "b" 之后插入 "c" 可以得到有效字符串 "<strong>a</strong>b<strong>c</strong>" 。
</pre>

**示例 2：**

<pre><strong>输入：</strong>word = "aaa"
<strong>输出：</strong>6
<strong>解释：</strong>在每个 "a" 之后依次插入 "b" 和 "c" 可以得到有效字符串 "a<strong>bc</strong>a<strong>bc</strong>a<strong>bc</strong>" 。
</pre>

**示例 3：**

<pre><strong>输入：</strong>word = "abc"
<strong>输出：</strong>0
<strong>解释：</strong>word 已经是有效字符串，不需要进行修改。 
</pre>

**提示：**

* `1 <= word.length <= 50`
* `word` 仅由字母 "a"、"b" 和 "c" 组成。
