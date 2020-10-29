 Difference(vector<int> v){
        elements = v;
        maximumDifference = INT16_MIN;
    }


    void computeDifference(){
        int size = elements.size();

        for(int i = 0; i < size; i++){
            for(int j = i+1; j < size; j++){
                
                    int diff = abs(elements[i]-elements[j]);
                    
                    if(diff > maximumDifference)
                        maximumDifference = diff;
            }
        }
    }

