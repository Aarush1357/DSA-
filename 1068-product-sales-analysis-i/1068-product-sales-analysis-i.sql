# Write your MySQL query statement below
SELECT r.product_name,
s.year,
s.price
FROM Sales s
JOIN Product r
ON r.product_id = s.product_id;
