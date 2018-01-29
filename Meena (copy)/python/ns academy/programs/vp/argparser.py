import argparse

def fib(n):
    a,b=0,1
    for i in range(n):
        a,b=b,a+b
        print a
        return a
def Main():
    parser=argparse.ArgumentParser()
    print parser
    parser.add_argument("num",help="enter number you wish"+\
                           " it gives you fabonic series",type=int)
    args=parser.parse_args()
    print args
    result = fib(args.num)
    print "the "+str(args.num)+"th is fab nub is"+str(result)
    
if __name__ == '__main__':
    Main()
    
#0 1 1 2 3 5 8 13 21 34 55
