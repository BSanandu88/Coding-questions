"""  simple_sort is a non recursive function that take a list of numerical values and returns a
sorted list. The returned list is in ascending order. The argument list can contain duplicate values.
If the two values are same, they appear together (one after another) in the sorted list.
See the below table for simple_sort 
Function Argument Function Return
a list of numeric values a list of numeric values in ascending order
[1, 2, 3, 5, 8, 9] [1, 2, 3, 5, 8, 9]
[8, 7, 5, 1, 2, 2, 0] [0, 1, 2, 2, 5, 7, 8]
Part B: A function simple_search is a recursive function. It takes two inputs :
1. a sorted list from simple_sort
2. an item (a numerical value)
It searches for an item in the sorted list, lets say item_list in following ways:
Step 1:
If the list has more than one element: check the middle most element in the sorted list,
if this is the item being searched, item is said to be found and function returns bool
literal True .
If the list is having only one element and it does not match with item being searched,
the function returns bool literal False .
Step 2:
If the item is not found in step-1, the function checks the item in a sublist of list used in
step-1
If middle element < item: the item is searched in the sub list to the right of the
middle item
If middle element > item: the item is searched in the sub list to the left of the
middle item
Step 1 and Step 2 is repeated until the element is found or the list is exhausted.
See the below table for simple_search 
Note: The program internally check for a recursive implementation of a given function. The
student need not accept any input or print output to the console. The student should only write
the body of the function. """

# Recursive solution
def simple_sort(item_list):
    sorted_list = []
    for item in item_list[:]:
        sorted_list.append(min(item_list))
        item_list.remove(min(item_list))
    return sorted_list

#recursive solution for simple search
def simple_search(item_list,item):
    start = 0
    end = len(item_list)
    if start < end:
        mid = (start + end)//2
        if item_list[mid] == item:
            return True
        elif item_list[mid] > item:
            end = mid
            return simple_search(item_list[start:end],item)
        elif item_list[mid] < item:
            start = mid + 1
            return simple_search(item_list[start:end],item)
        else:
            return False

# Non recursive solution
def simple_search(item_list,item):
    start = 0
    end = len(item_list) - 1
    found = False
    while start <= end and (not found):
        mid = (start + end) // 2
        if item_list[mid] == item:
            found = True
        else:
            if item < item_list[mid]:
                end = mid + 1
            else:
                start = mid + 1
    return found