class Solution {
    public:
        int romanToInt(string s) {
            int num=0, index=0;
            char past='O', current;
            while(index<s.size()){
                current=s[index];
                switch(current){
                    case 'I':
                        num++;
                        past='I';
                        break;
    
                    case 'V':
                        if(past=='I'){
                            num+=3;
                        }
                        else{
                            num+=5;
                        }
                        past='V';
                        break;
    
                    case 'X':
                        if(past=='I'){
                            num+=8;
                        }
                        else{
                            num+=10;
                        }
                        past='X';
                        break;
    
                    case 'L':
                        if(past=='X'){
                            num+=30;
                        }
                        else{
                            num+=50;
                        }
                        past='L';
                        break;
    
                    case 'C':
                        if(past=='X'){
                            num+=80;
                        }
                        else{
                            num+=100;
                        }
                        past='C';
                        break;
    
                    case 'D':
                        if(past=='C'){
                            num+=300;
                        }
                        else{
                            num+=500;
                        }
                        past='D';
                        break;
    
                    case 'M':
                        if(past=='C'){
                            num+=800;
                        }
                        else{
                            num+=1000;
                        }
                        past='M';
                        break;
                }
                index++;
            }
            return num;
        }
    };