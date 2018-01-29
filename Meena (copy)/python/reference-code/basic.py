chaturah@VTH013L:~$ 
chaturah@VTH013L:~$ python
Python 2.7.6 (default, Mar 22 2014, 22:59:56) 
[GCC 4.8.2] on linux2
Type "help", "copyright", "credits" or "license" for more information.
>>> val = "234"
>>> res = int(val)
>>> print res
234
>>> res = int(val,8)
>>> print res
156
>>> val = "0x12"
>>> res = int(val,16)
>>> print res
18
>>> val = "239"
>>> res = int(val,8)
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
ValueError: invalid literal for int() with base 8: '239'
>>> val = "0234"
>>> res = int(val)
>>> print res
234
>>> val = "123A"
>>> val = val +1
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: cannot concatenate 'str' and 'int' objects
>>> val = val +"1"
>>> print "vaL is" + val
vaL is123A1
>>> print "vaL is " + val
vaL is 123A1
>>> val = 021
>>> bin_val = bin(val)
>>> print bin
<built-in function bin>
>>> print bin_val
0b10001
>>> print "Binary value is ",bin_val
Binary value is  0b10001
>>> print "Binary value is "+bin_val
Binary value is 0b10001
>>> val = 67
>>> char = chr(val)
>>> print char
C
>>> chr = 'a'
>>> val = ord(chr)
>>> print val
97
>>> val = 0x123
>>> res = oct(val)
>>> print val
291
>>> val = 0x123
>>> res = float(val)
>>> print val
291
>>> print res
291.0
>>> val = 0x123
>>> res = bin(val)
>>> print res
0b100100011
>>> val = 0x123
>>> res = str(val)
>>> print res
291
>>> val = "123"
>>> res = str(val)
>>> print res
123
>>> val = 67
>>> res = unichr(val)
>>> print res
C
>>> val = "0xAB"
>>> res = unichr(val)
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: an integer is required
>>> val = "0xAB"val 
  File "<stdin>", line 1
    val = "0xAB"val 
                  ^
SyntaxError: invalid syntax
>>> val = 0x123
>>> res = str(val)
>>> print res
291
>>> val = 123
>>> res = str(val)
>>> print res
123
>>> val = 0123
>>> res = str(val)
>>> print res
83
>>> res = res +"1"
>>> print res
831
>>> val = 0x123
>>> print "eval of expr is", eval(5+8*7)
eval of expr is
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: eval() arg 1 must be a string or code object
>>> print "eval of expr is", eval("5+8*7")
eval of expr is 61
>>> val = 10
>>> val1 = 2
>>> val//val1
5
>>> val/val1
5
>>> val = 9
>>> val1 = 2
>>> val/val1
4
>>> val//val1
4
>>> val1 = 2
>>> val = 9
>>> val ** val1
81
>>> val * val1
18
>>> val1 =10
>>> val2 = 3
>>> float.div = val1/val2
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: can't set attributes of built-in/extension type 'float'
>>> float.div = val1 / val2
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: can't set attributes of built-in/extension type 'float'
>>> val = -10
>>> val1 = 3
>>> rem = val % val1
>>> print rem
2
>>> val = 10
>>> val1 = -3
>>> rem = val % val1
>>> print rem
-2
>>> val = 10
>>> val1 = 3
>>> rem = val / val1
>>> print rem
3
>>> val = 10
>>> val1 = 3
>>> rem = val // val1
>>> print rem
3
>>> val = 10.0
>>> val1 = 3
>>> rem = val / val1
>>> print rem
3.33333333333
>>> val = 10.0
>>> val = 10
>>> val1 = 3.0
>>> rem = val / val1
>>> val = 10
>>> val1 = 3.0
>>> rem = val / val1
>>> print rem
3.33333333333
>>> rem = val // val1
>>> print rem
3.0
>>> val = 10
>>> val1 = 3
>>> rem = val // val1
>>> print rem
3
>>> val = 10
>>> val1 = 3.0
>>> rem = val // val1
>>> print rem
3.0
>>> val1 = 3.0
>>> val = 10.88
>>> rem = val // val1
>>> print rem
3.0
>>> val1 = 21
>>> val = -5
>>> rem = val1 % val
>>> print rem
-4
>>> 
KeyboardInterrupt
>>> exit
Use exit() or Ctrl-D (i.e. EOF) to exit
>>> exit()
chaturah@VTH013L:~$ v1=-10
chaturah@VTH013L:~$ v2=3
chaturah@VTH013L:~$ rem=`expr $v1 % $v2`
chaturah@VTH013L:~$ echo $rem
-1
chaturah@VTH013L:~$ 
chaturah@VTH013L:~$ 
chaturah@VTH013L:~$ 
chaturah@VTH013L:~$ 
chaturah@VTH013L:~$ 
chaturah@VTH013L:~$ 
chaturah@VTH013L:~$ 
chaturah@VTH013L:~$ 
chaturah@VTH013L:~$ 
chaturah@VTH013L:~$ 
chaturah@VTH013L:~$ 
chaturah@VTH013L:~$ 
chaturah@VTH013L:~$ 
chaturah@VTH013L:~$ 
chaturah@VTH013L:~$ v1=-10
chaturah@VTH013L:~$ v2=-3
chaturah@VTH013L:~$ rem=`expr $v1 % $v2`
chaturah@VTH013L:~$ echo $rem
-1
chaturah@VTH013L:~$ python
Python 2.7.6 (default, Mar 22 2014, 22:59:56) 
[GCC 4.8.2] on linux2
Type "help", "copyright", "credits" or "license" for more information.
>>> v1=-10
>>> v2=-3
>>> rem = v1 % v2
>>> print rem
-1
>>> v1=-10
>>> v2=3
>>> rem = v1 % v2
>>> print rem
2
>>> v1=-3
>>> v2=-10
>>> rem = v1 % v2
>>> print rem
-3
>>> v1=10
>>> v2=-3
>>> rem = v1 % v2
>>> print rem
-2
>>> v1= 21
>>> v1 = 21
>>> v2 = 10
>>> res = v1 <> v2
>>> print res
True
>>> exit()
chaturah@VTH013L:~$ python
python      python2     python2.7   python3     python3.4   python3.4m  python3m    
chaturah@VTH013L:~$ python3
Python 3.4.0 (default, Apr 11 2014, 13:05:11) 
[GCC 4.8.2] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> v1 = 21
>>> v2 = 10
>>> res = v1  <> v2
  File "<stdin>", line 1
    res = v1  <> v2
               ^
SyntaxError: invalid syntax
>>> res = v1 != v2
>>> v1 = 21
>>> v2 = 10
>>> res = v1 <> v2
  File "<stdin>", line 1
    res = v1 <> v2
              ^
SyntaxError: invalid syntax
>>> res = v1<>v2
  File "<stdin>", line 1
    res = v1<>v2
             ^
SyntaxError: invalid syntax
>>> res = v1 != v2

