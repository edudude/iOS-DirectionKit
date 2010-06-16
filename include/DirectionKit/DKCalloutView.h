//
//  DKMapViewInfoWindow.h
//  DirectionKit
//
//  The MIT License
//
//  Copyright (c) 2010 Jeffrey Sambells, TropicalPixels
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//  
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import <UIKit/UIKit.h>

@class DKMapView;
@class DKWaypointView;

@interface DKCalloutView : UIView {

@private
	DKWaypointView *_marker;
	DKMapView *_map;
	CGFloat _width;
	CGFloat _height;
	CGFloat _padding;
	CGFloat _descenderOffset;
	UILabel *_label;
	
}

@property (nonatomic, retain, readonly) DKWaypointView *marker;

- (id)initWithMarker:(DKWaypointView *)marker;
- (id)initWithMarker:(DKWaypointView *)marker map:(DKMapView *)map;
- (id)initWithContent:(NSString *)content anchor:(CGPoint)position;

- (void)showInfo;
- (void)updatePosition;


- (void)setTitle:(id)title;
- (id)title;
- (void)setAnchorPoint:(struct CGPoint)point boundaryRect:(struct CGRect)boundary animate:(BOOL)animated;
- (void)fadeOutWithDuration:(float)duration;

@end