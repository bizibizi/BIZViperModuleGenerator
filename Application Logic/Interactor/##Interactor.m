//
//  ##Interactor.m
//  IgorBiziMineev
//
//  Created by IgorBizi@mail.ru on 10/12/15.
//  Copyright © 2015 IgorBiziMineev. All rights reserved.
//

#import "##Interactor.h"
#import "##DataManager.h"


@interface ##Interactor ()
@property (nonatomic, strong) ##DataManager *dataManager;
@end


@implementation ##Interactor


#pragma mark - LifeCycle


- (instancetype)initWithDataManager:(##DataManager *)dataManager
{
    if (self = [super init]) {
        _dataManager = dataManager;
    }
    return self;
}


#pragma mark - ##InteractorInput



@end
