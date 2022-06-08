# AlgorithmPractice
一、红黑树的概念及性质  
概念：  
红黑树是一种二叉搜索树，每个结点上增加一个存储位表示结点的颜色  
通过对各个结点着色方式的限制，红黑树确保没有一条路径会比其他路径长出俩倍，因而是接近平衡的  

| 树种 | 平衡方式 | 现象 |
| --- | --- | --- |
| AVL树(自平衡二叉查找树) | 严格平衡 | 左右子树高度不超过1 |
| 红黑树 | 近似平衡 | 最长路径不超过最短路径的二倍 |


性质：  
1. 根节点是黑色  
2. 红色节点的孩子结点是黑色  
3. 对于每个结点，每条从该结点到叶结点的简单路径上的黑色结点数目相同  
4. NIL结点是黑色  
引申：  
最短路径都是黑结点  
最长路径是黑红相间的路径  

红黑树示例图：
![image](https://user-images.githubusercontent.com/28468388/172529080-5c4d1155-1091-4fc7-9e2e-66950fcd6509.png)