def find_str(s, char):
    index = 0

    if char in s:
        c = char[0]
        for ch in s:
            if ch == c:
                if s[index:index+len(char)] == char:
                    return index

            index += 1

    return -1

print(find_str("Happy birthday", "py"))
print(find_str("Happy birthday", "rth"))
print(find_str("Happy birthday", "rh"))
