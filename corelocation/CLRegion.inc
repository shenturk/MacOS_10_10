{ Parsed from CoreLocation.framework (MacOSX10.10) CLRegion.h }
{ Created on Sun Mar 8 1:49:12 2015 }


{$ifdef TYPES}
type
  CLRegionPtr = ^CLRegion;
{$endif}

{$ifdef TYPES}
type
  CLRegionState = NSInteger;
  CLRegionStatePtr = ^CLRegionState;

const
  CLRegionStateUnknown = 0;
  CLRegionStateInside = 1;
  CLRegionStateOutside = 2;

type
  CLProximity = NSInteger;
  CLProximityPtr = ^CLProximity;

const
  CLProximityUnknown = 0;
  CLProximityImmediate = 1;
  CLProximityNear = 2;
  CLProximityFar = 3;
{$endif}

{$ifdef CLASSES}

type
  CLRegion = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _internal: CLRegionInternal;
  public
    function initCircularRegionWithCenter_radius_identifier (center: CLLocationCoordinate2D; radius: CLLocationDistance; identifier: NSString): instancetype; message 'initCircularRegionWithCenter:radius:identifier:'; deprecated 'in __MAC_10_7,__MAC_10_10,__IPHONE_4_0,__IPHONE_7_0';
    function center: CLLocationCoordinate2D; message 'center';
    function radius: CLLocationDistance; message 'radius';
    function identifier: NSString; message 'identifier';
    procedure setNotifyOnEntry(newValue: boolean); message 'setNotifyOnEntry:';
    function notifyOnEntry: boolean; message 'notifyOnEntry';
    procedure setNotifyOnExit(newValue: boolean); message 'setNotifyOnExit:';
    function notifyOnExit: boolean; message 'notifyOnExit';
    function containsCoordinate (coordinate: CLLocationCoordinate2D): boolean; message 'containsCoordinate:'; deprecated 'in __MAC_10_7,__MAC_10_10,__IPHONE_4_0,__IPHONE_7_0';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}
