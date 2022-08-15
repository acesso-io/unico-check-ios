#
#  Be sure to run `pod spec lint unicocheck-ios.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "unicocheck-ios"

  spec.version      = "2.3.8"

  spec.summary      = "Esta biblioteca visa implementar as soluções unico | check sob a plataforma iOS."

  spec.description = 'O objetivo da SDK unico-check-ios é proporcionar a melhor experiência de captura de imagens. Auxiliando também na implementação do desenvolvedor/cliente unico.'

  spec.homepage     = "https://www3.acesso.io/sdkbio"


  spec.license      = "MIT"

  spec.authors             = { "Matheus D." => "matheusdomingoslondrina@gmail.com", "Beatriz Monteiro" => "beatriz.monteiro@unico.io" }
  spec.social_media_url   = "https://ajuda.unico.io/hc/pt-br"

   spec.platform     = :ios, "11.0"

  spec.source       = { :git => "https://github.com/acesso-io/unico-check-ios", :tag => "#{spec.version}" }
  
  spec.source_files  =  "unicocheck-ios/**/*.{h,m,swift}", "unicocheck-ios/**/*.{mlmodel}", "unicocheck-ios/*.lproj","unicocheck-ios/**/*.lproj"

  spec.resources =  "unicocheck-ios/**/*.strings"

  spec.ios.vendored_frameworks = "AcessoBio.xcframework", "FacetecSDK.xcframework"

end
