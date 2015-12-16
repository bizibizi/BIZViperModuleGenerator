//
//  #ModuleName#Wireframe.m
//  IgorBiziMineev
//
//  Created by IgorBizi@mail.ru on 10/12/15.
//  Copyright © 2015 IgorBiziMineev. All rights reserved.
//

#import "#ModuleName#Wireframe.h"
#import "#ModuleName#DataManagerAPI.h"
#import "#ModuleName#DataManagerLocal.h"
#import "#ModuleName#Interactor.h"
#import "#ModuleName#Presenter.h"
#import "#ModuleName#ViewController.h"


static NSString *const k#ModuleName#ViewControllerKey = @"#ModuleName#ViewContoller";


@interface #ModuleName#Wireframe ()
@property (nonatomic, strong) UINavigationController *navigationController;
@end


@implementation #ModuleName#Wireframe


- (void)present#ModuleName#PageFromNVC:(UINavigationController *)nvc
{
    self.navigationController = nvc;
    
    #ModuleName#ViewController *userInterface = [self createViewControllerFromXib:k#ModuleName#ViewControllerKey];
    #ModuleName#Interactor *interactor = [[#ModuleName#Interactor alloc] init];
    #ModuleName#DataManagerAPI *dataManagerAPI = [[#ModuleName#DataManagerAPI alloc] init];
    #ModuleName#DataManagerLocal *dataManagerLocal = [[#ModuleName#DataManagerLocal alloc] init];
    #ModuleName#Presenter *presenter = [[#ModuleName#Presenter alloc] init];
    
    presenter.wireframe = self;
    presenter.interactor = interactor;
    presenter.userInterface = userInterface;
    
    interactor.dataManagerAPI = dataManagerAPI;
    interactor.dataManagerLocal = dataManagerLocal;
    interactor.output  = presenter;
    
    userInterface.eventHandler = presenter;

    UINavigationController *nUserInterface = [[UINavigationController alloc] initWithRootViewController:userInterface];
    nUserInterface.navigationBarHidden = YES;
    
    [self.navigationController presentViewController: animated:NO completion:nil];
}

- (void)dismiss
{

}



@end
