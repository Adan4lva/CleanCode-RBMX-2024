#include <stdio.h>
#include <string.h>

int main() {
    const char *strings[] = {
        "Bosch",
        "Bangalore",
        "Mexico",
        "Canada",
        "India"
    };

    for (int i = 0; i < 5; i++) {
        
        //Comparation for words starting with "B"
        if (strncmp(strings[i], "B", 1) == 0) {
            printf("%s\n", strings[i]);
        }
    }

    return 0;
}