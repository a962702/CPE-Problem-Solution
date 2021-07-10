import sys

for line in sys.stdin:
	count = 0
	while count < len(line.split()):
		print(abs(int(line.split()[count]) - int(line.split()[count+1])))
		count += 2