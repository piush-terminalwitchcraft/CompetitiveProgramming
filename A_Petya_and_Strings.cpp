#include <bits/stdc++.h>
char s[101], f[101];
main()
{
    std::cin >> s >> f;
    if(stricmp(s,f)<= -1){
        std::cout<<-1;
    }
    else if(stricmp(s,f)>= 1){
        std::cout<<1;
    }
    else{
        std::cout<<0;
    }
}
