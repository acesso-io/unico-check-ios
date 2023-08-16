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
                "UnicoSdkBase",
                "UnicoSdkLiveness",
                "UnicoSdkLogger",
                "UnicoSdkSecurity"
            ]
        ),
        .library(
            name: "unicosecurity-ios-spm",
            targets: [
                "UnicoSdkBase",
                "UnicoSdkSecurity"
            ]
        ),
    ],
    targets: [
        .binaryTarget(name: "AcessoBio", path: "AcessoBio.xcframework"),
        .binaryTarget(name: "FaceTecSDK", path: "FaceTecSDK.xcframework"),
        .binaryTarget(name: "UnicoSdkBase", path: "UnicoSdkBase.xcframework"),
        .binaryTarget(name: "UnicoSdkLiveness", path: "UnicoSdkLiveness.xcframework"),
        .binaryTarget(name: "UnicoSdkLogger", path: "UnicoSdkLogger.xcframework"),
        .binaryTarget(name: "UnicoSdkSecurity", path: "UnicoSdkSecurity.xcframework")
    ]
)
