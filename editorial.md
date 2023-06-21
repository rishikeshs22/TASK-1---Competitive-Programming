## Sukriti's Dillema Editorial

**Concepts used:** Sorting, Median

Let's say the tents are at $(x_1, y_1), (x_2, y_2), ... , (x_n, y_n).$ And we place our water tank at $(a,b).$

### Observation 1
Sum of distances of water tank from tents will be $\sum{|a - x_i|} + \sum{|b-y_i|}.$ While, choosing optimal value of $(a,b)$, $a$ doesn't depend on 
y-coordinates of the tents. Optimal value of $a$ solely depends on the values of x-coordinates of the tents. Similarily, while selecting the best $b$,
we only need to care about the y-coordinates of the tents.

We will minimise $\sum{|a - x_i|}$ and $\sum{|b-y_i|}$ independently.

### Observation 2
As we deduced from observation 1, we need to minimise $\sum{|a - x_i|}$ and $\sum{|b-y_i|}$ independently.

For given $x_1, x_2, x_3, ... , x_n$, we need to find $a$ such that value of $\sum{|a - x_i|}$ is minimum. This problem gives hints about using medians.

**For n = odd:** In this case, there will be a single value of the median and the optimal value of $a$  will be the median of the set $(x_1, x_2, ..., x_n)$.
So, there will be only one possible value of $a$.

**For n = even:** In this case, there will be two medians. To find those medians, we will sort the array $(x_1, x_2, ... , x_n)$ . 
After sorting the array, $\frac{n}{2}^{th}$ and $(\frac{n}{2} + 1)^{th}$ elements will be the medians of the array. In this case, 
we can choose any number between those numbers (including both), as our $a$. We will have multiple possibilities for our $a$ in this case.

We can do similar process to choose $b$. Our $b$ will depend on y-coordinates of the tents.

Finally, we will multiply the number of possibilities of $a$ and $b$ to find our answer ie. total possibilities of $(a, b)$
