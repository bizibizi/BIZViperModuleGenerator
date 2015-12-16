//
//  #ModuleName#Wireframe.h
//  IgorBiziMineev
//
//  Created by IgorBizi@mail.ru on 10/12/15.
//  Copyright © 2015 IgorBiziMineev. All rights reserved.
//

#import "RootWireframe.h"
#import "#ModuleName#Protocols.h"


@interface #ModuleName#Wireframe : RootWireframe 
- (void)present#ModuleName#PageFromNVC:(UINavigationController *)nvc;
- (void)dismiss;
@end
