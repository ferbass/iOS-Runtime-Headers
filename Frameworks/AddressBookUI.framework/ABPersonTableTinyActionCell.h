/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIView, <ABStyleProvider>, <ABPersonTableTinyActionDelegate>, ABPersonTableActionDataSource;



@interface ABPersonTableTinyActionCell : UITableViewCell 
{
    ABPersonTableActionDataSource *_actionDataSource;
    UIView *_tinyActionContentView;
    <ABStyleProvider> *_styleProvider;
    <ABPersonTableTinyActionDelegate> *_delegate;
}

@property(readonly) NSUInteger actionsCount;
@property <ABPersonTableTinyActionDelegate> *delegate;
@property(retain) <ABStyleProvider> *styleProvider;
@property(retain) ABPersonTableActionDataSource *actionDataSource;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 reuseIdentifier:(id)arg2;
- (void)setBackgroundView:(id)arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_resizeInnerContentView;
- (NSUInteger)actionsCount;
- (id)actionDataSource;
- (id)_tinyActionContentView;
- (void)setActionDataSource:(id)arg1;
- (void)refreshActions;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end