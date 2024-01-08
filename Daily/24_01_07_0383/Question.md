[383. 赎金信](https://leetcode.cn/problems/ransom-note/)

已解答

简单

相关标签

相关企业

给你两个字符串：`ransomNote` 和 `magazine` ，判断 `ransomNote` 能不能由 `magazine` 里面的字符构成。

如果可以，返回 `true` ；否则返回 `false` 。

`magazine` 中的每个字符只能在 `ransomNote` 中使用一次。

**示例 1：**

<pre><strong>输入：</strong>ransomNote = "a", magazine = "b"
<strong>输出：</strong>false
</pre>

**示例 2：**

<pre><strong>输入：</strong>ransomNote = "aa", magazine = "ab"
<strong>输出：</strong>false
</pre>

**示例 3：**

<pre><strong>输入：</strong>ransomNote = "aa", magazine = "aab"
<strong>输出：</strong>true
</pre>

**提示：**

* `1 <= ransomNote.length, magazine.length <= 10<sup>5</sup>`
* `ransomNote` 和 `magazine` 由小写英文字母组成
