#!/bin/bash

# get podspec version
CONTENT=`cat unicocheck-ios.podspec`  
[[ "$CONTENT" =~ spec\.version\ *=\ *\"([^\"]*)\" ]]
# to print version
#echo ${BASH_REMATCH[1]} 

#create and push GIT tag 
git tag ${BASH_REMATCH[1]} 
git push origin ${BASH_REMATCH[1]} 
gh release create ${BASH_REMATCH[1]}  --generate-notes

