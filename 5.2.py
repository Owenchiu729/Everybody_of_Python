# Everybody_of_Python
largest=None
smallest=None
while True:
    try :
        num=input('Enter number:')
        if num == "done":
            break
        num=int(num)
        if largest is None or largest<num:
             largest=num
            
             
        elif smallest is None or smallest>num:
             smallest=num
             
    except :
        print('Invalid input')
        continue
print('Maximum is ', largest)
print('Manimum is ', smallest)


        
        
    
