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
                "DeviceProfiling",
                "FaceTecSDK",
                "ShieldPtr",
                "UnicoSdkBase",
                "UnicoSdkLiveness",
                "UnicoSdkLogger",
                "UnicoSdkPlugins",
                "USDK",
                "USDKResources"
            ]
        ),
    ],
    targets: [
        .binaryTarget(name: "AcessoBio",        path: "AcessoBio.xcframework"),
        .binaryTarget(name: "DeviceProfiling",  path: "DeviceProfiling.xcframework"),
        .binaryTarget(name: "FaceTecSDK",       path: "FaceTecSDK.xcframework"),
        .binaryTarget(name: "ShieldPtr",        path: "ShieldPtr.xcframework"),
        .binaryTarget(name: "UnicoSdkBase",     path: "UnicoSdkBase.xcframework"),
        .binaryTarget(name: "UnicoSdkLiveness", path: "UnicoSdkLiveness.xcframework"),
        .binaryTarget(name: "UnicoSdkLogger",   path: "UnicoSdkLogger.xcframework"),
        .binaryTarget(name: "UnicoSdkPlugins",  path: "UnicoSdkPlugins.xcframework"),
        .binaryTarget(name: "USDK",             path: "USDK.xcframework"),
        .binaryTarget(name: "USDKResources",    path: "USDKResources.xcframework")
    ]
)
