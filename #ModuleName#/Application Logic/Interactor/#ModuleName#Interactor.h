//
//  #ModuleName#Interactor.h
//  IgorBiziMineev
//
//  Created by IgorBizi@mail.ru on 10/12/15.
//  Copyright © 2015 IgorBiziMineev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "#ModuleName#Protocols.h"
@class #ModuleName#DataManagerAPI;
@class #ModuleName#DataManagerLocal;


@interface #ModuleName#Interactor : NSObject <#ModuleName#InteractorInput>
@property (nonatomic, strong) #ModuleName#DataManagerAPI *dataManagerAPI;
@property (nonatomic, strong) #ModuleName#DataManagerLocal *dataManagerLocal;
@property (nonatomic, weak) id <#ModuleName#InteractorOutput> output;
@end
