import os
desktopPath = os.path.expanduser('~')
filePath = desktopPath + '\desktop\iX2.txt'
file = open( filePath, 'w+')
for i in range(1, 1000):
    file.write( str(i) + "," + str( i*2 ) + "\n" )
file.close()
os.system(filePath)
