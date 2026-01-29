class Solution {
    public int[] solution(long n) {
        String m = ""+ n;
            int[] answer = new int[m.length()];

            for (int i = 0; i < answer.length; i++) {
                answer[i] = (int) (n % 10);
                n /=10;
            }
            
            return answer;
    }
}