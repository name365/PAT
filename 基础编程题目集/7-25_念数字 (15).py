pinyin = {
    '-': 'fu',
    '0': 'ling',
    '1': 'yi',
    '2': 'er',
    '3': 'san',
    '4': 'si',
    '5': 'wu',
    '6': 'liu',
    '7': 'qi',
    '8': 'ba',
    '9': 'jiu',
}

n = list(raw_input())
print ' '.join(map(lambda x: pinyin[x], n))
