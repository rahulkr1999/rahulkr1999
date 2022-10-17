public int reverse(int x) {
        int ans =0;
        boolean isneg = false;
			if(x<0) {                          //For negative Values
            isneg = true;
            x *= -1;
        }
        int prev = 0; .                   // Maintaining Prev ans for comparing with currentans 
        while(x>0){
            ans *= 10;
            
            if(prev!=(ans/10)) return 0;    // checking if ans * with 10 changes or not
										// if it is changes means value is larger  return 0 
            ans += x%10;
            x /= 10;
            prev = ans; 
        }
        
        if(isneg)  ans *= -1;  // for negative case
        return ans;
        
    }
