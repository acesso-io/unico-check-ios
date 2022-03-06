// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "unicocheck-ios-spm",
    products: [
        .library(
            name: "unicocheck-ios-spm",
            targets: ["AcessoBio", "FaceTecSDK", "CryptoSwift"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        //.package(url: "https://github.com/krzyzanowskim/CryptoSwift.git", .upToNextMajor(from: "1.4.3"))
        //.package(url: "https://github.com/airsidemobile/JOSESwift.git", from: "2.3.0")
    ],
    targets: [
        .binaryTarget(name: "AcessoBio", path: "AcessoBio.xcframework"),
        .binaryTarget(name: "FaceTecSDK", path: "FaceTecSDK.xcframework"),
        .binaryTarget(name: "CryptoSwift", path: "CryptoSwift.xcframework")
    ]
)
