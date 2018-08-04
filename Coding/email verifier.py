while True:
    #the program will continue looping until user gets it right
    email = input("Email ID: ")
    print()
    if " " in email:
        #allows user to try again
        print("Try again")
    else:
        count = 0 # counts number of “@” signs
        for i in email:
            if i == "@":
                count+=1
        if count > 1 or count == 0:
        # allows user to try again
            print("Try again")
        else:
            if email[-1] == "." or email[0] == ".":
                # checks if email starts/ends with a “.” sign
                # allows user to try again
                print("Try again")
            else:
                #check if there is exactly one “.” after the “@”.
                count = 0 # will count number of “.” signs
                z = email.index("@")
                newemail = email[z:] # newemail is email starting at the “@” sign, not including anything before.
                if "." == newemail[1]:
                    # checks there is a character that is not a "." that follows the "@" sign
                    # allows user to try again
                    print("Try again")
                else:
                    if "." not in newemail:
                        # checks if email starts/ends with a “.” sign
                        # allows user to try again
                        print("Try again")
                    else:
                        print("TRUE")
                        break
                        # is a valid email ID, loop breaks and
                        # continues into the rest of the function.

