# Used script to create Database from provided input.txt.

import os
os.system("./a.out")
with open("input.txt") as f:
	for i in f:
		print i
		os.system(i)