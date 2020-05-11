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
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41;
// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_tCDAABC4976E965E99580F716B1B2CDD9CDBE1865;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t7B6E2AF9599FB6847FE71FC6F5DE9AE0BC8ABB50;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tD7C4CF8940EB016597EF8CED76503F0D39A61C53;
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler
struct IMixedRealityTeleportHandler_t6CD4611BFDBBE59ACB07EEDCA88064D18234EE19;
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot
struct IMixedRealityTeleportHotSpot_t0B2192DA76C79CA499A38FD57505D22FB40FDAC6;
// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem
struct MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A;
// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c
struct U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3;
// Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData
struct TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler>
struct EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.WaitUntil
struct WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F;

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_tD7C4CF8940EB016597EF8CED76503F0D39A61C53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTeleportHandler_t6CD4611BFDBBE59ACB07EEDCA88064D18234EE19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTeleportHotSpot_t0B2192DA76C79CA499A38FD57505D22FB40FDAC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTeleportPointer_t1B24406B81F2BE0BC30FD7C74450F45927B7DE5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerResult_t4B4DC471C74944784622658607BD11DF181BB278_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2E9D74FA669F0C0F2068C3DC451B53ECCEBA2010;
IL2CPP_EXTERN_C String_t* _stringLiteral4D1D987217C94047D95253BDAA70342271726366;
IL2CPP_EXTERN_C String_t* _stringLiteral8AAF4DB2092074ABA4A5019AC2944FE5D941200F;
IL2CPP_EXTERN_C String_t* _stringLiteral8DD677400B379971322FFFF46B1B3309A22758D6;
IL2CPP_EXTERN_C String_t* _stringLiteralEFE6B56A9DC4DB2A042FF69F417FF18EE1734789;
IL2CPP_EXTERN_C const RuntimeMethod* BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t6CD4611BFDBBE59ACB07EEDCA88064D18234EE19_mCEA933189CC005E56ECEB7CCBAC53A43F6B68D43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventFunction_1__ctor_m74C1BAE7B6698D72E4C5590ABE80B700DD4C944D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisTeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999_m2CA283D7A32AE933D1878F2E685FAEABE10BF095_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityServiceRegistrar_GetService_TisIMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_m43079822E1AD4702332016C1C55CC63AD56816F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__28_0_m983CE5EA5A16D8751177F3A90DEC2AB43C263CBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__28_1_m546922CFDAE436F1360F6B2CFA19DD884F37B87D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__28_2_m4EAC8EEBDA3E72D50664E5D4754373E52A7CDBDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__28_3_mE8445386CBF66129E4A7BDFFF8CB0E70743CD999_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_Destroy_m050D74E32D431BE08B4893ECDA174E52FC3FB6C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_InitializeInternal_m1950F40946646A1E0CE81E4ED71D6C9C1ECEF0A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_ProcessTeleportationRequest_m6F91E09144421314A7081BAFFAA54D22540007F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_RaiseTeleportCanceled_mFF5C203A1A2760BDD3210EB44BBC973862A8184F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_RaiseTeleportComplete_m9FDDAD52D59C91B3AE32968E4A1CAD614FF7940A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_RaiseTeleportRequest_m75CA707F0D982478C2F8B7E8E3983E0BC506E239_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_RaiseTeleportStarted_m945F292C6906458872514BE87A27A8919762E3DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem__cctor_m48BD27F82FDC4B600B2688E935D8EF44857664BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem__ctor_mFD48A4114CCFC884A43E685CEEE654EBEF99ACF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_set_TeleportDuration_m5F3D4B2F0B40472572866B59B053C55EC69B53DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__28_0_m983CE5EA5A16D8751177F3A90DEC2AB43C263CBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__28_1_m546922CFDAE436F1360F6B2CFA19DD884F37B87D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__28_2_m4EAC8EEBDA3E72D50664E5D4754373E52A7CDBDE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__28_3_mE8445386CBF66129E4A7BDFFF8CB0E70743CD999_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mA659EC66ADD19CB6F89478039B58C90280A644BE_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t48E804B4B798B43CA0CD55ED001EDCBA95A63993 
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


// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem_<>c
struct  U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem_<>c Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem_<>c::<>9
	U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
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


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
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

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
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

// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct  FocusDetails_t72F15A8C8216CDB44311656DCF9F4F51E65128E7 
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<RayDistance>k__BackingField
	float ___U3CRayDistanceU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Point>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Normal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CNormalU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Object>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CObjectU3Ek__BackingField_3;
	// UnityEngine.RaycastHit Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastRaycastHit>k__BackingField
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___U3CLastRaycastHitU3Ek__BackingField_4;
	// UnityEngine.EventSystems.RaycastResult Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastGraphicsRaycastResult>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<PointLocalSpace>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<NormalLocalSpace>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CNormalLocalSpaceU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CRayDistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusDetails_t72F15A8C8216CDB44311656DCF9F4F51E65128E7, ___U3CRayDistanceU3Ek__BackingField_0)); }
	inline float get_U3CRayDistanceU3Ek__BackingField_0() const { return ___U3CRayDistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CRayDistanceU3Ek__BackingField_0() { return &___U3CRayDistanceU3Ek__BackingField_0; }
	inline void set_U3CRayDistanceU3Ek__BackingField_0(float value)
	{
		___U3CRayDistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FocusDetails_t72F15A8C8216CDB44311656DCF9F4F51E65128E7, ___U3CPointU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CPointU3Ek__BackingField_1() const { return ___U3CPointU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CPointU3Ek__BackingField_1() { return &___U3CPointU3Ek__BackingField_1; }
	inline void set_U3CPointU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CPointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNormalU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusDetails_t72F15A8C8216CDB44311656DCF9F4F51E65128E7, ___U3CNormalU3Ek__BackingField_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CNormalU3Ek__BackingField_2() const { return ___U3CNormalU3Ek__BackingField_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CNormalU3Ek__BackingField_2() { return &___U3CNormalU3Ek__BackingField_2; }
	inline void set_U3CNormalU3Ek__BackingField_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CNormalU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusDetails_t72F15A8C8216CDB44311656DCF9F4F51E65128E7, ___U3CObjectU3Ek__BackingField_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CObjectU3Ek__BackingField_3() const { return ___U3CObjectU3Ek__BackingField_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CObjectU3Ek__BackingField_3() { return &___U3CObjectU3Ek__BackingField_3; }
	inline void set_U3CObjectU3Ek__BackingField_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CObjectU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastRaycastHitU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FocusDetails_t72F15A8C8216CDB44311656DCF9F4F51E65128E7, ___U3CLastRaycastHitU3Ek__BackingField_4)); }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  get_U3CLastRaycastHitU3Ek__BackingField_4() const { return ___U3CLastRaycastHitU3Ek__BackingField_4; }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * get_address_of_U3CLastRaycastHitU3Ek__BackingField_4() { return &___U3CLastRaycastHitU3Ek__BackingField_4; }
	inline void set_U3CLastRaycastHitU3Ek__BackingField_4(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  value)
	{
		___U3CLastRaycastHitU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FocusDetails_t72F15A8C8216CDB44311656DCF9F4F51E65128E7, ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() const { return ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() { return &___U3CLastGraphicsRaycastResultU3Ek__BackingField_5; }
	inline void set_U3CLastGraphicsRaycastResultU3Ek__BackingField_5(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CLastGraphicsRaycastResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CPointLocalSpaceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FocusDetails_t72F15A8C8216CDB44311656DCF9F4F51E65128E7, ___U3CPointLocalSpaceU3Ek__BackingField_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CPointLocalSpaceU3Ek__BackingField_6() const { return ___U3CPointLocalSpaceU3Ek__BackingField_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CPointLocalSpaceU3Ek__BackingField_6() { return &___U3CPointLocalSpaceU3Ek__BackingField_6; }
	inline void set_U3CPointLocalSpaceU3Ek__BackingField_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CPointLocalSpaceU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CNormalLocalSpaceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FocusDetails_t72F15A8C8216CDB44311656DCF9F4F51E65128E7, ___U3CNormalLocalSpaceU3Ek__BackingField_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CNormalLocalSpaceU3Ek__BackingField_7() const { return ___U3CNormalLocalSpaceU3Ek__BackingField_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CNormalLocalSpaceU3Ek__BackingField_7() { return &___U3CNormalLocalSpaceU3Ek__BackingField_7; }
	inline void set_U3CNormalLocalSpaceU3Ek__BackingField_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CNormalLocalSpaceU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_t72F15A8C8216CDB44311656DCF9F4F51E65128E7_marshaled_pinvoke
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPointU3Ek__BackingField_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CNormalU3Ek__BackingField_2;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CObjectU3Ek__BackingField_3;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_t72F15A8C8216CDB44311656DCF9F4F51E65128E7_marshaled_com
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPointU3Ek__BackingField_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CNormalU3Ek__BackingField_2;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CObjectU3Ek__BackingField_3;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};

// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem
struct  MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A  : public BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41
{
public:
	// Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::teleportEventData
	TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * ___teleportEventData_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::isTeleporting
	bool ___isTeleporting_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::isProcessingTeleportRequest
	bool ___isProcessingTeleportRequest_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::targetPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::targetRotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetRotation_13;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::eventSystemReference
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___eventSystemReference_14;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Playspace
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___Playspace_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::IsInputSystemEnabled
	bool ___IsInputSystemEnabled_16;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::teleportDuration
	float ___teleportDuration_17;

public:
	inline static int32_t get_offset_of_teleportEventData_9() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A, ___teleportEventData_9)); }
	inline TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * get_teleportEventData_9() const { return ___teleportEventData_9; }
	inline TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 ** get_address_of_teleportEventData_9() { return &___teleportEventData_9; }
	inline void set_teleportEventData_9(TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * value)
	{
		___teleportEventData_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportEventData_9), (void*)value);
	}

	inline static int32_t get_offset_of_isTeleporting_10() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A, ___isTeleporting_10)); }
	inline bool get_isTeleporting_10() const { return ___isTeleporting_10; }
	inline bool* get_address_of_isTeleporting_10() { return &___isTeleporting_10; }
	inline void set_isTeleporting_10(bool value)
	{
		___isTeleporting_10 = value;
	}

	inline static int32_t get_offset_of_isProcessingTeleportRequest_11() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A, ___isProcessingTeleportRequest_11)); }
	inline bool get_isProcessingTeleportRequest_11() const { return ___isProcessingTeleportRequest_11; }
	inline bool* get_address_of_isProcessingTeleportRequest_11() { return &___isProcessingTeleportRequest_11; }
	inline void set_isProcessingTeleportRequest_11(bool value)
	{
		___isProcessingTeleportRequest_11 = value;
	}

	inline static int32_t get_offset_of_targetPosition_12() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A, ___targetPosition_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_targetPosition_12() const { return ___targetPosition_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_targetPosition_12() { return &___targetPosition_12; }
	inline void set_targetPosition_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___targetPosition_12 = value;
	}

	inline static int32_t get_offset_of_targetRotation_13() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A, ___targetRotation_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_targetRotation_13() const { return ___targetRotation_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_targetRotation_13() { return &___targetRotation_13; }
	inline void set_targetRotation_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___targetRotation_13 = value;
	}

	inline static int32_t get_offset_of_eventSystemReference_14() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A, ___eventSystemReference_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_eventSystemReference_14() const { return ___eventSystemReference_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_eventSystemReference_14() { return &___eventSystemReference_14; }
	inline void set_eventSystemReference_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___eventSystemReference_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemReference_14), (void*)value);
	}

	inline static int32_t get_offset_of_Playspace_15() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A, ___Playspace_15)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_Playspace_15() const { return ___Playspace_15; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_Playspace_15() { return &___Playspace_15; }
	inline void set_Playspace_15(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___Playspace_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Playspace_15), (void*)value);
	}

	inline static int32_t get_offset_of_IsInputSystemEnabled_16() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A, ___IsInputSystemEnabled_16)); }
	inline bool get_IsInputSystemEnabled_16() const { return ___IsInputSystemEnabled_16; }
	inline bool* get_address_of_IsInputSystemEnabled_16() { return &___IsInputSystemEnabled_16; }
	inline void set_IsInputSystemEnabled_16(bool value)
	{
		___IsInputSystemEnabled_16 = value;
	}

	inline static int32_t get_offset_of_teleportDuration_17() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A, ___teleportDuration_17)); }
	inline float get_teleportDuration_17() const { return ___teleportDuration_17; }
	inline float* get_address_of_teleportDuration_17() { return &___teleportDuration_17; }
	inline void set_teleportDuration_17(float value)
	{
		___teleportDuration_17 = value;
	}
};

