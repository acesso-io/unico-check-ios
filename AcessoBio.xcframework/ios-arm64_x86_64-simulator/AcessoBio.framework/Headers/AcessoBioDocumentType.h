//
//  DocumentType.h
//  AcessoBio
//
//  Created by Matheus Domingos on 04/08/21.
//  Copyright © 2021 Matheus Domingos Acesso. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, DocumentEnums) {
    DocumentNone,
    DocumentCNH,
    DocumentCNHFrente,
    DocumentCNHVerso,
    DocumentRG,
    DocumentRGFrente,
    DocumentRGVerso,
    DocumentCPF
} __attribute__((deprecated("Document capture was discontinued. Fails immediately with error 73905 (ERROR_DOCUMENT_CAMERA) and will be removed in a future version.")));

__attribute__((deprecated("Document capture was discontinued. Fails immediately with error 73905 (ERROR_DOCUMENT_CAMERA) and will be removed in a future version.")))
@interface AcessoBioDocumentType : NSObject

@property (assign, nonatomic) DocumentEnums *documentType;

@end

NS_ASSUME_NONNULL_END
