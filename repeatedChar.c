//USING ARRAY INDEX TO FIND IF A CHAR IS PRESENT TWICE, WITH THIS METOD IT GUARANTEES TO FIND THE FIRST REPEATED CHAR*

char repeatedCharacter(char * s){
    int arr[256]={0};
    for(int i=0;i<strlen(s);i++){
        arr[s[i]]++;
        if(arr[s[i]]==2){
            return s[i];
        }
    }
    return 0;
}


int main() {
    char message[] = "abccbaacz";
    repeatedCharacter(message);
    printf("%s\n", message);
    return 0;
}
