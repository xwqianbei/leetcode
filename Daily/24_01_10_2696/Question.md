[2696. 删除子串后的字符串最小长度](https://leetcode.cn/problems/minimum-string-length-after-removing-substrings/)

已解答

简单

相关标签

相关企业

提示

给你一个仅由 **大写** 英文字符组成的字符串 `s` 。

你可以对此字符串执行一些操作，在每一步操作中，你可以从 `s` 中删除 **任一个** `"AB"` 或 `"CD"` 子字符串。

通过执行操作，删除所有 `"AB"` 和 `"CD"` 子串，返回可获得的最终字符串的 **最小** 可能长度。

 **注意** ，删除子串后，重新连接出的字符串可能会产生新的 `"AB"` 或 `"CD"` 子串。

**示例 1：**

<pre><strong>输入：</strong>s = "ABFCACDB"
<strong>输出：</strong>2
<strong>解释：</strong>你可以执行下述操作：
- 从 "<em><strong>AB</strong></em>FCACDB" 中删除子串 "AB"，得到 s = "FCACDB" 。
- 从 "FCA<em><strong>CD</strong></em>B" 中删除子串 "CD"，得到 s = "FCAB" 。
- 从 "FC<strong><em>AB</em></strong>" 中删除子串 "AB"，得到 s = "FC" 。
最终字符串的长度为 2 。
可以证明 2 是可获得的最小长度。</pre>

**示例 2：**

<pre><strong>输入：</strong>s = "ACBBD"
<strong>输出：</strong>5
<strong>解释：</strong>无法执行操作，字符串长度不变。
</pre>

**提示：**

* `1 <= s.length <= 100`
* `s` 仅由大写英文字母组成
