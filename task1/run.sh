#!/bin/bash
 
while [ -n "$1" ]
do
case "$1" in 
--input_folder) input_folder="$2";;
--extension) extension="$2";;
--backup_folder) backup_folder="$2";; 
--backup_archive_name) backup_archive_name="$2";;
*) echo invalid option: $1
 exit 1;;
esac
shift 2
done
if [ -z ${input_folder} ] || [ -z ${extension} ] || [ -z ${backup_folder} ] || [ -z ${backup_archive_name} ]
then
    echo Not enough options
    exit 1
fi 
if [ ! -e "$backup_folder" ]
then
mkdir "$backup_folder"
fi
find "$input_folder" -type f -name "*.$extension" -exec cp -v "$backup_folder" \;
tar -czf "$backup_archive_name" "$backup_folder"
echo "done"
