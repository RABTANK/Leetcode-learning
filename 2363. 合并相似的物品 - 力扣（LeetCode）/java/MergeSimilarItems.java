import java.util.List;
import java.util.*;

class MergeSimilarItems{
    public static void main(String[] args){
        
    }
}
class Solution {
    public List<List<Integer>> mergeSimilarItems(int[][] items1, int[][] items2) {
        Map<Integer,Integer> map = new TreeMap<Integer,Integer>();
        for (int[] is : items1) {
            map.merge(is[0], is[1], Integer::sum);
        }
        for (int[] is : items2) {
            map.merge(is[0], is[1], Integer::sum);
        }
        List<List<Integer>> result = new ArrayList<>();
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            List<Integer> item = new ArrayList<>();
            item.add(entry.getKey());
            item.add(entry.getValue());
            result.add(item);
        }
        return result;
    }
}