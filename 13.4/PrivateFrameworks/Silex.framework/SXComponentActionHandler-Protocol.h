//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class UIView;
@protocol SXAction;

@protocol SXComponentActionHandler <NSObject>
- (void)handleAction:(id <SXAction>)arg1 sourceView:(UIView *)arg2 sourceRect:(struct CGRect)arg3 invocationType:(unsigned long long)arg4;
@end

