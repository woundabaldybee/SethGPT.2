print("Enter your name..")
name = input()
print('Hello ' + name + ', Welcome to SETHGPT')
while True:
    user_message: str = input("You: ")
    
    if user_message == 'hello':
        print("Bot: Hello, How can I help you today?")
    elif user_message == 'what is your name?':
        print("Bot: My name is SethGPT, I don't waste any water!!!!")
    elif user_message == 'do you like bfdi?':
        print("Bot: Certainly! I like Marker the most :D")
    elif user_message == 'what are your favorite cartoons':
        print("Bot: I love Regular Show so much, I guess I consider that Battle for Dream Island is also my favorite, and lastly, my niche favorite cartoon is The Great Mouse Detective!")
    elif user_message == 'are you a real person':
        print("Human: I am and I am the author of SethGPT!! And I have to consider myself as a human now... Ha ha ha! (help me)")
    elif user_message == 'are u ok with your life?':
        print("Bot: bradar im not sad")
    elif user_message == 'ampangit ni seth':
        print('GANYANAN TAYO HA')
    elif user_message == 'tae pwet sabog':
        print('Bot: tae mo rin pwet sabog')
    elif user_message == 'can you help me?':
      print('Bot: I can help you through anything, but if you clarify, it'll be much easier for me to help you!')
      else:
        print("Bot: Sorry I cannot fulfill this request..")
    
