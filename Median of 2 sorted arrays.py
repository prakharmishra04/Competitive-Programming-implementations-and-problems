str_formatted_array = input("input a sorted array in format a,b,c... \n")
arr1 = str_formatted_array.split(',')
arr1 = [int(element) for element in arr1]
str_formatted_array = input("input another sorted array \n")
arr2 = str_formatted_array.split(',')
arr2 = [int(element) for element in arr1]
print(str(arr1), type(arr1[0]))
print(str(arr2), type(arr2[0]))

# the algorithm to find median of both arrays merged

'''
approach 1: Brute force
merge the arrays and find the median O(n+m) since it will take that time to merge the arrays.

approach 2: Binary Search implementation to find the median
this involves observations and idea on how ot apply binary search for this problem to get it solved in O(log(m+n))

'''
if len(arr1) > len(arr2):
    temp = arr1
    arr1 = arr2
    arr2 = temp

low  =  0
high = len(arr1)
