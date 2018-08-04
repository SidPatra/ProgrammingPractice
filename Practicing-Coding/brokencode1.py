def isPreposition(word):
    list1 = ["a","abaft","aboard","about","above","absent","across","afore","after","against","along",\
            "alongside","amid","amidst","among","amongst","an","anenst","apropos","apud","around","as",\
            "aside","astride","at","athwart","atop","barring","before","behind","below","beneath",\
            "beside","besides","between","beyond","but","by","circa","concerning","despite","down",\
            "during","except","excluding","failing","following","for","forenenst","from","given",\
            "in","including","inside","into","lest","like","minus","modulo","near","next","notwithstanding",\
            "of","off","on","onto","opposite","out","outside","over","pace","past","per","plus","pro",\
            "qua","regarding","round","sans","save","since","than","through","thru","throughout","times",\
            "to","toward","towards","under","underneath","unlike","until","unto","up","upon","versus",\
            "vs","via","with","within","without","w/o","worth"]
    if word.lower() in (w.lower() for w in list1):
        return True
    return False
def isOtherSkipWord(word):
    list1 = ["per", "that", "an", "the", "who", "was", \
			"and", "has", "any", "however", "would", "being",\
             "mb", "et", "rt", "hrs","u.s","u.s.","traveling." \
             "1860.", "26."]
    if word.lower() in (w.lower() for w in list1):
        return True
    return False
def isHelperVerb(word):
    list1 = ["is", "are", "were", "has", "being", "having", "have"]
    if word.lower() in (w.lower() for w in list1):
        return True
    return False
def isPronoun(word):
    list1 = ["i", "me", "my", "myself", "we", "us", "our", \
			"ours", "ourselves", "you", "your", "yours", \
            "yourself", "he", "him", "his", "himself", "she", \
			"her", "hers", "herself", "it", "its", "itself", \
            "they", "them", "their", "theirs", "themselves"]
    if word.lower() in (w.lower() for w in list1):
        return True
    return False
def isSkipWord(word):
    if (isPronoun(word) or isPreposition(word) or isOtherSkipWord(word) or isHelperVerb(word) or len(word) < 3):
        return True
    return False
def fix(line):
    punct = [". ","..",'"'," ", "~~", ",", ", ", "; ", "! ", ": ", "/", "\\", "'s", "~(", ")~"]
    for c in punct:
        line = str.replace(line, c, "~")
    return line
def readAllLines():
    print("Reading file...")
    lines = []
    file = open("brokencode1input.txt", "r")
    for line in file:
        line = fix(line)
        if (len(line) > 0) and (line != "~"):
            lines.append(line.lower())
    file.close()
    return lines
def processLine(line):
    words = []
    line = line.strip(' \t\n\r')
    if len(line) > 0:
        splitLine = line.split('~')
        for s in splitLine:
            s = s.strip(' \t\n\r')
            if len(s) > 0:
                words.append(s)
    return words
def processText():
    lines = readAllLines()
    words = []
    for line in lines:
        words += processLine(line)
    return words
def generate():
    unique = []
    words = processText()
    for w in words:
        if not isSkipWord(w):
            if w not in unique:
                unique.append(w)
    return (words, unique)
def main():
    results = generate()
    results[1].sort()
    prev = results[1][0]
    cnt = 0
    for w in results[1]:
        if w[0] != prev:
            print("\n")
            cnt = 0
        if cnt != 0:
            print(',',w, end="")
        else:
            print(w, end="")
        cnt += 1
        prev = w[0]
    print("\n\nThe ratio of unique words to words is:", (len(results[1])/len(results[0])))
if __name__ == "__main__":
    main()    

