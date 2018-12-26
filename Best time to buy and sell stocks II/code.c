int maxProfit(int* prices, int pricesSize) {
    if(pricesSize<=1)
        return 0;
    int z=0,i;
    for(i=1;i<pricesSize;i++){
        if(prices[i]>prices[i-1])
            z+=prices[i]-prices[i-1];
    }
    return z;
}