# text = "X-DSPAM-Confidence:    0.8475"
text = "X-DSPAM-Confidence:    0.8475"
t = text.find('0.8475')
number = text[t:]
print(float(number))
