//
//  AppDelegate.h
//  ExampleObjectiveC
//
//  Created by zee-pk on 23/08/2016.
//  Copyright (c) 2016 predict.io by ParkTAG GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "PredictIOService.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (strong, nonatomic) PredictIOService *predictIOService;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end

