# Write your MySQL query statement below
SELECT DISTINCT product_name, year, price FROM Sales LEFT JOIN Product 
ON Sales.product_id = product.product_id ORDER BY product_name;
