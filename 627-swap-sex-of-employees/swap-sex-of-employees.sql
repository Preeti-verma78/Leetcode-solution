# Write your MySQL query statement below
update Salary SET sex = (case when sex ='f' then 'm' else 'f' END)