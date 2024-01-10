[2707. 字符串中的额外字符](https://leetcode.cn/problems/extra-characters-in-a-string/)

已解答

中等

相关标签

相关企业

提示

给你一个下标从 **0** 开始的字符串 `s` 和一个单词字典 `dictionary` 。你需要将 `s` 分割成若干个 **互不重叠** 的子字符串，每个子字符串都在 `dictionary` 中出现过。`s` 中可能会有一些 **额外的字符** 不在任何子字符串中。

请你采取最优策略分割 `s` ，使剩下的字符 **最少** 。

**示例 1：**

<pre><b>输入：</b>s = "leetscode", dictionary = ["leet","code","leetcode"]
<b>输出：</b>1
<b>解释：</b>将 s 分成两个子字符串：下标从 0 到 3 的 "leet" 和下标从 5 到 8 的 "code" 。只有 1 个字符没有使用（下标为 4），所以我们返回 1 。
</pre>

**示例 2：**

<pre><b>输入：</b>s = "sayhelloworld", dictionary = ["hello","world"]
<b>输出：</b>3
<b>解释：</b>将 s 分成两个子字符串：下标从 3 到 7 的 "hello" 和下标从 8 到 12 的 "world" 。下标为 0 ，1 和 2 的字符没有使用，所以我们返回 3 。
</pre>

**提示：**

* `1 <= s.length <= 50`
* `1 <= dictionary.length <= 50`
* `1 <= dictionary[i].length <= 50`
* `dictionary[i]` 和 `s` 只包含小写英文字母。
* `dictionary` 中的单词互不相同。
