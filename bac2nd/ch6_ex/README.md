## 习题6-1　平衡的括号（Parentheses Balance, UVa 673）

输入一个包含“( )”和“[ ]”的括号序列，判断是否合法。具体规则如下：

* 空串合法。
* 如果A和B都合法，则AB合法。
* 如果A合法则(A)和[A]都合法。

## 习题6-2　S树（S-Trees, UVa 712）

给出一棵满二叉树，每一层代表一个01变量，取0时往左走，取1时往右走。例如，图6-19（a）和图6-19（b）都对应表达式x1∧(x2∨x3)。

![S树（a）](images/6-19(a).png)<br>
（a）

![S树（b）](images/6-19(b).png)<br>
（b）

图6-19　S树

给出所有叶子的值以及一些查询（即每个变量xi的取值），求每个查询到达的叶子的值。例如，有4个查询：000、010、111、110，则输出应为0011。

## 习题6-3　二叉树重建（Tree Recovery, ULM 1997, UVa 536）

输入一棵二叉树的先序遍历和中序遍历序列，输出后序遍历序列，如图6-20所示。

| 样例输入 | 样例输出 |
| - | - |
| DBACEGF ABCDEFG | ACBFGED |
| BCAD CBAD | CDAB |
图6-20　二叉树重建

## 习题6-4　骑士的移动（Knight Moves, UVa 439）

输入标准8*8国际象棋棋盘上的两个格子（列用a～h表示，行用1～8表示），求马最少需要多少步从起点跳到终点。例如从a1到b2需要4步。马的移动方式如图6-21所示。

![马的移动方式](images/6-21.png)<br>
图6-21　马的移动方式

## 习题6-9　纸牌游戏（“Accordian” Patience, UVa 127）

把52张牌从左到右排好，每张牌自成一个牌堆（pile）。当某张牌与它左边那张牌或者左边第3张牌“match”（花色suit或者点数rank相同）时，就把这张牌移到那张牌上面。移动之后还要查看是否可以进行其他移动。只有位于牌堆顶部的牌才能移动或者参与match。当牌堆之间出现空隙时要立刻把右边的所有牌堆左移一格来填补空隙。如果有多张牌可以移动，先移动最左边的那张牌；如果既可以移一格也可以移3格时，移3格。按顺序输入52张牌，输出最后的牌堆数以及各牌堆的牌数。

样例输入：
```
QD AD 8H 5S 3H 5H TC 4D JH KS 6H 8S JS AC AS 8D 2H QS TS 3S AH 4H TH TD 3C 6S
8C 7D 4C 4S 7S 9H 7C 5D 2S KD 2D QH JD 6D 9D JC 2C KH 3D QC 6C 9S KC 7H 9C 5C
AC 2C 3C 4C 5C 6C 7C 8C 9C TC JC QC KC AD 2D 3D 4D 5D 6D 7D 8D TD 9D JD QD KD
AH 2H 3H 4H 5H 6H 7H 8H 9H KH 6S QH TH AS 2S 3S 4S 5S JH 7S 8S 9S TS JS QS KS
#
```
样例输出：
```
6 piles remaining: 40 8 1 1 1 1
1 pile remaining: 52
```

