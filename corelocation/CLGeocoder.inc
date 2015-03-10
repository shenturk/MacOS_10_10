{ Parsed from CoreLocation.framework (MacOSX10.10) CLGeocoder.h }
{ Created on Sun Mar 8 1:49:12 2015 }


{$ifdef TYPES}
type
  CLGeocoderPtr = ^CLGeocoder;
{$endif}

{$ifdef TYPES}
type
  CLGeocodeCompletionHandler = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  CLGeocoder = objcclass external (NSObject)
  private
    _internal: CLGeocoderInternal;
  public
    function isGeocoding: boolean; message 'isGeocoding';
    procedure reverseGeocodeLocation_completionHandler (location: CLLocation; completionHandler: CLGeocodeCompletionHandler); message 'reverseGeocodeLocation:completionHandler:';
    procedure geocodeAddressDictionary_completionHandler (addressDictionary: NSDictionary; completionHandler: CLGeocodeCompletionHandler); message 'geocodeAddressDictionary:completionHandler:';
    procedure geocodeAddressString_completionHandler (addressString: NSString; completionHandler: CLGeocodeCompletionHandler); message 'geocodeAddressString:completionHandler:';
    procedure geocodeAddressString_inRegion_completionHandler (addressString: NSString; region: CLRegion; completionHandler: CLGeocodeCompletionHandler); message 'geocodeAddressString:inRegion:completionHandler:';
    procedure cancelGeocode; message 'cancelGeocode';
  end;
{$endif}
