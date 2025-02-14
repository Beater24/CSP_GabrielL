#Gabriel Lopez, Silly Sentences on Python

print("Welcome to the Silly Sentence Generator, You will be provided with a prompt to type in one word of what will be asked to generate your silly sentance. (Please only type one word for each of the prompts.)")

noun = input("Please provide a noun. (ex: A person or an animal)")
description = input("Please provide a description for that noun. (ex: hungry, yellow, angry)")
action_word = input("Please provide a action word that the noun will be doing. (ex: running, writing, walking)")
location = input("Please provide a location. (ex: London, Atlanta, Phoenix)")
time_of_day = input("Please provide a time of day. (ex: afternoon, evening, morning)")

print(noun, "was going to", location, "today, They were very excited. They were too", description, "to go to this place.", noun, "was going to go", action_word, "at", time_of_day, "in", location,". I know sounds very fun.")