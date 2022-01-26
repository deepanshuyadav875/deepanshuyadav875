int Solution::majorityElement(const vector<int> &A) {
    int n = A.size();
    int majCount = n/2;
    bool breakVar = false;
    int returnV;
    
    for (int i = 0; i<n; i++){
        int numCount = 0;
        for (int j=0; j<n; j++){
            if(A[i] == A[j]){
                numCount++;
                if(numCount > majCount){
                    breakVar = true;
                    break;
                }
            }
        }
        if(breakVar){
            returnV = A[i];
            break;
        }
    }

    return returnV;
}

