//Practice Link -> https://leetcode.com/problems/hamming-distance/
int hammingDistance(int x, int y){
int dist = 0;
    int z = 0;
    for(z = x^y; z > 0; dist++, z &=(z-1));
    return dist;  
}  