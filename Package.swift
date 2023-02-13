// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "unicocheck-ios-spm",
    defaultLocalization: "en",
    products: [
        .library(
            name: "unicocheck-ios-spm",
            targets: [
                "AcessoBio",
                "FaceTecSDK",
                "UnicoSdkLogger",
                "UnicoSdkSecurity"
            ]
        ),
        .library(
            name: "unicosecurity-ios-spm",
            targets: [
                "UnicoSdkSecurity"
            ]
        ),
    ],
    targets: [
        .binaryTarget(name: "AcessoBio", path: "AcessoBio.xcframework"),
        .binaryTarget(name: "FaceTecSDK", path: "FaceTecSDK.xcframework"),
        .binaryTarget(name: "UnicoSdkLogger", path: "UnicoSdkLogger.xcframework"),
        .binaryTarget(name: "UnicoSdkSecurity", path: "UnicoSdkSecurity.xcframework")
    ]
)
