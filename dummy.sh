#!/bin/bash

# Dummy file management system

echo "Welcome to the Dummy File Management System!"

while :
do
    echo "Please select an option:"
    echo "1. List files in the current directory"
    echo "2. Create a new directory"
    echo "3. Create a new file"
    echo "4. Delete a file"
    echo "5. Delete a directory"
    echo "6. Exit"

    read option

    case $option in
        1)
            echo "Files in the current directory:"
            ls
            ;;
        2)
            echo "Enter the name of the new directory:"
            read new_dir
            mkdir "$new_dir"
            echo "Directory '$new_dir' created."
            ;;
        3)
            echo "Enter the name of the new file:"
            read new_file
            touch "$new_file"
            echo "File '$new_file' created."
            ;;
        4)
            echo "Enter the name of the file to delete:"
            read file_to_delete
            rm -i "$file_to_delete"
            ;;
        5)
            echo "Enter the name of the directory to delete:"
            read dir_to_delete
            rm -ir "$dir_to_delete"
            ;;
        6)
            echo "Exiting..."
            exit 0
            ;;
        *)
            echo "Invalid option. Please select a number from 1 to 6."
            ;;
    esac
done
