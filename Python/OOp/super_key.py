class First():  
  def __init__(self):  
    print("first")  
  
class Second():  
  def __init__(self):  
    print("second")  
  
class Third(Second, First):  
  def __init__(self):  
    super(self).__init__()  
    print("third")  
  
Third();
