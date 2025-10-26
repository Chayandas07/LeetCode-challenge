class Bank {
public:
    vector<long long int>Bank_balance;
    int n ;
    Bank(vector<long long>& balance) {
        Bank_balance = balance;
        n = balance.size();
    }
    
    bool transfer(int account1, int account2, long long money) {
        if((account1 >=1 && account1 <= n) && (account2 >= 1 && account2 <= n)){
        if(Bank_balance[account1-1] >= money){
            Bank_balance[account1-1] -= money;
            Bank_balance[account2-1] += money;
            return true;
        }
        }
        return false;
    }
    
    bool deposit(int account, long long money) {
         if(account >= 1 && account <= n){
            Bank_balance[account-1] += money;
            return true;
         }
         return false;
    }
    
    bool withdraw(int account, long long money) {
        if(account >= 1 && account <= n){
            if(Bank_balance[account -1] >= money){
                Bank_balance[account-1] -= money;
                return true;
            }
            return false;
        }
        return false;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */
