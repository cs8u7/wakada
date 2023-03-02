x = [1,1,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1]
y = [1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1]
z = [1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0]
major = 2

def check_major() -> int:
   if x[8] + y[10] + z[10] > 1 :
      return 1
   else:
      return 0

def gen_key() -> int:
    return x[18] ^ y[21] ^ z[22]
 
def shift_and_fill():
   major = check_major()
   #array x
   if x[8] == major :
      #shift array
      temp = 18
      while temp < 1:
         x[temp] = x[temp-1]
         temp -= 1
      #fill array
      x[0] = x[18] ^ x[17] ^ x[16] ^ x[13]
   
   #array y
   if y[10] == major :
      #shift array
      temp = 21
      while temp < 1:
         y[temp] = y[temp-1]
         temp -= 1
      #fill array
      y[0] = y[21] ^ y[20]
         
   #array z
   if z[10] == major :
      #shift array
      temp = 22
      while temp < 1:
         z[temp] = z[temp-1]
         temp -= 1
      #fill array
      z[0] = z[22] ^ z[21] ^ z[20] ^ z[7]
      
key_stream = []
# while True:
#    length = int(input("Enter lengh of key steam: "))
#    if length < 0:
#       print("Invalid!")
#    else:
#       break
length = 10
for i in range(length):
   key_stream.append(gen_key())
   shift_and_fill()
key_display = ""
for i in range(length):
   key_display += str(key_stream[i])
print(f"Generated key is: {key_display}")