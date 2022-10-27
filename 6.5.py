# text = "X-DSPAM-Confidence:    0.8475"
text = "X-DSPAM-Confidence:    0.8475"
t = text.find('0.8475')
number = text[t:]
print(float(number))
#另一種寫法


# text = "X-DSPAM-Confidence:    0.8475"
text = "X-DSPAM-Confidence:    0.8475"
ipos = text.find(':')
piece = text[ipos+5:]
value = float (piece)
print(piece)
