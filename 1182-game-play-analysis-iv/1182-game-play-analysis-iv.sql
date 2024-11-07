# Write your MySQL query statement below
SELECT ROUND( COUNT( Distinct player_id) / (SELECT COUNT( DISTINCT player_id) FROM Activity) , 2 ) AS fraction

FROM Activity A

WHERE (player_id , DATE_SUB( event_date , INTERVAL 1 DAY ) ) IN (

    SELECT player_id , MIN(event_date) AS first FROM Activity GROUP BY player_id

)
 