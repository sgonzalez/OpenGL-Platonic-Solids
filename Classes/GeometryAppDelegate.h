//
//  GeometryAppDelegate.h
//
//  Created by Santiago Gonzalez on 12/9/09.
//

#import <UIKit/UIKit.h>

@class EAGLView;

@interface GeometryAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    EAGLView *glView;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet EAGLView *glView;

@end

