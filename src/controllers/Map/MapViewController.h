//
//  NewMapViewController.h
//  CycleStreets
//
//  Created by Neil Edwards on 26/09/2012.
//  Copyright (c) 2012 CycleStreets Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SuperViewController.h"

enum  {
	MapPlanningStateNoRoute, // no route loaded, no waypoints added
	MapPlanningStateLocating, // gps is on
	MapPlanningStateStartPlanning, // a waypoint has been added
	MapPlanningStatePlanning, // waypoints>1 have been added but no route requested
	MapPlanningStateRoute, // a route is loaded
};
typedef int MapPlanningState;

enum  {
	MapAlertTypeClearRoute,
	MapAlertTypeProximity
};
typedef int MapAlertType;


@interface MapViewController : SuperViewController{
	
	
}


@end
