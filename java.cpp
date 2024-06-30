// import java.util.*;

// public class Main{
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
        
//         int num = sc.nextInt();
//         int count =0;
        
//         while(num>0){
//             int digit = num%10;
            
//             if(digit%2 == 0)count++;
            
//             num = num/10;
//         }
        
//         if(count>3)System.out.println(count);
//         else System.out.println("not valid");
//     }
// }






// import java.util.*;

// public class Main{
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
//         String name = sc.nextLine();
        
//         int v = 0;
//         int c = 0;
      
//         for(int i=0;i<name.length();i++){
//             char ch = name.charAt(i);
//             if(ch == 'a' || ch=='e'||ch=='i'||ch=='o'||ch=='u')v++;
//             else if(ch== ' ')continue;
//             else c++;
//         }
        
//         System.out.println("Total vowels :" +v);
//         System.out.println("Total consonats :" +c);
        
//     }
// }





// import java.util.*;

// public class Main{
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
//         int number = sc.nextInt();
        
//         int result =0;
        
//         while(number>0){
//             int rem = number%10;
            
//             result = result*10+rem;
            
//             number = number/10;
//         }
        
//         System.out.print(result);
//     }
// }





// import java.util.*;

// public class Main{
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
//         String name = sc.nextLine();
        
//         int chara =0;
//         int space =0;
        
//         for(int i=0;i<name.length();i++){
//             char ch = name.charAt(i);
            
//             if(ch == ' ')space++;
//             else chara++;
//         }
//         System.out.println(chara);
//         System.out.println(space);
        
//     }
// }





// import java.util.*;

// public class Main{
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
        
//         String name = sc.next();
        
//         String result ="";
        
//         for(int i=name.length()-1;i>=0;i--){
//             result+= name.charAt(i);
//         }
//     System.out.print(result);
//     }
// }





// import java.util.*;

// public class Main{
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
        
//         String ans = sc.nextLine();
        
//         String arr[]= {"a","e","i","o","u"};
        
//         for(int i=0;i<arr.length;i++){
//             if(ans.contains(arr[i])){
//                 System.out.println(arr[i]);
//                 break;
//             }
//         }
//     }
// }




// import java.util.*;

// public class Main{
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
        
//         int n = sc.nextInt();
//         int arr[] = new int[n];
        
//         for(int i=0;i<n;i++){
//            arr[i]= sc.nextInt();
//         }
        
//         int oddno=0;
        
        
//         for(int i=0;i<n;i++){
           
//            if(arr[i]%2!=0)oddno+=arr[i];
           
//         }
        
//         if(oddno>8)System.out.println(oddno);
//         else System.out.println("NA");
        
//     }
// }





// import java.util.*;

// public class Main{
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
        
//         String name = sc.nextLine();
//         name = name.toLowerCase();
        
//         ArrayList<Character>li= new ArrayList<>();
        
        
//         for(int i=0;i<name.length();i++){
//             if(!li.contains(name.charAt(i))){
//                 li.add(name.charAt(i));
//             }
//         }
        
       
//         System.out.println(li.toString());
    
//     }
// }





// import java.util.*;

// public class Main{
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
        
//         String name = sc.nextLine();
        
//         int lower =0;
        
//         for(int i=0;i<name.length();i++){
//             char ch = name.charAt(i);
            
//             // if(Character.isLowerCase(ch))lower++;
            
//             if(ch >= 'A' && ch <= 'Z')lower++;
//         }
//         System.out.println(lower);
//     }   
// }





// import java.util.*;

// public class Main{
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
        
//         String name = sc.nextLine();
        
//         int upper=0;
        
//         for(int i=0;i<name.length();i++){
//             if(name.charAt(i) >= 'A' && name.charAt(i)<='Z')upper++;
//         }
//         System.out.println(upper);
        
//     }
// }