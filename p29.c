//wap to input numbers of day and print name of day
void main()
{
    int day;
    printf("Enter day number: 1-sunday,2-monday,3-tuesday,4-wednesday,5-thursday,6-friday,7-suturday");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
         printf("sunday");
        break;
    case 2:
         printf("monday");
        break;
    case 3:
         printf("tuesday");
        break;
    case 4:
         printf("wedesday");
        break;    
    case 5:
         printf("thursday");
        break; 
    case 6:
         printf("friday");
        break; 
    case 7:
         printf("suturday");
        break; 
    default:
    printf("please enter within 1 to 7")  ;      
    }
}