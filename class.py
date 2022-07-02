class customer:
    def __init__(self,cid,name,mobile,amount):
        self.cid=cid
        self.name=name
        self.mobile=mobile
        self.balance=amount
    def setmobile(self,mobile):
        self.mobile=mobile
    def getcid(self):
        return self.cid
    def getname(self):
        return self.name
    def getmobile(self):
        return self.mobile
    def getbalance(self):
        return self.balance
    def deposit(self,amount):
        self.balance=self.balance+amount
    def withdraw(self,amount):
        self.balance=self.balance-amount

c1=customer(123,"rohit",8594893823,6000)
c2=customer(234,"ar",493294893,40000)
c1.deposit(5000)
c1.setmobile(999984958)
print(c1.getname(),c1.getmobile(),c1.getcid(),c1.getbalance())


