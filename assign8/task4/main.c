char password[8] = "secret";
int main() {
    char input[8]; 
    int num;
    printf("please enter your password\n");
    scanf("%s", input);
    num = 0;
    
    
    for (num = 0; num < 8; num++) {
        if (input[num]<= 90) {
            input[num] = (num) + 32;
        }
        
    }
    if(strcmp(input, password)==0) {
        return 0;
    } else {
        return -1;
    }

}