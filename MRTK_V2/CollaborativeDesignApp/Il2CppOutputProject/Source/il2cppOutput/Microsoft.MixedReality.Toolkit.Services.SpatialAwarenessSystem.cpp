#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_tCDAABC4976E965E99580F716B1B2CDD9CDBE1865;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t7B6E2AF9599FB6847FE71FC6F5DE9AE0BC8ABB50;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct IMixedRealitySpatialAwarenessObservationHandler_1_tC20E62B4358C8B39FD863ECE3E41CC04425CED8F;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver
struct IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver[]
struct IMixedRealitySpatialAwarenessObserverU5BU5D_t064F9161449B2AE2C1EADB757842F0BA78A24E6E;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>
struct MixedRealitySpatialAwarenessEventData_1_t7D87A990C0BC95251E2D2AD4F12051C65A02AFAB;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem/<>c
struct U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[]
struct MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>
struct IEnumerable_1_t9E770DBD4EAF7977A1360841F65FD0A62BF4FF36;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>
struct IReadOnlyList_1_t15E8098D3D51BAD90CDA62E1ED51E8C12C78BDFF;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>
struct List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.WaitUntil
struct WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F;

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityService_t786A23BE7C43913C011325FB43AED3E720F6E9FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpatialAwarenessObservationHandler_1_tC20E62B4358C8B39FD863ECE3E41CC04425CED8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3466954DD3E2B08B6AB8DA213A8E68936D6BE028;
IL2CPP_EXTERN_C String_t* _stringLiteralCE770926F96A370534360689830528ED7EECFE29;
IL2CPP_EXTERN_C const RuntimeMethod* BaseEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_tC20E62B4358C8B39FD863ECE3E41CC04425CED8F_m55BE69693EAA9EA2ECF19C60603C0BB34246E7B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventFunction_1__ctor_m6D7EEFEBAA5F72109D97C9F7A573F22084D915E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisMixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3_m400982C705386D29177FABC813B06356DDD38EE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityServiceRegistrar_GetDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_m9C53C507EC0780537DE116E38C143BECFD5C3C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityServiceRegistrar_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mC8E6F196438BECE975F4728B2EAB2583399A27DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityServiceRegistrar_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mCD175BAF71549A130E7C5D75EFDAB3894E4BDEC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m197EF8226B17428C2E593BA7E2D407C571599187_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mEAF5B47EE64D2663D21C89FAAAE5AE6CB0093627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC73AEF24AAFE8A696A69A6375EE4B730129862A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF427ED1F076DD0E9A63C3BA76EC8B6B0A45C93EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE5BEBEBA23A81DAC495B979842EAF849315C18DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m5128E1FEF79E60A731D98FC6A5770A7043A5AE19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessEventData_1_Initialize_mF301192AF7971788F871233A81F8D4EBFFF14305_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessEventData_1__ctor_mFEA2865CBB27D940AFE024F5B274E8D9CF86F892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__33_0_mF59C295C99653B2DEF7A0DAEC648FEBAB3FCEFEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__33_1_mD77D12556F9C00F550529881650DC63E0FB3DBE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__33_2_m18378C74E16145EAC92DE9CF731A807CCFF15600_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObjectParent_m5940711279F3B6B8E5373F807C5BB5563E0B6D0B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_Destroy_mD9BAB95563CBD780310E1AB212A72DAC0446D5B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_Disable_m949E2CB3D7BFF87361222CFEAD98A5844A5076AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_Enable_mC6C1AF370F4830A280E09BC23F008AA81A3FDD3B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_GetObserver_m9ED5D5EB1AC4D4A251AA4CD828DEAF4253F07844_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_GetObservers_m7B5BD47FBD4F11978E28323328F59435E87FE562_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_RaiseMeshAdded_m2A81FA55C7836B340A1F543753283E797AB1AB51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_RaiseMeshRemoved_m91ECF84F72E544910BA17E68B4B3802533A47CC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_RaiseMeshUpdated_mC23A6337ADD2BABF6D6C89543CC67C176F2F2BF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_ResumeObservers_m8BC2C268B4B76372A496EDAB1E413D359D374140_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_SuspendObservers_m988B39BDA7C50636888BD02AB6D6334B42D2465C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem__cctor_m1DD53DF52E6E8B72264D7F823D5DC39F3D00C5DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem__ctor_m7943C1E0F5777D79C3A4C702152C13B9C5A287A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessParent_m9FE2FD4E49E3A134B0C436F27350CE60D3200D41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__33_0_mF59C295C99653B2DEF7A0DAEC648FEBAB3FCEFEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__33_1_mD77D12556F9C00F550529881650DC63E0FB3DBE3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__33_2_m18378C74E16145EAC92DE9CF731A807CCFF15600_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m92BBB81AF6710CDB7F52D3668FF819D9BDCA5017_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t44B733462DE5B14B2B58B57D985D3CFAFB864580 
{
public:

public:
};


// System.Object


