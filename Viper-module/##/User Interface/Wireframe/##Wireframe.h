//
//  ##Wireframe.h
//  IgorBiziMineev
//
//  Created by IgorBizi@mail.ru on 10/12/15.
//  Copyright © 2015 IgorBiziMineev. All rights reserved.
//

#import "RootWireframe.h"
#import "##External.h"


@interface ##Wireframe : RootWireframe <##ExternalInput>
- (void)present##PageFromNVC:(UINavigationController *)nvc;
@end
