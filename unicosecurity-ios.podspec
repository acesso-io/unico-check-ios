
Pod::Spec.new do |spec|

  spec.name         = "unicosecurity-ios"
  spec.version      = "2.3.24"
  spec.summary      = "Esta biblioteca visa implementar as soluções de segurança unico | check sob a plataforma iOS."
  spec.homepage     = "https://developers.unico.io/"
  spec.license      = "MIT"
  spec.authors      = {
    "Matheus Domingos" => "matheus.domingos@unico.io",
    "Bruno Corrêa" => "bruno.correa@unico.io"
  }
  spec.platform     = :ios, "11.0"
  spec.source       = { :git => "https://github.com/acesso-io/unico-check-ios", :tag => "#{spec.version}" }

  spec.social_media_url         = "https://ajuda.unico.io/hc/pt-br"
  spec.ios.vendored_frameworks  = [
    "UnicoSdkBase.xcframework",
    "UnicoSdkSecurity.xcframework"
  ]

end
