otp=raw_input('enter the pin number:  ')
if len(otp)==6:
        if otp=='123456':
            print 'your card got accessed'
        else:
            print 'you entered wrong otp'
else :
        print 'please enter 6 digit otp number'

