cm = float(raw_input())
foot = cm / 100 / 0.3048 * 144 / 145
print int(foot), int((foot-int(foot))*12)