{$ifdef NDS_INTERFACE}
const
  FEATURE_MEDIUM_CANREAD  = $00000001;
  FEATURE_MEDIUM_CANWRITE = $00000002;
  FEATURE_SLOT_GBA = $00000010;
  FEATURE_SLOT_NDS = $00000020;

  FIX_ALL  = $01;
  FIX_GLUE = $02;
  FIX_GOT  = $04;
  FIX_BSS  = $08;

  DLDI_SIZE_32KB = $0f;
  DLDI_SIZE_16KB = $0e;
  DLDI_SIZE_8KB  = $0d;
  DLDI_SIZE_4KB  = $0c;
  DLDI_SIZE_1KB  = $0a;


{$endif NDS_INTERFACE}
