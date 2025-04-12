username = input()
distinct_chars = set(username)
count_distinct = len(distinct_chars)

if count_distinct%2==0:
	print("CHAT WITH HER!")
else:
	print("IGNORE HIM!")