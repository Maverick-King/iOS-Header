//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IntentsUI/NSObject-Protocol.h>

@class INIntent, _INUIExtensionHostContext;

@protocol INUIExtensionHostContextDelegate <NSObject>
- (void)extensionHostContextWillBeginEditing:(_INUIExtensionHostContext *)arg1;
- (void)extensionHostContext:(_INUIExtensionHostContext *)arg1 wantsToHandleIntent:(INIntent *)arg2;
@end

