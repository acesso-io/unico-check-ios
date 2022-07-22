//
//  UnicoCheckThemesDelegate.h
//  AcessoBio
//
//  Created by Matheus Domingos on 26/11/21.
//  Copyright © 2021 Matheus Domingos Acesso. All rights reserved.
//

#ifndef UnicoCheckThemesDelegate_h
#define UnicoCheckThemesDelegate_h

@protocol UnicoCheckThemesDelegate

- (void)didReceveidErrorWithCode: (NSInteger)code message: (NSString*)message desc:(NSString*)desc;

@end
#endif 

