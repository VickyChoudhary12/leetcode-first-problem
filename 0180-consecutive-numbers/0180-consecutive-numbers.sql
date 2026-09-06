# Write your MySQL query statement below
select distinct num as ConsecutiveNums
from (
   select num ,
   lead (num,1) over (order by id) as nextNum,
   lead (num,2) over (order by id) as nextNextNum
   from Logs
) t
where num=nextNum
      and nextNum=nextNextNum;
