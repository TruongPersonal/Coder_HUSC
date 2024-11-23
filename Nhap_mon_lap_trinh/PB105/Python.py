while True:
    try:
        text = input()
        if text == '':
            break

        count_lower_character = 0
        count_upper_character = 0

        for char in text:
            if 'a' <= char <= 'z':
                count_lower_character += 1
            elif 'A' <= char <= 'Z':
                count_upper_character += 1

        if count_upper_character > count_lower_character:
            text = text.upper()
        else:
            text = text.lower()

        print(text)

    except EOFError:
        break