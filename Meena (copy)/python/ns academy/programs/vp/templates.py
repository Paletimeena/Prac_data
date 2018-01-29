from string import Template
class MyTemplate(Template):
    delimiter ='#'
def main():
    cart=[]
    cart.append(dict(item="chicken",price=120,qty=2))
    cart.append(dict(item='noodles',price=50,qty=5))
    cart.append(dict(item='fish',price=100,qty=10))
    
    t=MyTemplate("#item x #qty x price")
    total=0
    print"cart"
    for data in cart:
        print t.substitute(data)
        total+=data["price"]
    print 'total',total
if __name__ == "__main__":
    main()
