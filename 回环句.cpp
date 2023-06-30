class Solution {
public:
    bool isCircularSentence(string sentence) {
         int length=sentence.size();
    if(sentence[length-1]!=sentence[0])
    {
        return false;
    }
    for(int i=0;i<length;i++)
    {
        if(sentence[i]!=' '&&i!=length-1)
        {
            if(sentence[i+1]==' ')
            {
                if(sentence[i]!=sentence[i+2])
                {
                    return false;
                }
            }
        }
        
    }
    return true;
    }
};
