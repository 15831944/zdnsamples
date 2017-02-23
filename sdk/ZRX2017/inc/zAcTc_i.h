
#pragma warning( disable: 4049 )  

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif 

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif 

#ifndef __zAcTc_i_h__
#define __zAcTc_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef __IZcadToolProperties_FWD_DEFINED__
#define __IZcadToolProperties_FWD_DEFINED__
typedef interface IZcadToolProperties IZcadToolProperties;
#endif 	

#ifndef __IZcadToolProperties2_FWD_DEFINED__
#define __IZcadToolProperties2_FWD_DEFINED__
typedef interface IZcadToolProperties2 IZcadToolProperties2;
#endif 	

#ifndef __IZcadStockTool_FWD_DEFINED__
#define __IZcadStockTool_FWD_DEFINED__
typedef interface IZcadStockTool IZcadStockTool;
#endif 	

#ifndef __IZcadToolContextMenu_FWD_DEFINED__
#define __IZcadToolContextMenu_FWD_DEFINED__
typedef interface IZcadToolContextMenu IZcadToolContextMenu;
#endif 	

#ifndef __IZcadTool_FWD_DEFINED__
#define __IZcadTool_FWD_DEFINED__
typedef interface IZcadTool IZcadTool;
#endif 	

#ifndef __IZcadTool2_FWD_DEFINED__
#define __IZcadTool2_FWD_DEFINED__
typedef interface IZcadTool2 IZcadTool2;
#endif 	

#ifndef __IZcadToolFlyoutShape_FWD_DEFINED__
#define __IZcadToolFlyoutShape_FWD_DEFINED__
typedef interface IZcadToolFlyoutShape IZcadToolFlyoutShape;
#endif 	

#ifndef __IZcadToolSort_FWD_DEFINED__
#define __IZcadToolSort_FWD_DEFINED__
typedef interface IZcadToolSort IZcadToolSort;
#endif 	

#ifndef __IZcadToolDropTarget_FWD_DEFINED__
#define __IZcadToolDropTarget_FWD_DEFINED__
typedef interface IZcadToolDropTarget IZcadToolDropTarget;
#endif 	

#ifndef __IZcadToolDragSource_FWD_DEFINED__
#define __IZcadToolDragSource_FWD_DEFINED__
typedef interface IZcadToolDragSource IZcadToolDragSource;
#endif 	

#ifndef __IZcadToolCopyPaste_FWD_DEFINED__
#define __IZcadToolCopyPaste_FWD_DEFINED__
typedef interface IZcadToolCopyPaste IZcadToolCopyPaste;
#endif 	

#ifndef __IZcadToolImage_FWD_DEFINED__
#define __IZcadToolImage_FWD_DEFINED__
typedef interface IZcadToolImage IZcadToolImage;
#endif 	

#ifndef __ZcadToolProperties_FWD_DEFINED__
#define __ZcadToolProperties_FWD_DEFINED__

#ifdef __cplusplus
typedef class ZcadToolProperties ZcadToolProperties;
#else
typedef struct ZcadToolProperties ZcadToolProperties;
#endif 

#endif 	

#ifndef __ZcadToolImage_FWD_DEFINED__
#define __ZcadToolImage_FWD_DEFINED__

#ifdef __cplusplus
typedef class ZcadToolImage ZcadToolImage;
#else
typedef struct ZcadToolImage ZcadToolImage;
#endif 

#endif 	

#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

typedef  
enum __MIDL___MIDL_itf_zAcTc_0000_0000_0001
    {	kEditDefault	= 0,
	kEditCustom	= kEditDefault + 1,
	kEditNone	= kEditCustom + 1,
	kEditMultiple	= 0x4
    } 	ToolEditMode;

typedef  
enum __MIDL___MIDL_itf_zAcTc_0000_0000_0002
    {	kContextNone	= -1,
	kContextMenuPaletteTool	= kContextNone + 1,
	kContextMenuEditorImage	= kContextMenuPaletteTool + 1,
	kContextMenuPaletteBackground	= kContextMenuEditorImage + 1,
	kContextMenuPaletteSetTab	= kContextMenuPaletteBackground + 1,
	kContextMenuPaletteSetCaption	= kContextMenuPaletteSetTab + 1,
	kContextMenuPaletteSetOptionButton	= kContextMenuPaletteSetCaption + 1
    } 	ContextMenuFlag;

typedef  
enum __MIDL___MIDL_itf_zAcTc_0000_0000_0003
    {	kContextMenuShow	= 0,
	kContextMenuHide	= kContextMenuShow + 1,
	kExecutionCanceled	= kContextMenuHide + 1,
	kExecutionCancelRejected	= kExecutionCanceled + 1,
	kContextMenuUpdatePalette	= kExecutionCancelRejected + 1
    } 	ReturnFlag;

typedef  
enum __MIDL___MIDL_itf_zAcTc_0000_0000_0004
    {	kLButtonClicked	= 0,
	kDroppedInDrawing	= kLButtonClicked + 1
    } 	ExecutionContext;



extern RPC_IF_HANDLE __MIDL_itf_zAcTc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_zAcTc_0000_0000_v0_0_s_ifspec;

#ifndef __IZcadToolProperties_INTERFACE_DEFINED__
#define __IZcadToolProperties_INTERFACE_DEFINED__

EXTERN_C const IID IID_IZcadToolProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1E67927D-5D6B-4F7B-9E79-B3FA9DE2B0AE")
    IZcadToolProperties : public IDispatch
    {
    public:
        virtual  HRESULT STDMETHODCALLTYPE get_ID( 
             GUID *pId) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE get_Name( 
             BSTR *pVal) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE put_Name( 
             BSTR newVal) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE get_Description( 
             BSTR *pVal) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE put_Description( 
             BSTR newVal) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE get_ToolTipText( 
             BSTR *pVal) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE put_ToolTipText( 
             BSTR newVal) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE get_HelpFile( 
             BSTR *pVal) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE put_HelpFile( 
             BSTR newVal) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE get_HelpCommand( 
             BSTR *pVal) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE put_HelpCommand( 
             BSTR newVal) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE get_HelpData( 
             BSTR *pVal) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE put_HelpData( 
             BSTR newVal) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE get_IsReadOnly( 
             VARIANT_BOOL *pReadOnly) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE get_ToolType( 
             LONG *pToolType) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE put_ToolType( 
             LONG lToolType) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE get_IsFlyoutEnabled( 
             VARIANT_BOOL *pEnabled) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE put_IsFlyoutEnabled( 
             VARIANT_BOOL bUseFlyout) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE get_ShapePackageId( 
             GUID *pId) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE put_ShapePackageId( 
             GUID *pId) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE get_CurrentShapeId( 
             GUID *pId) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE put_CurrentShapeId( 
             GUID *pId) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE get_ActiveShapeIds( 
             VARIANT *pShapes) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE put_ActiveShapeIds( 
             VARIANT *pShapes) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE GetImage( 
             long cx,
             long cy,
             IUnknown **pVal,
             BSTR *sResourceName,
             BSTR *sSourceFile) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE SetImage( 
             long cx,
             long cy,
             IUnknown *newVal,
             BSTR sResourceName,
             BSTR sSourceFile) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE GetCustomData( 
             IUnknown **ppVal) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE GetCurrentShape( 
             IUnknown **ppTool) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE GetOverlayImage( 
             IUnknown **pVal,
             BSTR *pResourceName,
             BSTR *pSourceFile) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE SetOverlayImage( 
             IUnknown *newVal,
             BSTR sResourceName,
             BSTR sSourceFile) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE GetAcTcTool( 
             DWORD_PTR *ppAcTcTool) = 0;      
    };
    
