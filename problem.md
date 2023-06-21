## Sukriti's Dillema

On the festival of Sangam, tents are being put on a field. We can consider this field as a grid. The location of a tent is defined by its $X$ and $Y$ coordinates. In total, there are N tents.
Multiple tents can be set in a single box on this grid. Also, tanks and tents could be in the same location. We have to set up a water tank which is nearest to all the tents. By nearest, we mean the sum of distances of this tank with all the tents
should be minimum. In our system, distance between two points $(x_1, y_1)$ and $(x_2, y_2)$ is defined as $|x_1-x_2| + |y_1 - y_2|$. Now, we can have multiple choices to place this water tank. 
Sukriti (the coordinator of the event) is wondering 
how many possible locations our tank could be set up. Help her find this.
<hr/>

### Input
The first line contains a single integer $N, (1 \le N \le 10^6)$ - the number of tents. 

The next $N$ lines contain the coordinates of the tents.

$i^{th}$ line contain two integers $X_i$ and $Y_i$ $(1 \le X_i, Y_i \le 10^9)$ separated by a space - coordinates of $i^{th}$ tent.
<hr/>

### Output
The only integer output should be the number of locations where we can place our water tank. 
(Answer may not fit in a 32-bit datatype, so please use a suitable datatype)

<hr/>

### Examples
**input**
```
3
2 2
5 6
4 2
```
**output**
```
1
```
<hr/>

**input**
```
2
1 3
2 3
```
**output**
```
2
```