// Microsoft.MixedReality.Toolkit.BaseService
struct  BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject
struct  BaseSpatialAwarenessObject_t0084061C18CF2F51E21128F590898510036AFFA4  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<GameObject>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CGameObjectU3Ek__BackingField_1;
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Renderer>k__BackingField
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___U3CRendererU3Ek__BackingField_2;
	// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Filter>k__BackingField
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___U3CFilterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t0084061C18CF2F51E21128F590898510036AFFA4, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t0084061C18CF2F51E21128F590898510036AFFA4, ___U3CGameObjectU3Ek__BackingField_1)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CGameObjectU3Ek__BackingField_1() const { return ___U3CGameObjectU3Ek__BackingField_1; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CGameObjectU3Ek__BackingField_1() { return &___U3CGameObjectU3Ek__BackingField_1; }
	inline void set_U3CGameObjectU3Ek__BackingField_1(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CGameObjectU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameObjectU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRendererU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t0084061C18CF2F51E21128F590898510036AFFA4, ___U3CRendererU3Ek__BackingField_2)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_U3CRendererU3Ek__BackingField_2() const { return ___U3CRendererU3Ek__BackingField_2; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_U3CRendererU3Ek__BackingField_2() { return &___U3CRendererU3Ek__BackingField_2; }
	inline void set_U3CRendererU3Ek__BackingField_2(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___U3CRendererU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRendererU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFilterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t0084061C18CF2F51E21128F590898510036AFFA4, ___U3CFilterU3Ek__BackingField_3)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_U3CFilterU3Ek__BackingField_3() const { return ___U3CFilterU3Ek__BackingField_3; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_U3CFilterU3Ek__BackingField_3() { return &___U3CFilterU3Ek__BackingField_3; }
	inline void set_U3CFilterU3Ek__BackingField_3(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___U3CFilterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFilterU3Ek__BackingField_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem_<>c
struct  U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem_<>c Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem_<>c::<>9
	U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct  SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Utilities.SystemType::reference
	String_t* ___reference_0;
	// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432, ___reference_0)); }
	inline String_t* get_reference_0() const { return ___reference_0; }
	inline String_t** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(String_t* value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>
struct  List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IMixedRealitySpatialAwarenessObserverU5BU5D_t064F9161449B2AE2C1EADB757842F0BA78A24E6E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6, ____items_1)); }
	inline IMixedRealitySpatialAwarenessObserverU5BU5D_t064F9161449B2AE2C1EADB757842F0BA78A24E6E* get__items_1() const { return ____items_1; }
	inline IMixedRealitySpatialAwarenessObserverU5BU5D_t064F9161449B2AE2C1EADB757842F0BA78A24E6E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IMixedRealitySpatialAwarenessObserverU5BU5D_t064F9161449B2AE2C1EADB757842F0BA78A24E6E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IMixedRealitySpatialAwarenessObserverU5BU5D_t064F9161449B2AE2C1EADB757842F0BA78A24E6E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6_StaticFields, ____emptyArray_5)); }
	inline IMixedRealitySpatialAwarenessObserverU5BU5D_t064F9161449B2AE2C1EADB757842F0BA78A24E6E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IMixedRealitySpatialAwarenessObserverU5BU5D_t064F9161449B2AE2C1EADB757842F0BA78A24E6E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IMixedRealitySpatialAwarenessObserverU5BU5D_t064F9161449B2AE2C1EADB757842F0BA78A24E6E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct  BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2  : public BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10
{
public:
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.BaseEventSystem::doneExecutingEvents
	WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___doneExecutingEvents_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___U3CEventListenersU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_doneExecutingEvents_5() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2, ___doneExecutingEvents_5)); }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * get_doneExecutingEvents_5() const { return ___doneExecutingEvents_5; }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F ** get_address_of_doneExecutingEvents_5() { return &___doneExecutingEvents_5; }
	inline void set_doneExecutingEvents_5(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * value)
	{
		___doneExecutingEvents_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___doneExecutingEvents_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2, ___U3CEventListenersU3Ek__BackingField_6)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_U3CEventListenersU3Ek__BackingField_6() const { return ___U3CEventListenersU3Ek__BackingField_6; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_U3CEventListenersU3Ek__BackingField_6() { return &___U3CEventListenersU3Ek__BackingField_6; }
	inline void set_U3CEventListenersU3Ek__BackingField_6(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___U3CEventListenersU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_6), (void*)value);
	}
};

struct BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_4;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_4() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2_StaticFields, ___eventExecutionDepth_4)); }
	inline int32_t get_eventExecutionDepth_4() const { return ___eventExecutionDepth_4; }
	inline int32_t* get_address_of_eventExecutionDepth_4() { return &___eventExecutionDepth_4; }
	inline void set_eventExecutionDepth_4(int32_t value)
	{
		___eventExecutionDepth_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct  SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E  : public BaseSpatialAwarenessObject_t0084061C18CF2F51E21128F590898510036AFFA4
{
public:
	// UnityEngine.MeshCollider Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::<Collider>k__BackingField
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CColliderU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CColliderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E, ___U3CColliderU3Ek__BackingField_5)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_U3CColliderU3Ek__BackingField_5() const { return ___U3CColliderU3Ek__BackingField_5; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_U3CColliderU3Ek__BackingField_5() { return &___U3CColliderU3Ek__BackingField_5; }
	inline void set_U3CColliderU3Ek__BackingField_5(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___U3CColliderU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CColliderU3Ek__BackingField_5), (void*)value);
	}
};

struct SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E_StaticFields
{
public:
	// System.Type[] Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::requiredMeshComponents
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___requiredMeshComponents_4;

public:
	inline static int32_t get_offset_of_requiredMeshComponents_4() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E_StaticFields, ___requiredMeshComponents_4)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_requiredMeshComponents_4() const { return ___requiredMeshComponents_4; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_requiredMeshComponents_4() { return &___requiredMeshComponents_4; }
	inline void set_requiredMeshComponents_4(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___requiredMeshComponents_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requiredMeshComponents_4), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct  BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41  : public BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseCoreSystem::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___U3CConfigurationProfileU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41, ___U3CRegistrarU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_7() const { return ___U3CRegistrarU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_7() { return &___U3CRegistrarU3Ek__BackingField_7; }
	inline void set_U3CRegistrarU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41, ___U3CConfigurationProfileU3Ek__BackingField_8)); }
	inline BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * get_U3CConfigurationProfileU3Ek__BackingField_8() const { return ___U3CConfigurationProfileU3Ek__BackingField_8; }
	inline BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_8() { return &___U3CConfigurationProfileU3Ek__BackingField_8; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_8(BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_8), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.GenericBaseEventData
struct  GenericBaseEventData_tF7A8347659841F4C7134C28074F9CCC3688BA49D  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CEventSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericBaseEventData_tF7A8347659841F4C7134C28074F9CCC3688BA49D, ___U3CEventSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEventSourceU3Ek__BackingField_2() const { return ___U3CEventSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEventSourceU3Ek__BackingField_2() { return &___U3CEventSourceU3Ek__BackingField_2; }
	inline void set_U3CEventSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEventSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventSourceU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GenericBaseEventData_tF7A8347659841F4C7134C28074F9CCC3688BA49D, ___U3CEventTimeU3Ek__BackingField_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_3() const { return ___U3CEventTimeU3Ek__BackingField_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_3() { return &___U3CEventTimeU3Ek__BackingField_3; }
	inline void set_U3CEventTimeU3Ek__BackingField_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct  AutoStartBehavior_t9BBC9C0AE47250C9034F4B386E2D1C6BA21D5839 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_t9BBC9C0AE47250C9034F4B386E2D1C6BA21D5839, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms
struct  SupportedPlatforms_tC8AF3595AC2CE7A478C6187C0304D1EB71DD52C0 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedPlatforms_tC8AF3595AC2CE7A478C6187C0304D1EB71DD52C0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct  VolumeType_t216D85DC8F2789C4360056C5953985C65B834163 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_t216D85DC8F2789C4360056C5953985C65B834163, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData
struct  MixedRealitySpatialAwarenessEventData_tF1367F728D31D63B36BE4665951DB8837CC3EA98  : public GenericBaseEventData_tF7A8347659841F4C7134C28074F9CCC3688BA49D
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_tF1367F728D31D63B36BE4665951DB8837CC3EA98, ___U3CIdU3Ek__BackingField_4)); }
	inline int32_t get_U3CIdU3Ek__BackingField_4() const { return ___U3CIdU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_4() { return &___U3CIdU3Ek__BackingField_4; }
	inline void set_U3CIdU3Ek__BackingField_4(int32_t value)
	{
		___U3CIdU3Ek__BackingField_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct  MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4  : public BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::meshEventData
	MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * ___meshEventData_9;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::observers
	List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * ___observers_10;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessObjectParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___spatialAwarenessObjectParent_11;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::nextSourceId
	uint32_t ___nextSourceId_12;

public:
	inline static int32_t get_offset_of_meshEventData_9() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4, ___meshEventData_9)); }
	inline MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * get_meshEventData_9() const { return ___meshEventData_9; }
	inline MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 ** get_address_of_meshEventData_9() { return &___meshEventData_9; }
	inline void set_meshEventData_9(MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * value)
	{
		___meshEventData_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_9), (void*)value);
	}

	inline static int32_t get_offset_of_observers_10() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4, ___observers_10)); }
	inline List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * get_observers_10() const { return ___observers_10; }
	inline List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 ** get_address_of_observers_10() { return &___observers_10; }
	inline void set_observers_10(List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * value)
	{
		___observers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observers_10), (void*)value);
	}

	inline static int32_t get_offset_of_spatialAwarenessObjectParent_11() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4, ___spatialAwarenessObjectParent_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_spatialAwarenessObjectParent_11() const { return ___spatialAwarenessObjectParent_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_spatialAwarenessObjectParent_11() { return &___spatialAwarenessObjectParent_11; }
	inline void set_spatialAwarenessObjectParent_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___spatialAwarenessObjectParent_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessObjectParent_11), (void*)value);
	}

	inline static int32_t get_offset_of_nextSourceId_12() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4, ___nextSourceId_12)); }
	inline uint32_t get_nextSourceId_12() const { return ___nextSourceId_12; }
	inline uint32_t* get_address_of_nextSourceId_12() { return &___nextSourceId_12; }
	inline void set_nextSourceId_12(uint32_t value)
	{
		___nextSourceId_12 = value;
	}
};

