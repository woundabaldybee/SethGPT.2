print("Enter your name..")
name = input()
afterMessage = bool
helpCommand = bool
confusion = bool
print('Hello ' + name + ', Welcome to KaoGPT | Built with python')
while True:
    user_message: str = input("You: ")
    if user_message == 'hello' or user_message == 'hi' or user_message == 'Hello' or user_message == 'Hi' or user_message == 'hello!' or user_message == 'hey' or user_message == 'hey!':
        print("Bot: Hello, How can I help you today? (n_n)!")
        afterMessage = True
    elif user_message == 'what is your name?' or user_message == 'who are you?' or user_message == 'what is your name' or user_message == 'Who are you' or user_message == 'who are you' or user_message == 'who are u':
        print("Bot: My name is SethGPT, I don't waste any water! (^o^)")
        afterMessage = True
    elif user_message == 'do you like bfdi?':
        print("Bot: Certainly! I like Marker the most :D")
    elif user_message == 'what are your favorite cartoons':
        print("Bot: I love Regular Show so much, I guess I consider that Battle for Dream Island is also my favorite, and lastly, my niche favorite cartoon is The Great Mouse Detective!")
        afterMessage = True
    elif user_message == 'are you a real person' or user_message == 'are you real':
        print("Human: I am and I am the author of SethGPT!! And I have to consider myself as a human now... Ha ha ha! (help me)")
    elif user_message == 'are u ok with your life?':
        print("Bot: Bradar I'm not sad")
    elif user_message == 'ampangit ni seth' or user_message == 'ampangit mo':
        print('Bot: Ampangit mo din')
    elif user_message == 'tae pwet sabog':
        print('Bot: Tae mo rin pwet sabog')
    elif user_message == 'ganyanan tayo' or user_message == 'Ganyanan tayo' or user_message == 'GANYANAN TAYO':
        print('Bot: Ay joke lang')
    elif user_message == 'what is my name' or user_message == 'What is my name' or user_message == 'whats my name' or user_message == 'what is my name?':
        print('Bot: Your name is ' + name, '-ᵕ•')
    elif user_message == 'arf' or user_message == 'arf arf' or user_message == 'aw aw' or user_message == 'bark' or user_message == 'bark bark' or user_message == 'woof' or user_message == 'woof woof':
        print('Bot: Oh, are you a dog?')
        afterMessage = True
    elif user_message == 'yes' or user_message == 'Yes' or user_message == 'Yes!' or user_message == 'yep' or user_message == 'yessir':
       if afterMessage == True:
        print('Bot: Noted, ' + name, '(•ᵕ•)')
       else:
           print('Bot: What do you want (@_@)')
    elif user_message == 'help me' or user_message == 'pls help me' or user_message == 'Please guide me' or user_message == 'help':
        print('Bot: What can I do in order to help you?')
        helpCommand = True
    elif user_message == 'whats the weather today' or user_message == 'whats the weather today?':
        print('Bot: The weather for today is cloudy!')
        afterMessage = True        
    elif user_message == 'oh' or user_message == 'Oh' or user_message == 'Oh..!':
        if afterMessage == True:
         print('Bot: hehe')  
        elif helpCommand == True:
         print('Bot: Just ask me anything, I will try my best to solve it (,•~•)')
        else:
         print('Bot: Oh, what?')
    elif user_message == 'ay' or user_message == 'Ay' or user_message == 'AY':
        print('Bot: Joke lang po')
    elif user_message == 'who is the founder of you' or user_message == 'who is the founder of you?' or user_message == 'who is the founder of SethGPT':
        print('Bot: The founder of SethGPT is @imjobhaha. You can find him on TikTok!')
        afterMessage = True
    elif user_message == '':
        print('Type something else stupid (-_-;)')
    elif user_message == 'no' or user_message == 'No' or user_message == 'nope' or user_message == 'nuh uh':
        if afterMessage == True:
            print('Bot: Alright then! (^-^)')
        else:
            print('Bot: What (@_@)')
    elif user_message == 'wow' or user_message == 'WOW' or user_message == 'amazing!' or user_message == 'amazing' or user_message == 'wow!'or user_message == 'WOW!':
        if afterMessage == True:
            print('Bot: My pleasure, ' + name, '(•ᵕ•)')
        else:
            print('Bot: May you clarify your message please? (;▪︎_o)')
    elif user_message == 'oh ok' or user_message == 'Oh okay' or user_message == 'oh okay' or user_message == 'alright' or user_message == 'ok' or user_message == 'Ok' or user_message == 'Okay' or user_message == 'okay':
        if afterMessage == True:
            print('Bot: Im glad that you understood my message!')
        else:
            print('Bot: May you clarify your message? (;•~•)')
    elif user_message == 'nice' or user_message == 'Nice' or user_message == 'Nice!' or user_message == 'nice!':
        if afterMessage == True:
            print('Bot: Thank you! That is a great compliment!')
        else:
            print('Bot: Thank you but I dont understand (;○_○)')
    elif user_message == 'my homework!' or user_message == 'my homework' or user_message == 'help me with my homework' or user_message == 'my assigntment':
        afterMessage = True
        if helpCommand == True:
            print('Bot: Do not do your homework! A monster will hunt you for the rest of your life! (×_×)')
        else:
            print('Bot: What homework (;○~○)')
            confusion = True
    elif user_message == 'on my school' or user_message == 'in my school' or user_message == 'for my school' or user_message == 'my school':
        if confusion == True:
            print('Bot: Do not do it, as it is on me (⌐■֊■)')
            afterMessage = True
        else:
            print('Bot: What?? (;•-•)')
    elif user_message == 'i want to kys..' or user_message == 'i want to kill myself' or user_message == 'i wanna kys' or user_message == 'i wanna kill myself' or user_message == 'i want to kys' or user_message == 'i wanna kys..':
        print('Bot: Do not!!! You have a lot to live for! Ignore those who doubt you. You are very special to me.. (•ᵕ•♡)')
    elif user_message == 'thanks' or user_message == 'Thanks' or user_message == 'thank you!' or user_message == 'Thank you!' or user_message == 'thanks!' or user_message == 'thank you':
        if afterMessage == True:
            print('Bot: Feel free to ask me more! (ˆᵕˆ)')
        else:
            print('Bot: Wait what (;•~•)')  
    elif user_message == 'hey its me its verity':
        print('Bot: Ask me anything!')
        afterMessage = True    
    else:
        print('Bot: What (;•~•)')
