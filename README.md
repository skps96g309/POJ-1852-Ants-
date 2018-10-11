# POJ-1852-Ants-
做個紀錄，若有人有發現錯誤或是更好的解法，請多多指教
---------------------------------------------------------------------------------------------------------------------------------
題目:http://poj.org/problem?id=1852

題目一開始給定螞蟻的移動速度為1cm/s，在一個長度為L的竹竿上有n隻螞蟻，螞蟻能左右走，當兩隻螞蟻發生碰撞時則改變原型進方向，走到兩端時螞蟻會掉下去，題目索求為求當所有螞蟻掉下去時，所需的最多時間跟最少時間。

這題原本我打算用所有可能給他跑，但是發現很複雜，參考其他人的想法後，發現這題螞蟻碰撞時雖然兩隻都改變了方向，假設A螞蟻撞到B螞蟻，碰撞後改變了方向，但是其實只是B螞蟻把A螞蟻原本該走的路繼續走下去，而B螞蟻亦是如此。也可以想成這兩隻螞蟻只是擦身而過，並沒有發生碰撞。

所以我們只要把各螞蟻從當前位置到掉落所需的最少時間一個一個找出來，然後比較這些時間，再找出其中最大的值作為所有螞蟻掉到竿子外的最少時間。為何要說「取各螞蟻的最少時間的最大值?」，因為不管其他螞蟻在怎麼快先掉落，還是得等那隻最慢的掉落後，整個過程才算結束，即N隻螞蟻都取其最快掉落的方向開始跑，但是還是得等那隻跑最慢的掉下去才算結束。


參考文章:https://blog.csdn.net/zwj1452267376/article/details/49820483
test
