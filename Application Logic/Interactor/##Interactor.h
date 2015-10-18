//
//  ##Interactor.h
//  IgorBiziMineev
//
//  Created by IgorBizi@mail.ru on 10/12/15.
//  Copyright © 2015 IgorBiziMineev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "##InteractorIO.h"
@class ##DataManager;


@interface ##Interactor : NSObject <##InteractorInput>
- (instancetype)initWithDataManager:(##DataManager *)dataManager;
@property (nonatomic, weak) id <##InteractorOutput> output;
@end
