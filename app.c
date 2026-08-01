#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_INPUT 256

int main(void) {
    char name[MAX_INPUT];
    char user_message[MAX_INPUT];
    bool afterMessage = false;
    bool helpCommand = false;
    bool confusion = false;

    printf("Enter your name..\n");
    fgets(name, sizeof(name), stdin);
    /* Remove trailing newline */
    name[strcspn(name, "\n")] = '\0';

    printf("Hello %s, Welcome to KaoGPT | Built with C\n", name);

    while (1) {
        printf("You: ");
        if (fgets(user_message, sizeof(user_message), stdin) == NULL) {
            break;
        }
        /* Remove trailing newline */
        user_message[strcspn(user_message, "\n")] = '\0';

        if (strcmp(user_message, "hello") == 0 || strcmp(user_message, "hi") == 0 ||
            strcmp(user_message, "Hello") == 0 || strcmp(user_message, "Hi") == 0 ||
            strcmp(user_message, "hello!") == 0 || strcmp(user_message, "hey") == 0 ||
            strcmp(user_message, "hey!") == 0) {
            printf("Bot: Hello, How can I help you today? (n_n)!\n");
            afterMessage = true;
        }
        else if (strcmp(user_message, "what is your name?") == 0 || strcmp(user_message, "who are you?") == 0 ||
                 strcmp(user_message, "what is your name") == 0 || strcmp(user_message, "Who are you") == 0 ||
                 strcmp(user_message, "who are you") == 0 || strcmp(user_message, "who are u") == 0) {
            printf("Bot: My name is SethGPT, I don't waste any water! (^o^)\n");
            afterMessage = true;
        }
        else if (strcmp(user_message, "do you like bfdi?") == 0) {
            printf("Bot: Certainly! I like Marker the most :D\n");
        }
        else if (strcmp(user_message, "what are your favorite cartoons") == 0) {
            printf("Bot: I love Regular Show so much, I guess I consider that Battle for Dream Island is also my favorite, and lastly, my niche favorite cartoon is The Great Mouse Detective!\n");
            afterMessage = true;
        }
        else if (strcmp(user_message, "are you a real person") == 0 || strcmp(user_message, "are you real") == 0) {
            printf("Human: I am and I am the author of SethGPT!! And I have to consider myself as a human now... Ha ha ha! (help me)\n");
        }
        else if (strcmp(user_message, "are u ok with your life?") == 0) {
            printf("Bot: Bradar I'm not sad\n");
        }
        else if (strcmp(user_message, "ampangit ni seth") == 0 || strcmp(user_message, "ampangit mo") == 0) {
            printf("Bot: Ampangit mo din\n");
        }
        else if (strcmp(user_message, "tae pwet sabog") == 0) {
            printf("Bot: Tae mo rin pwet sabog\n");
        }
        else if (strcmp(user_message, "ganyanan tayo") == 0 || strcmp(user_message, "Ganyanan tayo") == 0 ||
                 strcmp(user_message, "GANYANAN TAYO") == 0) {
            printf("Bot: Ay joke lang\n");
        }
        else if (strcmp(user_message, "what is my name") == 0 || strcmp(user_message, "What is my name") == 0 ||
                 strcmp(user_message, "whats my name") == 0 || strcmp(user_message, "what is my name?") == 0) {
            printf("Bot: Your name is %s -ᵕ•\n", name);
        }
        else if (strcmp(user_message, "arf") == 0 || strcmp(user_message, "arf arf") == 0 ||
                 strcmp(user_message, "aw aw") == 0 || strcmp(user_message, "bark") == 0 ||
                 strcmp(user_message, "bark bark") == 0 || strcmp(user_message, "woof") == 0 ||
                 strcmp(user_message, "woof woof") == 0) {
            printf("Bot: Oh, are you a dog?\n");
            afterMessage = true;
        }
        else if (strcmp(user_message, "yes") == 0 || strcmp(user_message, "Yes") == 0 ||
                 strcmp(user_message, "Yes!") == 0 || strcmp(user_message, "yep") == 0 ||
                 strcmp(user_message, "yessir") == 0) {
            if (afterMessage == true) {
                printf("Bot: Noted, %s (•ᵕ•)\n", name);
            } else {
                printf("Bot: What do you want (@_@)\n");
            }
        }
        else if (strcmp(user_message, "help me") == 0 || strcmp(user_message, "pls help me") == 0 ||
                 strcmp(user_message, "Please guide me") == 0 || strcmp(user_message, "help") == 0) {
            printf("Bot: What can I do in order to help you?\n");
            helpCommand = true;
        }
        else if (strcmp(user_message, "whats the weather today") == 0 || strcmp(user_message, "whats the weather today?") == 0) {
            printf("Bot: The weather for today is cloudy!\n");
            afterMessage = true;
        }
        else if (strcmp(user_message, "oh") == 0 || strcmp(user_message, "Oh") == 0 || strcmp(user_message, "Oh..!") == 0) {
            if (afterMessage == true) {
                printf("Bot: hehe\n");
            } else if (helpCommand == true) {
                printf("Bot: Just ask me anything, I will try my best to solve it (,•~•)\n");
            } else {
                printf("Bot: Oh, what?\n");
            }
        }
        else if (strcmp(user_message, "ay") == 0 || strcmp(user_message, "Ay") == 0 || strcmp(user_message, "AY") == 0) {
            printf("Bot: Joke lang po\n");
        }
        else if (strcmp(user_message, "who is the founder of you") == 0 || strcmp(user_message, "who is the founder of you?") == 0 ||
                 strcmp(user_message, "who is the founder of SethGPT") == 0) {
            printf("Bot: The founder of SethGPT is @imjobhaha. You can find him on TikTok!\n");
            afterMessage = true;
        }
        else if (strcmp(user_message, "") == 0) {
            printf("Type something else stupid (-_-;)\n");
        }
        else if (strcmp(user_message, "no") == 0 || strcmp(user_message, "No") == 0 ||
                 strcmp(user_message, "nope") == 0 || strcmp(user_message, "nuh uh") == 0) {
            if (afterMessage == true) {
                printf("Bot: Alright then! (^-^)\n");
            } else {
                printf("Bot: What (@_@)\n");
            }
        }
        else if (strcmp(user_message, "wow") == 0 || strcmp(user_message, "WOW") == 0 ||
                 strcmp(user_message, "amazing!") == 0 || strcmp(user_message, "amazing") == 0 ||
                 strcmp(user_message, "wow!") == 0 || strcmp(user_message, "WOW!") == 0) {
            if (afterMessage == true) {
                printf("Bot: My pleasure, %s (•ᵕ•)\n", name);
            } else {
                printf("Bot: May you clarify your message please? (;▪︎_o)\n");
            }
        }
        else if (strcmp(user_message, "oh ok") == 0 || strcmp(user_message, "Oh okay") == 0 ||
                 strcmp(user_message, "oh okay") == 0 || strcmp(user_message, "alright") == 0 ||
                 strcmp(user_message, "ok") == 0 || strcmp(user_message, "Ok") == 0 ||
                 strcmp(user_message, "Okay") == 0 || strcmp(user_message, "okay") == 0) {
            if (afterMessage == true) {
                printf("Bot: Im glad that you understood my message!\n");
            } else {
                printf("Bot: May you clarify your message? (;•~•)\n");
            }
        }
        else if (strcmp(user_message, "nice") == 0 || strcmp(user_message, "Nice") == 0 ||
                 strcmp(user_message, "Nice!") == 0 || strcmp(user_message, "nice!") == 0) {
            if (afterMessage == true) {
                printf("Bot: Thank you! That is a great compliment!\n");
            } else {
                printf("Bot: Thank you but I dont understand (;○_○)\n");
            }
        }
        else if (strcmp(user_message, "my homework!") == 0 || strcmp(user_message, "my homework") == 0 ||
                 strcmp(user_message, "help me with my homework") == 0 || strcmp(user_message, "my assigntment") == 0) {
            afterMessage = true;
            if (helpCommand == true) {
                printf("Bot: Do not do your homework! A monster will hunt you for the rest of your life! (×_×)\n");
            } else {
                printf("Bot: What homework (;○~○)\n");
                confusion = true;
            }
        }
        else if (strcmp(user_message, "on my school") == 0 || strcmp(user_message, "in my school") == 0 ||
                 strcmp(user_message, "for my school") == 0 || strcmp(user_message, "my school") == 0) {
            if (confusion == true) {
                printf("Bot: Do not do it, as it is on me (⌐■֊■)\n");
                afterMessage = true;
            } else {
                printf("Bot: What?? (;•-•)\n");
            }
        }
        else if (strcmp(user_message, "i want to kys..") == 0 || strcmp(user_message, "i want to kill myself") == 0 ||
                 strcmp(user_message, "i wanna kys") == 0 || strcmp(user_message, "i wanna kill myself") == 0 ||
                 strcmp(user_message, "i want to kys") == 0 || strcmp(user_message, "i wanna kys..") == 0) {
            printf("Bot: Do not!!! You have a lot to live for! Ignore those who doubt you. You are very special to me.. (•ᵕ•♡)\n");
        }
        else if (strcmp(user_message, "thanks") == 0 || strcmp(user_message, "Thanks") == 0 ||
                 strcmp(user_message, "thank you!") == 0 || strcmp(user_message, "Thank you!") == 0 ||
                 strcmp(user_message, "thanks!") == 0 || strcmp(user_message, "thank you") == 0) {
            if (afterMessage == true) {
                printf("Bot: Feel free to ask me more! (ˆᵕˆ)\n");
            } else {
                printf("Bot: Wait what (;•~•)\n");
            }
        }
        else if (strcmp(user_message, "hey its me its verity") == 0) {
            printf("Bot: Ask me anything!\n");
            afterMessage = true;
        }
        else {
            printf("Bot: What (;•~•)\n");
        }
    }

    return 0;
}
