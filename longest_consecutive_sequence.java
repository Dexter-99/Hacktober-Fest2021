class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> hash = new HashSet<Integer>();
        for(int i: nums)
            hash.add(i);
        int max=0;
        for(int i: nums) {
            if(!hash.contains(i-1)) {
                int curr = i;
                int curr_max=1;
                while(hash.contains(curr+1)) {
                    curr++;
                    curr_max++;
                }
                max=Math.max(max,curr_max);
            }
        }
        return max;
    }
}