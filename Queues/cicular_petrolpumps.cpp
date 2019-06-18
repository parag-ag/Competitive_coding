/*************************************************

Suppose there is a circle. There are N petrol pumps on that circle. You will be given two sets of data.
1. The amount of petrol that every petrol pump has.
2. Distance from that petrol pump to the next petrol pump.

Your task is to complete the function tour() which returns an integer denoting the first point from where a truck will be able to complete the circle (The truck will stop at each petrol pump and it has infinite capacity).

Note :  Assume for 1 litre petrol, the truck can go 1 unit of distance.

*****************************************************/


/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/
int tour(petrolPump p[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=0,pet=0,cur=i;
        for(;j<n;j++)
        {
            if(cur>n-1)
                cur=cur-n;
            pet=pet+p[cur].petrol;
            if(pet<p[cur].distance)
                break;
            else
                pet=pet-p[cur].distance;
            cur++;
        }
        if(j==n)
        {
            return i;
        }
    }
    return -1;
}
