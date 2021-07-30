def reverse(input_list):
    if len(input_list) == 0:
        return []
    elif len(input_list) == 1:
        return input_list
    return [input_list[len(input_list) - 1]] + reverse(input_list[:len(input_list)-1])