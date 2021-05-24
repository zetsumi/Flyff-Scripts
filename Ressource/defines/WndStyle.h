#ifndef __WNDSTYLE_H
#define __WNDSTYLE_H

#define WTYPE_BASE      0  
#define WTYPE_BUTTON    1
#define WTYPE_LISTBOX   2
#define WTYPE_LISTCTRL  3
#define WTYPE_STATIC    4
#define WTYPE_COMBOBOX  5
#define WTYPE_SCROLLBAR 6
#define WTYPE_EDITCTRL  7
#define WTYPE_TREECTRL  8
#define WTYPE_TABCTRL   9
#define WTYPE_CUSTOM    10
#define WTYPE_MENU      11
#define WTYPE_TEXT      12



#define WBS_MOVE            0x00010000L 
#define WBS_CHILD           0x00020000L 
#define WBS_NODRAWFRAME     0x00040000L 
#define WBS_MODAL           0x00080000L 
#define WBS_MANAGER         0x00100000L 
#define WBS_NOFRAME         0x00200000L 
#define WBS_SOUND           0x00400000L 

#define WBS_CHILDFRAME      0x00800000L 
#define WBS_KEY             0x01000000L 
#define WBS_CAPTION         0x02000000L 
#define WBS_DOCKING         0x04000000L 
#define WBS_POPUP           0x08000000L 
#define WBS_TOPMOST         0x10000000L 
#define WBS_VSCROLL         0x20000000L 
#define WBS_HSCROLL         0x40000000L 

#define WBS_NOFOCUS         0x80000000L 






#define WSS_GROUPBOX     0x00000001L
#define WSS_PICTURE      0x00000002L
#define WSS_MONEY        0x00000004L
#define WBS_MONEY        0x00000004L
#define WSS_ALIGNRIGHT   0x00000008L
#define	WSS_ALIGNHRIGHT  0x00000008L
#define	WSS_ALIGNHCENTER 0x00000010L
#define	WSS_ALIGNVBOTTOM 0x00000020L
#define	WSS_ALIGNVCENTER 0x00000040L


#define WBS_TEXT            0x00000001L
#define WBS_SPRITE          0x00000002L 
#define WBS_RADIO           0x00000004L
#define WBS_CHECK           0x00000008L
#define WBS_HIGHLIGHT       0x00000010L
#define WBS_HIGHLIGHTPUSH   0x00000020L
#define WBS_OVERRIDE_FIRST  0x00000040L
#define WBS_NOCENTER        0x00000080L
#define WBS_MENUITEM        0x00000100L
#define WBS_PUSHLIKE        0x00000200L
#define WBS_NOMENUICON      0x00000400L


#define WBS_HORI            0x00000001L
#define WBS_VERT            0x00000002L

#define WLBS_NOTIFY            0x0001L
#define WLBS_SORT              0x0002L
#define WLBS_NOREDRAW          0x0004L
#define WLBS_MULTIPLESEL       0x0008L
#define WLBS_OWNERDRAWFIXED    0x0010L
#define WLBS_OWNERDRAWVARIABLE 0x0020L
#define WLBS_HASSTRINGS        0x0040L
#define WLBS_USETABSTOPS       0x0080L
#define WLBS_NOINTEGRALHEIGHT  0x0100L
#define WLBS_MULTICOLUMN       0x0200L
#define WLBS_WANTKEYBOARDINPUT 0x0400L
#define WLBS_EXTENDEDSEL       0x0800L
#define WLBS_DISABLENOSCROLL   0x1000L
#define WLBS_NODATA            0x2000L
#define WLBS_NOSEL             0x4000L


#define WLVS_ICON                0x0000
#define WLVS_REPORT              0x0001
#define WLVS_SMALLICON           0x0002
#define WLVS_LIST                0x0003
#define WLVS_TYPEMASK            0x0003
#define WLVS_SINGLESEL           0x0004
#define WLVS_SHOWSELALWAYS       0x0008
#define WLVS_SORTASCENDING       0x0010
#define WLVS_SORTDESCENDING      0x0020
#define WLVS_SHAREIMAGELISTS     0x0040
#define WLVS_NOLABELWRAP         0x0080
#define WLVS_AUTOARRANGE         0x0100
#define WLVS_EDITLABELS          0x0200
#define WLVS_NOSCROLL            0x2000
#define WLVS_TYPESTYLEMASK       0xfc00
#define WLVS_ALIGNTOP            0x0000
#define WLVS_ALIGNLEFT           0x0800
#define WLVS_ALIGNMASK           0x0c00
#define WLVS_OWNERDRAWFIXED      0x0400
#define WLVS_NOCOLUMNHEADER      0x4000
#define WLVS_NOSORTHEADER        0x8000




#define WTCIF_TEXT               0x0001
#define WTCIF_IMAGE              0x0002
#define WTCIF_RTLREADING         0x0004
#define WTCIF_PARAM              0x0008
#define WTCIF_STATE              0x0010

#define WTCS_TOP                 0x0001   
#define WTCS_BOTTOM              0x0002

#define WMS_NOICON          0x00000001L
#define WMS_SPRITE          0x00000002L 
#define WMS_RADIO           0x00000004L

#endif