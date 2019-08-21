Used to combine stats JSON files to determine effectiveness of diversifications/protections.

To collect all stats files you can use this BASH command:

find "../../build" -name "*.stats" | sed ':a;N;$!ba;s/\n/ /g' | xargs ./combine_json
