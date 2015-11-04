//
//  ##Presenter.h
//  IgorBiziMineev
//
//  Created by IgorBizi@mail.ru on 10/12/15.
//  Copyright © 2015 IgorBiziMineev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "##ModuleInterface.h"
#import "##ViewInterface.h"
#import "##InteractorIO.h"
@class ##Wireframe;
#import "##External.h"


@interface ##Presenter : NSObject <##ModuleInterface, ##InteractorOutput, ##ExternalData>
@property (nonatomic, strong) ##Wireframe *wireframe;
@property (nonatomic, weak) UIViewController <##ViewInterface> *userInterface;
@property (nonatomic, strong) id <##InteractorInput> interactor;


@end
