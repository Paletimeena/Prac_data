print 'please swap the card'
holder=raw_input('enter your name: ')
if holder=='meena.p':
    print holder
select=raw_input( "select 1 for deposite and 2 for withdraw")
if select=='1':
        amount=raw_input('enter the amount to be deposited')
        print amount 
        print amount,'rs deposited'
elif select=='2':
        amount=raw_input('enter the amount to be withdraw')
        print amount
        print 'rs is withdrawed'
else :
        print 'other transaction are been closed'
