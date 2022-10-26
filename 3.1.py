# Everybody_ofPython
h = input("Enter hours:")
r = input("Enter rate:")
h = float(h)
r = float(r)

if h >= 40:
    h = (r*1.5)*(h-40)+(40*r)
elif h <= 40:
    h = h*r

print(h)