struct MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::OnMeshAdded
	EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * ___OnMeshAdded_13;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::OnMeshUpdated
	EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * ___OnMeshUpdated_14;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::OnMeshRemoved
	EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * ___OnMeshRemoved_15;

public:
	inline static int32_t get_offset_of_OnMeshAdded_13() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___OnMeshAdded_13)); }
	inline EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * get_OnMeshAdded_13() const { return ___OnMeshAdded_13; }
	inline EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA ** get_address_of_OnMeshAdded_13() { return &___OnMeshAdded_13; }
	inline void set_OnMeshAdded_13(EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * value)
	{
		___OnMeshAdded_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAdded_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshUpdated_14() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___OnMeshUpdated_14)); }
	inline EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * get_OnMeshUpdated_14() const { return ___OnMeshUpdated_14; }
	inline EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA ** get_address_of_OnMeshUpdated_14() { return &___OnMeshUpdated_14; }
	inline void set_OnMeshUpdated_14(EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * value)
	{
		___OnMeshUpdated_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshUpdated_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshRemoved_15() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___OnMeshRemoved_15)); }
	inline EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * get_OnMeshRemoved_15() const { return ___OnMeshRemoved_15; }
	inline EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA ** get_address_of_OnMeshRemoved_15() { return &___OnMeshRemoved_15; }
	inline void set_OnMeshRemoved_15(EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * value)
	{
		___OnMeshRemoved_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshRemoved_15), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct  MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::componentType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___componentType_0;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::componentName
	String_t* ___componentName_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::priority
	uint32_t ___priority_2;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::runtimePlatform
	int32_t ___runtimePlatform_3;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::observerProfile
	BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * ___observerProfile_4;

public:
	inline static int32_t get_offset_of_componentType_0() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90, ___componentType_0)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_componentType_0() const { return ___componentType_0; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_componentType_0() { return &___componentType_0; }
	inline void set_componentType_0(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___componentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_componentName_1() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90, ___componentName_1)); }
	inline String_t* get_componentName_1() const { return ___componentName_1; }
	inline String_t** get_address_of_componentName_1() { return &___componentName_1; }
	inline void set_componentName_1(String_t* value)
	{
		___componentName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentName_1), (void*)value);
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90, ___priority_2)); }
	inline uint32_t get_priority_2() const { return ___priority_2; }
	inline uint32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(uint32_t value)
	{
		___priority_2 = value;
	}

	inline static int32_t get_offset_of_runtimePlatform_3() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90, ___runtimePlatform_3)); }
	inline int32_t get_runtimePlatform_3() const { return ___runtimePlatform_3; }
	inline int32_t* get_address_of_runtimePlatform_3() { return &___runtimePlatform_3; }
	inline void set_runtimePlatform_3(int32_t value)
	{
		___runtimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_observerProfile_4() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90, ___observerProfile_4)); }
	inline BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * get_observerProfile_4() const { return ___observerProfile_4; }
	inline BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC ** get_address_of_observerProfile_4() { return &___observerProfile_4; }
	inline void set_observerProfile_4(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * value)
	{
		___observerProfile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observerProfile_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90_marshaled_pinvoke
{
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___componentType_0;
	char* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * ___observerProfile_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90_marshaled_com
{
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___componentType_0;
	Il2CppChar* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * ___observerProfile_4;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct  MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3  : public MixedRealitySpatialAwarenessEventData_tF1367F728D31D63B36BE4665951DB8837CC3EA98
{
public:
	// T Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1::<SpatialObject>k__BackingField
	SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * ___U3CSpatialObjectU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CSpatialObjectU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3, ___U3CSpatialObjectU3Ek__BackingField_5)); }
	inline SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * get_U3CSpatialObjectU3Ek__BackingField_5() const { return ___U3CSpatialObjectU3Ek__BackingField_5; }
	inline SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E ** get_address_of_U3CSpatialObjectU3Ek__BackingField_5() { return &___U3CSpatialObjectU3Ek__BackingField_5; }
	inline void set_U3CSpatialObjectU3Ek__BackingField_5(SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * value)
	{
		___U3CSpatialObjectU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpatialObjectU3Ek__BackingField_5), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct  EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct  BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::startupBehavior
	int32_t ___startupBehavior_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::isStationaryObserver
	bool ___isStationaryObserver_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::observationExtents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___observationExtents_7;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::observerVolumeType
	int32_t ___observerVolumeType_8;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::updateInterval
	float ___updateInterval_9;

public:
	inline static int32_t get_offset_of_startupBehavior_5() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC, ___startupBehavior_5)); }
	inline int32_t get_startupBehavior_5() const { return ___startupBehavior_5; }
	inline int32_t* get_address_of_startupBehavior_5() { return &___startupBehavior_5; }
	inline void set_startupBehavior_5(int32_t value)
	{
		___startupBehavior_5 = value;
	}

	inline static int32_t get_offset_of_isStationaryObserver_6() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC, ___isStationaryObserver_6)); }
	inline bool get_isStationaryObserver_6() const { return ___isStationaryObserver_6; }
	inline bool* get_address_of_isStationaryObserver_6() { return &___isStationaryObserver_6; }
	inline void set_isStationaryObserver_6(bool value)
	{
		___isStationaryObserver_6 = value;
	}

	inline static int32_t get_offset_of_observationExtents_7() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC, ___observationExtents_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_observationExtents_7() const { return ___observationExtents_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_observationExtents_7() { return &___observationExtents_7; }
	inline void set_observationExtents_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___observationExtents_7 = value;
	}

	inline static int32_t get_offset_of_observerVolumeType_8() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC, ___observerVolumeType_8)); }
	inline int32_t get_observerVolumeType_8() const { return ___observerVolumeType_8; }
	inline int32_t* get_address_of_observerVolumeType_8() { return &___observerVolumeType_8; }
	inline void set_observerVolumeType_8(int32_t value)
	{
		___observerVolumeType_8 = value;
	}

	inline static int32_t get_offset_of_updateInterval_9() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC, ___updateInterval_9)); }
	inline float get_updateInterval_9() const { return ___updateInterval_9; }
	inline float* get_address_of_updateInterval_9() { return &___updateInterval_9; }
	inline void set_updateInterval_9(float value)
	{
		___updateInterval_9 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct  MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[] Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile::observerConfigurations
	MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* ___observerConfigurations_5;

public:
	inline static int32_t get_offset_of_observerConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7, ___observerConfigurations_5)); }
	inline MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* get_observerConfigurations_5() const { return ___observerConfigurations_5; }
	inline MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90** get_address_of_observerConfigurations_5() { return &___observerConfigurations_5; }
	inline void set_observerConfigurations_5(MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* value)
	{
		___observerConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observerConfigurations_5), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SystemInputModules_4)); }
	inline List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_FirstSelected_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentSelected_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DummyData_13)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[]
