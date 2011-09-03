//
//  MenuBookAppDelegate.h
//  MenuBook
//
//  Created by Gregory Pfister on 03/09/2011.
//  Copyright 2011 Bostik SA. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MenuBookAppDelegate : NSObject <NSApplicationDelegate> {
	NSWindow *window;
	NSPersistentStoreCoordinator *__persistentStoreCoordinator;
	NSManagedObjectModel *__managedObjectModel;
	NSManagedObjectContext *__managedObjectContext;
}

@property (assign) IBOutlet NSWindow *window;

@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
