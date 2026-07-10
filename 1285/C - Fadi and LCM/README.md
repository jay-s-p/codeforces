<h2><a href="https://codeforces.com/contest/1285/problem/C" target="_blank" rel="noopener noreferrer">1285C — Fadi and LCM</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1285C](https://codeforces.com/contest/1285/problem/C) |

## Topics
`brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Fadi and LCM</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Today, Osama gave Fadi an integer $$$X$$$, and Fadi was wondering about the minimum possible value of $$$max(a, b)$$$ such that $$$LCM(a, b)$$$ equals $$$X$$$. Both $$$a$$$ and $$$b$$$ should be positive integers.</p><p>$$$LCM(a, b)$$$ is the smallest positive integer that is divisible by both $$$a$$$ and $$$b$$$. For example, $$$LCM(6, 8) = 24$$$, $$$LCM(4, 12) = 12$$$, $$$LCM(2, 3) = 6$$$.</p><p>Of course, Fadi immediately knew the answer. Can you be just like Fadi and find any such pair?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first and only line contains an integer $$$X$$$ ($$$1 \le X \le 10^{12}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two positive integers, $$$a$$$ and $$$b$$$, such that the value of $$$max(a, b)$$$ is minimum possible and $$$LCM(a, b)$$$ equals $$$X$$$. If there are several possible such pairs, you can print any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00009262824270106607" id="id008311159646895726" class="input-output-copier">Copy</div></div><pre id="id00009262824270106607">2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00030479691025811273" id="id002294426523822931" class="input-output-copier">Copy</div></div><pre id="id00030479691025811273">1 2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008802282104450164" id="id0018259803139931818" class="input-output-copier">Copy</div></div><pre id="id008802282104450164">6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00023325493403385078" id="id005178891128980312" class="input-output-copier">Copy</div></div><pre id="id00023325493403385078">2 3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00042148501836027585" id="id002877652499019201" class="input-output-copier">Copy</div></div><pre id="id00042148501836027585">4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009896760950302855" id="id008293579680393411" class="input-output-copier">Copy</div></div><pre id="id009896760950302855">1 4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0041238816741717566" id="id006236169444155248" class="input-output-copier">Copy</div></div><pre id="id0041238816741717566">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0003214891482299498" id="id002592793580154349" class="input-output-copier">Copy</div></div><pre id="id0003214891482299498">1 1
</pre></div></div></div>