struct MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportRequestHandler
	EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * ___OnTeleportRequestHandler_18;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportStartedHandler
	EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * ___OnTeleportStartedHandler_19;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportCompletedHandler
	EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * ___OnTeleportCompletedHandler_20;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportCanceledHandler
	EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * ___OnTeleportCanceledHandler_21;

public:
	inline static int32_t get_offset_of_OnTeleportRequestHandler_18() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_StaticFields, ___OnTeleportRequestHandler_18)); }
	inline EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * get_OnTeleportRequestHandler_18() const { return ___OnTeleportRequestHandler_18; }
	inline EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 ** get_address_of_OnTeleportRequestHandler_18() { return &___OnTeleportRequestHandler_18; }
	inline void set_OnTeleportRequestHandler_18(EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * value)
	{
		___OnTeleportRequestHandler_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportRequestHandler_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnTeleportStartedHandler_19() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_StaticFields, ___OnTeleportStartedHandler_19)); }
	inline EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * get_OnTeleportStartedHandler_19() const { return ___OnTeleportStartedHandler_19; }
	inline EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 ** get_address_of_OnTeleportStartedHandler_19() { return &___OnTeleportStartedHandler_19; }
	inline void set_OnTeleportStartedHandler_19(EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * value)
	{
		___OnTeleportStartedHandler_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportStartedHandler_19), (void*)value);
	}

	inline static int32_t get_offset_of_OnTeleportCompletedHandler_20() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_StaticFields, ___OnTeleportCompletedHandler_20)); }
	inline EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * get_OnTeleportCompletedHandler_20() const { return ___OnTeleportCompletedHandler_20; }
	inline EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 ** get_address_of_OnTeleportCompletedHandler_20() { return &___OnTeleportCompletedHandler_20; }
	inline void set_OnTeleportCompletedHandler_20(EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * value)
	{
		___OnTeleportCompletedHandler_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportCompletedHandler_20), (void*)value);
	}

	inline static int32_t get_offset_of_OnTeleportCanceledHandler_21() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_StaticFields, ___OnTeleportCanceledHandler_21)); }
	inline EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * get_OnTeleportCanceledHandler_21() const { return ___OnTeleportCanceledHandler_21; }
	inline EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 ** get_address_of_OnTeleportCanceledHandler_21() { return &___OnTeleportCanceledHandler_21; }
	inline void set_OnTeleportCanceledHandler_21(EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * value)
	{
		___OnTeleportCanceledHandler_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportCanceledHandler_21), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData
