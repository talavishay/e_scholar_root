#!/bin/bash
output=$(echo 'SELECT table_name AS "Tables",  round(((data_length + index_length) / 1024 / 1024), 2) "Size in MB"  FROM information_schema.TABLES  WHERE table_schema = "scholare.co.il" AND table_name = "cache_form" ORDER BY (data_length + index_length) ASC;' | mysql | tail -n1 | cut -f2);
size=${output/.*}
size=$((size-0))

if (("$size" > 10));
then
echo 'use scholare.co.il;TRUNCATE TABLE cache_form;' |mysql
logger scholare.co.il cache_form truncated;

#else
#echo "smaller then 10 "
fi


