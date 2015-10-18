//
//  ##Wireframe.m
//  IgorBiziMineev
//
//  Created by IgorBizi@mail.ru on 10/12/15.
//  Copyright © 2015 IgorBiziMineev. All rights reserved.
//

#import "##Wireframe.h"
#import "##DataManager.h"
#import "##Interactor.h"
#import "##Presenter.h"
#import "##ViewController.h"


static NSString *const k##ViewControllerKey = @"k##ViewControllerKey";


@interface ##Wireframe ()
@property (nonatomic, strong) UINavigationController *navigationController;
@end


@implementation ##Wireframe


- (void)present##PageFromNVC:(UINavigationController *)nvc
{
    self.navigationController = nvc;
    
    ##ViewController *userInterface = [self createViewControllerWithKey:k##ViewControllerKey];
    ##Interactor *interactor = [[##Interactor alloc] initWithDataManager:[[##DataManager alloc] init]];
    ##Presenter *presenter = [[##Presenter alloc] init];
    
    presenter.wireframe = self;
    presenter.interactor = interactor;
    presenter.userInterface = userInterface;
    
    userInterface.eventHandler = presenter;
    interactor.output  = presenter;
    
    
    
    
}




#pragma mark - ##ExternalIncoming



@end