struct MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  m_Items[1];

public:
	inline MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___observerProfile_4), (void*)NULL);
		#endif
	}
	inline MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___observerProfile_4), (void*)NULL);
		#endif
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessEventData_1__ctor_mA6E32075050BF2950CF1FC5B4108785746EC423C_gshared (MixedRealitySpatialAwarenessEventData_1_t7D87A990C0BC95251E2D2AD4F12051C65A02AFAB * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___eventSystem0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6E336459937EBBC514F001464CC3771240EEBB87_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>::Initialize(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver,System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessEventData_1_Initialize_m49B3A9820C7B9C1E1ED3DE839C11EB3BB8951130_gshared (MixedRealitySpatialAwarenessEventData_1_t7D87A990C0BC95251E2D2AD4F12051C65A02AFAB * __this, RuntimeObject* ___observer0, int32_t ___id1, RuntimeObject * ___spatialObject2, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_1__ctor_mC3690E11086D102EEB1BCC561DCA0ACD61D055D1_gshared (EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m6AC645E74FA8C753DD50130438B2D226EF2478E4_gshared (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___data0, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::.ctor()
inline void List_1__ctor_mDC73AEF24AAFE8A696A69A6375EE4B730129862A (List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCoreSystem__ctor_m02E2EEF1017481C5A7F2530877DD9FED02396A13 (BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41 * __this, RuntimeObject* ___registrar0, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___profile1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_mB5ABF716215A9D4E5204D4E3B9EDB034A2A6E618 (BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::.ctor(UnityEngine.EventSystems.EventSystem)
inline void MixedRealitySpatialAwarenessEventData_1__ctor_mFEA2865CBB27D940AFE024F5B274E8D9CF86F892 (MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___eventSystem0, const RuntimeMethod* method)
{
	((  void (*) (MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 *, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 *, const RuntimeMethod*))MixedRealitySpatialAwarenessEventData_1__ctor_mA6E32075050BF2950CF1FC5B4108785746EC423C_gshared)(__this, ___eventSystem0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m349524E2ECE37A703BC12D77419612C9162EC92A (BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Count()
inline int32_t List_1_get_Count_mE5BEBEBA23A81DAC495B979842EAF849315C18DE_inline (List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m5128E1FEF79E60A731D98FC6A5770A7043A5AE19_inline (List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::get_Registrar()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseCoreSystem_get_Registrar_m04B64ECA034254C16DCB559481BB972B4824C242_inline (BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::Clear()
inline void List_1_Clear_mEAF5B47EE64D2663D21C89FAAAE5AE6CB0093627 (List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m04CE0EA9BE41F36575F1B7FBDAE7CB7514EFEB49 (BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseCoreSystem::get_ConfigurationProfile()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * BaseCoreSystem_get_ConfigurationProfile_m723756DC3F4A791841C5BB6564DE0A0256ED0E26_inline (BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[] Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile::get_ObserverConfigurations()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m0AF7A14431DDE492EE8B07BAB2AE86C4877476CE_inline (MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ComponentName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialObserverConfiguration_get_ComponentName_mF03FC23EE9C9C8C071621929D5B20000855988EC_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_Priority()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialObserverConfiguration_get_Priority_m1A0393FCB51FF7241AA0FD293B1873554994AC07_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ObserverProfile()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * MixedRealitySpatialObserverConfiguration_get_ObserverProfile_m7D3036686651D44965AA54A3721A5E204FBD15E4_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ComponentType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * MixedRealitySpatialObserverConfiguration_get_ComponentType_m500A536AB1E8CBD9C098557C089945F15DFABE01_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::get_Type()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CD_inline (SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_RuntimePlatform()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m8638143C2B8F8AF732377D374B3D6A0F4898AC1B_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::Add(!0)
inline void List_1_Add_m197EF8226B17428C2E593BA7E2D407C571599187 (List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_CreateSpatialAwarenessParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessParent_m9FE2FD4E49E3A134B0C436F27350CE60D3200D41 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mF427ED1F076DD0E9A63C3BA76EC8B6B0A45C93EC (List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m6E336459937EBBC514F001464CC3771240EEBB87_gshared)(__this, ___collection0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::Initialize(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver,System.Int32,!0)
inline void MixedRealitySpatialAwarenessEventData_1_Initialize_mF301192AF7971788F871233A81F8D4EBFFF14305 (MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * __this, RuntimeObject* ___observer0, int32_t ___id1, SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * ___spatialObject2, const RuntimeMethod* method)
{
	((  void (*) (MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 *, RuntimeObject*, int32_t, SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E *, const RuntimeMethod*))MixedRealitySpatialAwarenessEventData_1_Initialize_m49B3A9820C7B9C1E1ED3DE839C11EB3BB8951130_gshared)(__this, ___observer0, ___id1, ___spatialObject2, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m6D7EEFEBAA5F72109D97C9F7A573F22084D915E9 (EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_mC3690E11086D102EEB1BCC561DCA0ACD61D055D1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m16C133DCBAB70B28797C697D8B8F4DF2575CAC9F (U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>(UnityEngine.EventSystems.BaseEventData)
inline MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * ExecuteEvents_ValidateEventData_TisMixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3_m400982C705386D29177FABC813B06356DDD38EE1 (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___data0, const RuntimeMethod* method)
{
	return ((  MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * (*) (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m6AC645E74FA8C753DD50130438B2D226EF2478E4_gshared)(___data0, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_m7943C1E0F5777D79C3A4C702152C13B9C5A287A8 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, RuntimeObject* ___registrar0, MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * ___profile1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem__ctor_m7943C1E0F5777D79C3A4C702152C13B9C5A287A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<IMixedRealitySpatialAwarenessObserver> observers = new List<IMixedRealitySpatialAwarenessObserver>();
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_0 = (List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 *)il2cpp_codegen_object_new(List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6_il2cpp_TypeInfo_var);
		List_1__ctor_mDC73AEF24AAFE8A696A69A6375EE4B730129862A(L_0, /*hidden argument*/List_1__ctor_mDC73AEF24AAFE8A696A69A6375EE4B730129862A_RuntimeMethod_var);
		__this->set_observers_10(L_0);
		// MixedRealitySpatialAwarenessSystemProfile profile) : base(registrar, profile)
		RuntimeObject* L_1 = ___registrar0;
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_2 = ___profile1;
		BaseCoreSystem__ctor_m02E2EEF1017481C5A7F2530877DD9FED02396A13(__this, L_1, L_2, /*hidden argument*/NULL);
		// if (registrar == null)
		RuntimeObject* L_3 = ___registrar0;
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		// Debug.LogError("The MixedRealitySpatialAwarenessSystem object requires a valid IMixedRealityServiceRegistrar instance.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralCE770926F96A370534360689830528ED7EECFE29, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Initialize_m9EC3F671E93211C2505D78A30C677FD0DD29D18C (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	{
		// base.Initialize();
		BaseService_Initialize_mB5ABF716215A9D4E5204D4E3B9EDB034A2A6E618(__this, /*hidden argument*/NULL);
		// InitializeInternal();
		MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshEventData = new MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_0 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_1 = (MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 *)il2cpp_codegen_object_new(MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3_il2cpp_TypeInfo_var);
		MixedRealitySpatialAwarenessEventData_1__ctor_mFEA2865CBB27D940AFE024F5B274E8D9CF86F892(L_1, L_0, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1__ctor_mFEA2865CBB27D940AFE024F5B274E8D9CF86F892_RuntimeMethod_var);
		__this->set_meshEventData_9(L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Disable_m949E2CB3D7BFF87361222CFEAD98A5844A5076AE (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Disable_m949E2CB3D7BFF87361222CFEAD98A5844A5076AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// base.Disable();
		BaseService_Disable_m349524E2ECE37A703BC12D77419612C9162EC92A(__this, /*hidden argument*/NULL);
		// if (observers.Count > 0)
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_0 = __this->get_observers_10();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_mE5BEBEBA23A81DAC495B979842EAF849315C18DE_inline(L_0, /*hidden argument*/List_1_get_Count_mE5BEBEBA23A81DAC495B979842EAF849315C18DE_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		// for (int i = 0; i < observers.Count; i++)
		V_0 = 0;
		goto IL_0042;
	}

IL_0018:
	{
		// if (observers[i] != null)
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_2 = __this->get_observers_10();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_4 = List_1_get_Item_m5128E1FEF79E60A731D98FC6A5770A7043A5AE19_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m5128E1FEF79E60A731D98FC6A5770A7043A5AE19_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// Registrar.UnregisterDataProvider<IMixedRealitySpatialAwarenessObserver>(observers[i]);
		RuntimeObject* L_5 = BaseCoreSystem_get_Registrar_m04B64ECA034254C16DCB559481BB972B4824C242_inline(__this, /*hidden argument*/NULL);
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_6 = __this->get_observers_10();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_8 = List_1_get_Item_m5128E1FEF79E60A731D98FC6A5770A7043A5AE19_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m5128E1FEF79E60A731D98FC6A5770A7043A5AE19_RuntimeMethod_var);
		NullCheck(L_5);
		GenericInterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(IMixedRealityServiceRegistrar_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mCD175BAF71549A130E7C5D75EFDAB3894E4BDEC8_RuntimeMethod_var, L_5, L_8);
	}

IL_003e:
	{
		// for (int i = 0; i < observers.Count; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0042:
	{
		// for (int i = 0; i < observers.Count; i++)
		int32_t L_10 = V_0;
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_11 = __this->get_observers_10();
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_mE5BEBEBA23A81DAC495B979842EAF849315C18DE_inline(L_11, /*hidden argument*/List_1_get_Count_mE5BEBEBA23A81DAC495B979842EAF849315C18DE_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0018;
		}
	}

IL_0050:
	{
		// observers.Clear();
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_13 = __this->get_observers_10();
		NullCheck(L_13);
		List_1_Clear_mEAF5B47EE64D2663D21C89FAAAE5AE6CB0093627(L_13, /*hidden argument*/List_1_Clear_mEAF5B47EE64D2663D21C89FAAAE5AE6CB0093627_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Enable_mC6C1AF370F4830A280E09BC23F008AA81A3FDD3B (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Enable_mC6C1AF370F4830A280E09BC23F008AA81A3FDD3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * V_0 = NULL;
	int32_t V_1 = 0;
	MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_3 = NULL;
	{
		// base.Enable();
		BaseService_Enable_m04CE0EA9BE41F36575F1B7FBDAE7CB7514EFEB49(__this, /*hidden argument*/NULL);
		// MixedRealitySpatialAwarenessSystemProfile profile = ConfigurationProfile as MixedRealitySpatialAwarenessSystemProfile;
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_0 = BaseCoreSystem_get_ConfigurationProfile_m723756DC3F4A791841C5BB6564DE0A0256ED0E26_inline(__this, /*hidden argument*/NULL);
		V_0 = ((MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 *)IsInstClass((RuntimeObject*)L_0, MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7_il2cpp_TypeInfo_var));
		// if ((observers.Count == 0) && (profile != null))
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_1 = __this->get_observers_10();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_mE5BEBEBA23A81DAC495B979842EAF849315C18DE_inline(L_1, /*hidden argument*/List_1_get_Count_mE5BEBEBA23A81DAC495B979842EAF849315C18DE_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_00c9;
		}
	}
	{
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00c9;
		}
	}
	{
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		V_1 = 0;
		goto IL_00bb;
	}

IL_0035:
	{
		// MixedRealitySpatialObserverConfiguration configuration = profile.ObserverConfigurations[i];
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_5 = V_0;
		NullCheck(L_5);
		MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* L_6 = MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m0AF7A14431DDE492EE8B07BAB2AE86C4877476CE_inline(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// object[] args = { Registrar, this, configuration.ComponentName, configuration.Priority, configuration.ObserverProfile };
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		RuntimeObject* L_12 = BaseCoreSystem_get_Registrar_m04B64ECA034254C16DCB559481BB972B4824C242_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_11;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, __this);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_13;
		String_t* L_15 = MixedRealitySpatialObserverConfiguration_get_ComponentName_mF03FC23EE9C9C8C071621929D5B20000855988EC_inline((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_15);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_14;
		uint32_t L_17 = MixedRealitySpatialObserverConfiguration_get_Priority_m1A0393FCB51FF7241AA0FD293B1873554994AC07_inline((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_2), /*hidden argument*/NULL);
		uint32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_19);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_16;
		BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * L_21 = MixedRealitySpatialObserverConfiguration_get_ObserverProfile_m7D3036686651D44965AA54A3721A5E204FBD15E4_inline((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_21);
		V_3 = L_20;
		// if (Registrar.RegisterDataProvider<IMixedRealitySpatialAwarenessObserver>(
		//     configuration.ComponentType.Type,
		//     configuration.RuntimePlatform,
		//     args))
		RuntimeObject* L_22 = BaseCoreSystem_get_Registrar_m04B64ECA034254C16DCB559481BB972B4824C242_inline(__this, /*hidden argument*/NULL);
		SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * L_23 = MixedRealitySpatialObserverConfiguration_get_ComponentType_m500A536AB1E8CBD9C098557C089945F15DFABE01_inline((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_23);
		Type_t * L_24 = SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CD_inline(L_23, /*hidden argument*/NULL);
		int32_t L_25 = MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m8638143C2B8F8AF732377D374B3D6A0F4898AC1B_inline((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_2), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = V_3;
		NullCheck(L_22);
		bool L_27 = GenericInterfaceFuncInvoker3< bool, Type_t *, int32_t, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(IMixedRealityServiceRegistrar_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mC8E6F196438BECE975F4728B2EAB2583399A27DA_RuntimeMethod_var, L_22, L_24, L_25, L_26);
		if (!L_27)
		{
			goto IL_00b7;
		}
	}
	{
		// observers.Add(Registrar.GetDataProvider<IMixedRealitySpatialAwarenessObserver>(configuration.ComponentName));
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_28 = __this->get_observers_10();
		RuntimeObject* L_29 = BaseCoreSystem_get_Registrar_m04B64ECA034254C16DCB559481BB972B4824C242_inline(__this, /*hidden argument*/NULL);
		String_t* L_30 = MixedRealitySpatialObserverConfiguration_get_ComponentName_mF03FC23EE9C9C8C071621929D5B20000855988EC_inline((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_29);
		RuntimeObject* L_31 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(IMixedRealityServiceRegistrar_GetDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_m9C53C507EC0780537DE116E38C143BECFD5C3C97_RuntimeMethod_var, L_29, L_30);
		NullCheck(L_28);
		List_1_Add_m197EF8226B17428C2E593BA7E2D407C571599187(L_28, L_31, /*hidden argument*/List_1_Add_m197EF8226B17428C2E593BA7E2D407C571599187_RuntimeMethod_var);
	}

IL_00b7:
	{
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00bb:
	{
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		int32_t L_33 = V_1;
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_34 = V_0;
		NullCheck(L_34);
		MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* L_35 = MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m0AF7A14431DDE492EE8B07BAB2AE86C4877476CE_inline(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))))
		{
			goto IL_0035;
		}
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Reset_m758DD90C8ACAF570E299978A0DC2BBCDAFBEC6FF (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	{
		// Disable();
		VirtActionInvoker0::Invoke(23 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable() */, __this);
		// Initialize();
		VirtActionInvoker0::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize() */, __this);
		// Enable();
		VirtActionInvoker0::Invoke(20 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Destroy_mD9BAB95563CBD780310E1AB212A72DAC0446D5B4 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Destroy_mD9BAB95563CBD780310E1AB212A72DAC0446D5B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying)
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// if (spatialAwarenessObjectParent != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_spatialAwarenessObjectParent_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		// if (Application.isEditor)
		bool L_3 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// Object.DestroyImmediate(spatialAwarenessObjectParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_spatialAwarenessObjectParent_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_4, /*hidden argument*/NULL);
		// }
		goto IL_0044;
	}

IL_0029:
	{
		// spatialAwarenessObjectParent.transform.DetachChildren();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_spatialAwarenessObjectParent_11();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23(L_6, /*hidden argument*/NULL);
		// Object.Destroy(spatialAwarenessObjectParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_spatialAwarenessObjectParent_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_7, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// spatialAwarenessObjectParent = null;
		__this->set_spatialAwarenessObjectParent_11((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// public GameObject SpatialAwarenessObjectParent => spatialAwarenessObjectParent != null ? spatialAwarenessObjectParent : (spatialAwarenessObjectParent = CreateSpatialAwarenessParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_spatialAwarenessObjectParent_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessParent_m9FE2FD4E49E3A134B0C436F27350CE60D3200D41(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = L_2;
		V_0 = L_3;
		__this->set_spatialAwarenessObjectParent_11(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_0;
		return L_4;
	}

IL_001e:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_spatialAwarenessObjectParent_11();
		return L_5;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_CreateSpatialAwarenessParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessParent_m9FE2FD4E49E3A134B0C436F27350CE60D3200D41 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessParent_m9FE2FD4E49E3A134B0C436F27350CE60D3200D41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private GameObject CreateSpatialAwarenessParent => new GameObject("Spatial Awareness System");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteral3466954DD3E2B08B6AB8DA213A8E68936D6BE028, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::CreateSpatialAwarenessObjectParent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObjectParent_m5940711279F3B6B8E5373F807C5BB5563E0B6D0B (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObjectParent_m5940711279F3B6B8E5373F807C5BB5563E0B6D0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject objectParent = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_1, L_0, /*hidden argument*/NULL);
		// objectParent.transform.parent = SpatialAwarenessObjectParent.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = L_1;
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_3, L_5, /*hidden argument*/NULL);
		// return objectParent;
		return L_2;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GenerateNewSourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialAwarenessSystem_GenerateNewSourceId_m8E66D13774253169DFE8A865411D2408896A6288 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		// return nextSourceId++;
		uint32_t L_0 = __this->get_nextSourceId_12();
		V_0 = L_0;
		uint32_t L_1 = V_0;
		__this->set_nextSourceId_12(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		uint32_t L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySpatialAwarenessSystem_GetObservers_m7B5BD47FBD4F11978E28323328F59435E87FE562 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_GetObservers_m7B5BD47FBD4F11978E28323328F59435E87FE562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new List<IMixedRealitySpatialAwarenessObserver>(observers) as IReadOnlyList<IMixedRealitySpatialAwarenessObserver>;
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_0 = __this->get_observers_10();
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_1 = (List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 *)il2cpp_codegen_object_new(List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6_il2cpp_TypeInfo_var);
		List_1__ctor_mF427ED1F076DD0E9A63C3BA76EC8B6B0A45C93EC(L_1, L_0, /*hidden argument*/List_1__ctor_mF427ED1F076DD0E9A63C3BA76EC8B6B0A45C93EC_RuntimeMethod_var);
		return L_1;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserver(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySpatialAwarenessSystem_GetObserver_m9ED5D5EB1AC4D4A251AA4CD828DEAF4253F07844 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_GetObserver_m9ED5D5EB1AC4D4A251AA4CD828DEAF4253F07844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < observers.Count; i++)
		V_0 = 0;
		goto IL_002e;
	}

IL_0004:
	{
		// if (observers[i].Name == name)
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_0 = __this->get_observers_10();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2 = List_1_get_Item_m5128E1FEF79E60A731D98FC6A5770A7043A5AE19_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m5128E1FEF79E60A731D98FC6A5770A7043A5AE19_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Microsoft.MixedReality.Toolkit.IMixedRealityService::get_Name() */, IMixedRealityService_t786A23BE7C43913C011325FB43AED3E720F6E9FB_il2cpp_TypeInfo_var, L_2);
		String_t* L_4 = ___name0;
		bool L_5 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// return observers[i];
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_6 = __this->get_observers_10();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_8 = List_1_get_Item_m5128E1FEF79E60A731D98FC6A5770A7043A5AE19_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m5128E1FEF79E60A731D98FC6A5770A7043A5AE19_RuntimeMethod_var);
		return L_8;
	}

IL_002a:
	{
		// for (int i = 0; i < observers.Count; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002e:
	{
		// for (int i = 0; i < observers.Count; i++)
		int32_t L_10 = V_0;
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_11 = __this->get_observers_10();
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_mE5BEBEBA23A81DAC495B979842EAF849315C18DE_inline(L_11, /*hidden argument*/List_1_get_Count_mE5BEBEBA23A81DAC495B979842EAF849315C18DE_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_ResumeObservers_m8BC2C268B4B76372A496EDAB1E413D359D374140 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_ResumeObservers_m8BC2C268B4B76372A496EDAB1E413D359D374140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < observers.Count; i++)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// observers[i].Resume();
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_0 = __this->get_observers_10();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2 = List_1_get_Item_m5128E1FEF79E60A731D98FC6A5770A7043A5AE19_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m5128E1FEF79E60A731D98FC6A5770A7043A5AE19_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Resume() */, IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_il2cpp_TypeInfo_var, L_2);
		// for (int i = 0; i < observers.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0019:
	{
		// for (int i = 0; i < observers.Count; i++)
		int32_t L_4 = V_0;
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_5 = __this->get_observers_10();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_mE5BEBEBA23A81DAC495B979842EAF849315C18DE_inline(L_5, /*hidden argument*/List_1_get_Count_mE5BEBEBA23A81DAC495B979842EAF849315C18DE_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_SuspendObservers_m988B39BDA7C50636888BD02AB6D6334B42D2465C (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_SuspendObservers_m988B39BDA7C50636888BD02AB6D6334B42D2465C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < observers.Count; i++)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// observers[i].Suspend();
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_0 = __this->get_observers_10();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2 = List_1_get_Item_m5128E1FEF79E60A731D98FC6A5770A7043A5AE19_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m5128E1FEF79E60A731D98FC6A5770A7043A5AE19_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(17 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Suspend() */, IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_il2cpp_TypeInfo_var, L_2);
		// for (int i = 0; i < observers.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0019:
	{
		// for (int i = 0; i < observers.Count; i++)
		int32_t L_4 = V_0;
		List_1_t507BBBDC32FB1EE170181D62903CA2EE8822F4E6 * L_5 = __this->get_observers_10();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_mE5BEBEBA23A81DAC495B979842EAF849315C18DE_inline(L_5, /*hidden argument*/List_1_get_Count_mE5BEBEBA23A81DAC495B979842EAF849315C18DE_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::RaiseMeshAdded(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver,System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_RaiseMeshAdded_m2A81FA55C7836B340A1F543753283E797AB1AB51 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, RuntimeObject* ___observer0, int32_t ___meshId1, SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * ___meshObject2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_RaiseMeshAdded_m2A81FA55C7836B340A1F543753283E797AB1AB51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshEventData.Initialize(observer, meshId, meshObject);
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_0 = __this->get_meshEventData_9();
		RuntimeObject* L_1 = ___observer0;
		int32_t L_2 = ___meshId1;
		SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * L_3 = ___meshObject2;
		NullCheck(L_0);
		MixedRealitySpatialAwarenessEventData_1_Initialize_mF301192AF7971788F871233A81F8D4EBFFF14305(L_0, L_1, L_2, L_3, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1_Initialize_mF301192AF7971788F871233A81F8D4EBFFF14305_RuntimeMethod_var);
		// HandleEvent(meshEventData, OnMeshAdded);
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_4 = __this->get_meshEventData_9();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var);
		EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * L_5 = ((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->get_OnMeshAdded_13();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_tC20E62B4358C8B39FD863ECE3E41CC04425CED8F_m55BE69693EAA9EA2ECF19C60603C0BB34246E7B0_RuntimeMethod_var, __this, L_4, L_5);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::RaiseMeshUpdated(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver,System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_RaiseMeshUpdated_mC23A6337ADD2BABF6D6C89543CC67C176F2F2BF1 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, RuntimeObject* ___observer0, int32_t ___meshId1, SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * ___meshObject2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_RaiseMeshUpdated_mC23A6337ADD2BABF6D6C89543CC67C176F2F2BF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshEventData.Initialize(observer, meshId, meshObject);
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_0 = __this->get_meshEventData_9();
		RuntimeObject* L_1 = ___observer0;
		int32_t L_2 = ___meshId1;
		SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * L_3 = ___meshObject2;
		NullCheck(L_0);
		MixedRealitySpatialAwarenessEventData_1_Initialize_mF301192AF7971788F871233A81F8D4EBFFF14305(L_0, L_1, L_2, L_3, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1_Initialize_mF301192AF7971788F871233A81F8D4EBFFF14305_RuntimeMethod_var);
		// HandleEvent(meshEventData, OnMeshUpdated);
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_4 = __this->get_meshEventData_9();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var);
		EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * L_5 = ((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->get_OnMeshUpdated_14();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_tC20E62B4358C8B39FD863ECE3E41CC04425CED8F_m55BE69693EAA9EA2ECF19C60603C0BB34246E7B0_RuntimeMethod_var, __this, L_4, L_5);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::RaiseMeshRemoved(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_RaiseMeshRemoved_m91ECF84F72E544910BA17E68B4B3802533A47CC4 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, RuntimeObject* ___observer0, int32_t ___meshId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_RaiseMeshRemoved_m91ECF84F72E544910BA17E68B4B3802533A47CC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshEventData.Initialize(observer, meshId, null);
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_0 = __this->get_meshEventData_9();
		RuntimeObject* L_1 = ___observer0;
		int32_t L_2 = ___meshId1;
		NullCheck(L_0);
		MixedRealitySpatialAwarenessEventData_1_Initialize_mF301192AF7971788F871233A81F8D4EBFFF14305(L_0, L_1, L_2, (SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E *)NULL, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1_Initialize_mF301192AF7971788F871233A81F8D4EBFFF14305_RuntimeMethod_var);
		// HandleEvent(meshEventData, OnMeshRemoved);
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_3 = __this->get_meshEventData_9();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var);
		EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * L_4 = ((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->get_OnMeshRemoved_15();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_tC20E62B4358C8B39FD863ECE3E41CC04425CED8F_m55BE69693EAA9EA2ECF19C60603C0BB34246E7B0_RuntimeMethod_var, __this, L_3, L_4);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__cctor_m1DD53DF52E6E8B72264D7F823D5DC39F3D00C5DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem__cctor_m1DD53DF52E6E8B72264D7F823D5DC39F3D00C5DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ExecuteEvents.EventFunction<IMixedRealitySpatialAwarenessObservationHandler<SpatialAwarenessMeshObject>> OnMeshAdded =
		//     delegate (IMixedRealitySpatialAwarenessObservationHandler<SpatialAwarenessMeshObject> handler, BaseEventData eventData)
		//     {
		//         MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> spatialEventData = ExecuteEvents.ValidateEventData<MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>>(eventData);
		//         handler.OnObservationAdded(spatialEventData);
		//     };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B_il2cpp_TypeInfo_var);
		U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B * L_0 = ((U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * L_1 = (EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA *)il2cpp_codegen_object_new(EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m6D7EEFEBAA5F72109D97C9F7A573F22084D915E9(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__33_0_mF59C295C99653B2DEF7A0DAEC648FEBAB3FCEFEE_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m6D7EEFEBAA5F72109D97C9F7A573F22084D915E9_RuntimeMethod_var);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_OnMeshAdded_13(L_1);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealitySpatialAwarenessObservationHandler<SpatialAwarenessMeshObject>> OnMeshUpdated =
		//     delegate (IMixedRealitySpatialAwarenessObservationHandler<SpatialAwarenessMeshObject> handler, BaseEventData eventData)
		//     {
		//         MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> spatialEventData = ExecuteEvents.ValidateEventData<MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>>(eventData);
		//         handler.OnObservationUpdated(spatialEventData);
		//     };
		U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B * L_2 = ((U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * L_3 = (EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA *)il2cpp_codegen_object_new(EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m6D7EEFEBAA5F72109D97C9F7A573F22084D915E9(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__33_1_mD77D12556F9C00F550529881650DC63E0FB3DBE3_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m6D7EEFEBAA5F72109D97C9F7A573F22084D915E9_RuntimeMethod_var);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_OnMeshUpdated_14(L_3);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealitySpatialAwarenessObservationHandler<SpatialAwarenessMeshObject>> OnMeshRemoved =
		//     delegate (IMixedRealitySpatialAwarenessObservationHandler<SpatialAwarenessMeshObject> handler, BaseEventData eventData)
		//     {
		//         MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> spatialEventData = ExecuteEvents.ValidateEventData<MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>>(eventData);
		//         handler.OnObservationRemoved(spatialEventData);
		//     };
		U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B * L_4 = ((U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * L_5 = (EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA *)il2cpp_codegen_object_new(EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m6D7EEFEBAA5F72109D97C9F7A573F22084D915E9(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__33_2_m18378C74E16145EAC92DE9CF731A807CCFF15600_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m6D7EEFEBAA5F72109D97C9F7A573F22084D915E9_RuntimeMethod_var);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_OnMeshRemoved_15(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m92BBB81AF6710CDB7F52D3668FF819D9BDCA5017 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m92BBB81AF6710CDB7F52D3668FF819D9BDCA5017_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B * L_0 = (U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B *)il2cpp_codegen_object_new(U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m16C133DCBAB70B28797C697D8B8F4DF2575CAC9F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m16C133DCBAB70B28797C697D8B8F4DF2575CAC9F (U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem_<>c::<.cctor>b__33_0(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__33_0_mF59C295C99653B2DEF7A0DAEC648FEBAB3FCEFEE (U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__33_0_mF59C295C99653B2DEF7A0DAEC648FEBAB3FCEFEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * V_0 = NULL;
	{
		// MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> spatialEventData = ExecuteEvents.ValidateEventData<MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_1 = ExecuteEvents_ValidateEventData_TisMixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3_m400982C705386D29177FABC813B06356DDD38EE1(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3_m400982C705386D29177FABC813B06356DDD38EE1_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnObservationAdded(spatialEventData);
		RuntimeObject* L_2 = ___handler0;
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::OnObservationAdded(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<!0>) */, IMixedRealitySpatialAwarenessObservationHandler_1_tC20E62B4358C8B39FD863ECE3E41CC04425CED8F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem_<>c::<.cctor>b__33_1(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__33_1_mD77D12556F9C00F550529881650DC63E0FB3DBE3 (U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__33_1_mD77D12556F9C00F550529881650DC63E0FB3DBE3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * V_0 = NULL;
	{
		// MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> spatialEventData = ExecuteEvents.ValidateEventData<MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_1 = ExecuteEvents_ValidateEventData_TisMixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3_m400982C705386D29177FABC813B06356DDD38EE1(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3_m400982C705386D29177FABC813B06356DDD38EE1_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnObservationUpdated(spatialEventData);
		RuntimeObject* L_2 = ___handler0;
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::OnObservationUpdated(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<!0>) */, IMixedRealitySpatialAwarenessObservationHandler_1_tC20E62B4358C8B39FD863ECE3E41CC04425CED8F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem_<>c::<.cctor>b__33_2(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__33_2_m18378C74E16145EAC92DE9CF731A807CCFF15600 (U3CU3Ec_t723955CCD656C41EDFE7BFAA1A57B66C7765E08B * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__33_2_m18378C74E16145EAC92DE9CF731A807CCFF15600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * V_0 = NULL;
	{
		// MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> spatialEventData = ExecuteEvents.ValidateEventData<MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_1 = ExecuteEvents_ValidateEventData_TisMixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3_m400982C705386D29177FABC813B06356DDD38EE1(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3_m400982C705386D29177FABC813B06356DDD38EE1_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnObservationRemoved(spatialEventData);
		RuntimeObject* L_2 = ___handler0;
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::OnObservationRemoved(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<!0>) */, IMixedRealitySpatialAwarenessObservationHandler_1_tC20E62B4358C8B39FD863ECE3E41CC04425CED8F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseCoreSystem_get_Registrar_m04B64ECA034254C16DCB559481BB972B4824C242_inline (BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41 * __this, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = __this->get_U3CRegistrarU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * BaseCoreSystem_get_ConfigurationProfile_m723756DC3F4A791841C5BB6564DE0A0256ED0E26_inline (BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41 * __this, const RuntimeMethod* method)
{
	{
		// protected BaseMixedRealityProfile ConfigurationProfile { get; set; } = null;
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_0 = __this->get_U3CConfigurationProfileU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m0AF7A14431DDE492EE8B07BAB2AE86C4877476CE_inline (MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * __this, const RuntimeMethod* method)
{
	{
		// get { return observerConfigurations; }
		MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* L_0 = __this->get_observerConfigurations_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialObserverConfiguration_get_ComponentName_mF03FC23EE9C9C8C071621929D5B20000855988EC_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method)
{
	{
		// public string ComponentName => componentName;
		String_t* L_0 = __this->get_componentName_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialObserverConfiguration_get_Priority_m1A0393FCB51FF7241AA0FD293B1873554994AC07_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method)
{
	{
		// public uint Priority => priority;
		uint32_t L_0 = __this->get_priority_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * MixedRealitySpatialObserverConfiguration_get_ObserverProfile_m7D3036686651D44965AA54A3721A5E204FBD15E4_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method)
{
	{
		// public BaseSpatialAwarenessObserverProfile ObserverProfile => observerProfile;
		BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * L_0 = __this->get_observerProfile_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * MixedRealitySpatialObserverConfiguration_get_ComponentType_m500A536AB1E8CBD9C098557C089945F15DFABE01_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method)
{
	{
		// public SystemType ComponentType => componentType;
		SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * L_0 = __this->get_componentType_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CD_inline (SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * __this, const RuntimeMethod* method)
{
	{
		// get { return type; }
		Type_t * L_0 = __this->get_type_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m8638143C2B8F8AF732377D374B3D6A0F4898AC1B_inline (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method)
{
	{
		// public SupportedPlatforms RuntimePlatform => runtimePlatform;
		int32_t L_0 = __this->get_runtimePlatform_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
