
Pod::Spec.new do |spec|
 
  spec.name         = "unicocheck-ios"
  spec.version      = "3.0.2"
  spec.summary      = "Esta biblioteca visa implementar as soluções unico | check sob a plataforma iOS."
  spec.description  = "O objetivo da SDK unico-check-ios é proporcionar a melhor experiência de captura de imagens. Auxiliando também na implementação do desenvolvedor/cliente unico."
  spec.homepage     = "https://devcenter.unico.io/idcloud/integracao/sdk"
  spec.license      = "MIT"
  spec.authors      = {
    "Check SDK iOS" => "sdk-ios@unico.io"
  }
  spec.platform     = :ios, "13.0"
  spec.source       = { :git => "https://github.com/acesso-io/unico-check-ios", :tag => "#{spec.version}" }
  spec.source_files = "unicocheck-ios/**/*.{h,m,swift}", "unicocheck-ios/**/*.{mlmodel}", "unicocheck-ios/*.lproj","unicocheck-ios/**/*.lproj"

  spec.social_media_url         = "https://ajuda.unico.io/hc/pt-br"
  spec.ios.vendored_frameworks  = [
    "*.xcframework",
  ]

  # iOS 17 split CoreNFC and added a sub-framework that only exists on iOS 17+.
  # Weak-linking keeps the reference as LC_LOAD_WEAK_DYLIB in the consumer binary,
  # avoiding a "Library not loaded" launch crash on iOS < 17.
  spec.weak_frameworks = ['CoreNFC', 'CoreBluetooth']

  # weak_frameworks above only covers the CoreNFC umbrella; this flag ensures the
  # split sub-framework is weak-linked explicitly in the consumer's final link.
  spec.user_target_xcconfig = { 'OTHER_LDFLAGS' => '$(inherited) -weak_framework _CoreNFC_UIKit' }

  spec.resource_bundles = {"unicocheck-ios" => ["AcessoBio.xcframework/ios-arm64/AcessoBio.framework/PrivacyInfo.xcprivacy"]}

end
