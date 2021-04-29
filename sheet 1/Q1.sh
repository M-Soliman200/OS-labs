#!/bin/bash
clear
cd /home/soli/Desktop
mkdir maindir
cd maindir
mkdir dir1 dir2
cd dir1

cat > file1 << EOF
this is the file1
EOF

cat > file2 << EOF
this is the file2
EOF

cat > file3 << EOF
this is the file3
EOF

cd ..

cp /home/soli/Desktop/maindir/dir1/file1 /home/soli/Desktop/maindir/dir2

cd dir2

touch aaa
touch AA

touch file2
who > file2
ls | wc -l >> file2


ls *a && ls *A

ls | wc -l

echo "done .."

