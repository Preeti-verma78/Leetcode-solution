# Write your MySQL query statement below

-- select activity_date AS day, 
--     count (DISTINCT user_id) AS active_user FROM Activity 
-- where activity_date between 2019-06-28 and 2019-07-27 group by activity_date;
SELECT 
    activity_date AS day,
    COUNT(DISTINCT user_id) AS active_users
FROM Activity
WHERE activity_date BETWEEN '2019-06-28' AND '2019-07-27'
GROUP BY activity_date;