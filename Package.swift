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
                "UnicoSdkBase",
                "UnicoSdkLiveness",
                "UnicoSdkLogger",
                "UnicoSdkPlugins",
                "USDK.xcframework",
                "USDKResources.xcframework"
            ]
        ),
    ],
    targets: [
        .target(
            name: "unicocheck-ios-spm",
            path: "AcessoBio.xcframework/ios-arm64/AcessoBio.framework",
            resources: [.copy("PrivacyInfo.xcprivacy")]
        ),
        .binaryTarget(name: "AcessoBio",        path: "AcessoBio.xcframework"),
        .binaryTarget(name: "DeviceProfiling",  path: "DeviceProfiling.xcframework"),
        .binaryTarget(name: "FaceTecSDK",       path: "FaceTecSDK.xcframework"),
        .binaryTarget(name: "UnicoSdkBase",     path: "UnicoSdkBase.xcframework"),
        .binaryTarget(name: "UnicoSdkLiveness", path: "UnicoSdkLiveness.xcframework"),
        .binaryTarget(name: "UnicoSdkLogger",   path: "UnicoSdkLogger.xcframework"),
        .binaryTarget(name: "UnicoSdkPlugins",  path: "UnicoSdkPlugins.xcframework"),
        .binaryTarget(name: "USDK",             path: "USDK.xcframework"),
        .binaryTarget(name: "USDKResources",    path: "USDKResources.xcframework")
    ]
)
