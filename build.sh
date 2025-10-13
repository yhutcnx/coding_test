SCRIPT_PATH="$( cd "$( dirname "$0" )" && pwd -P )"
CHAPTER=$1
QUESTION=$2

COMMAND=''
COMMAND+='g++ '
COMMAND+="-std=c++17 "
COMMAND+="$SCRIPT_PATH/question/$CHAPTER/$QUESTION.cpp "
COMMAND+="-I $SCRIPT_PATH/include "
COMMAND+='-o ANSWER '
$COMMAND

if [ $? -eq 0 ]; then
    echo "Build Success!"
else
    echo "Build Failed"
    exit 1
fi

$SCRIPT_PATH/ANSWER