#else 	

    typedef struct IZcadToolPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZcadToolProperties * This,
             REFIID riid,
             void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZcadToolProperties * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZcadToolProperties * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IZcadToolProperties * This,
             UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IZcadToolProperties * This,
             UINT iTInfo,
             LCID lcid,
             ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IZcadToolProperties * This,
             REFIID riid,
             LPOLESTR *rgszNames,
             UINT cNames,
             LCID lcid,
             DISPID *rgDispId);
        
         HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IZcadToolProperties * This,
             DISPID dispIdMember,
             REFIID riid,
             LCID lcid,
             WORD wFlags,
             DISPPARAMS *pDispParams,
             VARIANT *pVarResult,
             EXCEPINFO *pExcepInfo,
             UINT *puArgErr);
        
         HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IZcadToolProperties * This,
             GUID *pId);
        
         HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IZcadToolProperties * This,
             BSTR *pVal);
        
         HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IZcadToolProperties * This,
             BSTR newVal);
        
         HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IZcadToolProperties * This,
             BSTR *pVal);
        
         HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IZcadToolProperties * This,
             BSTR newVal);
        
         HRESULT ( STDMETHODCALLTYPE *get_ToolTipText )( 
            IZcadToolProperties * This,
             BSTR *pVal);
        
         HRESULT ( STDMETHODCALLTYPE *put_ToolTipText )( 
            IZcadToolProperties * This,
             BSTR newVal);
        
         HRESULT ( STDMETHODCALLTYPE *get_HelpFile )( 
            IZcadToolProperties * This,
             BSTR *pVal);
        
         HRESULT ( STDMETHODCALLTYPE *put_HelpFile )( 
            IZcadToolProperties * This,
             BSTR newVal);
        
         HRESULT ( STDMETHODCALLTYPE *get_HelpCommand )( 
            IZcadToolProperties * This,
             BSTR *pVal);
        
         HRESULT ( STDMETHODCALLTYPE *put_HelpCommand )( 
            IZcadToolProperties * This,
             BSTR newVal);
        
         HRESULT ( STDMETHODCALLTYPE *get_HelpData )( 
            IZcadToolProperties * This,
             BSTR *pVal);
        
         HRESULT ( STDMETHODCALLTYPE *put_HelpData )( 
            IZcadToolProperties * This,
             BSTR newVal);
        
         HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )( 
            IZcadToolProperties * This,
             VARIANT_BOOL *pReadOnly);
        
         HRESULT ( STDMETHODCALLTYPE *get_ToolType )( 
            IZcadToolProperties * This,
             LONG *pToolType);
        
         HRESULT ( STDMETHODCALLTYPE *put_ToolType )( 
            IZcadToolProperties * This,
             LONG lToolType);
        
         HRESULT ( STDMETHODCALLTYPE *get_IsFlyoutEnabled )( 
            IZcadToolProperties * This,
             VARIANT_BOOL *pEnabled);
        
         HRESULT ( STDMETHODCALLTYPE *put_IsFlyoutEnabled )( 
            IZcadToolProperties * This,
             VARIANT_BOOL bUseFlyout);
        
         HRESULT ( STDMETHODCALLTYPE *get_ShapePackageId )( 
            IZcadToolProperties * This,
             GUID *pId);
        
         HRESULT ( STDMETHODCALLTYPE *put_ShapePackageId )( 
            IZcadToolProperties * This,
             GUID *pId);
        
         HRESULT ( STDMETHODCALLTYPE *get_CurrentShapeId )( 
            IZcadToolProperties * This,
             GUID *pId);
        
         HRESULT ( STDMETHODCALLTYPE *put_CurrentShapeId )( 
            IZcadToolProperties * This,
             GUID *pId);
        
         HRESULT ( STDMETHODCALLTYPE *get_ActiveShapeIds )( 
            IZcadToolProperties * This,
             VARIANT *pShapes);
        
         HRESULT ( STDMETHODCALLTYPE *put_ActiveShapeIds )( 
            IZcadToolProperties * This,
             VARIANT *pShapes);
        
         HRESULT ( STDMETHODCALLTYPE *GetImage )( 
            IZcadToolProperties * This,
             long cx,
             long cy,
             IUnknown **pVal,
             BSTR *sResourceName,
             BSTR *sSourceFile);
        
         HRESULT ( STDMETHODCALLTYPE *SetImage )( 
            IZcadToolProperties * This,
             long cx,
             long cy,
             IUnknown *newVal,
             BSTR sResourceName,
             BSTR sSourceFile);
        
         HRESULT ( STDMETHODCALLTYPE *GetCustomData )( 
            IZcadToolProperties * This,
             IUnknown **ppVal);
        
         HRESULT ( STDMETHODCALLTYPE *GetCurrentShape )( 
            IZcadToolProperties * This,
             IUnknown **ppTool);
        
         HRESULT ( STDMETHODCALLTYPE *GetOverlayImage )( 
            IZcadToolProperties * This,
             IUnknown **pVal,
             BSTR *pResourceName,
             BSTR *pSourceFile);
        
         HRESULT ( STDMETHODCALLTYPE *SetOverlayImage )( 
            IZcadToolProperties * This,
             IUnknown *newVal,
             BSTR sResourceName,
             BSTR sSourceFile);
        
         HRESULT ( STDMETHODCALLTYPE *GetAcTcTool )( 
            IZcadToolProperties * This,
             DWORD_PTR *ppAcTcTool);
        
        END_INTERFACE
    } IZcadToolPropertiesVtbl;

    interface IZcadToolProperties
    {
        CONST_VTBL struct IZcadToolPropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZcadToolProperties_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IZcadToolProperties_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IZcadToolProperties_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IZcadToolProperties_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IZcadToolProperties_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IZcadToolProperties_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IZcadToolProperties_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IZcadToolProperties_get_ID(This,pId)	\
    (This)->lpVtbl -> get_ID(This,pId)

#define IZcadToolProperties_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IZcadToolProperties_put_Name(This,newVal)	\
    (This)->lpVtbl -> put_Name(This,newVal)

#define IZcadToolProperties_get_Description(This,pVal)	\
    (This)->lpVtbl -> get_Description(This,pVal)

#define IZcadToolProperties_put_Description(This,newVal)	\
    (This)->lpVtbl -> put_Description(This,newVal)

#define IZcadToolProperties_get_ToolTipText(This,pVal)	\
    (This)->lpVtbl -> get_ToolTipText(This,pVal)

#define IZcadToolProperties_put_ToolTipText(This,newVal)	\
    (This)->lpVtbl -> put_ToolTipText(This,newVal)

#define IZcadToolProperties_get_HelpFile(This,pVal)	\
    (This)->lpVtbl -> get_HelpFile(This,pVal)

#define IZcadToolProperties_put_HelpFile(This,newVal)	\
    (This)->lpVtbl -> put_HelpFile(This,newVal)

#define IZcadToolProperties_get_HelpCommand(This,pVal)	\
    (This)->lpVtbl -> get_HelpCommand(This,pVal)

#define IZcadToolProperties_put_HelpCommand(This,newVal)	\
    (This)->lpVtbl -> put_HelpCommand(This,newVal)

#define IZcadToolProperties_get_HelpData(This,pVal)	\
    (This)->lpVtbl -> get_HelpData(This,pVal)

#define IZcadToolProperties_put_HelpData(This,newVal)	\
    (This)->lpVtbl -> put_HelpData(This,newVal)

#define IZcadToolProperties_get_IsReadOnly(This,pReadOnly)	\
    (This)->lpVtbl -> get_IsReadOnly(This,pReadOnly)

#define IZcadToolProperties_get_ToolType(This,pToolType)	\
    (This)->lpVtbl -> get_ToolType(This,pToolType)

#define IZcadToolProperties_put_ToolType(This,lToolType)	\
    (This)->lpVtbl -> put_ToolType(This,lToolType)

#define IZcadToolProperties_get_IsFlyoutEnabled(This,pEnabled)	\
    (This)->lpVtbl -> get_IsFlyoutEnabled(This,pEnabled)

#define IZcadToolProperties_put_IsFlyoutEnabled(This,bUseFlyout)	\
    (This)->lpVtbl -> put_IsFlyoutEnabled(This,bUseFlyout)

#define IZcadToolProperties_get_ShapePackageId(This,pId)	\
    (This)->lpVtbl -> get_ShapePackageId(This,pId)

#define IZcadToolProperties_put_ShapePackageId(This,pId)	\
    (This)->lpVtbl -> put_ShapePackageId(This,pId)

#define IZcadToolProperties_get_CurrentShapeId(This,pId)	\
    (This)->lpVtbl -> get_CurrentShapeId(This,pId)

#define IZcadToolProperties_put_CurrentShapeId(This,pId)	\
    (This)->lpVtbl -> put_CurrentShapeId(This,pId)

#define IZcadToolProperties_get_ActiveShapeIds(This,pShapes)	\
    (This)->lpVtbl -> get_ActiveShapeIds(This,pShapes)

#define IZcadToolProperties_put_ActiveShapeIds(This,pShapes)	\
    (This)->lpVtbl -> put_ActiveShapeIds(This,pShapes)

#define IZcadToolProperties_GetImage(This,cx,cy,pVal,sResourceName,sSourceFile)	\
    (This)->lpVtbl -> GetImage(This,cx,cy,pVal,sResourceName,sSourceFile)

#define IZcadToolProperties_SetImage(This,cx,cy,newVal,sResourceName,sSourceFile)	\
    (This)->lpVtbl -> SetImage(This,cx,cy,newVal,sResourceName,sSourceFile)

#define IZcadToolProperties_GetCustomData(This,ppVal)	\
    (This)->lpVtbl -> GetCustomData(This,ppVal)

#define IZcadToolProperties_GetCurrentShape(This,ppTool)	\
    (This)->lpVtbl -> GetCurrentShape(This,ppTool)

#define IZcadToolProperties_GetOverlayImage(This,pVal,pResourceName,pSourceFile)	\
    (This)->lpVtbl -> GetOverlayImage(This,pVal,pResourceName,pSourceFile)

#define IZcadToolProperties_SetOverlayImage(This,newVal,sResourceName,sSourceFile)	\
    (This)->lpVtbl -> SetOverlayImage(This,newVal,sResourceName,sSourceFile)

#define IZcadToolProperties_GetAcTcTool(This,ppAcTcTool)	\
    (This)->lpVtbl -> GetAcTcTool(This,ppAcTcTool)

#endif 


#endif 	



 HRESULT STDMETHODCALLTYPE IZcadToolProperties_get_ID_Proxy( 
    IZcadToolProperties * This,
     GUID *pId);


void __RPC_STUB IZcadToolProperties_get_ID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_get_Name_Proxy( 
    IZcadToolProperties * This,
     BSTR *pVal);


void __RPC_STUB IZcadToolProperties_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_put_Name_Proxy( 
    IZcadToolProperties * This,
     BSTR newVal);


void __RPC_STUB IZcadToolProperties_put_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_get_Description_Proxy( 
    IZcadToolProperties * This,
     BSTR *pVal);


void __RPC_STUB IZcadToolProperties_get_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_put_Description_Proxy( 
    IZcadToolProperties * This,
     BSTR newVal);


void __RPC_STUB IZcadToolProperties_put_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_get_ToolTipText_Proxy( 
    IZcadToolProperties * This,
     BSTR *pVal);


void __RPC_STUB IZcadToolProperties_get_ToolTipText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_put_ToolTipText_Proxy( 
    IZcadToolProperties * This,
     BSTR newVal);


void __RPC_STUB IZcadToolProperties_put_ToolTipText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_get_HelpFile_Proxy( 
    IZcadToolProperties * This,
     BSTR *pVal);


void __RPC_STUB IZcadToolProperties_get_HelpFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_put_HelpFile_Proxy( 
    IZcadToolProperties * This,
     BSTR newVal);


void __RPC_STUB IZcadToolProperties_put_HelpFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_get_HelpCommand_Proxy( 
    IZcadToolProperties * This,
     BSTR *pVal);


void __RPC_STUB IZcadToolProperties_get_HelpCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_put_HelpCommand_Proxy( 
    IZcadToolProperties * This,
     BSTR newVal);


void __RPC_STUB IZcadToolProperties_put_HelpCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_get_HelpData_Proxy( 
    IZcadToolProperties * This,
     BSTR *pVal);


void __RPC_STUB IZcadToolProperties_get_HelpData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_put_HelpData_Proxy( 
    IZcadToolProperties * This,
     BSTR newVal);


void __RPC_STUB IZcadToolProperties_put_HelpData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_get_IsReadOnly_Proxy( 
    IZcadToolProperties * This,
     VARIANT_BOOL *pReadOnly);


void __RPC_STUB IZcadToolProperties_get_IsReadOnly_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_get_ToolType_Proxy( 
    IZcadToolProperties * This,
     LONG *pToolType);


void __RPC_STUB IZcadToolProperties_get_ToolType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_put_ToolType_Proxy( 
    IZcadToolProperties * This,
     LONG lToolType);


void __RPC_STUB IZcadToolProperties_put_ToolType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_get_IsFlyoutEnabled_Proxy( 
    IZcadToolProperties * This,
     VARIANT_BOOL *pEnabled);


void __RPC_STUB IZcadToolProperties_get_IsFlyoutEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_put_IsFlyoutEnabled_Proxy( 
    IZcadToolProperties * This,
     VARIANT_BOOL bUseFlyout);


void __RPC_STUB IZcadToolProperties_put_IsFlyoutEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_get_ShapePackageId_Proxy( 
    IZcadToolProperties * This,
     GUID *pId);


void __RPC_STUB IZcadToolProperties_get_ShapePackageId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_put_ShapePackageId_Proxy( 
    IZcadToolProperties * This,
     GUID *pId);


void __RPC_STUB IZcadToolProperties_put_ShapePackageId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_get_CurrentShapeId_Proxy( 
    IZcadToolProperties * This,
     GUID *pId);


void __RPC_STUB IZcadToolProperties_get_CurrentShapeId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_put_CurrentShapeId_Proxy( 
    IZcadToolProperties * This,
     GUID *pId);


void __RPC_STUB IZcadToolProperties_put_CurrentShapeId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_get_ActiveShapeIds_Proxy( 
    IZcadToolProperties * This,
     VARIANT *pShapes);


void __RPC_STUB IZcadToolProperties_get_ActiveShapeIds_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_put_ActiveShapeIds_Proxy( 
    IZcadToolProperties * This,
     VARIANT *pShapes);


void __RPC_STUB IZcadToolProperties_put_ActiveShapeIds_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_GetImage_Proxy( 
    IZcadToolProperties * This,
     long cx,
     long cy,
     IUnknown **pVal,
     BSTR *sResourceName,
     BSTR *sSourceFile);


void __RPC_STUB IZcadToolProperties_GetImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_SetImage_Proxy( 
    IZcadToolProperties * This,
     long cx,
     long cy,
     IUnknown *newVal,
     BSTR sResourceName,
     BSTR sSourceFile);


void __RPC_STUB IZcadToolProperties_SetImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_GetCustomData_Proxy( 
    IZcadToolProperties * This,
     IUnknown **ppVal);


void __RPC_STUB IZcadToolProperties_GetCustomData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_GetCurrentShape_Proxy( 
    IZcadToolProperties * This,
     IUnknown **ppTool);


void __RPC_STUB IZcadToolProperties_GetCurrentShape_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_GetOverlayImage_Proxy( 
    IZcadToolProperties * This,
     IUnknown **pVal,
     BSTR *pResourceName,
     BSTR *pSourceFile);


void __RPC_STUB IZcadToolProperties_GetOverlayImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_SetOverlayImage_Proxy( 
    IZcadToolProperties * This,
     IUnknown *newVal,
     BSTR sResourceName,
     BSTR sSourceFile);


void __RPC_STUB IZcadToolProperties_SetOverlayImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties_GetAcTcTool_Proxy( 
    IZcadToolProperties * This,
     DWORD_PTR *ppAcTcTool);


void __RPC_STUB IZcadToolProperties_GetAcTcTool_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	


#ifndef __IZcadToolProperties2_INTERFACE_DEFINED__
#define __IZcadToolProperties2_INTERFACE_DEFINED__


 


EXTERN_C const IID IID_IZcadToolProperties2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3F4030BC-C890-485E-B2AF-648F399C7206")
    IZcadToolProperties2 : public IDispatch
    {
    public:
        virtual  HRESULT STDMETHODCALLTYPE get_ItemOption( 
             LONG *pItemOption) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE put_ItemOption( 
             LONG lItemOption) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE get_ImageOption( 
             LONG *pImageOption) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE put_ImageOption( 
             LONG lImageOption) = 0;
        
    };
    
#else 	

    typedef struct IZcadToolProperties2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZcadToolProperties2 * This,
             REFIID riid,
             void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZcadToolProperties2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZcadToolProperties2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IZcadToolProperties2 * This,
             UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IZcadToolProperties2 * This,
             UINT iTInfo,
             LCID lcid,
             ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IZcadToolProperties2 * This,
             REFIID riid,
             LPOLESTR *rgszNames,
             UINT cNames,
             LCID lcid,
             DISPID *rgDispId);
        
         HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IZcadToolProperties2 * This,
             DISPID dispIdMember,
             REFIID riid,
             LCID lcid,
             WORD wFlags,
             DISPPARAMS *pDispParams,
             VARIANT *pVarResult,
             EXCEPINFO *pExcepInfo,
             UINT *puArgErr);
        
         HRESULT ( STDMETHODCALLTYPE *get_ItemOption )( 
            IZcadToolProperties2 * This,
             LONG *pItemOption);
        
         HRESULT ( STDMETHODCALLTYPE *put_ItemOption )( 
            IZcadToolProperties2 * This,
             LONG lItemOption);
        
         HRESULT ( STDMETHODCALLTYPE *get_ImageOption )( 
            IZcadToolProperties2 * This,
             LONG *pImageOption);
        
         HRESULT ( STDMETHODCALLTYPE *put_ImageOption )( 
            IZcadToolProperties2 * This,
             LONG lImageOption);
        
        END_INTERFACE
    } IZcadToolProperties2Vtbl;

    interface IZcadToolProperties2
    {
        CONST_VTBL struct IZcadToolProperties2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZcadToolProperties2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IZcadToolProperties2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IZcadToolProperties2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IZcadToolProperties2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IZcadToolProperties2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IZcadToolProperties2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IZcadToolProperties2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IZcadToolProperties2_get_ItemOption(This,pItemOption)	\
    (This)->lpVtbl -> get_ItemOption(This,pItemOption)

#define IZcadToolProperties2_put_ItemOption(This,lItemOption)	\
    (This)->lpVtbl -> put_ItemOption(This,lItemOption)

#define IZcadToolProperties2_get_ImageOption(This,pImageOption)	\
    (This)->lpVtbl -> get_ImageOption(This,pImageOption)

#define IZcadToolProperties2_put_ImageOption(This,lImageOption)	\
    (This)->lpVtbl -> put_ImageOption(This,lImageOption)

#endif 


#endif 	



 HRESULT STDMETHODCALLTYPE IZcadToolProperties2_get_ItemOption_Proxy( 
    IZcadToolProperties2 * This,
     LONG *pItemOption);


void __RPC_STUB IZcadToolProperties2_get_ItemOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties2_put_ItemOption_Proxy( 
    IZcadToolProperties2 * This,
     LONG lItemOption);


void __RPC_STUB IZcadToolProperties2_put_ItemOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties2_get_ImageOption_Proxy( 
    IZcadToolProperties2 * This,
     LONG *pImageOption);


void __RPC_STUB IZcadToolProperties2_get_ImageOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolProperties2_put_ImageOption_Proxy( 
    IZcadToolProperties2 * This,
     LONG lImageOption);


void __RPC_STUB IZcadToolProperties2_put_ImageOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	


#ifndef __IZcadStockTool_INTERFACE_DEFINED__
#define __IZcadStockTool_INTERFACE_DEFINED__


 


EXTERN_C const IID IID_IZcadStockTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8BAA1229-8AC4-4F50-8887-3DB38B1984AE")
    IZcadStockTool : public IUnknown
    {
    public:
        virtual  HRESULT STDMETHODCALLTYPE CreateTool( 
             IUnknown **ppTool) = 0;
        
    };
    
#else 	

    typedef struct IZcadStockToolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZcadStockTool * This,
             REFIID riid,
             void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZcadStockTool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZcadStockTool * This);
        
         HRESULT ( STDMETHODCALLTYPE *CreateTool )( 
            IZcadStockTool * This,
             IUnknown **ppTool);
        
        END_INTERFACE
    } IZcadStockToolVtbl;

    interface IZcadStockTool
    {
        CONST_VTBL struct IZcadStockToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZcadStockTool_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IZcadStockTool_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IZcadStockTool_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IZcadStockTool_CreateTool(This,ppTool)	\
    (This)->lpVtbl -> CreateTool(This,ppTool)

#endif 


#endif 	



 HRESULT STDMETHODCALLTYPE IZcadStockTool_CreateTool_Proxy( 
    IZcadStockTool * This,
     IUnknown **ppTool);


void __RPC_STUB IZcadStockTool_CreateTool_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	


#ifndef __IZcadToolContextMenu_INTERFACE_DEFINED__
#define __IZcadToolContextMenu_INTERFACE_DEFINED__


 


EXTERN_C const IID IID_IZcadToolContextMenu;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9704E49C-BCD9-4C05-8015-29D2DF70E8EB")
    IZcadToolContextMenu : public IUnknown
    {
    public:
        virtual  HRESULT STDMETHODCALLTYPE Customize( 
             int nContextFlag,
             DWORD_PTR hMenu,
             UINT idCmdFirst,
             UINT idCmdLast,
             GUID *pPaletteId,
             DWORD *pFlag) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE GetMenuHelp( 
             UINT idCmd,
             BSTR *pbstrHelpText) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE InvokeMenuCommand( 
             UINT idCmd,
             GUID *pPaletteId,
             DWORD_PTR hWnd,
             DWORD *pFlag) = 0;
        
    };
    
#else 	

    typedef struct IZcadToolContextMenuVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZcadToolContextMenu * This,
             REFIID riid,
             void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZcadToolContextMenu * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZcadToolContextMenu * This);
        
         HRESULT ( STDMETHODCALLTYPE *Customize )( 
            IZcadToolContextMenu * This,
             int nContextFlag,
             DWORD_PTR hMenu,
             UINT idCmdFirst,
             UINT idCmdLast,
             GUID *pPaletteId,
             DWORD *pFlag);
        
         HRESULT ( STDMETHODCALLTYPE *GetMenuHelp )( 
            IZcadToolContextMenu * This,
             UINT idCmd,
             BSTR *pbstrHelpText);
        
         HRESULT ( STDMETHODCALLTYPE *InvokeMenuCommand )( 
            IZcadToolContextMenu * This,
             UINT idCmd,
             GUID *pPaletteId,
             DWORD_PTR hWnd,
             DWORD *pFlag);
        
        END_INTERFACE
    } IZcadToolContextMenuVtbl;

    interface IZcadToolContextMenu
    {
        CONST_VTBL struct IZcadToolContextMenuVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZcadToolContextMenu_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IZcadToolContextMenu_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IZcadToolContextMenu_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IZcadToolContextMenu_Customize(This,nContextFlag,hMenu,idCmdFirst,idCmdLast,pPaletteId,pFlag)	\
    (This)->lpVtbl -> Customize(This,nContextFlag,hMenu,idCmdFirst,idCmdLast,pPaletteId,pFlag)

#define IZcadToolContextMenu_GetMenuHelp(This,idCmd,pbstrHelpText)	\
    (This)->lpVtbl -> GetMenuHelp(This,idCmd,pbstrHelpText)

#define IZcadToolContextMenu_InvokeMenuCommand(This,idCmd,pPaletteId,hWnd,pFlag)	\
    (This)->lpVtbl -> InvokeMenuCommand(This,idCmd,pPaletteId,hWnd,pFlag)

#endif 


#endif 	



 HRESULT STDMETHODCALLTYPE IZcadToolContextMenu_Customize_Proxy( 
    IZcadToolContextMenu * This,
     int nContextFlag,
     DWORD_PTR hMenu,
     UINT idCmdFirst,
     UINT idCmdLast,
     GUID *pPaletteId,
     DWORD *pFlag);


void __RPC_STUB IZcadToolContextMenu_Customize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolContextMenu_GetMenuHelp_Proxy( 
    IZcadToolContextMenu * This,
     UINT idCmd,
     BSTR *pbstrHelpText);


void __RPC_STUB IZcadToolContextMenu_GetMenuHelp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolContextMenu_InvokeMenuCommand_Proxy( 
    IZcadToolContextMenu * This,
     UINT idCmd,
     GUID *pPaletteId,
     DWORD_PTR hWnd,
     DWORD *pFlag);


void __RPC_STUB IZcadToolContextMenu_InvokeMenuCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	


#ifndef __IZcadTool_INTERFACE_DEFINED__
#define __IZcadTool_INTERFACE_DEFINED__


 


EXTERN_C const IID IID_IZcadTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DC8981A4-E67A-429C-9A90-2955A687F862")
    IZcadTool : public IUnknown
    {
    public:
        virtual  HRESULT STDMETHODCALLTYPE get_EditMode( 
             long *pVal) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE GetStockTool( 
             IUnknown **ppToolClass) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE SetToolProperties( 
             IUnknown *pProp) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE Load( 
             IUnknown *pXmlElement) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE Save( 
             IUnknown *pXmlElement) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE Execute( 
             LONG_PTR lFlag,
             DWORD_PTR hWnd,
             DWORD point,
             DWORD dwKeyState) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE GetData( 
             VARIANT *pObjUnkArray,
             VARIANT *pDynUnkArray) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE BeginEdit( void) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE Edit( 
             IUnknown *pProp,
             LONG_PTR hWndParent,
             VARIANT_BOOL *pRet) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE EndEdit( 
             VARIANT_BOOL bEditCancelled) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE New( void) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE GetDropTarget( 
             IUnknown **ppDropTarget) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE GetContextMenu( 
             INT_PTR nContextFlag,
             DWORD_PTR hMenu,
             UINT idCmdFirst,
             UINT idCmdLast,
             DWORD_PTR *pFlag) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE GetCommandString( 
             UINT idCmd,
             BSTR *pbstrHelpText) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE InvokeCommand( 
             UINT idCmd,
             DWORD_PTR hWnd) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE GetDragDropContextInfo( 
             IUnknown *pIUnknown,
             BSTR *pbstrText,
             DWORD *pFlag) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE Dropped( 
             BSTR bstrUrl) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE Refreshed( 
             BSTR bstrUrl) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE SetEditorWindow( 
             LONG_PTR hWndEditor,
             IUnknown *pPropInspector) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE ValidateEditChanges( void) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE GetToolProperties( 
             IUnknown **pToolProp) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE BeginMultipleEdit( 
             VARIANT tools,
             VARIANT stockToolIds) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE EndMultipleEdit( 
             VARIANT tools,
             VARIANT stockToolIds,
             VARIANT_BOOL bEditCancelled) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE MultipleEdit( 
             VARIANT tools,
             VARIANT stockToolIds,
             LONG_PTR hWndParent,
             VARIANT_BOOL *pRet) = 0;
        
    };
    
#else 	

    typedef struct IZcadToolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZcadTool * This,
             REFIID riid,
             void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZcadTool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZcadTool * This);
        
         HRESULT ( STDMETHODCALLTYPE *get_EditMode )( 
            IZcadTool * This,
             long *pVal);
        
         HRESULT ( STDMETHODCALLTYPE *GetStockTool )( 
            IZcadTool * This,
             IUnknown **ppToolClass);
        
         HRESULT ( STDMETHODCALLTYPE *SetToolProperties )( 
            IZcadTool * This,
             IUnknown *pProp);
        
         HRESULT ( STDMETHODCALLTYPE *Load )( 
            IZcadTool * This,
             IUnknown *pXmlElement);
        
         HRESULT ( STDMETHODCALLTYPE *Save )( 
            IZcadTool * This,
             IUnknown *pXmlElement);
        
         HRESULT ( STDMETHODCALLTYPE *Execute )( 
            IZcadTool * This,
             LONG_PTR lFlag,
             DWORD_PTR hWnd,
             DWORD point,
             DWORD dwKeyState);
        
         HRESULT ( STDMETHODCALLTYPE *GetData )( 
            IZcadTool * This,
             VARIANT *pObjUnkArray,
             VARIANT *pDynUnkArray);
        
         HRESULT ( STDMETHODCALLTYPE *BeginEdit )( 
            IZcadTool * This);
        
         HRESULT ( STDMETHODCALLTYPE *Edit )( 
            IZcadTool * This,
             IUnknown *pProp,
             LONG_PTR hWndParent,
             VARIANT_BOOL *pRet);
        
         HRESULT ( STDMETHODCALLTYPE *EndEdit )( 
            IZcadTool * This,
             VARIANT_BOOL bEditCancelled);
        
         HRESULT ( STDMETHODCALLTYPE *New )( 
            IZcadTool * This);
        
         HRESULT ( STDMETHODCALLTYPE *GetDropTarget )( 
            IZcadTool * This,
             IUnknown **ppDropTarget);
        
         HRESULT ( STDMETHODCALLTYPE *GetContextMenu )( 
            IZcadTool * This,
             INT_PTR nContextFlag,
             DWORD_PTR hMenu,
             UINT idCmdFirst,
             UINT idCmdLast,
             DWORD_PTR *pFlag);
        
         HRESULT ( STDMETHODCALLTYPE *GetCommandString )( 
            IZcadTool * This,
             UINT idCmd,
             BSTR *pbstrHelpText);
        
         HRESULT ( STDMETHODCALLTYPE *InvokeCommand )( 
            IZcadTool * This,
             UINT idCmd,
             DWORD_PTR hWnd);
        
         HRESULT ( STDMETHODCALLTYPE *GetDragDropContextInfo )( 
            IZcadTool * This,
             IUnknown *pIUnknown,
             BSTR *pbstrText,
             DWORD *pFlag);
        
         HRESULT ( STDMETHODCALLTYPE *Dropped )( 
            IZcadTool * This,
             BSTR bstrUrl);
        
         HRESULT ( STDMETHODCALLTYPE *Refreshed )( 
            IZcadTool * This,
             BSTR bstrUrl);
        
         HRESULT ( STDMETHODCALLTYPE *SetEditorWindow )( 
            IZcadTool * This,
             LONG_PTR hWndEditor,
             IUnknown *pPropInspector);
        
         HRESULT ( STDMETHODCALLTYPE *ValidateEditChanges )( 
            IZcadTool * This);
        
         HRESULT ( STDMETHODCALLTYPE *GetToolProperties )( 
            IZcadTool * This,
             IUnknown **pToolProp);
        
         HRESULT ( STDMETHODCALLTYPE *BeginMultipleEdit )( 
            IZcadTool * This,
             VARIANT tools,
             VARIANT stockToolIds);
        
         HRESULT ( STDMETHODCALLTYPE *EndMultipleEdit )( 
            IZcadTool * This,
             VARIANT tools,
             VARIANT stockToolIds,
             VARIANT_BOOL bEditCancelled);
        
         HRESULT ( STDMETHODCALLTYPE *MultipleEdit )( 
            IZcadTool * This,
             VARIANT tools,
             VARIANT stockToolIds,
             LONG_PTR hWndParent,
             VARIANT_BOOL *pRet);
        
        END_INTERFACE
    } IZcadToolVtbl;

    interface IZcadTool
    {
        CONST_VTBL struct IZcadToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZcadTool_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IZcadTool_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IZcadTool_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IZcadTool_get_EditMode(This,pVal)	\
    (This)->lpVtbl -> get_EditMode(This,pVal)

#define IZcadTool_GetStockTool(This,ppToolClass)	\
    (This)->lpVtbl -> GetStockTool(This,ppToolClass)

#define IZcadTool_SetToolProperties(This,pProp)	\
    (This)->lpVtbl -> SetToolProperties(This,pProp)

#define IZcadTool_Load(This,pXmlElement)	\
    (This)->lpVtbl -> Load(This,pXmlElement)

#define IZcadTool_Save(This,pXmlElement)	\
    (This)->lpVtbl -> Save(This,pXmlElement)

#define IZcadTool_Execute(This,lFlag,hWnd,point,dwKeyState)	\
    (This)->lpVtbl -> Execute(This,lFlag,hWnd,point,dwKeyState)

#define IZcadTool_GetData(This,pObjUnkArray,pDynUnkArray)	\
    (This)->lpVtbl -> GetData(This,pObjUnkArray,pDynUnkArray)

#define IZcadTool_BeginEdit(This)	\
    (This)->lpVtbl -> BeginEdit(This)

#define IZcadTool_Edit(This,pProp,hWndParent,pRet)	\
    (This)->lpVtbl -> Edit(This,pProp,hWndParent,pRet)

#define IZcadTool_EndEdit(This,bEditCancelled)	\
    (This)->lpVtbl -> EndEdit(This,bEditCancelled)

#define IZcadTool_New(This)	\
    (This)->lpVtbl -> New(This)

#define IZcadTool_GetDropTarget(This,ppDropTarget)	\
    (This)->lpVtbl -> GetDropTarget(This,ppDropTarget)

#define IZcadTool_GetContextMenu(This,nContextFlag,hMenu,idCmdFirst,idCmdLast,pFlag)	\
    (This)->lpVtbl -> GetContextMenu(This,nContextFlag,hMenu,idCmdFirst,idCmdLast,pFlag)

#define IZcadTool_GetCommandString(This,idCmd,pbstrHelpText)	\
    (This)->lpVtbl -> GetCommandString(This,idCmd,pbstrHelpText)

#define IZcadTool_InvokeCommand(This,idCmd,hWnd)	\
    (This)->lpVtbl -> InvokeCommand(This,idCmd,hWnd)

#define IZcadTool_GetDragDropContextInfo(This,pIUnknown,pbstrText,pFlag)	\
    (This)->lpVtbl -> GetDragDropContextInfo(This,pIUnknown,pbstrText,pFlag)

#define IZcadTool_Dropped(This,bstrUrl)	\
    (This)->lpVtbl -> Dropped(This,bstrUrl)

#define IZcadTool_Refreshed(This,bstrUrl)	\
    (This)->lpVtbl -> Refreshed(This,bstrUrl)

#define IZcadTool_SetEditorWindow(This,hWndEditor,pPropInspector)	\
    (This)->lpVtbl -> SetEditorWindow(This,hWndEditor,pPropInspector)

#define IZcadTool_ValidateEditChanges(This)	\
    (This)->lpVtbl -> ValidateEditChanges(This)

#define IZcadTool_GetToolProperties(This,pToolProp)	\
    (This)->lpVtbl -> GetToolProperties(This,pToolProp)

#define IZcadTool_BeginMultipleEdit(This,tools,stockToolIds)	\
    (This)->lpVtbl -> BeginMultipleEdit(This,tools,stockToolIds)

#define IZcadTool_EndMultipleEdit(This,tools,stockToolIds,bEditCancelled)	\
    (This)->lpVtbl -> EndMultipleEdit(This,tools,stockToolIds,bEditCancelled)

#define IZcadTool_MultipleEdit(This,tools,stockToolIds,hWndParent,pRet)	\
    (This)->lpVtbl -> MultipleEdit(This,tools,stockToolIds,hWndParent,pRet)

#endif 


#endif 	



 HRESULT STDMETHODCALLTYPE IZcadTool_get_EditMode_Proxy( 
    IZcadTool * This,
     long *pVal);


void __RPC_STUB IZcadTool_get_EditMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_GetStockTool_Proxy( 
    IZcadTool * This,
     IUnknown **ppToolClass);


void __RPC_STUB IZcadTool_GetStockTool_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_SetToolProperties_Proxy( 
    IZcadTool * This,
     IUnknown *pProp);


void __RPC_STUB IZcadTool_SetToolProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_Load_Proxy( 
    IZcadTool * This,
     IUnknown *pXmlElement);


void __RPC_STUB IZcadTool_Load_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_Save_Proxy( 
    IZcadTool * This,
     IUnknown *pXmlElement);


void __RPC_STUB IZcadTool_Save_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_Execute_Proxy( 
    IZcadTool * This,
     LONG_PTR lFlag,
     DWORD_PTR hWnd,
     DWORD point,
     DWORD dwKeyState);


void __RPC_STUB IZcadTool_Execute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_GetData_Proxy( 
    IZcadTool * This,
     VARIANT *pObjUnkArray,
     VARIANT *pDynUnkArray);


void __RPC_STUB IZcadTool_GetData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_BeginEdit_Proxy( 
    IZcadTool * This);


void __RPC_STUB IZcadTool_BeginEdit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_Edit_Proxy( 
    IZcadTool * This,
     IUnknown *pProp,
     LONG_PTR hWndParent,
     VARIANT_BOOL *pRet);


void __RPC_STUB IZcadTool_Edit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_EndEdit_Proxy( 
    IZcadTool * This,
     VARIANT_BOOL bEditCancelled);


void __RPC_STUB IZcadTool_EndEdit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_New_Proxy( 
    IZcadTool * This);


void __RPC_STUB IZcadTool_New_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_GetDropTarget_Proxy( 
    IZcadTool * This,
     IUnknown **ppDropTarget);


void __RPC_STUB IZcadTool_GetDropTarget_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_GetContextMenu_Proxy( 
    IZcadTool * This,
     INT_PTR nContextFlag,
     DWORD_PTR hMenu,
     UINT idCmdFirst,
     UINT idCmdLast,
     DWORD_PTR *pFlag);


void __RPC_STUB IZcadTool_GetContextMenu_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_GetCommandString_Proxy( 
    IZcadTool * This,
     UINT idCmd,
     BSTR *pbstrHelpText);


void __RPC_STUB IZcadTool_GetCommandString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_InvokeCommand_Proxy( 
    IZcadTool * This,
     UINT idCmd,
     DWORD_PTR hWnd);


void __RPC_STUB IZcadTool_InvokeCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_GetDragDropContextInfo_Proxy( 
    IZcadTool * This,
     IUnknown *pIUnknown,
     BSTR *pbstrText,
     DWORD *pFlag);


void __RPC_STUB IZcadTool_GetDragDropContextInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_Dropped_Proxy( 
    IZcadTool * This,
     BSTR bstrUrl);


void __RPC_STUB IZcadTool_Dropped_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_Refreshed_Proxy( 
    IZcadTool * This,
     BSTR bstrUrl);


void __RPC_STUB IZcadTool_Refreshed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_SetEditorWindow_Proxy( 
    IZcadTool * This,
     LONG_PTR hWndEditor,
     IUnknown *pPropInspector);


void __RPC_STUB IZcadTool_SetEditorWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_ValidateEditChanges_Proxy( 
    IZcadTool * This);


void __RPC_STUB IZcadTool_ValidateEditChanges_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_GetToolProperties_Proxy( 
    IZcadTool * This,
     IUnknown **pToolProp);


void __RPC_STUB IZcadTool_GetToolProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_BeginMultipleEdit_Proxy( 
    IZcadTool * This,
     VARIANT tools,
     VARIANT stockToolIds);


void __RPC_STUB IZcadTool_BeginMultipleEdit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_EndMultipleEdit_Proxy( 
    IZcadTool * This,
     VARIANT tools,
     VARIANT stockToolIds,
     VARIANT_BOOL bEditCancelled);


void __RPC_STUB IZcadTool_EndMultipleEdit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadTool_MultipleEdit_Proxy( 
    IZcadTool * This,
     VARIANT tools,
     VARIANT stockToolIds,
     LONG_PTR hWndParent,
     VARIANT_BOOL *pRet);


void __RPC_STUB IZcadTool_MultipleEdit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	


#ifndef __IZcadTool2_INTERFACE_DEFINED__
#define __IZcadTool2_INTERFACE_DEFINED__


 


EXTERN_C const IID IID_IZcadTool2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7926CA07-C929-4899-8861-BF9D7CC5836B")
    IZcadTool2 : public IUnknown
    {
    public:
        virtual  HRESULT STDMETHODCALLTYPE UpdateImage( void) = 0;
        
    };
    
#else 	

    typedef struct IZcadTool2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZcadTool2 * This,
             REFIID riid,
             void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZcadTool2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZcadTool2 * This);
        
         HRESULT ( STDMETHODCALLTYPE *UpdateImage )( 
            IZcadTool2 * This);
        
        END_INTERFACE
    } IZcadTool2Vtbl;

    interface IZcadTool2
    {
        CONST_VTBL struct IZcadTool2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZcadTool2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IZcadTool2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IZcadTool2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IZcadTool2_UpdateImage(This)	\
    (This)->lpVtbl -> UpdateImage(This)

#endif 


#endif 	



 HRESULT STDMETHODCALLTYPE IZcadTool2_UpdateImage_Proxy( 
    IZcadTool2 * This);


void __RPC_STUB IZcadTool2_UpdateImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	


#ifndef __IZcadToolFlyoutShape_INTERFACE_DEFINED__
#define __IZcadToolFlyoutShape_INTERFACE_DEFINED__


 


EXTERN_C const IID IID_IZcadToolFlyoutShape;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("70C07351-43C4-4230-9FF4-8EA3F1CEED88")
    IZcadToolFlyoutShape : public IUnknown
    {
    public:
        virtual  HRESULT STDMETHODCALLTYPE SetFlyoutTools( 
             VARIANT *pFlyoutToolIds) = 0;
        
    };
    
#else 	

    typedef struct IZcadToolFlyoutShapeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZcadToolFlyoutShape * This,
             REFIID riid,
             void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZcadToolFlyoutShape * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZcadToolFlyoutShape * This);
        
         HRESULT ( STDMETHODCALLTYPE *SetFlyoutTools )( 
            IZcadToolFlyoutShape * This,
             VARIANT *pFlyoutToolIds);
        
        END_INTERFACE
    } IZcadToolFlyoutShapeVtbl;

    interface IZcadToolFlyoutShape
    {
        CONST_VTBL struct IZcadToolFlyoutShapeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZcadToolFlyoutShape_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IZcadToolFlyoutShape_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IZcadToolFlyoutShape_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IZcadToolFlyoutShape_SetFlyoutTools(This,pFlyoutToolIds)	\
    (This)->lpVtbl -> SetFlyoutTools(This,pFlyoutToolIds)

#endif 


#endif 	



 HRESULT STDMETHODCALLTYPE IZcadToolFlyoutShape_SetFlyoutTools_Proxy( 
    IZcadToolFlyoutShape * This,
     VARIANT *pFlyoutToolIds);


void __RPC_STUB IZcadToolFlyoutShape_SetFlyoutTools_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	


#ifndef __IZcadToolSort_INTERFACE_DEFINED__
#define __IZcadToolSort_INTERFACE_DEFINED__


 


EXTERN_C const IID IID_IZcadToolSort;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CD8638C2-C935-468E-8B96-38F17262C128")
    IZcadToolSort : public IUnknown
    {
    public:
        virtual  HRESULT STDMETHODCALLTYPE Compare( 
             IUnknown *pTool,
             long lSortOption,
             long *pResult) = 0;
        
    };
    
#else 	

    typedef struct IZcadToolSortVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZcadToolSort * This,
             REFIID riid,
             void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZcadToolSort * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZcadToolSort * This);
        
         HRESULT ( STDMETHODCALLTYPE *Compare )( 
            IZcadToolSort * This,
             IUnknown *pTool,
             long lSortOption,
             long *pResult);
        
        END_INTERFACE
    } IZcadToolSortVtbl;

    interface IZcadToolSort
    {
        CONST_VTBL struct IZcadToolSortVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZcadToolSort_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IZcadToolSort_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IZcadToolSort_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IZcadToolSort_Compare(This,pTool,lSortOption,pResult)	\
    (This)->lpVtbl -> Compare(This,pTool,lSortOption,pResult)

#endif 


#endif 	



 HRESULT STDMETHODCALLTYPE IZcadToolSort_Compare_Proxy( 
    IZcadToolSort * This,
     IUnknown *pTool,
     long lSortOption,
     long *pResult);


void __RPC_STUB IZcadToolSort_Compare_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	


#ifndef __IZcadToolDropTarget_INTERFACE_DEFINED__
#define __IZcadToolDropTarget_INTERFACE_DEFINED__


 


EXTERN_C const IID IID_IZcadToolDropTarget;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DAC2533D-BE39-45F8-8B9F-5FB611C0CF37")
    IZcadToolDropTarget : public IUnknown
    {
    public:
        virtual  HRESULT STDMETHODCALLTYPE DragEnter( 
             IDataObject *pDataObj,
             DWORD grfKeyState,
             POINTL pt,
             DWORD *pdwEffect) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE DragOver( 
             DWORD grfKeyState,
             POINTL pt,
             DWORD *pdwEffect) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE DragLeave( void) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE Drop( 
             IDataObject *pDataObj,
             DWORD grfKeyState,
             POINTL pt,
             DWORD *pdwEffect,
             GUID *pCurrentStockToolId,
             GUID *pParentId,
             VARIANT *pNewToolIds) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE GetDragDropContextMenuItem( 
             IUnknown *pIUnknown,
             BSTR *pbstrText,
             DWORD *pFlag) = 0;
        
    };
    
#else 	

    typedef struct IZcadToolDropTargetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZcadToolDropTarget * This,
             REFIID riid,
             void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZcadToolDropTarget * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZcadToolDropTarget * This);
        
         HRESULT ( STDMETHODCALLTYPE *DragEnter )( 
            IZcadToolDropTarget * This,
             IDataObject *pDataObj,
             DWORD grfKeyState,
             POINTL pt,
             DWORD *pdwEffect);
        
         HRESULT ( STDMETHODCALLTYPE *DragOver )( 
            IZcadToolDropTarget * This,
             DWORD grfKeyState,
             POINTL pt,
             DWORD *pdwEffect);
        
         HRESULT ( STDMETHODCALLTYPE *DragLeave )( 
            IZcadToolDropTarget * This);
        
         HRESULT ( STDMETHODCALLTYPE *Drop )( 
            IZcadToolDropTarget * This,
             IDataObject *pDataObj,
             DWORD grfKeyState,
             POINTL pt,
             DWORD *pdwEffect,
             GUID *pCurrentStockToolId,
             GUID *pParentId,
             VARIANT *pNewToolIds);
        
         HRESULT ( STDMETHODCALLTYPE *GetDragDropContextMenuItem )( 
            IZcadToolDropTarget * This,
             IUnknown *pIUnknown,
             BSTR *pbstrText,
             DWORD *pFlag);
        
        END_INTERFACE
    } IZcadToolDropTargetVtbl;

    interface IZcadToolDropTarget
    {
        CONST_VTBL struct IZcadToolDropTargetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZcadToolDropTarget_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IZcadToolDropTarget_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IZcadToolDropTarget_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IZcadToolDropTarget_DragEnter(This,pDataObj,grfKeyState,pt,pdwEffect)	\
    (This)->lpVtbl -> DragEnter(This,pDataObj,grfKeyState,pt,pdwEffect)

#define IZcadToolDropTarget_DragOver(This,grfKeyState,pt,pdwEffect)	\
    (This)->lpVtbl -> DragOver(This,grfKeyState,pt,pdwEffect)

#define IZcadToolDropTarget_DragLeave(This)	\
    (This)->lpVtbl -> DragLeave(This)

#define IZcadToolDropTarget_Drop(This,pDataObj,grfKeyState,pt,pdwEffect,pCurrentStockToolId,pParentId,pNewToolIds)	\
    (This)->lpVtbl -> Drop(This,pDataObj,grfKeyState,pt,pdwEffect,pCurrentStockToolId,pParentId,pNewToolIds)

#define IZcadToolDropTarget_GetDragDropContextMenuItem(This,pIUnknown,pbstrText,pFlag)	\
    (This)->lpVtbl -> GetDragDropContextMenuItem(This,pIUnknown,pbstrText,pFlag)

#endif 


#endif 	



 HRESULT STDMETHODCALLTYPE IZcadToolDropTarget_DragEnter_Proxy( 
    IZcadToolDropTarget * This,
     IDataObject *pDataObj,
     DWORD grfKeyState,
     POINTL pt,
     DWORD *pdwEffect);


void __RPC_STUB IZcadToolDropTarget_DragEnter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolDropTarget_DragOver_Proxy( 
    IZcadToolDropTarget * This,
     DWORD grfKeyState,
     POINTL pt,
     DWORD *pdwEffect);


void __RPC_STUB IZcadToolDropTarget_DragOver_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolDropTarget_DragLeave_Proxy( 
    IZcadToolDropTarget * This);


void __RPC_STUB IZcadToolDropTarget_DragLeave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolDropTarget_Drop_Proxy( 
    IZcadToolDropTarget * This,
     IDataObject *pDataObj,
     DWORD grfKeyState,
     POINTL pt,
     DWORD *pdwEffect,
     GUID *pCurrentStockToolId,
     GUID *pParentId,
     VARIANT *pNewToolIds);


void __RPC_STUB IZcadToolDropTarget_Drop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolDropTarget_GetDragDropContextMenuItem_Proxy( 
    IZcadToolDropTarget * This,
     IUnknown *pIUnknown,
     BSTR *pbstrText,
     DWORD *pFlag);


void __RPC_STUB IZcadToolDropTarget_GetDragDropContextMenuItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	


#ifndef __IZcadToolDragSource_INTERFACE_DEFINED__
#define __IZcadToolDragSource_INTERFACE_DEFINED__


 


EXTERN_C const IID IID_IZcadToolDragSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("468F9A62-A13D-48E8-980F-2C197998DD77")
    IZcadToolDragSource : public IUnknown
    {
    public:
        virtual  HRESULT STDMETHODCALLTYPE BeginDrag( 
             VARIANT *pToolIds,
             VARIANT *pAllStockToolIds,
             GUID *pCurrentStockToolId,
             IDataObject *pDataObject,
             DWORD dwKeyState) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE DragInProgress( 
             DWORD dwDropEffect) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE EndDrag( 
             DWORD dwDropEffect) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE DragEnterDrawing( 
             IDataObject *pDataObject,
             DWORD grfKeyState,
             POINTL pt,
             DWORD *pDropEffect) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE DragOverDrawing( 
             DWORD grfKeyState,
             POINTL pt,
             DWORD *pDropEffect) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE DragLeaveDrawing( void) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE DropInDrawing( 
             IDataObject *pDataObject,
             DWORD grfKeyState,
             POINTL pt,
             DWORD *pDropEffect) = 0;
        
    };
    
#else 	

    typedef struct IZcadToolDragSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZcadToolDragSource * This,
             REFIID riid,
             void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZcadToolDragSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZcadToolDragSource * This);
        
         HRESULT ( STDMETHODCALLTYPE *BeginDrag )( 
            IZcadToolDragSource * This,
             VARIANT *pToolIds,
             VARIANT *pAllStockToolIds,
             GUID *pCurrentStockToolId,
             IDataObject *pDataObject,
             DWORD dwKeyState);
        
         HRESULT ( STDMETHODCALLTYPE *DragInProgress )( 
            IZcadToolDragSource * This,
             DWORD dwDropEffect);
        
         HRESULT ( STDMETHODCALLTYPE *EndDrag )( 
            IZcadToolDragSource * This,
             DWORD dwDropEffect);
        
         HRESULT ( STDMETHODCALLTYPE *DragEnterDrawing )( 
            IZcadToolDragSource * This,
             IDataObject *pDataObject,
             DWORD grfKeyState,
             POINTL pt,
             DWORD *pDropEffect);
        
         HRESULT ( STDMETHODCALLTYPE *DragOverDrawing )( 
            IZcadToolDragSource * This,
             DWORD grfKeyState,
             POINTL pt,
             DWORD *pDropEffect);
        
         HRESULT ( STDMETHODCALLTYPE *DragLeaveDrawing )( 
            IZcadToolDragSource * This);
        
         HRESULT ( STDMETHODCALLTYPE *DropInDrawing )( 
            IZcadToolDragSource * This,
             IDataObject *pDataObject,
             DWORD grfKeyState,
             POINTL pt,
             DWORD *pDropEffect);
        
        END_INTERFACE
    } IZcadToolDragSourceVtbl;

    interface IZcadToolDragSource
    {
        CONST_VTBL struct IZcadToolDragSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZcadToolDragSource_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IZcadToolDragSource_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IZcadToolDragSource_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IZcadToolDragSource_BeginDrag(This,pToolIds,pAllStockToolIds,pCurrentStockToolId,pDataObject,dwKeyState)	\
    (This)->lpVtbl -> BeginDrag(This,pToolIds,pAllStockToolIds,pCurrentStockToolId,pDataObject,dwKeyState)

#define IZcadToolDragSource_DragInProgress(This,dwDropEffect)	\
    (This)->lpVtbl -> DragInProgress(This,dwDropEffect)

#define IZcadToolDragSource_EndDrag(This,dwDropEffect)	\
    (This)->lpVtbl -> EndDrag(This,dwDropEffect)

#define IZcadToolDragSource_DragEnterDrawing(This,pDataObject,grfKeyState,pt,pDropEffect)	\
    (This)->lpVtbl -> DragEnterDrawing(This,pDataObject,grfKeyState,pt,pDropEffect)

#define IZcadToolDragSource_DragOverDrawing(This,grfKeyState,pt,pDropEffect)	\
    (This)->lpVtbl -> DragOverDrawing(This,grfKeyState,pt,pDropEffect)

#define IZcadToolDragSource_DragLeaveDrawing(This)	\
    (This)->lpVtbl -> DragLeaveDrawing(This)

#define IZcadToolDragSource_DropInDrawing(This,pDataObject,grfKeyState,pt,pDropEffect)	\
    (This)->lpVtbl -> DropInDrawing(This,pDataObject,grfKeyState,pt,pDropEffect)

#endif 


#endif 	



 HRESULT STDMETHODCALLTYPE IZcadToolDragSource_BeginDrag_Proxy( 
    IZcadToolDragSource * This,
     VARIANT *pToolIds,
     VARIANT *pAllStockToolIds,
     GUID *pCurrentStockToolId,
     IDataObject *pDataObject,
     DWORD dwKeyState);


void __RPC_STUB IZcadToolDragSource_BeginDrag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolDragSource_DragInProgress_Proxy( 
    IZcadToolDragSource * This,
     DWORD dwDropEffect);


void __RPC_STUB IZcadToolDragSource_DragInProgress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolDragSource_EndDrag_Proxy( 
    IZcadToolDragSource * This,
     DWORD dwDropEffect);


void __RPC_STUB IZcadToolDragSource_EndDrag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolDragSource_DragEnterDrawing_Proxy( 
    IZcadToolDragSource * This,
     IDataObject *pDataObject,
     DWORD grfKeyState,
     POINTL pt,
     DWORD *pDropEffect);


void __RPC_STUB IZcadToolDragSource_DragEnterDrawing_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolDragSource_DragOverDrawing_Proxy( 
    IZcadToolDragSource * This,
     DWORD grfKeyState,
     POINTL pt,
     DWORD *pDropEffect);


void __RPC_STUB IZcadToolDragSource_DragOverDrawing_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolDragSource_DragLeaveDrawing_Proxy( 
    IZcadToolDragSource * This);


void __RPC_STUB IZcadToolDragSource_DragLeaveDrawing_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolDragSource_DropInDrawing_Proxy( 
    IZcadToolDragSource * This,
     IDataObject *pDataObject,
     DWORD grfKeyState,
     POINTL pt,
     DWORD *pDropEffect);


void __RPC_STUB IZcadToolDragSource_DropInDrawing_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	


#ifndef __IZcadToolCopyPaste_INTERFACE_DEFINED__
#define __IZcadToolCopyPaste_INTERFACE_DEFINED__


 


EXTERN_C const IID IID_IZcadToolCopyPaste;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A1F76BC7-F122-4B83-93EC-927A487766AE")
    IZcadToolCopyPaste : public IUnknown
    {
    public:
        virtual  HRESULT STDMETHODCALLTYPE Copy( 
             VARIANT *pToolIds,
             VARIANT *pAllStockToolIds,
             GUID *pCurrentStockToolId,
             IDataObject *pDataObject) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE Paste( 
             GUID *pCurrentStockToolId,
             GUID *pParentId,
             IDataObject *pDataObject,
             VARIANT *pNewToolIds) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE CanPaste( 
             IDataObject *pDataObject,
             VARIANT_BOOL *pCanPaste) = 0;
        
    };
    
#else 	

    typedef struct IZcadToolCopyPasteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZcadToolCopyPaste * This,
             REFIID riid,
             void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZcadToolCopyPaste * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZcadToolCopyPaste * This);
        
         HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IZcadToolCopyPaste * This,
             VARIANT *pToolIds,
             VARIANT *pAllStockToolIds,
             GUID *pCurrentStockToolId,
             IDataObject *pDataObject);
        
         HRESULT ( STDMETHODCALLTYPE *Paste )( 
            IZcadToolCopyPaste * This,
             GUID *pCurrentStockToolId,
             GUID *pParentId,
             IDataObject *pDataObject,
             VARIANT *pNewToolIds);
        
         HRESULT ( STDMETHODCALLTYPE *CanPaste )( 
            IZcadToolCopyPaste * This,
             IDataObject *pDataObject,
             VARIANT_BOOL *pCanPaste);
        
        END_INTERFACE
    } IZcadToolCopyPasteVtbl;

    interface IZcadToolCopyPaste
    {
        CONST_VTBL struct IZcadToolCopyPasteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZcadToolCopyPaste_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IZcadToolCopyPaste_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IZcadToolCopyPaste_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IZcadToolCopyPaste_Copy(This,pToolIds,pAllStockToolIds,pCurrentStockToolId,pDataObject)	\
    (This)->lpVtbl -> Copy(This,pToolIds,pAllStockToolIds,pCurrentStockToolId,pDataObject)

#define IZcadToolCopyPaste_Paste(This,pCurrentStockToolId,pParentId,pDataObject,pNewToolIds)	\
    (This)->lpVtbl -> Paste(This,pCurrentStockToolId,pParentId,pDataObject,pNewToolIds)

#define IZcadToolCopyPaste_CanPaste(This,pDataObject,pCanPaste)	\
    (This)->lpVtbl -> CanPaste(This,pDataObject,pCanPaste)

#endif 


#endif 	



 HRESULT STDMETHODCALLTYPE IZcadToolCopyPaste_Copy_Proxy( 
    IZcadToolCopyPaste * This,
     VARIANT *pToolIds,
     VARIANT *pAllStockToolIds,
     GUID *pCurrentStockToolId,
     IDataObject *pDataObject);


void __RPC_STUB IZcadToolCopyPaste_Copy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolCopyPaste_Paste_Proxy( 
    IZcadToolCopyPaste * This,
     GUID *pCurrentStockToolId,
     GUID *pParentId,
     IDataObject *pDataObject,
     VARIANT *pNewToolIds);


void __RPC_STUB IZcadToolCopyPaste_Paste_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolCopyPaste_CanPaste_Proxy( 
    IZcadToolCopyPaste * This,
     IDataObject *pDataObject,
     VARIANT_BOOL *pCanPaste);


void __RPC_STUB IZcadToolCopyPaste_CanPaste_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	


#ifndef __IZcadToolImage_INTERFACE_DEFINED__
#define __IZcadToolImage_INTERFACE_DEFINED__


 


EXTERN_C const IID IID_IZcadToolImage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("14D98917-7503-4A2B-A74E-E47BF71465A1")
    IZcadToolImage : public IUnknown
    {
    public:
        virtual  HRESULT STDMETHODCALLTYPE Load( 
             BSTR bsFileName) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE Save( 
             BSTR bsFileName) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE Render( 
             HDC hdc,
             long x,
             long y,
             long cx,
             long cy,
             long nStyle,
             VARIANT_BOOL bTransparentBitmap) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE GetSize( 
             long *pWidth,
             long *pHeight) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE GetType( 
             short *pType) = 0;
        
        virtual  HRESULT STDMETHODCALLTYPE IsImageLoaded( 
             BOOL *pVal) = 0;
        
    };
    
#else 	

    typedef struct IZcadToolImageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IZcadToolImage * This,
             REFIID riid,
             void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IZcadToolImage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IZcadToolImage * This);
        
         HRESULT ( STDMETHODCALLTYPE *Load )( 
            IZcadToolImage * This,
             BSTR bsFileName);
        
         HRESULT ( STDMETHODCALLTYPE *Save )( 
            IZcadToolImage * This,
             BSTR bsFileName);
        
         HRESULT ( STDMETHODCALLTYPE *Render )( 
            IZcadToolImage * This,
             HDC hdc,
             long x,
             long y,
             long cx,
             long cy,
             long nStyle,
             VARIANT_BOOL bTransparentBitmap);
        
         HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IZcadToolImage * This,
             long *pWidth,
             long *pHeight);
        
         HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IZcadToolImage * This,
             short *pType);
        
         HRESULT ( STDMETHODCALLTYPE *IsImageLoaded )( 
            IZcadToolImage * This,
             BOOL *pVal);
        
        END_INTERFACE
    } IZcadToolImageVtbl;

    interface IZcadToolImage
    {
        CONST_VTBL struct IZcadToolImageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IZcadToolImage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IZcadToolImage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IZcadToolImage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IZcadToolImage_Load(This,bsFileName)	\
    (This)->lpVtbl -> Load(This,bsFileName)

#define IZcadToolImage_Save(This,bsFileName)	\
    (This)->lpVtbl -> Save(This,bsFileName)

#define IZcadToolImage_Render(This,hdc,x,y,cx,cy,nStyle,bTransparentBitmap)	\
    (This)->lpVtbl -> Render(This,hdc,x,y,cx,cy,nStyle,bTransparentBitmap)

#define IZcadToolImage_GetSize(This,pWidth,pHeight)	\
    (This)->lpVtbl -> GetSize(This,pWidth,pHeight)

#define IZcadToolImage_GetType(This,pType)	\
    (This)->lpVtbl -> GetType(This,pType)

#define IZcadToolImage_IsImageLoaded(This,pVal)	\
    (This)->lpVtbl -> IsImageLoaded(This,pVal)

#endif 


#endif 	



 HRESULT STDMETHODCALLTYPE IZcadToolImage_Load_Proxy( 
    IZcadToolImage * This,
     BSTR bsFileName);


void __RPC_STUB IZcadToolImage_Load_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolImage_Save_Proxy( 
    IZcadToolImage * This,
     BSTR bsFileName);


void __RPC_STUB IZcadToolImage_Save_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolImage_Render_Proxy( 
    IZcadToolImage * This,
     HDC hdc,
     long x,
     long y,
     long cx,
     long cy,
     long nStyle,
     VARIANT_BOOL bTransparentBitmap);


void __RPC_STUB IZcadToolImage_Render_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolImage_GetSize_Proxy( 
    IZcadToolImage * This,
     long *pWidth,
     long *pHeight);


void __RPC_STUB IZcadToolImage_GetSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolImage_GetType_Proxy( 
    IZcadToolImage * This,
     short *pType);


void __RPC_STUB IZcadToolImage_GetType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


 HRESULT STDMETHODCALLTYPE IZcadToolImage_IsImageLoaded_Proxy( 
    IZcadToolImage * This,
     BOOL *pVal);


void __RPC_STUB IZcadToolImage_IsImageLoaded_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);

#endif 	

#ifndef __ZcTcLib_LIBRARY_DEFINED__
#define __ZcTcLib_LIBRARY_DEFINED__

EXTERN_C const IID LIBID_ZcTcLib;

EXTERN_C const CLSID CLSID_ZcadToolProperties;

#ifdef __cplusplus

class DECLSPEC_UUID("50E1595A-9F55-4597-A2A7-40F9D95B852C")
ZcadToolProperties;
#endif

EXTERN_C const CLSID CLSID_ZcadToolImage;

#ifdef __cplusplus

class DECLSPEC_UUID("0A996695-3E4B-4bde-80C1-46780B4CEAE3")
ZcadToolImage;
#endif
#endif 

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

#ifdef __cplusplus
}
#endif

#endif
