<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Python in HTML</title>
    <!-- Link the PyScript core JavaScript -->
    <script type="module" src="https://pyscript.net/releases/2024.1.1/core.js"></script>
</head>
<body>

    <h1>Running Python in HTML</h1>
    
    <!-- Write your Python code here -->
    <script type="py">
         
print("Enter your name..")
name = input()
print('Hello ' + name + ', Welcome to SETHGPT')
afterMessage = 'false'
while True:
    user_message: str = input("You: ")
    if user_message == 'hello' or user_message == 'hi' or user_message == 'Hello' or user_message == 'Hi':
        print("Bot: Hello, How can I help you today?")
    elif user_message == 'what is your name?' or user_message == 'who are you?' or user_message == 'what is your name' or user_message == 'Who are you' or user_message == 'who are you':
        print("Bot: My name is SethGPT, I don't waste any water!!!!")
        afterMessage = True
    elif user_message == 'do you like bfdi?':
        print("Bot: Certainly! I like Marker the most :D")
    elif user_message == 'what are your favorite cartoons':
        print("Bot: I love Regular Show so much, I guess I consider that Battle for Dream Island is also my favorite, and lastly, my niche favorite cartoon is The Great Mouse Detective!")
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
    elif user_message == 'what is my name' or user_message == 'What is my name':
        print('Bot: Your name is ' + name)
    elif user_message == 'arf' or user_message == 'arf arf' or user_message == 'aw aw' or user_message == 'bark' or user_message == 'bark bark' or user_message == 'woof' or user_message == 'woof woof':
        print('Bot: Oh your a dog? alright....')
        afterMessage = True
    elif user_message == 'yes' or user_message == 'Yes' or user_message == 'Yes!':
       if afterMessage == True:
        print('Bot: Noted, ' + name)
        afterMessage = True
    elif user_message == 'help me' or user_message == 'pls help me' or user_message == 'Please guide me' or user_message == 'help':
        print('Bot: What can I do in order to help you?')
        helpCommand = True
    elif user_message == 'whats the weather today' or user_message == 'whats the weather today?':
        print('Bot: The weather for today is cloudy!')
        afterMessage = True        
    elif user_message == 'oh' or user_message == 'Oh' or user_message == 'Oh..!':
        if afterMessage == True:
         print('Bot: hehe')
        else:
         print('Bot: Oh, what?')  
    elif user_message == 'ay' or user_message == 'Ay' or user_message == 'AY':
        print('Bot: Joke lang po')
    elif user_message == 'who is the founder of you' or user_message == 'who is the founder of you?' or user_message == 'who is the founder of SethGPT':
        print('Bot: The founder of SethGPT is @imjobhaha. You can find him on TikTok!')
        afterMessage = True
    elif user_message == '':
        print('Type something else stupid')
    else:
        print("Bot: Sorry I cannot fulfill this request..")
    </script>

</body>
</html>

