#include "func.h"

void func(string str1, string str2, string s){

    int match, match2 = 1;    

    for(int i = 0; i < s.size(); i++){

        if(s[i] == str1[0] && s[i+1] == str1[1]){

            for(int j = 0; j < str1.size(); j++){

                if(s[i] == str1[j]){

                    match++;
                }
                i++;
            }

            if(match == str1.size()){

                for(int k = 0; k < s.size(); k++){

                    if(s[k] == str2[0] && s[k+1] == str2[1]){
                        match2 = 0;

                        for(int l = 0; l < str2.size(); l++){

                            if(s[k] == str2[l]){
                                match2++;
                            }
                            k++;     
                        }

                        if(match2 == str2.size()){
                            i -= str1.size(); k-= str2.size();

                            for(int m = 0; m < str1.size(); m++){

                                swap(s[i],s[k]);
                                
                                i++; k++;
                            }
                        }
                    }
                }   
            }
        }
    }

    cout << s;
}