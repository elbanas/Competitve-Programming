bool isAnagram(char* s, char* t) {
    int a[256],b[256];
    for(int i = 0;i<256;i++){
        a[i]=0;
        b[i]=0;
    }
    while(*s!=0x0){
        a[*s]++;
        s++;
    }
    
    while(*t!=0x0){
        b[*t]++;
        t++;
    }
    for(int i = 0;i<256;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
