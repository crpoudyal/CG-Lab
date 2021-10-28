# Common Graphics Function

> Default Drawing color = White
> Default background color = black

##### 1. outtext("string_constant")

- It is used to display text on the graphics window.
- It takes one argument i.e `string to be displayed.`
- It always display text from pixel(0,0).

` Example`

```sh
outtext("text to display");
```

##### 2. outtextxy(x,y,"string_constant")

- It is used to display text from specified position.
- It takes three argument i.e `X-coordinate value , Y-coordinate value , Sting to be displayed.`

`Example`

```sh
outtextxy(100,200,"text to display");
```

##### 3. putpixel(x,y,COLOR_VALUE)

- It is used to set a color of pixel `(x,y)` with specified color value.
- Color value can be specified using
- Color name (in capital letters) : `RED , WHITE , GREEN` etc
- Color integer (value 0-15) : `0-BLACK , 15-WHITE , 4-RED` etc

`Example`

```sh
putpixel(100,200,"RED");

putpixel(100,200,4);
```

##### 4. line(x1,y1,x2,y2)

- It is used to draw a line from `(x1,y1)` to `(x2,y2)`

`Example`

```sh
line(100,100,400,300);
```

##### 5. setcolor(color_value)

- It is used to change drawing color

`Example`

```sh
setcolor("BLUE");
```

##### 6. setbkcolor(color_value)

- It is used to change background color

`Example`

```sh
setbkcolor("GREEN");
```

##### 7. circle(xc,yc,r)

- It is used to draw a circle centered at `(xc,yc)` with radius `r`

`Example`

```sh
setcolor("BLUE");
```
