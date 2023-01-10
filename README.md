# Linked-List

This project worked on dealing with Circular Doubly linked lists, dynamically allocating memeory, and structs

Desciption:
--------------------------------------------------------------------------------------------------------------------------------------------------------
X-Kingdom  has  trapped  n  number  of  soldiers  of  their  opponent.  They  want  to  execute  them. 
They  found  out  a  strategy  so  that  the  prisoners  will  kill  each  other  and  at  the  end  one  prisoner 
will be alive and he will be released. As part of the process, they labeled each trapped soldier a 
sequence number starting from 1 and ending at n. So, all the n number of prisoners standing in a 
circle  waiting  to  be  executed.  However,  one  soldier  was  distracting  the  sequence  and  it  was 
found  out  that  they  were  standing  in  reverse  order  instead  of  proper  order  like  the  following 
picture (let’s say n = 7): After  realizing  the  wrong  order  of  sequence,  they  reversed  the  circle  to  the  correct  order  (note 
that they have not just changed their labels, they have physically changed their order): Now  they  will  start  the  executing  process.  
The  counting  out  begins  
at  some  point  in  the  circle 
and proceeds around the circle in a fixed direction. In each step, a certain number of people are 
skipped  and  the  next  person  is  executed.  The  elimination  proceeds  around  the  circle  (which  is 
becoming  smaller  and  smaller  as  the  executed  people  are  removed),  until  only  the  last  person 
remains, who is given freedom.  
Given the total number of persons n (>=2) and a number k (>0) which indicates that k-1 persons 
are skipped and kth person is killed in circle. The task is to choose the place in the initial circle 
so that you are the last one remaining and so survive. 
