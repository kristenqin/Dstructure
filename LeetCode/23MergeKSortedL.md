<!--
 * @Date: 2022-04-14 21:53:06
 * @LastEditors: Bigorrila
 * @LastEditTime: 2022-04-14 21:53:33
 * @FilePath: \LeetCode\23MergeKSortedL.md
-->
首先我们需要一个变量 \textit{head}head 来保存合并之后链表的头部，你可以把 \textit{head}head 设置为一个虚拟的头（也就是 \textit{head}head 的 \textit{val}val 属性不保存任何值），这是为了方便代码的书写，在整个链表合并完之后，返回它的下一位置即可。
我们需要一个指针 \textit{tail}tail 来记录下一个插入位置的前一个位置，以及两个指针 \textit{aPtr}aPtr 和 \textit{bPtr}bPtr 来记录 aa 和 bb 未合并部分的第一位。注意这里的描述，\textit{tail}tail 不是下一个插入的位置，\textit{aPtr}aPtr 和 \textit{bPtr}bPtr 所指向的元素处于「待合并」的状态，也就是说它们还没有合并入最终的链表。 当然你也可以给他们赋予其他的定义，但是定义不同实现就会不同。
当 \textit{aPtr}aPtr 和 \textit{bPtr}bPtr 都不为空的时候，取 \textit{val}val 熟悉较小的合并；如果 \textit{aPtr}aPtr 为空，则把整个 \textit{bPtr}bPtr 以及后面的元素全部合并；\textit{bPtr}bPtr 为空时同理。
在合并的时候，应该先调整 \textit{tail}tail 的 \textit{next}next 属性，再后移 \textit{tail}tail 和 \textit{*Ptr}*Ptr（\textit{aPtr}aPtr 或者 \textit{bPtr}bPtr）。那么这里 \textit{tail}tail 和 \textit{*Ptr}*Ptr 是否存在先后顺序呢？它们谁先动谁后动都是一样的，不会改变任何元素的 \textit{next}next 指针。

作者：LeetCode-Solution
链接：https://leetcode-cn.com/problems/merge-k-sorted-lists/solution/he-bing-kge-pai-xu-lian-biao-by-leetcode-solutio-2/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。