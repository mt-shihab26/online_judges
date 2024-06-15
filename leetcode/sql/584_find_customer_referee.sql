-- Write your PostgreSQL query statement below
SELECT name
FROM Customer
WHERE referee_id IS NULL OR referee_id != 2;
-- Saturday, June 15, 2024 | 12:43:10 PM (+6)
