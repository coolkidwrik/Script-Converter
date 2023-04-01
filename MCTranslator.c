#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* translate(char ch) {
    if (ch == 'a') {
        return "ᔑ";
    }if (ch == 'b') {
        return "ʖ";
    }if (ch == 'c') {
        return "ᓵ";
    }if (ch == 'd') {
        return "↸";
    }if (ch == 'e') {
        return "ᒷ";
    }if (ch == 'f') {
        return "⎓";
    }if (ch == 'g') {
        return "⊣";
    }if (ch == 'h') {
        return "⍑";
    }if (ch == 'i') {
        return "╎";
    }if (ch == 'j') {
        return "⋮";
    }if (ch == 'k') {
        return "ꖌ";
    }if (ch == 'l') {
        return "ꖎ";
    }if (ch == 'm') {
        return "ᒲ";
    }if (ch == 'n') {
        return "リ";
    }if (ch == 'o') {
        return "𝙹";
    }if (ch == 'p') {
        return "!¡";
    }if (ch == 'q') {
        return "ᑑ";
    }if (ch == 'r') {
        return "∷";
    }if (ch == 's') {
        return "ᓭ";
    }if (ch == 't') {
        return "ℸ ̣";
    }if (ch == 'u') {
        return "⚍";
    }if (ch == 'v') {
        return "⍊";
    }if (ch == 'w') {
        return "∴";
    }if (ch == 'x') {
        return " ̇/";
    }if (ch == 'y') {
        return "||";
    }if (ch == 'z') {
        return "⨅";
    } else {
        printf("%c", ch);
        return "";
    }
}

void print_word(char* arr) {
    for (int i = 0; arr[i] != '\0'; i++) {
        printf("%s ", translate(tolower((char) arr[i])));
    }
    printf("%s", "  ");
    
}


int main (int argc, char** argv) {
    for (int i = 1; i < argc; i++) {
        print_word(argv[i]);
    }

    return 0;
}




// char* translate(char ch) {
    // switch ((char)c) ​{
    //     case "a":
    //         return "ᔑ";
            //printf("%s", "ᔑ ");
        // case 'b':
        //     return "ʖ";
        //     // printf("%s", "ʖ ");
        // case 'c':
        //     printf("%s", "ᓵ ");
        //     break;
        // case 'd':
        //     printf("%s", "↸ ");
        //     break;
        // case 'e':
        //     printf("%s", "ᒷ ");
        //     break;
        // case 'f':
        //     printf("%s", "⎓ ");
        //     break;
        // case 'g':
        //     printf("%s", "⊣ ");
        //     break;
        // case 'h':
        //     printf("%s", "⍑ ");
        //     break;
        // case 'i':
        //     printf("%s", "╎ ");
        //     break;
        // case 'j':
        //     printf("%s", "⋮ ");
        //     break;
        // case 'k':
        //     printf("%s", "ꖌ ");
        //     break;
        // case 'l':
        //     printf("%s", "ꖎ ");
        //     break;
        // case 'm':
        //     printf("%s", "ᒲ ");
        //     break;
        // case 'n':
        //     printf("%s", "リ ");
        //     break;
        // case 'o':
        //     printf("%s", "𝙹 ");
        //     break;
        // case 'p':
        //     printf("%s", "!¡ ");
        //     break;
        // case 'q':
        //     printf("%s", "ᑑ ");
        //     break;
        // case 'r':
        //     printf("%s", "∷ ");
        //     break;
        // case 's':
        //     printf("%s", "ᓭ ");
        //     break;
        // case 't':
        //     printf("%s", "ℸ ");
        //     break;
        // case 'u':
        //     printf("%s", "⚍ ");
        //     break;
        // case 'v':
        //     printf("%s", "⍊ ");
        //     break;
        // case 'w':
        //     printf("%s", "∴ ");
        //     break;
        // case 'x':
        //     printf("%s", " ̇/ ");
        //     break;
        // case 'y':
        //     printf("%s", "|| ");
        //     break;
        // default:
        //     return "";
        //     // printf("%s", "⨅ ");
//     }
// }