# unicocheck-ios

SDK de captura da unico | check para iOS. Documentação de integração: https://devcenter.unico.io/idcloud/integracao/sdk

## Instalação

Pelo Swift Package Manager, pacote `https://github.com/acesso-io/unico-check-ios`, com um destes produtos:

- `unicocheck-ios-spm`: SDK completo.
- `unicocheck-ios-spm-lite` (a partir da 3.6.0): edição lite, sem captura nativa, que abre a jornada só com o
  `webAppToken` do processo, por `prepareAndOpenSelfieCamera(_:webAppToken:)`.

Os dois produtos entregam o mesmo módulo, `AcessoBio`: use um ou outro no target, nunca os dois.

## CocoaPods

Versões novas não são mais publicadas no CocoaPods: o trunk do CocoaPods fica somente leitura em 2 de dezembro
de 2026. As versões já publicadas continuam instalando com `pod 'unicocheck-ios'`, mas para receber versões novas
migre para o Swift Package Manager.
