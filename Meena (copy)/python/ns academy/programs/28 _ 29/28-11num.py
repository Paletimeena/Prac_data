#Valid chars . a-z 0-9 
def check(test_str):
    import re
    #http://docs.python.org/library/re.html
    #re.search returns None if no position in the string matches the pattern
    #pattern to search for any character other then . a-z 0-9
    pattern = r'[^\.a-z0-9]'
    if re.search(pattern, test_str):
        #Character other then . a-z 0-9 was found
        print 'Invalid : %r' % (test_str,)
    else:
        #No character other then . a-z 0-9 was found
        print 'Valid   : %r' % (test_str,)

check(test_str='abcde.1')
check(test_str='abcde.1#')
check(test_str='ABCDE.12')
check(test_str='_-/>"!@#12345abcde<')
