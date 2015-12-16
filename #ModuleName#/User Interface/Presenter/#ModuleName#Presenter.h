//
//  #ModuleName#Presenter.h
//  IgorBiziMineev
//
//  Created by IgorBizi@mail.ru on 10/12/15.
//  Copyright © 2015 IgorBiziMineev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "#ModuleName#Protocols.h"
@class #ModuleName#Wireframe;


@interface #ModuleName#Presenter : NSObject <#ModuleName#ModuleInterface, #ModuleName#InteractorOutput>
@property (nonatomic, strong) #ModuleName#Wireframe *wireframe;
@property (nonatomic, weak) UIViewController <#ModuleName#ViewInterface> *userInterface;
@property (nonatomic, strong) id <#ModuleName#InteractorInput> interactor;


@end