struct  TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999  : public GenericBaseEventData_tF7A8347659841F4C7134C28074F9CCC3688BA49D
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::<HotSpot>k__BackingField
	RuntimeObject* ___U3CHotSpotU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999, ___U3CPointerU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_4() const { return ___U3CPointerU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_4() { return &___U3CPointerU3Ek__BackingField_4; }
	inline void set_U3CPointerU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHotSpotU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999, ___U3CHotSpotU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CHotSpotU3Ek__BackingField_5() const { return ___U3CHotSpotU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CHotSpotU3Ek__BackingField_5() { return &___U3CHotSpotU3Ek__BackingField_5; }
	inline void set_U3CHotSpotU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CHotSpotU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHotSpotU3Ek__BackingField_5), (void*)value);
	}
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


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler>
struct  EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0  : public MulticastDelegate_t
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


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
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
	List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * ___m_SystemInputModules_4;
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
	inline List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * value)
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
	List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * ___s_RaycastComparer_14;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::<>f__mgU24cache0
	Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * ___U3CU3Ef__mgU24cache0_15;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_15() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___U3CU3Ef__mgU24cache0_15)); }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * get_U3CU3Ef__mgU24cache0_15() const { return ___U3CU3Ef__mgU24cache0_15; }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 ** get_address_of_U3CU3Ef__mgU24cache0_15() { return &___U3CU3Ef__mgU24cache0_15; }
	inline void set_U3CU3Ef__mgU24cache0_15(Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * value)
	{
		___U3CU3Ef__mgU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_15), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_1__ctor_mDDE8D98B79E51B465CA86836F9AD0DF0FB00314A_gshared (EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B436B848D80B3DA7931E611A9AAE2428E5DA8DA_gshared (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * p0, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCoreSystem__ctor_m02E2EEF1017481C5A7F2530877DD9FED02396A13 (BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41 * __this, RuntimeObject* p0, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_mB5ABF716215A9D4E5204D4E3B9EDB034A2A6E618 (BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_InitializeInternal_m1950F40946646A1E0CE81E4ED71D6C9C1ECEF0A4 (MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportEventData__ctor_m05DF1C11C396F587B9ADA3D8DCCC61C7A8CEAAAB (TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Destroy_m02DB9AE717BCF370DB7873D46CE4E8AFA6A46667 (BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Register(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Register_m6D1147F4D7E41242E8CF02E70E26F3DFBBAEBA42 (BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Unregister(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Unregister_mD66EE653C21F29DA250562EB737B4518B87BF064 (BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::Initialize(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportEventData_Initialize_m1E0966B82C075C2CEB1FC535D2639469A1E4EC04 (TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * __this, RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::ProcessTeleportationRequest(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_ProcessTeleportationRequest_m6F91E09144421314A7081BAFFAA54D22540007F1 (MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A * __this, TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * ___eventData0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::get_Pointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_Pointer_mA167D0D4457B62B99125EFB1BA6380F9774397D8 (TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  FocusDetails_get_Point_m2959D1AF5F4A848A2483114341B17517737A24B2 (FocusDetails_t72F15A8C8216CDB44311656DCF9F4F51E65128E7 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::get_HotSpot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_HotSpot_m4F26D3B99203C8890F89EB51B5A93E82FF3CE988 (TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m433D292B2A38A5A4DEC7DCAE0A8BEAC5C3B2D1DD (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, float p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportComplete(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportComplete_m9FDDAD52D59C91B3AE32968E4A1CAD614FF7940A (MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m74C1BAE7B6698D72E4C5590ABE80B700DD4C944D (EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_mDDE8D98B79E51B465CA86836F9AD0DF0FB00314A_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2626701BC7BA6402FC1D6C09553EA1EE033FC555 (U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData>(UnityEngine.EventSystems.BaseEventData)
inline TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * ExecuteEvents_ValidateEventData_TisTeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999_m2CA283D7A32AE933D1878F2E685FAEABE10BF095 (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * p0, const RuntimeMethod* method)
{
	return ((  TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * (*) (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B436B848D80B3DA7931E611A9AAE2428E5DA8DA_gshared)(p0, method);
}
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
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem__ctor_mFD48A4114CCFC884A43E685CEEE654EBEF99ACF7 (MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A * __this, RuntimeObject* ___registrar0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___playspace1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem__ctor_mFD48A4114CCFC884A43E685CEEE654EBEF99ACF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 targetPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_targetPosition_12(L_0);
		// private Vector3 targetRotation = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_targetRotation_13(L_1);
		// private float teleportDuration = 0.25f;
		__this->set_teleportDuration_17((0.25f));
		// Transform playspace) : base(registrar, null) // Teleport system does not use a profile
		RuntimeObject* L_2 = ___registrar0;
		BaseCoreSystem__ctor_m02E2EEF1017481C5A7F2530877DD9FED02396A13(__this, L_2, (BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 *)NULL, /*hidden argument*/NULL);
		// if (registrar == null)
		RuntimeObject* L_3 = ___registrar0;
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.LogError("The MixedRealityTeleportSystem object requires a valid IMixedRealityServiceRegistrar instance.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral2E9D74FA669F0C0F2068C3DC451B53ECCEBA2010, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// IsInputSystemEnabled = (registrar.GetService<IMixedRealityInputSystem>(showLogs: false) != null);
		RuntimeObject* L_4 = ___registrar0;
		NullCheck(L_4);
		RuntimeObject* L_5 = GenericInterfaceFuncInvoker2< RuntimeObject*, String_t*, bool >::Invoke(IMixedRealityServiceRegistrar_GetService_TisIMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_m43079822E1AD4702332016C1C55CC63AD56816F0_RuntimeMethod_var, L_4, (String_t*)NULL, (bool)0);
		__this->set_IsInputSystemEnabled_16((bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0));
		// if (playspace == null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ___playspace1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		// Debug.LogError("The MixedRealityTeleportSystem object requires a valid playspace Transform.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral8DD677400B379971322FFFF46B1B3309A22758D6, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// Playspace = playspace;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = ___playspace1;
		__this->set_Playspace_15(L_8);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Initialize_m9597989E17B6ABD27773BCA72596299D36C2721B (MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A * __this, const RuntimeMethod* method)
{
	{
		// base.Initialize();
		BaseService_Initialize_mB5ABF716215A9D4E5204D4E3B9EDB034A2A6E618(__this, /*hidden argument*/NULL);
		// InitializeInternal();
		MixedRealityTeleportSystem_InitializeInternal_m1950F40946646A1E0CE81E4ED71D6C9C1ECEF0A4(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_InitializeInternal_m1950F40946646A1E0CE81E4ED71D6C9C1ECEF0A4 (MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_InitializeInternal_m1950F40946646A1E0CE81E4ED71D6C9C1ECEF0A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// teleportEventData = new TeleportEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_0 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_1 = (TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 *)il2cpp_codegen_object_new(TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999_il2cpp_TypeInfo_var);
		TeleportEventData__ctor_m05DF1C11C396F587B9ADA3D8DCCC61C7A8CEAAAB(L_1, L_0, /*hidden argument*/NULL);
		__this->set_teleportEventData_9(L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Destroy_m050D74E32D431BE08B4893ECDA174E52FC3FB6C9 (MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_Destroy_m050D74E32D431BE08B4893ECDA174E52FC3FB6C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Destroy();
		BaseService_Destroy_m02DB9AE717BCF370DB7873D46CE4E8AFA6A46667(__this, /*hidden argument*/NULL);
		// if (eventSystemReference != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_eventSystemReference_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (Application.isEditor)
		bool L_2 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// Object.DestroyImmediate(eventSystemReference);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_eventSystemReference_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0027:
	{
		// Object.Destroy(eventSystemReference);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_eventSystemReference_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_4, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Register(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Register_m0BD8DBD8834535D39E09D14268745A226EA07138 (MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, const RuntimeMethod* method)
{
	{
		// base.Register(listener);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___listener0;
		BaseEventSystem_Register_m6D1147F4D7E41242E8CF02E70E26F3DFBBAEBA42(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Unregister(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Unregister_m755EEE19DCA5191BD35BE2BB8D108AB989F6C484 (MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, const RuntimeMethod* method)
{
	{
		// base.Unregister(listener);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___listener0;
		BaseEventSystem_Unregister_mD66EE653C21F29DA250562EB737B4518B87BF064(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::get_TeleportDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityTeleportSystem_get_TeleportDuration_m1B7005B1B9482B35C5366DC774C6D6CD2F2785D5 (MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A * __this, const RuntimeMethod* method)
{
	{
		// get { return teleportDuration; }
		float L_0 = __this->get_teleportDuration_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::set_TeleportDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_set_TeleportDuration_m5F3D4B2F0B40472572866B59B053C55EC69B53DF (MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_set_TeleportDuration_m5F3D4B2F0B40472572866B59B053C55EC69B53DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isProcessingTeleportRequest)
		bool L_0 = __this->get_isProcessingTeleportRequest_11();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("Couldn't change teleport duration. Teleport in progress.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralEFE6B56A9DC4DB2A042FF69F417FF18EE1734789, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// teleportDuration = value;
		float L_1 = ___value0;
		__this->set_teleportDuration_17(L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportRequest(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportRequest_m75CA707F0D982478C2F8B7E8E3983E0BC506E239 (MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_RaiseTeleportRequest_m75CA707F0D982478C2F8B7E8E3983E0BC506E239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// teleportEventData.Initialize(pointer, hotSpot);
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_0 = __this->get_teleportEventData_9();
		RuntimeObject* L_1 = ___pointer0;
		RuntimeObject* L_2 = ___hotSpot1;
		NullCheck(L_0);
		TeleportEventData_Initialize_m1E0966B82C075C2CEB1FC535D2639469A1E4EC04(L_0, L_1, L_2, /*hidden argument*/NULL);
		// HandleEvent(teleportEventData, OnTeleportRequestHandler);
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_3 = __this->get_teleportEventData_9();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_il2cpp_TypeInfo_var);
		EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * L_4 = ((MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_il2cpp_TypeInfo_var))->get_OnTeleportRequestHandler_18();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t6CD4611BFDBBE59ACB07EEDCA88064D18234EE19_mCEA933189CC005E56ECEB7CCBAC53A43F6B68D43_RuntimeMethod_var, __this, L_3, L_4);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportStarted_m945F292C6906458872514BE87A27A8919762E3DC (MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_RaiseTeleportStarted_m945F292C6906458872514BE87A27A8919762E3DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isTeleporting)
		bool L_0 = __this->get_isTeleporting_10();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("Teleportation already in progress");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral8AAF4DB2092074ABA4A5019AC2944FE5D941200F, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// isTeleporting = true;
		__this->set_isTeleporting_10((bool)1);
		// teleportEventData.Initialize(pointer, hotSpot);
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_1 = __this->get_teleportEventData_9();
		RuntimeObject* L_2 = ___pointer0;
		RuntimeObject* L_3 = ___hotSpot1;
		NullCheck(L_1);
		TeleportEventData_Initialize_m1E0966B82C075C2CEB1FC535D2639469A1E4EC04(L_1, L_2, L_3, /*hidden argument*/NULL);
		// HandleEvent(teleportEventData, OnTeleportStartedHandler);
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_4 = __this->get_teleportEventData_9();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_il2cpp_TypeInfo_var);
		EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * L_5 = ((MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_il2cpp_TypeInfo_var))->get_OnTeleportStartedHandler_19();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t6CD4611BFDBBE59ACB07EEDCA88064D18234EE19_mCEA933189CC005E56ECEB7CCBAC53A43F6B68D43_RuntimeMethod_var, __this, L_4, L_5);
		// ProcessTeleportationRequest(teleportEventData);
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_6 = __this->get_teleportEventData_9();
		MixedRealityTeleportSystem_ProcessTeleportationRequest_m6F91E09144421314A7081BAFFAA54D22540007F1(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportComplete(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportComplete_m9FDDAD52D59C91B3AE32968E4A1CAD614FF7940A (MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_RaiseTeleportComplete_m9FDDAD52D59C91B3AE32968E4A1CAD614FF7940A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isTeleporting)
		bool L_0 = __this->get_isTeleporting_10();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("No Active Teleportation in progress.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral4D1D987217C94047D95253BDAA70342271726366, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// teleportEventData.Initialize(pointer, hotSpot);
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_1 = __this->get_teleportEventData_9();
		RuntimeObject* L_2 = ___pointer0;
		RuntimeObject* L_3 = ___hotSpot1;
		NullCheck(L_1);
		TeleportEventData_Initialize_m1E0966B82C075C2CEB1FC535D2639469A1E4EC04(L_1, L_2, L_3, /*hidden argument*/NULL);
		// HandleEvent(teleportEventData, OnTeleportCompletedHandler);
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_4 = __this->get_teleportEventData_9();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_il2cpp_TypeInfo_var);
		EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * L_5 = ((MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_il2cpp_TypeInfo_var))->get_OnTeleportCompletedHandler_20();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t6CD4611BFDBBE59ACB07EEDCA88064D18234EE19_mCEA933189CC005E56ECEB7CCBAC53A43F6B68D43_RuntimeMethod_var, __this, L_4, L_5);
		// isTeleporting = false;
		__this->set_isTeleporting_10((bool)0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportCanceled_mFF5C203A1A2760BDD3210EB44BBC973862A8184F (MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_RaiseTeleportCanceled_mFF5C203A1A2760BDD3210EB44BBC973862A8184F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// teleportEventData.Initialize(pointer, hotSpot);
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_0 = __this->get_teleportEventData_9();
		RuntimeObject* L_1 = ___pointer0;
		RuntimeObject* L_2 = ___hotSpot1;
		NullCheck(L_0);
		TeleportEventData_Initialize_m1E0966B82C075C2CEB1FC535D2639469A1E4EC04(L_0, L_1, L_2, /*hidden argument*/NULL);
		// HandleEvent(teleportEventData, OnTeleportCanceledHandler);
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_3 = __this->get_teleportEventData_9();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_il2cpp_TypeInfo_var);
		EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * L_4 = ((MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_il2cpp_TypeInfo_var))->get_OnTeleportCanceledHandler_21();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t6CD4611BFDBBE59ACB07EEDCA88064D18234EE19_mCEA933189CC005E56ECEB7CCBAC53A43F6B68D43_RuntimeMethod_var, __this, L_3, L_4);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::ProcessTeleportationRequest(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_ProcessTeleportationRequest_m6F91E09144421314A7081BAFFAA54D22540007F1 (MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A * __this, TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_ProcessTeleportationRequest_m6F91E09144421314A7081BAFFAA54D22540007F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	float V_2 = 0.0f;
	FocusDetails_t72F15A8C8216CDB44311656DCF9F4F51E65128E7  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// isProcessingTeleportRequest = true;
		__this->set_isProcessingTeleportRequest_11((bool)1);
		// var cameraParent = Playspace;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_Playspace_15();
		V_0 = L_0;
		// targetRotation = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_targetRotation_13(L_1);
		// var teleportPointer = eventData.Pointer as IMixedRealityTeleportPointer;
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_2 = ___eventData0;
		NullCheck(L_2);
		RuntimeObject* L_3 = TeleportEventData_get_Pointer_mA167D0D4457B62B99125EFB1BA6380F9774397D8(L_2, /*hidden argument*/NULL);
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IMixedRealityTeleportPointer_t1B24406B81F2BE0BC30FD7C74450F45927B7DE5E_il2cpp_TypeInfo_var));
		// if (teleportPointer != null)
		RuntimeObject* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// targetRotation.y = teleportPointer.PointerOrientation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_5 = __this->get_address_of_targetRotation_13();
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = InterfaceFuncInvoker0< float >::Invoke(3 /* System.Single Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer::get_PointerOrientation() */, IMixedRealityTeleportPointer_t1B24406B81F2BE0BC30FD7C74450F45927B7DE5E_il2cpp_TypeInfo_var, L_6);
		L_5->set_y_3(L_7);
	}

IL_0039:
	{
		// targetPosition = eventData.Pointer.Result.Details.Point;
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_8 = ___eventData0;
		NullCheck(L_8);
		RuntimeObject* L_9 = TeleportEventData_get_Pointer_mA167D0D4457B62B99125EFB1BA6380F9774397D8(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		RuntimeObject* L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_tD7C4CF8940EB016597EF8CED76503F0D39A61C53_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		FocusDetails_t72F15A8C8216CDB44311656DCF9F4F51E65128E7  L_11 = InterfaceFuncInvoker0< FocusDetails_t72F15A8C8216CDB44311656DCF9F4F51E65128E7  >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_Details() */, IPointerResult_t4B4DC471C74944784622658607BD11DF181BB278_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = FocusDetails_get_Point_m2959D1AF5F4A848A2483114341B17517737A24B2((FocusDetails_t72F15A8C8216CDB44311656DCF9F4F51E65128E7 *)(&V_3), /*hidden argument*/NULL);
		__this->set_targetPosition_12(L_12);
		// if (eventData.HotSpot != null)
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_13 = ___eventData0;
		NullCheck(L_13);
		RuntimeObject* L_14 = TeleportEventData_get_HotSpot_m4F26D3B99203C8890F89EB51B5A93E82FF3CE988(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0093;
		}
	}
	{
		// targetPosition = eventData.HotSpot.Position;
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_15 = ___eventData0;
		NullCheck(L_15);
		RuntimeObject* L_16 = TeleportEventData_get_HotSpot_m4F26D3B99203C8890F89EB51B5A93E82FF3CE988(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(0 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot::get_Position() */, IMixedRealityTeleportHotSpot_t0B2192DA76C79CA499A38FD57505D22FB40FDAC6_il2cpp_TypeInfo_var, L_16);
		__this->set_targetPosition_12(L_17);
		// if (eventData.HotSpot.OverrideTargetOrientation)
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_18 = ___eventData0;
		NullCheck(L_18);
		RuntimeObject* L_19 = TeleportEventData_get_HotSpot_m4F26D3B99203C8890F89EB51B5A93E82FF3CE988(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_20 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot::get_OverrideTargetOrientation() */, IMixedRealityTeleportHotSpot_t0B2192DA76C79CA499A38FD57505D22FB40FDAC6_il2cpp_TypeInfo_var, L_19);
		if (!L_20)
		{
			goto IL_0093;
		}
	}
	{
		// targetRotation.y = eventData.HotSpot.TargetOrientation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_21 = __this->get_address_of_targetRotation_13();
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_22 = ___eventData0;
		NullCheck(L_22);
		RuntimeObject* L_23 = TeleportEventData_get_HotSpot_m4F26D3B99203C8890F89EB51B5A93E82FF3CE988(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		float L_24 = InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotSpot::get_TargetOrientation() */, IMixedRealityTeleportHotSpot_t0B2192DA76C79CA499A38FD57505D22FB40FDAC6_il2cpp_TypeInfo_var, L_23);
		L_21->set_y_3(L_24);
	}

IL_0093:
	{
		// float height = targetPosition.y;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_25 = __this->get_address_of_targetPosition_12();
		float L_26 = L_25->get_y_3();
		V_2 = L_26;
		// targetPosition -= CameraCache.Main.transform.position - cameraParent.position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = __this->get_targetPosition_12();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_28 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = V_0;
		NullCheck(L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_30, L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_27, L_33, /*hidden argument*/NULL);
		__this->set_targetPosition_12(L_34);
		// targetPosition.y = height;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_35 = __this->get_address_of_targetPosition_12();
		float L_36 = V_2;
		L_35->set_y_3(L_36);
		// cameraParent.position = targetPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = __this->get_targetPosition_12();
		NullCheck(L_37);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_37, L_38, /*hidden argument*/NULL);
		// cameraParent.RotateAround(CameraCache.Main.transform.position, Vector3.up, targetRotation.y - CameraCache.Main.transform.eulerAngles.y);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_39 = V_0;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_40 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_41, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_44 = __this->get_address_of_targetRotation_13();
		float L_45 = L_44->get_y_3();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_46 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_47 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_47, /*hidden argument*/NULL);
		float L_49 = L_48.get_y_3();
		NullCheck(L_39);
		Transform_RotateAround_m433D292B2A38A5A4DEC7DCAE0A8BEAC5C3B2D1DD(L_39, L_42, L_43, ((float)il2cpp_codegen_subtract((float)L_45, (float)L_49)), /*hidden argument*/NULL);
		// isProcessingTeleportRequest = false;
		__this->set_isProcessingTeleportRequest_11((bool)0);
		// RaiseTeleportComplete(eventData.Pointer, eventData.HotSpot);
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_50 = ___eventData0;
		NullCheck(L_50);
		RuntimeObject* L_51 = TeleportEventData_get_Pointer_mA167D0D4457B62B99125EFB1BA6380F9774397D8(L_50, /*hidden argument*/NULL);
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_52 = ___eventData0;
		NullCheck(L_52);
		RuntimeObject* L_53 = TeleportEventData_get_HotSpot_m4F26D3B99203C8890F89EB51B5A93E82FF3CE988(L_52, /*hidden argument*/NULL);
		MixedRealityTeleportSystem_RaiseTeleportComplete_m9FDDAD52D59C91B3AE32968E4A1CAD614FF7940A(__this, L_51, L_53, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem__cctor_m48BD27F82FDC4B600B2688E935D8EF44857664BC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem__cctor_m48BD27F82FDC4B600B2688E935D8EF44857664BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportRequestHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportRequest(casted);
		//     };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3_il2cpp_TypeInfo_var);
		U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3 * L_0 = ((U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * L_1 = (EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 *)il2cpp_codegen_object_new(EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m74C1BAE7B6698D72E4C5590ABE80B700DD4C944D(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__28_0_m983CE5EA5A16D8751177F3A90DEC2AB43C263CBC_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m74C1BAE7B6698D72E4C5590ABE80B700DD4C944D_RuntimeMethod_var);
		((MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_il2cpp_TypeInfo_var))->set_OnTeleportRequestHandler_18(L_1);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportStartedHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportStarted(casted);
		//     };
		U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3 * L_2 = ((U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * L_3 = (EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 *)il2cpp_codegen_object_new(EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m74C1BAE7B6698D72E4C5590ABE80B700DD4C944D(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__28_1_m546922CFDAE436F1360F6B2CFA19DD884F37B87D_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m74C1BAE7B6698D72E4C5590ABE80B700DD4C944D_RuntimeMethod_var);
		((MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_il2cpp_TypeInfo_var))->set_OnTeleportStartedHandler_19(L_3);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportCompletedHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportCompleted(casted);
		//     };
		U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3 * L_4 = ((U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * L_5 = (EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 *)il2cpp_codegen_object_new(EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m74C1BAE7B6698D72E4C5590ABE80B700DD4C944D(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__28_2_m4EAC8EEBDA3E72D50664E5D4754373E52A7CDBDE_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m74C1BAE7B6698D72E4C5590ABE80B700DD4C944D_RuntimeMethod_var);
		((MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_il2cpp_TypeInfo_var))->set_OnTeleportCompletedHandler_20(L_5);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportCanceledHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportCanceled(casted);
		//     };
		U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3 * L_6 = ((U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 * L_7 = (EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0 *)il2cpp_codegen_object_new(EventFunction_1_tF66ACCFCE58D4F9F1D29446D094EE6C2137325D0_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m74C1BAE7B6698D72E4C5590ABE80B700DD4C944D(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__28_3_mE8445386CBF66129E4A7BDFFF8CB0E70743CD999_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m74C1BAE7B6698D72E4C5590ABE80B700DD4C944D_RuntimeMethod_var);
		((MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t4B5DD01BE3A94BF1457C13EEF6FAA2486E95E53A_il2cpp_TypeInfo_var))->set_OnTeleportCanceledHandler_21(L_7);
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
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA659EC66ADD19CB6F89478039B58C90280A644BE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mA659EC66ADD19CB6F89478039B58C90280A644BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3 * L_0 = (U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3 *)il2cpp_codegen_object_new(U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2626701BC7BA6402FC1D6C09553EA1EE033FC555(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2626701BC7BA6402FC1D6C09553EA1EE033FC555 (U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem_<>c::<.cctor>b__28_0(Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__28_0_m983CE5EA5A16D8751177F3A90DEC2AB43C263CBC (U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3 * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__28_0_m983CE5EA5A16D8751177F3A90DEC2AB43C263CBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999_m2CA283D7A32AE933D1878F2E685FAEABE10BF095(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisTeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999_m2CA283D7A32AE933D1878F2E685FAEABE10BF095_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportRequest(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler::OnTeleportRequest(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t6CD4611BFDBBE59ACB07EEDCA88064D18234EE19_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem_<>c::<.cctor>b__28_1(Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__28_1_m546922CFDAE436F1360F6B2CFA19DD884F37B87D (U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3 * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__28_1_m546922CFDAE436F1360F6B2CFA19DD884F37B87D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999_m2CA283D7A32AE933D1878F2E685FAEABE10BF095(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisTeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999_m2CA283D7A32AE933D1878F2E685FAEABE10BF095_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler::OnTeleportStarted(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t6CD4611BFDBBE59ACB07EEDCA88064D18234EE19_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem_<>c::<.cctor>b__28_2(Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__28_2_m4EAC8EEBDA3E72D50664E5D4754373E52A7CDBDE (U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3 * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__28_2_m4EAC8EEBDA3E72D50664E5D4754373E52A7CDBDE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999_m2CA283D7A32AE933D1878F2E685FAEABE10BF095(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisTeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999_m2CA283D7A32AE933D1878F2E685FAEABE10BF095_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler::OnTeleportCompleted(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t6CD4611BFDBBE59ACB07EEDCA88064D18234EE19_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem_<>c::<.cctor>b__28_3(Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__28_3_mE8445386CBF66129E4A7BDFFF8CB0E70743CD999 (U3CU3Ec_tCF1C92E4F0F30B82D98CA44BBEF421E5E070BCB3 * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__28_3_mE8445386CBF66129E4A7BDFFF8CB0E70743CD999_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999_m2CA283D7A32AE933D1878F2E685FAEABE10BF095(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisTeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999_m2CA283D7A32AE933D1878F2E685FAEABE10BF095_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportCanceled(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_t4761192426BDFA98B67BAA60C7AFBBF0086CC999 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler::OnTeleportCanceled(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t6CD4611BFDBBE59ACB07EEDCA88064D18234EE19_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
