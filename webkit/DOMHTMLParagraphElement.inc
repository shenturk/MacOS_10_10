{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLParagraphElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLParagraphElementPtr = ^DOMHTMLParagraphElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLParagraphElement = objcclass external (DOMHTMLElement)
  public
    procedure setAlign(newValue: NSString); message 'setAlign:';
    function align: NSString; message 'align';
  end;
{$endif}
