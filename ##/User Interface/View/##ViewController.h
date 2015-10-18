//
//  ##ViewController.h
//  IgorBiziMineev
//
//  Created by IgorBizi@mail.ru on 10/12/15.
//  Copyright © 2015 IgorBiziMineev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "##ViewInterface.h"
#import "##ModuleInterface.h"


@interface ##ViewController : UIViewController <##ViewInterface>
@property (nonatomic, strong) id <##ModuleInterface> eventHandler;
@end
