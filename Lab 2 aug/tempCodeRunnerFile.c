//Delete item from queue
int deleteQueue(Queue *q, int * item)
{
    if( isEmpty(q) )
    {
        printf("\nQueue Underflow");
        return -1;
    }
    *item = q->ele[(q->front)++];
    return 0;
}
 
int main()
{
    int item = 0;   
    Queue q;
 
    init(&q);
 
    insertQueue(&q,10);
    insertQueue(&q,20);
    insertQueue(&q,30);
    insertQueue(&q,40);
    insertQueue(&q,50);
    insertQueue(&q,60);
 
    if( deleteQueue( &q, &item ) == 0 )
        pr