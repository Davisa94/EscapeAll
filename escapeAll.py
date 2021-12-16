# Given a string escape all instances of <,>, and / by adding a / char in front of each instance.


def get_string():
   return input("what is the string to escape?")


# given a string and an array of chars replace all instances of 
# those characters with that character + the escape character
def escape_chars(og_string, chars, escape_char):
   final_string = ""
   for letter in og_string:
      if letter in chars:
         final_string += escape_char + letter
      else:
         final_string += letter
   return final_string



def main():
   escape_char = '/'
   chars_to_escape = ['<', '>', '/']
   input_string = get_string()
   print(escape_chars(input_string, chars_to_escape, escape_char))















if __name__ == "__main__":
   main()