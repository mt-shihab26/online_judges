-- Write your PostgreSQL query statement below
SELECT DISTINCT author_id as id
FROM Views
WHERE author_id = viewer_id
ORDER BY id ASC;
-- Saturday, June 15, 2024 | 01:03:57 PM (+6)
