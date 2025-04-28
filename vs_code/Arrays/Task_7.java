public class Task_7 {
    public static void main(String[] args) {
        int[] arr = {1, 2, 2, 3, 4, 4, 5};
        int newLength = removeDuplicates1(arr);

        for (int i = 0; i < newLength; i++) {
            System.out.print(arr[i] + ", ");
        }
    }

    /*
    public static int[] removeDuplicates(int[] array) {
        int n = array.length;
        int[] temp = new int[n];
        int newSize = 0;

        for (int i = 0; i < n; i++) {
            boolean isDuplicate = false;

            for (int j = 0; j < newSize; j++) {
                if (array[i] == temp[j]) {
                    isDuplicate = true;
                    break;
                }
            }

            if (!isDuplicate){
                temp[newSize++] = array[i];
            }
        }

        int[] result = new int[newSize];
        for (int i = 0; i < newSize; i++) {
            result[i] = temp[i];
        }

        return result;
    }
    */

    public static int removeDuplicates1(int[] array) {
        int n = array.length;
        int index = 0;

        for (int i = 0; i < n; i++) {
            boolean isDuplicate = false;

            for (int j = 0; j < index; j++) {
                if (array[i] == array[j]) {
                    isDuplicate = true;
                    break;
                }
            }

            if (!isDuplicate){
                array[index++] = array[i];
            }
        }
        return index;
    }

}
// arr = {1, 2, 2, 3, 4, 4, 5}