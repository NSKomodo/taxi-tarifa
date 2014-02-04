//
//  FromViewController.h
//  Taxi Tarifa
//
//  Created by Jorge Tapia on 1/30/14.
//  Copyright (c) 2014 Mindshake Interactive. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GoogleMaps/GoogleMaps.h>

@interface FromViewController : UIViewController <GMSMapViewDelegate>

@property (strong, nonatomic) IBOutlet UIView *overlayView;


@property (strong, nonatomic) IBOutlet GMSMapView *mapView;

@property (strong, nonatomic) IBOutlet UILabel *fromAddressLabel;
@property (strong, nonatomic) IBOutlet UIButton *removePinButton;

@property (strong, nonatomic) GMSMarker *pinFrom;
@property (strong, nonatomic) GMSMutablePath *path;

@property BOOL firstTimeLaunch;

- (IBAction)helpAction:(id)sender;
- (IBAction)removePinAction:(id)sender;
- (IBAction)dismissOverlayAction:(id)sender;

@end
