# Write your MySQL query statement below
-- SELECT ROW_NUMBER() OVER() id, student
-- FROM seat
-- ORDER BY IF(MOD(id, 2) = 0, id-1, id+1)

select row_number() over() id , student from Seat 
order by if(MOD(id, 2) =0 , id-1, id+1)