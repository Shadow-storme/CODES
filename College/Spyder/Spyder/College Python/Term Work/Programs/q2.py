#Assigning values to variables
a = 10
b = 20

'''Assignment operator'''

print("\nOutput of Assignment operator:\n")
#addition
print("the value of a + b is ", 10+20)
#subtraction
print("the value of a - b is ", 10-20)
#multiplication
print("the value of a * b is ", 10*20)
#division
print("the value of a / b is ", 10/20)
#floor division
print("the value of a // b is", 10//20)
#exponent  
print("the value of a ** b is", 10**20)
#modulus
print("the value of a % b is", 10%20)
#float modulus
print("the value of a % b is", 10.5%20.5)

"""logical operator"""

print("\nOutput of Logical operator:\n")
#and
print("the value of a and b is", 10 and 20)
#or
print("the value of a or b is", 10 or 20)
#not
print("the value of not a is", not 10)

"""Relational operator"""

print("\nOutput of Relational operator:\n")
#greater than
print("the value of a > b is", 10 > 20)
#less than
print("the value of a < b is", 10 < 20)
#greater than or equal to
print("the value of a >= b is", 10 >= 20)
#less than or equal to
print("the value of a <= b is", 10 <= 20)
#equal to
print("the value of a == b is", 10 == 20)
#not equal to
print("the value of a != b is", 10 != 20)

"""Bitwise operator"""

print("\nOutput of Bitwise operator:\n")
#bitwise and
print("the value of a & b is", 10 & 20)
#bitwise or
print("the value of a | b is", 10 | 20)
#bitwise not
print("the value of ~a is", ~10)
#bitwise xor
print("the value of a ^ b is", 10 ^ 20)
#bitwise right shift
print("the value of a >> b is", 10 >> 20)
#bitwise left shift
print("the value of a << b is", 10 << 20)

'''Identity Operators'''

# is Identity
print("\nOutput of Identity operator:\n")
a=10
b=20
print(a is b)

# is not Identity
a=10
b=20
print(a is not b)

'''Membership Operators'''

# in Membership
print("\nOutput of Membership operator:\n")
a=10
b=[10,20,30] #
print(a in b)

# not in Membership
a=10
b=[10,20,30] #list
print(a not in b)
