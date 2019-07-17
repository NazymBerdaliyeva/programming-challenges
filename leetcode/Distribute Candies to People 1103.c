class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> people(num_people);
        for(int i = 0,count = 1;;i++,count++){
            if(candies <= count){
                people[i % num_people] += candies;
                break;
            }else{
                people[i % num_people] += count;
                candies -= count;
            }
        }
        return people;
    }
};