//
//  AppDelegate.h
//  TrackMix
//
//  Created by Robert Harrison on 12/03/2014.
//  Copyright (c) 2014 Robert Harrison. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class Track;

@interface AppDelegate : NSObject <NSApplicationDelegate>
@property (weak) IBOutlet NSTextField *textField;
@property (weak) IBOutlet NSSlider *slider;
@property (strong) Track *track;

@property (assign) IBOutlet NSWindow *window;
- (IBAction)mute:(id)sender;
- (IBAction)takeFloatValueForVolumeFrom:(id)sender;
- (void)updateUserInterface;

@end
