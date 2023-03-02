# ex1

n = int(input())
a = ""
for x in range (n,1,-1):
    a = a + str(x) + ", "
a = a + "1"
print(a)

'''m = int(input())
z = ""
while m > 0:
    m=m-1
    z = z + str(m+1)+ ", "
print(z[:-2])'''

#ex2

n = int(input())
a=""
for n in range (0,n+1,2):
    a = a + str(n) + " "
print(a)
    
#ex3

n = int(input())
while n >= 0:
    n = n * (n-1)
print(n)

'''n = int(input())
a = 1
for x in range(1,n+1):
    a = a * x
print(a)'''

#ex4

n = int(input())
while True:
    if n>=5 and n<=10:
        print(n)
        break
    else:
        n = int(input())

#ex5

n = int(input())
a =""
if n > 0 and n < 10:
    for b in range (1,10):
        a = str(n) + "x" + str(b) + "=" + str(n*b)
        print(a)
else:
    print("please do it again!")

#ex6

a = int(input())
b = int(input())
c = int(input())
if a >= 0 and b >= 0 and c >= 0:
    if a * a + c * c== b * b or a * a + b * b == c * c or b * b + c * c == a * a:
        print("this is a spuare triangle!")
    elif a == b or b == c or a == c:
        print("this is a isosceles triangle!")
    elif a == b == c:
        print("this is a equilateral triangle!")
    elif a+b>c or b+c>a or a+c>b:
        print("this is a normal triangle!")
else:
    print("Try again!")
    
#ex7

import math

a = int(input())
b = int(input())
c = int(input())
if a >= 0 and b >= 0 and c >= 0:
    print(max(a,b,c))
else:
    print("Try again!")

#ex8

a = int(input())
b = int(input())
s=""
if a >= 0 and b >= 0:
    if a == b:
        print("two numbers are equal!")
    elif a > b:
        for x in range (b,a):
            s = s + " " + str(x)
        print(s)
    elif a < b:
        for x in range (a,b):
            s = s + " " + str(x)
        print(s)
else:
    print("Try again!")

#ex9


rank_100 = ["one ","two ","three ","four ","five","six ","seven ","eight ","nine"]
rank_10 = ["","and Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"]
rank_bullshit = ["and ten", "and eleven", "and twelve", "and thirteen", "and forteen", "and fifteen", "and sixteen", "and seventeen", "and eighteen", "and nineteen"]

a = int(input())
b = int(input())
c = int(input())

if a > 0 and b ==1 and c >= 0:
    print(rank_100[a]+" hundred "+rank_bullshit[c])
elif a > 0 and b >1 and c >= 0:
    print(rank_100[a]+" hundred "+rank_10[b]+" "+rank_100[c])
elif a > 0 and b ==0 and c == 0:
    print(rank_100[a]+" hundred ")


#ex10


name = input()

print(len(name))

print(name.lower())

print(name.islower())

print(name.upper())

print(name[2])
second_name = "Thao"
name = name[:1]+second_name+name[1:]

if "s" in name:
    print("True")
else:
    print("False")    


#learning supprot
#ex1

a = int(input())
b = int(input())

print(a+b)
print(a-b)
print(a*b)
print(str(a//b)+" remand: "+ str(a%b))

#ex2

for x in range(1,100,2):
    if x % 2 == 1 and x != 5 and x != 7 and x != 93 and x != 101:
        print(x)

#ex3

from cmath import sqrt


import math
a = int(input())
b = int(input())
c = int(input())
p = 1/2 * (a + b +c)
s = p * (p-a) * (p-b) * (p-c)

if a >= 0 and b >= 0 and c >= 0:
    if a+b>c and b+c>a and a+c>b :
        print(a + b + c)
        print(math.sqrt(s))
    else: 
        print("That is not a trigangle!")

#ex4


n = int(input())
i = 0
for x in range (1,n+1):
    i = i + x**3
if i % 3 == 0:
    print("chc3")
else: 
    print("nchc3")


#ex5