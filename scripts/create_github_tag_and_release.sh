#!/bin/bash

# get SDK Version from swift file
SDK_VERSION=$(grep -o '".*"' unicocheck-ios.podspec | sed 's/"//g')
# create and push GIT tag 
git tag $SDK_VERSION
git push origin $SDK_VERSION
gh release create $SDK_VERSION --generate-notes

