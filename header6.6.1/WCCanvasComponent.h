//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSIndexPath, WCCanvasComponentItem, WCDataItem;
@protocol WCCanvasComponentDelegate;

@interface WCCanvasComponent : MMUIView
{
    int _type;
    WCCanvasComponentItem *_componentItem;
    WCDataItem *_dataItem;
    NSIndexPath *_indexPath;
    long long _orientation;
    double _appearFactor;
    id <WCCanvasComponentDelegate> _delegate;
}

+ (double)calcHeightForCanvasItem:(id)arg1 withMaxWidth:(double)arg2 dataItem:(id)arg3 orientation:(long long)arg4;
+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
+ (id)componentWithType:(int)arg1;
@property(nonatomic) __weak id <WCCanvasComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double appearFactor; // @synthesize appearFactor=_appearFactor;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCCanvasComponentItem *componentItem; // @synthesize componentItem=_componentItem;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentHasApperedInMainScreenWithFactor:(double)arg1;
- (void)componentDidFullyApperaInMainScreen:(_Bool)arg1;
- (void)componentWillApperaInMainScreen:(_Bool)arg1;
- (void)willRotateToOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldForbidDelegateShowArrowDown;
- (struct CGSize)calcCurrentSize;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

