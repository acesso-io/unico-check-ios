
Pod::Spec.new do |spec|
 
  spec.name         = "unicocheck-ios"
  spec.version      = "2.16.1"
  spec.summary      = "Esta biblioteca visa implementar as soluções unico | check sob a plataforma iOS."
  spec.description  = "O objetivo da SDK unico-check-ios é proporcionar a melhor experiência de captura de imagens. Auxiliando também na implementação do desenvolvedor/cliente unico."
  spec.homepage     = "https://developers.unico.io/"
  spec.license      = "MIT"
  spec.authors      = {
    "Check SDK iOS" => "sdk-ios@unico.io"
  }
  spec.platform     = :ios, "11.0"
  spec.source       = { :git => "https://github.com/acesso-io/unico-check-ios", :tag => "#{spec.version}" }
  spec.source_files = "unicocheck-ios/**/*.{h,m,swift}", "unicocheck-ios/**/*.{mlmodel}", "unicocheck-ios/*.lproj","unicocheck-ios/**/*.lproj"

  spec.social_media_url         = "https://ajuda.unico.io/hc/pt-br"
  spec.ios.vendored_frameworks  = [
    "AcessoBio.xcframework",
    "DeviceProfiling.xcframework",
    "FacetecSDK.xcframework",
    "UnicoSdkBase.xcframework",
    "UnicoSdkLiveness.xcframework",
    "UnicoSdkLogger.xcframework",
    "UnicoSdkPlugins.xcframework"
  ]

  spec.resource_bundles = {"unicocheck-ios" => ["AcessoBio.xcframework/ios-arm64/AcessoBio.framework/PrivacyInfo.xcprivacy"]}

end
