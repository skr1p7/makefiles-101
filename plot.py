import matplotlib.pyplot as plt

f = open('output.txt', 'r')

myFile = f.read()
print(myFile)
myFile = myFile.split(',')
plt.plot(myFile)
plt.title("GCI Makefile plot")
plt.show()

f.close()