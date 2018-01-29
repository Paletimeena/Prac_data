#!usr/bin/python
import fibo
set PYTHONPATH
print fibo.fib(100)
print fibo.fib2(100)
fibo_vals=fibo.fib2(50)
print fibo_vals
print 'version',fibo.__version__

