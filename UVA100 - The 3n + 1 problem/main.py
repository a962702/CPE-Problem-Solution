# input bug!
import sys

def alg(n):
	count = 1;
	while n!=1:
		if n%2:
			n = n * 3 + 1
		else:
			n = n / 2
		count += 1
	return count

for line in sys.stdin:
	word_count = 0
	arr = line.split()
	while word_count < len(arr):
		i = int(arr[word_count])
		j = int(arr[word_count+1])
		word_count += 2
		print(i, j, end = "")
		if i > j:
			tmp = i
			i = j
			j = tmp
		ans = 0
		while True:
			tmp = alg(i)
			ans = max(tmp, ans)
			i += 1
			if i>j:
				break
		print("", ans)