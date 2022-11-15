#! /bin/zsh

file_name=$1
file_name=${file_name// /_}
file_name=${file_name//._/.}

if [[ $2 != "" ]]
then
    file_name="$file_name.$2"
else
    file_name="$file_name.cpp"
fi

echo "Creating the $file_name file with leetcode template... Done."

if [[ $2 != "" ]]
then
    cp template.$2 $file_name
else
    cp template.cpp $file_name
fi

current_date=$(date '+%A, %B %d, %Y | %r (%Z)')
echo "// $current_date" >> $file_name
# echo "// Problem Link: $2" >> $1
echo "Done! let's play"
code $file_name