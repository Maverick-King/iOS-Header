//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class CNGeminiBadge, UILabel;

@interface TSCellularPlanLabelTableViewCell : UITableViewCell
{
    CNGeminiBadge *_badge;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain) UILabel *label; // @synthesize label=_label;
@property(retain) CNGeminiBadge *badge; // @synthesize badge=_badge;
- (void)setLabel:(id)arg1 badge:(id)arg2;
- (void)setLabelWithNoBadge:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

