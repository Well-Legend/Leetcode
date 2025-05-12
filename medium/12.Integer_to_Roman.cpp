class Solution {
    public:
        string intToRoman(int num) {
            char tmp[100];
            string ans;
            int round=0, cnt=0;
            while(num!=0){
                int word=num%10;
                switch(round){
                    case 0:
                        while(word!=0){
                            if(word==9){
                                tmp[cnt]='X';
                                tmp[cnt+1]='I';
                                cnt+=2;
                                word-=9;
                            }
                            else if(word==4){
                                tmp[cnt]='V';
                                tmp[cnt+1]='I';
                                cnt+=2;
                                word-=4;
                            }
                            else if(word==5){
                                tmp[cnt++]='V';
                                word-=5;
                            }
                            else{
                                tmp[cnt++]='I';
                                word--;
                            }
                        }
                        break;
    
                    case 1:
                        while(word!=0){
                            if(word==9){
                                tmp[cnt]='C';
                                tmp[cnt+1]='X';
                                cnt+=2;
                                word-=9;
                            }
                            else if(word==4){
                                tmp[cnt]='L';
                                tmp[cnt+1]='X';
                                cnt+=2;
                                word-=4;
                            }
                            else if(word==5){
                                tmp[cnt++]='L';
                                word-=5;
                            }
                            else{
                                tmp[cnt++]='X';
                                word--;
                            }
                        }
                        break;
    
                    case 2:
                        while(word!=0){
                            if(word==9){
                                tmp[cnt]='M';
                                tmp[cnt+1]='C';
                                cnt+=2;
                                word-=9;
                            }
                            else if(word==4){
                                tmp[cnt]='D';
                                tmp[cnt+1]='C';
                                cnt+=2;
                                word-=4;
                            }
                            else if(word==5){
                                tmp[cnt++]='D';
                                word-=5;
                            }
                            else{
                                tmp[cnt++]='C';
                                word--;
                            }
                        }
                        break;
    
                    case 3:
                        while(word!=0){
                            tmp[cnt++]='M';
                            word--;
                        }
                        break;
                }
                num/=10;
                round++;
            }
    
            for(int i=cnt-1; i>=0; i--){
                ans+=tmp[i];
            }
            return ans;
        }
    };