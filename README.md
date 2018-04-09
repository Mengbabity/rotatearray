# rotatearray

给定一个数组，和数组右移的次数。

Java
void warp：数组头尾交换，头++，尾--（直到完成所有交换）；
void rotate：首先模除，k%=n（为保证循环右移）;若k<=n，模除结果即为k，在进行整个数组warp之后，前k个warp（右移过来的k个），后n-k个warp。
