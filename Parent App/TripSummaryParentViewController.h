//
//  TripSummaryParentViewController.h
//  Safetrax
//
//  Created by Kumaran on 17/12/15.
//  Copyright © 2015 Mtap. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MapViewController.h"
#import "TripModel.h"
#import "RestClientTask.h"

@interface NSString (JRStringAdditions)

- (BOOL)containsString:(NSString *)string;
- (BOOL)containsString:(NSString *)string
               options:(NSStringCompareOptions)options;

@end
@class HomeViewController;
@interface TripSummaryParentViewController : UIViewController<UITableViewDataSource,UITableViewDataSource,RestCallBackDelegate,UIAlertViewDelegate,UIActionSheetDelegate>
{
    __weak IBOutlet UIView *contentView;
    NSArray *tripArray;
    NSArray *wayPoints;
    int selectedIndex;
    NSIndexPath *selectedCellIndexPath;
    NSMutableArray *EmployeeTripDetails;
    NSMutableDictionary *NameDictionary;
    NSMutableArray *TableValues;
     NSMutableArray *EmpStatus;
    NSMutableArray *subarray;
    int currentExpandedIndex;
    NSMutableDictionary *DataDictionary;
    MapViewController *mapView;
    TripModel *model;
    NSMutableData *_responseData;
    HomeViewController *home;
}
@property (weak,nonatomic) IBOutlet NSLayoutConstraint *tableHeightConstraint;
@property (weak, nonatomic) IBOutlet UILabel *tripLabel;
@property (weak, nonatomic) IBOutlet UIButton *reachedButton;
@property (weak, nonatomic) IBOutlet UIButton *boardedButton;
@property (weak, nonatomic) IBOutlet UIButton *waitingButton;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollview;
@property (nonatomic, retain) IBOutlet UILabel *phNumber;
@property (nonatomic, retain) IBOutlet UILabel *DriverName;
@property (nonatomic, retain) IBOutlet UITableView *summaryTable;
@property (nonatomic, retain) IBOutlet UILabel *VehicleName;
@property (nonatomic, retain) IBOutlet UILabel *timeTaken;
@property (nonatomic, retain) IBOutlet UILabel *startTime;
@property (nonatomic, retain) IBOutlet UILabel *endTime;
@property (nonatomic, retain) IBOutlet UILabel *startPoint;
@property (nonatomic, retain) IBOutlet UILabel *endPoint;
@property (nonatomic, retain) IBOutlet UIButton *boardedCab;
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil tripArray:(NSArray*)trips selectedIndex:(int)Index withHome:(HomeViewController*)homeobject;
-(IBAction)Back:(id)sender;
-(IBAction)reached:(id)sender;
-(void)mockModel:(NSString *)mockModelData;
-(IBAction)boarded:(id)sender;
@end
