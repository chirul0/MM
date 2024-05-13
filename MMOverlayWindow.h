//
//  MMOverlayWindow.h
//  MM
//
//  Created by Ben Haller on Wed Aug 25 2004.
//  Copyright (c) 2004 Stick Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface MMOverlayWindow : NSObject
{
	NSWindow *overlayWindow;
	
	float currentAlpha;
	BOOL activated, isOrderedIn, scheduledTimer;
}

+ (void)activateOverlay;
+ (void)deactivateOverlay;

+ (BOOL)isActivated;

@end
