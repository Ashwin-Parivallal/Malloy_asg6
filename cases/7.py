z=7777
def f():
  x=1
  print x
  def g():
    print x+1
    def h():
      if z<9999:
        print z
        return
        print 6666
      else:
        print z+1
        return
        print 8888
    def j():
      print 1234
      if 4==4:
        print 4321
      else:
        print 4567
    print 2222
    j()
    h()
    print x+2
  g()
  print 4
f()
print 5
