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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseDataProvider
struct BaseDataProvider_t2C66AC3F1D45196D4C589CFEBFAF20004EAF2ED7;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8;
// Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundarySystem
struct IMixedRealityBoundarySystem_tCBA62DEF21603B4400B8B808242A6C650E7F8C4F;
// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_t730676E2834214BB1B8A69370446D87E52FF9092;
// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem
struct IMixedRealityDiagnosticsSystem_t60A83629BE6315E6FE52306F971A6EE38463C952;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467;
// Microsoft.MixedReality.Toolkit.IMixedRealityService
struct IMixedRealityService_t786A23BE7C43913C011325FB43AED3E720F6E9FB;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t7B6E2AF9599FB6847FE71FC6F5DE9AE0BC8ABB50;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationSystem
struct IMixedRealityDictationSystem_tEDA518BC97FB4BF80FB0D367503261384B7B5558;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tE0E928A8AFA1825E798A69EB5D4BE993B8227ED2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tD7C4CF8940EB016597EF8CED76503F0D39A61C53;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechSystem
struct IMixedRealitySpeechSystem_tEAE0ADE428A6E50AD4973E8152D53B982DD20B98;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile
struct MixedRealityControllerMappingProfile_t254FF0C8E28DA6341E36D23A9DD832B11ACCE9DB;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_tDF62A9AB730F36F2AF8454D32ECF008D046E899D;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct MixedRealityHandTrackingProfile_tFA3A9118040918D9E221EEB94786E3A333A12E36;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t4CE915FD59B3CEE0DDE18E9BF5922E5628DCCD3A;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile
struct MixedRealityInputActionsProfile_t5D05F56AB25081BDE6B4697C8DF609F2A458EA12;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[]
struct MixedRealityInputDataProviderConfigurationU5BU5D_t621D14E0DCEE987398F574E5335D55FDBDFBE426;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile
struct MixedRealityPointerProfile_t006E66A5D042614269E3195CA2042A3AC964671E;
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD;
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[]
struct SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3;
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile
struct MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258;
// Microsoft.MixedReality.Toolkit.MixedRealityRegisteredServiceProvidersProfile
struct MixedRealityRegisteredServiceProvidersProfile_tDB4B24605DAF2F884E7BB57E2A9E24AD8082B586;
// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47;
// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile
struct MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_tE4BAFE2B5651E0CF0E856FD73C51FE942284CF4E;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7;
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportSystem
struct IMixedRealityTeleportSystem_t2B968A7033751E001274E541108F0772C4029C8E;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider
struct WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c
struct U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE;
// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider
struct WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>
struct Dictionary_2_t800AAE737FB312BBA9170905905D74ED86BF5F59;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.List`1<System.Globalization.CultureInfo>
struct List_1_t74F59DD36FAE0CFB087612565C42CAD359647832;
// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>>
struct List_1_t8665C2870C9F0DA5B6D62AF0F0323E984195D9CC;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<UnityEngine.AudioClip>>
struct Func_2_t9142D625393521B287A80A741A754EC358C5C5DF;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.AudioClip>
struct TaskFactory_1_tBBAE40E1A2935792A528C0C29F0A2ACDEFDAF462;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t1359D75350E9D976BFA28AD96E417450DE277673;
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip>
struct Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.WaitUntil
struct WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F;
// UnityEngine.Windows.Speech.DictationRecognizer
struct DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate
struct DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler
struct DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate
struct DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate
struct DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87;
// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C;
// UnityEngine.Windows.Speech.PhraseRecognizer
struct PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F;
// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0;
// UnityEngine.Windows.Speech.SemanticMeaning[]
struct SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral043544CCA4B2803EA7424D747276922CA441C1F9;
IL2CPP_EXTERN_C String_t* _stringLiteral0B759AD845C0355947EA875C903DD48C3EED47E0;
IL2CPP_EXTERN_C String_t* _stringLiteral3DA53827DA45EEF8CE51E69F81BFF90A6864DA69;
IL2CPP_EXTERN_C String_t* _stringLiteral494AC3D8C4EEAECDF41D31C8677620154D322DE6;
IL2CPP_EXTERN_C String_t* _stringLiteral6CF5E30AB1D5042BC2499F17DC8EC6FC604FEEE3;
IL2CPP_EXTERN_C String_t* _stringLiteral8448B71DECE19EE2AD3DEAAC5CE97CA3501F67B6;
IL2CPP_EXTERN_C String_t* _stringLiteral8E8C95F1F8BE0FB75474F5AC7AEA8661848072B6;
IL2CPP_EXTERN_C String_t* _stringLiteral94C67DA09E3C3949480AC8458C225636B0DD8B77;
IL2CPP_EXTERN_C String_t* _stringLiteralD42A426DCC3C853B65741017F69E8B4FF3533311;
IL2CPP_EXTERN_C String_t* _stringLiteralD8259643549B7FA2D109DA0AFC1E9486946DC0C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE8FC5A5EAF7157371226B78F77C919CAD83E741A;
IL2CPP_EXTERN_C String_t* _stringLiteralEF4630D5403BE67FC48ED06A577179A2198B317E;
IL2CPP_EXTERN_C String_t* _stringLiteralFF448159DC2D8E7C27FB42F3D195D5863191E18B;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_TisU3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13_m77D9C8675BB71625C9881F4C6E9851C072316554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mA48D98A1A0551E8B40C8CFE8DCA405F2583BA6C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3546DBB6B478B7DB18842DC0782B98EBC9D05EE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mD5596BF881B6EC3D7675495E22695C03E96D0101_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m6D0E84B2F66A998AE916997EB96A356441721D76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13_m974B24B91917D5D98A603145587D0E175ADA0657_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mA471503E5B53C6386B364975800C30B1CAC3F267_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_TisU3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE_m0027BE8454A225CC4DC66A41BCBC9E963CA350E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE_mACD959048E0BEFAAB64A7AF3235BADEC66CE3B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8_mEEA6E381616F1BBC1B967D380C91272A08F8DDE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14_mEC43BCB77FBA06BB0419EBAF4E95E02F9BBF2C89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307_m57731DA77A5FCC5404C6C80E7E4DEC03F080D7AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8_mF79397CAEB945141490F59C1BD206EE99A665923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307_m36C69B770CEA16E8B0FF3EF5775C20999581B7C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14_m68FCE75711F21611A5A26B9A22AB7A26A7BACACB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__0_0_m23DE4E969F2784FC9BA21403A9FDF7E19FB44649_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__0_1_m1C03C46B118BE1156878635D1D8EA7666C57EE39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__0_2_mE0048D6F6879093B6017BB04604AB72FAE428447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__0_3_mA228641EF5CDC00551286593AE8873D6B338A749_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mB73F8B7863759593D8C29CED21711FC64CE1D283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationError_m8B37F8CAE58CEDCFA7AC40D3BDC3C47CA0C13456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mAAAA8DDD2F3A94F3C06C5457AE27BACB8FEDF238_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsDictationInputProvider_DictationRecognizer_DictationResult_m5EBBA30C99CA9F33A09DBD107141DA17794D3CA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m76FA2711269633BCD327F0C53648CAE4F576877F_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t U3CDisableU3Ed__21_MoveNext_m47A33CB63BF9DB152DA4E153277D4AFA0C275E7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartRecordingAsyncU3Ed__24_MoveNext_m1049AB8081E5753F324230DC7DBD5BA6F184387C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartRecordingU3Ed__23_MoveNext_m775BFF294DD41099A424FDDD06B86D0AA538591D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStopRecordingAsyncU3Ed__26_MoveNext_mBD85A2A675FF659A6D2A85D20DFE3F82EB3DECC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStopRecordingAsyncU3Ed__26_SetStateMachine_m2DEB172373D04B0A93904EA906CB402DE296C9E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStopRecordingU3Ed__25_MoveNext_mDB280324AC77948251889B37780FB2E2DB7FFCA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_ctorU3Eb__0_2_mE0048D6F6879093B6017BB04604AB72FAE428447_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_ctorU3Eb__0_3_mA228641EF5CDC00551286593AE8873D6B338A749_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m3A0FE450C38C04A83E5CB2EC3B0722AF4ECD0AAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_Destroy_mCD943619CA4EBE4FF9B7839A8D7C11FE5B5863D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mB73F8B7863759593D8C29CED21711FC64CE1D283_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_DictationRecognizer_DictationError_m8B37F8CAE58CEDCFA7AC40D3BDC3C47CA0C13456_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mAAAA8DDD2F3A94F3C06C5457AE27BACB8FEDF238_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_DictationRecognizer_DictationResult_m5EBBA30C99CA9F33A09DBD107141DA17794D3CA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_Disable_m3C36CE9BE7EEAFC5F69BE88D5868E8479C351CB9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_Enable_mC85C435F781B24E856FA2D5589F0D5342A12DC12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_StartRecordingAsync_m589DD5872344989C877F28863898B6B9BE503CD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_StartRecording_mDE646B84BAE9D0F13822DB874D0DEE3810DE88B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_StopRecordingAsync_m970B34085B1E29671D89FDC39AED49B356598D8C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_StopRecording_m2E54FAC6FE4C8E84C357F5BDF3912D37A9353B02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider_Update_m089C4765A4F794D8F7F383084C0F86E0985539DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsDictationInputProvider__ctor_mEB27B643B9EBE5761D7712F6FE7269C3DDFF7EDD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsSpeechInputProvider_Disable_m73A44C3242B6491D2AEB3D22A4440246CD64FE4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsSpeechInputProvider_Enable_m1ACD3641CC2B267B1E646F0200C9EC8A3B87B9BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsSpeechInputProvider_OnPhraseRecognized_mD2BA3DF559733CE98DE4EB3F20E6F7550B4F0914_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsSpeechInputProvider_Update_mBB5369D96CCB392942F764C647F5B9B2CBB58CEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsSpeechInputProvider_get_Commands_m5E794CB29A7524A9B5F2FEFFD681307D80CFC314_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com;
struct SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke;

struct IMixedRealityPointerU5BU5D_t39DD1136CDE343C8864073AF61557AFC03AB3778;
struct SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t9ED18CF776DFFF88CB1985CC8A1308B19AB4EFCC 
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


// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions_SimpleCoroutineAwaiter
struct  SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions_SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions_SimpleCoroutineAwaiter::continuation
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions_SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2, ___continuation_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_continuation_1() const { return ___continuation_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c
struct  U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<>9
	U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<>9__0_0
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3E9__0_0_1;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<>9__0_1
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3E9__0_1_2;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<>9__0_2
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3E9__0_2_3;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<>9__0_3
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3E9__0_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields, ___U3CU3E9__0_1_2)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields, ___U3CU3E9__0_2_3)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3E9__0_2_3() const { return ___U3CU3E9__0_2_3; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3E9__0_2_3() { return &___U3CU3E9__0_2_3; }
	inline void set_U3CU3E9__0_2_3(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3E9__0_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields, ___U3CU3E9__0_3_4)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3E9__0_3_4() const { return ___U3CU3E9__0_3_4; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3E9__0_3_4() { return &___U3CU3E9__0_3_4; }
	inline void set_U3CU3E9__0_3_4(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3E9__0_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_3_4), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider
struct  BaseDataProvider_t2C66AC3F1D45196D4C589CFEBFAF20004EAF2ED7  : public BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.IMixedRealityService Microsoft.MixedReality.Toolkit.BaseDataProvider::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseDataProvider::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___U3CConfigurationProfileU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseDataProvider_t2C66AC3F1D45196D4C589CFEBFAF20004EAF2ED7, ___U3CRegistrarU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_4() const { return ___U3CRegistrarU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_4() { return &___U3CRegistrarU3Ek__BackingField_4; }
	inline void set_U3CRegistrarU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_t2C66AC3F1D45196D4C589CFEBFAF20004EAF2ED7, ___U3CServiceU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_5() const { return ___U3CServiceU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_5() { return &___U3CServiceU3Ek__BackingField_5; }
	inline void set_U3CServiceU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_t2C66AC3F1D45196D4C589CFEBFAF20004EAF2ED7, ___U3CConfigurationProfileU3Ek__BackingField_6)); }
	inline BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * get_U3CConfigurationProfileU3Ek__BackingField_6() const { return ___U3CConfigurationProfileU3Ek__BackingField_6; }
	inline BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_6() { return &___U3CConfigurationProfileU3Ek__BackingField_6; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_6(BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_6), (void*)value);
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


// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F, ___m_task_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_pinvoke
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_com
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>
struct  TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99, ___m_task_0)); }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
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


// UnityEngine.UnityException
struct  UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28  : public Exception_t
{
public:

public:
};


// UnityEngine.WaitUntil
struct  WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F, ___m_Predicate_0)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct  BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC  : public BaseDataProvider_t2C66AC3F1D45196D4C589CFEBFAF20004EAF2ED7
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::InputSystemProfile
	MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * ___InputSystemProfile_7;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::Playspace
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___Playspace_8;

public:
	inline static int32_t get_offset_of_InputSystemProfile_7() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC, ___InputSystemProfile_7)); }
	inline MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * get_InputSystemProfile_7() const { return ___InputSystemProfile_7; }
	inline MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 ** get_address_of_InputSystemProfile_7() { return &___InputSystemProfile_7; }
	inline void set_InputSystemProfile_7(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * value)
	{
		___InputSystemProfile_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputSystemProfile_7), (void*)value);
	}

	inline static int32_t get_offset_of_Playspace_8() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC, ___Playspace_8)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_Playspace_8() const { return ___Playspace_8; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_Playspace_8() { return &___Playspace_8; }
	inline void set_Playspace_8(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___Playspace_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Playspace_8), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct  InputSourceType_t7E93B54E969B1ADEFA7692E15D26DD751A47D22A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_t7E93B54E969B1ADEFA7692E15D26DD751A47D22A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_t45CEF046648179DA1FDF98C495D40AA34823C164 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t45CEF046648179DA1FDF98C495D40AA34823C164, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale
struct  ExperienceScale_t6AFC12BC01EAB027DDEEBF3A7F384D81BCE03CF0 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExperienceScale_t6AFC12BC01EAB027DDEEBF3A7F384D81BCE03CF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel
struct  RecognitionConfidenceLevel_t268309604F121A28C180E45D76773A497586C058 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_t268309604F121A28C180E45D76773A497586C058, ___value___2)); }
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663, ___m_task_2)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_task_2)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>
struct  AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6, ___m_task_2)); }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_task_2)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_pinvoke
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_com
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};

// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_15)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.Windows.Speech.ConfidenceLevel
struct  ConfidenceLevel_t56554EC6B602F1294B9E933704E2EC961906AA36 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.ConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfidenceLevel_t56554EC6B602F1294B9E933704E2EC961906AA36, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.Speech.DictationCompletionCause
struct  DictationCompletionCause_tAF978578CFACB799A3DB54BA549C780C5E181FC1 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.DictationCompletionCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DictationCompletionCause_tAF978578CFACB799A3DB54BA549C780C5E181FC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.Speech.DictationRecognizer
struct  DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.DictationRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.DictationRecognizer_DictationHypothesisDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationHypothesis
	DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * ___DictationHypothesis_1;
	// UnityEngine.Windows.Speech.DictationRecognizer_DictationResultDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationResult
	DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * ___DictationResult_2;
	// UnityEngine.Windows.Speech.DictationRecognizer_DictationCompletedDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationComplete
	DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * ___DictationComplete_3;
	// UnityEngine.Windows.Speech.DictationRecognizer_DictationErrorHandler UnityEngine.Windows.Speech.DictationRecognizer::DictationError
	DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * ___DictationError_4;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_DictationHypothesis_1() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationHypothesis_1)); }
	inline DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * get_DictationHypothesis_1() const { return ___DictationHypothesis_1; }
	inline DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF ** get_address_of_DictationHypothesis_1() { return &___DictationHypothesis_1; }
	inline void set_DictationHypothesis_1(DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * value)
	{
		___DictationHypothesis_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationHypothesis_1), (void*)value);
	}

	inline static int32_t get_offset_of_DictationResult_2() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationResult_2)); }
	inline DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * get_DictationResult_2() const { return ___DictationResult_2; }
	inline DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 ** get_address_of_DictationResult_2() { return &___DictationResult_2; }
	inline void set_DictationResult_2(DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * value)
	{
		___DictationResult_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationResult_2), (void*)value);
	}

	inline static int32_t get_offset_of_DictationComplete_3() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationComplete_3)); }
	inline DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * get_DictationComplete_3() const { return ___DictationComplete_3; }
	inline DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC ** get_address_of_DictationComplete_3() { return &___DictationComplete_3; }
	inline void set_DictationComplete_3(DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * value)
	{
		___DictationComplete_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationComplete_3), (void*)value);
	}

	inline static int32_t get_offset_of_DictationError_4() { return static_cast<int32_t>(offsetof(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355, ___DictationError_4)); }
	inline DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * get_DictationError_4() const { return ___DictationError_4; }
	inline DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 ** get_address_of_DictationError_4() { return &___DictationError_4; }
	inline void set_DictationError_4(DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * value)
	{
		___DictationError_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DictationError_4), (void*)value);
	}
};


// UnityEngine.Windows.Speech.PhraseRecognizer
struct  PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.PhraseRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.PhraseRecognizer_PhraseRecognizedDelegate UnityEngine.Windows.Speech.PhraseRecognizer::OnPhraseRecognized
	PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * ___OnPhraseRecognized_1;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognized_1() { return static_cast<int32_t>(offsetof(PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F, ___OnPhraseRecognized_1)); }
	inline PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * get_OnPhraseRecognized_1() const { return ___OnPhraseRecognized_1; }
	inline PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 ** get_address_of_OnPhraseRecognized_1() { return &___OnPhraseRecognized_1; }
	inline void set_OnPhraseRecognized_1(PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * value)
	{
		___OnPhraseRecognized_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPhraseRecognized_1), (void*)value);
	}
};


// UnityEngine.Windows.Speech.SpeechSystemStatus
struct  SpeechSystemStatus_t2CCB4587008A89270736621140A65C1B5BB22317 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.SpeechSystemStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpeechSystemStatus_t2CCB4587008A89270736621140A65C1B5BB22317, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider
struct  WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6  : public BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::hasFailed
	bool ___hasFailed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::hasListener
	bool ___hasListener_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::isTransitioning
	bool ___isTransitioning_12;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::inputSource
	RuntimeObject* ___inputSource_13;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::textSoFar
	StringBuilder_t * ___textSoFar_14;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::deviceName
	String_t* ___deviceName_15;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::samplingRate
	int32_t ___samplingRate_16;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationResult
	String_t* ___dictationResult_17;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationAudioClip
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___dictationAudioClip_18;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilPhraseRecognitionSystemHasStarted
	WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___waitUntilPhraseRecognitionSystemHasStarted_20;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilPhraseRecognitionSystemHasStopped
	WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___waitUntilPhraseRecognitionSystemHasStopped_21;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilDictationRecognizerHasStarted
	WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___waitUntilDictationRecognizerHasStarted_22;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilDictationRecognizerHasStopped
	WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * ___waitUntilDictationRecognizerHasStopped_23;

public:
	inline static int32_t get_offset_of_U3CIsListeningU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6, ___U3CIsListeningU3Ek__BackingField_9)); }
	inline bool get_U3CIsListeningU3Ek__BackingField_9() const { return ___U3CIsListeningU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsListeningU3Ek__BackingField_9() { return &___U3CIsListeningU3Ek__BackingField_9; }
	inline void set_U3CIsListeningU3Ek__BackingField_9(bool value)
	{
		___U3CIsListeningU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_hasFailed_10() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6, ___hasFailed_10)); }
	inline bool get_hasFailed_10() const { return ___hasFailed_10; }
	inline bool* get_address_of_hasFailed_10() { return &___hasFailed_10; }
	inline void set_hasFailed_10(bool value)
	{
		___hasFailed_10 = value;
	}

	inline static int32_t get_offset_of_hasListener_11() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6, ___hasListener_11)); }
	inline bool get_hasListener_11() const { return ___hasListener_11; }
	inline bool* get_address_of_hasListener_11() { return &___hasListener_11; }
	inline void set_hasListener_11(bool value)
	{
		___hasListener_11 = value;
	}

	inline static int32_t get_offset_of_isTransitioning_12() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6, ___isTransitioning_12)); }
	inline bool get_isTransitioning_12() const { return ___isTransitioning_12; }
	inline bool* get_address_of_isTransitioning_12() { return &___isTransitioning_12; }
	inline void set_isTransitioning_12(bool value)
	{
		___isTransitioning_12 = value;
	}

	inline static int32_t get_offset_of_inputSource_13() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6, ___inputSource_13)); }
	inline RuntimeObject* get_inputSource_13() const { return ___inputSource_13; }
	inline RuntimeObject** get_address_of_inputSource_13() { return &___inputSource_13; }
	inline void set_inputSource_13(RuntimeObject* value)
	{
		___inputSource_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_13), (void*)value);
	}

	inline static int32_t get_offset_of_textSoFar_14() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6, ___textSoFar_14)); }
	inline StringBuilder_t * get_textSoFar_14() const { return ___textSoFar_14; }
	inline StringBuilder_t ** get_address_of_textSoFar_14() { return &___textSoFar_14; }
	inline void set_textSoFar_14(StringBuilder_t * value)
	{
		___textSoFar_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textSoFar_14), (void*)value);
	}

	inline static int32_t get_offset_of_deviceName_15() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6, ___deviceName_15)); }
	inline String_t* get_deviceName_15() const { return ___deviceName_15; }
	inline String_t** get_address_of_deviceName_15() { return &___deviceName_15; }
	inline void set_deviceName_15(String_t* value)
	{
		___deviceName_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceName_15), (void*)value);
	}

	inline static int32_t get_offset_of_samplingRate_16() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6, ___samplingRate_16)); }
	inline int32_t get_samplingRate_16() const { return ___samplingRate_16; }
	inline int32_t* get_address_of_samplingRate_16() { return &___samplingRate_16; }
	inline void set_samplingRate_16(int32_t value)
	{
		___samplingRate_16 = value;
	}

	inline static int32_t get_offset_of_dictationResult_17() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6, ___dictationResult_17)); }
	inline String_t* get_dictationResult_17() const { return ___dictationResult_17; }
	inline String_t** get_address_of_dictationResult_17() { return &___dictationResult_17; }
	inline void set_dictationResult_17(String_t* value)
	{
		___dictationResult_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationResult_17), (void*)value);
	}

	inline static int32_t get_offset_of_dictationAudioClip_18() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6, ___dictationAudioClip_18)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_dictationAudioClip_18() const { return ___dictationAudioClip_18; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_dictationAudioClip_18() { return &___dictationAudioClip_18; }
	inline void set_dictationAudioClip_18(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___dictationAudioClip_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationAudioClip_18), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStarted_20() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6, ___waitUntilPhraseRecognitionSystemHasStarted_20)); }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * get_waitUntilPhraseRecognitionSystemHasStarted_20() const { return ___waitUntilPhraseRecognitionSystemHasStarted_20; }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F ** get_address_of_waitUntilPhraseRecognitionSystemHasStarted_20() { return &___waitUntilPhraseRecognitionSystemHasStarted_20; }
	inline void set_waitUntilPhraseRecognitionSystemHasStarted_20(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * value)
	{
		___waitUntilPhraseRecognitionSystemHasStarted_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilPhraseRecognitionSystemHasStarted_20), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStopped_21() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6, ___waitUntilPhraseRecognitionSystemHasStopped_21)); }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * get_waitUntilPhraseRecognitionSystemHasStopped_21() const { return ___waitUntilPhraseRecognitionSystemHasStopped_21; }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F ** get_address_of_waitUntilPhraseRecognitionSystemHasStopped_21() { return &___waitUntilPhraseRecognitionSystemHasStopped_21; }
	inline void set_waitUntilPhraseRecognitionSystemHasStopped_21(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * value)
	{
		___waitUntilPhraseRecognitionSystemHasStopped_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilPhraseRecognitionSystemHasStopped_21), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStarted_22() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6, ___waitUntilDictationRecognizerHasStarted_22)); }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * get_waitUntilDictationRecognizerHasStarted_22() const { return ___waitUntilDictationRecognizerHasStarted_22; }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F ** get_address_of_waitUntilDictationRecognizerHasStarted_22() { return &___waitUntilDictationRecognizerHasStarted_22; }
	inline void set_waitUntilDictationRecognizerHasStarted_22(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * value)
	{
		___waitUntilDictationRecognizerHasStarted_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilDictationRecognizerHasStarted_22), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStopped_23() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6, ___waitUntilDictationRecognizerHasStopped_23)); }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * get_waitUntilDictationRecognizerHasStopped_23() const { return ___waitUntilDictationRecognizerHasStopped_23; }
	inline WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F ** get_address_of_waitUntilDictationRecognizerHasStopped_23() { return &___waitUntilDictationRecognizerHasStopped_23; }
	inline void set_waitUntilDictationRecognizerHasStopped_23(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * value)
	{
		___waitUntilDictationRecognizerHasStopped_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilDictationRecognizerHasStopped_23), (void*)value);
	}
};

struct WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields
{
public:
	// UnityEngine.Windows.Speech.DictationRecognizer Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationRecognizer
	DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * ___dictationRecognizer_19;

public:
	inline static int32_t get_offset_of_dictationRecognizer_19() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields, ___dictationRecognizer_19)); }
	inline DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * get_dictationRecognizer_19() const { return ___dictationRecognizer_19; }
	inline DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 ** get_address_of_dictationRecognizer_19() { return &___dictationRecognizer_19; }
	inline void set_dictationRecognizer_19(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * value)
	{
		___dictationRecognizer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationRecognizer_19), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<Disable>d__21
struct  U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<Disable>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<Disable>d__21::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<Disable>d__21::<>4__this
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<Disable>d__21::<>u__1
	TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__23
struct  U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__23::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__23::<>4__this
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * ___U3CU3E4__this_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__23::listener
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener_3;
	// System.Single Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__23::initialSilenceTimeout
	float ___initialSilenceTimeout_4;
	// System.Single Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__23::autoSilenceTimeout
	float ___autoSilenceTimeout_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__23::recordingTime
	int32_t ___recordingTime_6;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__23::micDeviceName
	String_t* ___micDeviceName_7;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__23::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_listener_3() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307, ___listener_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_listener_3() const { return ___listener_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_listener_3() { return &___listener_3; }
	inline void set_listener_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___listener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_3), (void*)value);
	}

	inline static int32_t get_offset_of_initialSilenceTimeout_4() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307, ___initialSilenceTimeout_4)); }
	inline float get_initialSilenceTimeout_4() const { return ___initialSilenceTimeout_4; }
	inline float* get_address_of_initialSilenceTimeout_4() { return &___initialSilenceTimeout_4; }
	inline void set_initialSilenceTimeout_4(float value)
	{
		___initialSilenceTimeout_4 = value;
	}

	inline static int32_t get_offset_of_autoSilenceTimeout_5() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307, ___autoSilenceTimeout_5)); }
	inline float get_autoSilenceTimeout_5() const { return ___autoSilenceTimeout_5; }
	inline float* get_address_of_autoSilenceTimeout_5() { return &___autoSilenceTimeout_5; }
	inline void set_autoSilenceTimeout_5(float value)
	{
		___autoSilenceTimeout_5 = value;
	}

	inline static int32_t get_offset_of_recordingTime_6() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307, ___recordingTime_6)); }
	inline int32_t get_recordingTime_6() const { return ___recordingTime_6; }
	inline int32_t* get_address_of_recordingTime_6() { return &___recordingTime_6; }
	inline void set_recordingTime_6(int32_t value)
	{
		___recordingTime_6 = value;
	}

	inline static int32_t get_offset_of_micDeviceName_7() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307, ___micDeviceName_7)); }
	inline String_t* get_micDeviceName_7() const { return ___micDeviceName_7; }
	inline String_t** get_address_of_micDeviceName_7() { return &___micDeviceName_7; }
	inline void set_micDeviceName_7(String_t* value)
	{
		___micDeviceName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___micDeviceName_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307, ___U3CU3Eu__1_8)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecording>d__25
struct  U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecording>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecording>d__25::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecording>d__25::<>4__this
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecording>d__25::<>u__1
	TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__26
struct  U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__26::<>t__builder
	AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__26::<>4__this
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__26::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider
struct  WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE  : public BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::InputSource
	RuntimeObject* ___InputSource_9;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::<RecognitionConfidenceLevel>k__BackingField
	int32_t ___U3CRecognitionConfidenceLevelU3Ek__BackingField_10;
	// UnityEngine.Windows.Speech.KeywordRecognizer Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::keywordRecognizer
	KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * ___keywordRecognizer_11;

public:
	inline static int32_t get_offset_of_InputSource_9() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE, ___InputSource_9)); }
	inline RuntimeObject* get_InputSource_9() const { return ___InputSource_9; }
	inline RuntimeObject** get_address_of_InputSource_9() { return &___InputSource_9; }
	inline void set_InputSource_9(RuntimeObject* value)
	{
		___InputSource_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputSource_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE, ___U3CRecognitionConfidenceLevelU3Ek__BackingField_10)); }
	inline int32_t get_U3CRecognitionConfidenceLevelU3Ek__BackingField_10() const { return ___U3CRecognitionConfidenceLevelU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_10() { return &___U3CRecognitionConfidenceLevelU3Ek__BackingField_10; }
	inline void set_U3CRecognitionConfidenceLevelU3Ek__BackingField_10(int32_t value)
	{
		___U3CRecognitionConfidenceLevelU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_keywordRecognizer_11() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE, ___keywordRecognizer_11)); }
	inline KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * get_keywordRecognizer_11() const { return ___keywordRecognizer_11; }
	inline KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C ** get_address_of_keywordRecognizer_11() { return &___keywordRecognizer_11; }
	inline void set_keywordRecognizer_11(KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * value)
	{
		___keywordRecognizer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywordRecognizer_11), (void*)value);
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_com
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};

// System.Threading.Tasks.Task`1<UnityEngine.AudioClip>
struct  Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC, ___m_result_22)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_m_result_22() const { return ___m_result_22; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tBBAE40E1A2935792A528C0C29F0A2ACDEFDAF462 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t9142D625393521B287A80A741A754EC358C5C5DF * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tBBAE40E1A2935792A528C0C29F0A2ACDEFDAF462 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tBBAE40E1A2935792A528C0C29F0A2ACDEFDAF462 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tBBAE40E1A2935792A528C0C29F0A2ACDEFDAF462 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t9142D625393521B287A80A741A754EC358C5C5DF * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t9142D625393521B287A80A741A754EC358C5C5DF ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t9142D625393521B287A80A741A754EC358C5C5DF * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// UnityEngine.AudioClip
struct  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip_PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip_PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
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

// UnityEngine.Windows.Speech.KeywordRecognizer
struct  KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C  : public PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F
{
public:
	// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.Windows.Speech.KeywordRecognizer::<Keywords>k__BackingField
	RuntimeObject* ___U3CKeywordsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C, ___U3CKeywordsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CKeywordsU3Ek__BackingField_2() const { return ___U3CKeywordsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CKeywordsU3Ek__BackingField_2() { return &___U3CKeywordsU3Ek__BackingField_2; }
	inline void set_U3CKeywordsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CKeywordsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct  PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD 
{
public:
	// UnityEngine.Windows.Speech.ConfidenceLevel UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::confidence
	int32_t ___confidence_0;
	// UnityEngine.Windows.Speech.SemanticMeaning[] UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::semanticMeanings
	SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* ___semanticMeanings_1;
	// System.String UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::text
	String_t* ___text_2;
	// System.DateTime UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseStartTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime_3;
	// System.TimeSpan UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseDuration
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration_4;

public:
	inline static int32_t get_offset_of_confidence_0() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___confidence_0)); }
	inline int32_t get_confidence_0() const { return ___confidence_0; }
	inline int32_t* get_address_of_confidence_0() { return &___confidence_0; }
	inline void set_confidence_0(int32_t value)
	{
		___confidence_0 = value;
	}

	inline static int32_t get_offset_of_semanticMeanings_1() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___semanticMeanings_1)); }
	inline SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* get_semanticMeanings_1() const { return ___semanticMeanings_1; }
	inline SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D** get_address_of_semanticMeanings_1() { return &___semanticMeanings_1; }
	inline void set_semanticMeanings_1(SemanticMeaningU5BU5D_t3FC0A968EA1C540EEA6B6F92368A430CA596D23D* value)
	{
		___semanticMeanings_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___semanticMeanings_1), (void*)value);
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_2), (void*)value);
	}

	inline static int32_t get_offset_of_phraseStartTime_3() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___phraseStartTime_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_phraseStartTime_3() const { return ___phraseStartTime_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_phraseStartTime_3() { return &___phraseStartTime_3; }
	inline void set_phraseStartTime_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___phraseStartTime_3 = value;
	}

	inline static int32_t get_offset_of_phraseDuration_4() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD, ___phraseDuration_4)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_phraseDuration_4() const { return ___phraseDuration_4; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_phraseDuration_4() { return &___phraseDuration_4; }
	inline void set_phraseDuration_4(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___phraseDuration_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_pinvoke
{
	int32_t ___confidence_0;
	SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_pinvoke* ___semanticMeanings_1;
	char* ___text_2;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime_3;
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration_4;
};
// Native definition for COM marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD_marshaled_com
{
	int32_t ___confidence_0;
	SemanticMeaning_tF87995FD36CA45112E60A5F76AA211FA13351F0C_marshaled_com* ___semanticMeanings_1;
	Il2CppChar* ___text_2;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime_3;
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration_4;
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


// Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct  SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizationKey
	String_t* ___localizationKey_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizedKeyword
	String_t* ___localizedKeyword_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyword
	String_t* ___keyword_2;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyCode
	int32_t ___keyCode_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SpeechCommands::action
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  ___action_4;

public:
	inline static int32_t get_offset_of_localizationKey_0() { return static_cast<int32_t>(offsetof(SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B, ___localizationKey_0)); }
	inline String_t* get_localizationKey_0() const { return ___localizationKey_0; }
	inline String_t** get_address_of_localizationKey_0() { return &___localizationKey_0; }
	inline void set_localizationKey_0(String_t* value)
	{
		___localizationKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizationKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_localizedKeyword_1() { return static_cast<int32_t>(offsetof(SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B, ___localizedKeyword_1)); }
	inline String_t* get_localizedKeyword_1() const { return ___localizedKeyword_1; }
	inline String_t** get_address_of_localizedKeyword_1() { return &___localizedKeyword_1; }
	inline void set_localizedKeyword_1(String_t* value)
	{
		___localizedKeyword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedKeyword_1), (void*)value);
	}

	inline static int32_t get_offset_of_keyword_2() { return static_cast<int32_t>(offsetof(SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B, ___keyword_2)); }
	inline String_t* get_keyword_2() const { return ___keyword_2; }
	inline String_t** get_address_of_keyword_2() { return &___keyword_2; }
	inline void set_keyword_2(String_t* value)
	{
		___keyword_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_2), (void*)value);
	}

	inline static int32_t get_offset_of_keyCode_3() { return static_cast<int32_t>(offsetof(SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B, ___keyCode_3)); }
	inline int32_t get_keyCode_3() const { return ___keyCode_3; }
	inline int32_t* get_address_of_keyCode_3() { return &___keyCode_3; }
	inline void set_keyCode_3(int32_t value)
	{
		___keyCode_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B, ___action_4)); }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  get_action_4() const { return ___action_4; }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_4))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B_marshaled_pinvoke
{
	char* ___localizationKey_0;
	char* ___localizedKeyword_1;
	char* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_marshaled_pinvoke ___action_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B_marshaled_com
{
	Il2CppChar* ___localizationKey_0;
	Il2CppChar* ___localizedKeyword_1;
	Il2CppChar* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_marshaled_com ___action_4;
};

// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__24
struct  U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__24::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__24::<>4__this
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * ___U3CU3E4__this_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__24::listener
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener_3;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__24::micDeviceName
	String_t* ___micDeviceName_4;
	// System.Single Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__24::initialSilenceTimeout
	float ___initialSilenceTimeout_5;
	// System.Single Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__24::autoSilenceTimeout
	float ___autoSilenceTimeout_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__24::recordingTime
	int32_t ___recordingTime_7;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__24::<inputSystem>5__2
	RuntimeObject* ___U3CinputSystemU3E5__2_8;
	// System.Object Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__24::<>u__1
	RuntimeObject * ___U3CU3Eu__1_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_listener_3() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE, ___listener_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_listener_3() const { return ___listener_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_listener_3() { return &___listener_3; }
	inline void set_listener_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___listener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_3), (void*)value);
	}

	inline static int32_t get_offset_of_micDeviceName_4() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE, ___micDeviceName_4)); }
	inline String_t* get_micDeviceName_4() const { return ___micDeviceName_4; }
	inline String_t** get_address_of_micDeviceName_4() { return &___micDeviceName_4; }
	inline void set_micDeviceName_4(String_t* value)
	{
		___micDeviceName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___micDeviceName_4), (void*)value);
	}

	inline static int32_t get_offset_of_initialSilenceTimeout_5() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE, ___initialSilenceTimeout_5)); }
	inline float get_initialSilenceTimeout_5() const { return ___initialSilenceTimeout_5; }
	inline float* get_address_of_initialSilenceTimeout_5() { return &___initialSilenceTimeout_5; }
	inline void set_initialSilenceTimeout_5(float value)
	{
		___initialSilenceTimeout_5 = value;
	}

	inline static int32_t get_offset_of_autoSilenceTimeout_6() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE, ___autoSilenceTimeout_6)); }
	inline float get_autoSilenceTimeout_6() const { return ___autoSilenceTimeout_6; }
	inline float* get_address_of_autoSilenceTimeout_6() { return &___autoSilenceTimeout_6; }
	inline void set_autoSilenceTimeout_6(float value)
	{
		___autoSilenceTimeout_6 = value;
	}

	inline static int32_t get_offset_of_recordingTime_7() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE, ___recordingTime_7)); }
	inline int32_t get_recordingTime_7() const { return ___recordingTime_7; }
	inline int32_t* get_address_of_recordingTime_7() { return &___recordingTime_7; }
	inline void set_recordingTime_7(int32_t value)
	{
		___recordingTime_7 = value;
	}

	inline static int32_t get_offset_of_U3CinputSystemU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE, ___U3CinputSystemU3E5__2_8)); }
	inline RuntimeObject* get_U3CinputSystemU3E5__2_8() const { return ___U3CinputSystemU3E5__2_8; }
	inline RuntimeObject** get_address_of_U3CinputSystemU3E5__2_8() { return &___U3CinputSystemU3E5__2_8; }
	inline void set_U3CinputSystemU3E5__2_8(RuntimeObject* value)
	{
		___U3CinputSystemU3E5__2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputSystemU3E5__2_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_9() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE, ___U3CU3Eu__1_9)); }
	inline RuntimeObject * get_U3CU3Eu__1_9() const { return ___U3CU3Eu__1_9; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_9() { return &___U3CU3Eu__1_9; }
	inline void set_U3CU3Eu__1_9(RuntimeObject * value)
	{
		___U3CU3Eu__1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_9), (void*)value);
	}
};


// System.Func`1<System.Boolean>
struct  Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// UnityEngine.Windows.Speech.DictationRecognizer_DictationCompletedDelegate
struct  DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer_DictationErrorHandler
struct  DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer_DictationHypothesisDelegate
struct  DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.DictationRecognizer_DictationResultDelegate
struct  DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Windows.Speech.PhraseRecognizer_PhraseRecognizedDelegate
struct  PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct  MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[] Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::dataProviderConfigurations
	MixedRealityInputDataProviderConfigurationU5BU5D_t621D14E0DCEE987398F574E5335D55FDBDFBE426* ___dataProviderConfigurations_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusProviderType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___focusProviderType_6;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionsProfile
	MixedRealityInputActionsProfile_t5D05F56AB25081BDE6B4697C8DF609F2A458EA12 * ___inputActionsProfile_7;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionRulesProfile
	MixedRealityInputActionRulesProfile_t4CE915FD59B3CEE0DDE18E9BF5922E5628DCCD3A * ___inputActionRulesProfile_8;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::pointerProfile
	MixedRealityPointerProfile_t006E66A5D042614269E3195CA2042A3AC964671E * ___pointerProfile_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::gesturesProfile
	MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * ___gesturesProfile_10;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechSystem Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::speechSystem
	RuntimeObject* ___speechSystem_11;
	// System.Collections.Generic.List`1<System.Globalization.CultureInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::supportedVoiceCultures
	List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * ___supportedVoiceCultures_12;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::speechCommandsProfile
	MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD * ___speechCommandsProfile_13;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationSystem Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::dictationSystem
	RuntimeObject* ___dictationSystem_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::enableControllerMapping
	bool ___enableControllerMapping_15;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerMappingProfile
	MixedRealityControllerMappingProfile_t254FF0C8E28DA6341E36D23A9DD832B11ACCE9DB * ___controllerMappingProfile_16;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerVisualizationProfile
	MixedRealityControllerVisualizationProfile_tDF62A9AB730F36F2AF8454D32ECF008D046E899D * ___controllerVisualizationProfile_17;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::handTrackingProfile
	MixedRealityHandTrackingProfile_tFA3A9118040918D9E221EEB94786E3A333A12E36 * ___handTrackingProfile_18;

public:
	inline static int32_t get_offset_of_dataProviderConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___dataProviderConfigurations_5)); }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_t621D14E0DCEE987398F574E5335D55FDBDFBE426* get_dataProviderConfigurations_5() const { return ___dataProviderConfigurations_5; }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_t621D14E0DCEE987398F574E5335D55FDBDFBE426** get_address_of_dataProviderConfigurations_5() { return &___dataProviderConfigurations_5; }
	inline void set_dataProviderConfigurations_5(MixedRealityInputDataProviderConfigurationU5BU5D_t621D14E0DCEE987398F574E5335D55FDBDFBE426* value)
	{
		___dataProviderConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviderConfigurations_5), (void*)value);
	}

	inline static int32_t get_offset_of_focusProviderType_6() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___focusProviderType_6)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_focusProviderType_6() const { return ___focusProviderType_6; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_focusProviderType_6() { return &___focusProviderType_6; }
	inline void set_focusProviderType_6(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___focusProviderType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusProviderType_6), (void*)value);
	}

	inline static int32_t get_offset_of_inputActionsProfile_7() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___inputActionsProfile_7)); }
	inline MixedRealityInputActionsProfile_t5D05F56AB25081BDE6B4697C8DF609F2A458EA12 * get_inputActionsProfile_7() const { return ___inputActionsProfile_7; }
	inline MixedRealityInputActionsProfile_t5D05F56AB25081BDE6B4697C8DF609F2A458EA12 ** get_address_of_inputActionsProfile_7() { return &___inputActionsProfile_7; }
	inline void set_inputActionsProfile_7(MixedRealityInputActionsProfile_t5D05F56AB25081BDE6B4697C8DF609F2A458EA12 * value)
	{
		___inputActionsProfile_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionsProfile_7), (void*)value);
	}

	inline static int32_t get_offset_of_inputActionRulesProfile_8() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___inputActionRulesProfile_8)); }
	inline MixedRealityInputActionRulesProfile_t4CE915FD59B3CEE0DDE18E9BF5922E5628DCCD3A * get_inputActionRulesProfile_8() const { return ___inputActionRulesProfile_8; }
	inline MixedRealityInputActionRulesProfile_t4CE915FD59B3CEE0DDE18E9BF5922E5628DCCD3A ** get_address_of_inputActionRulesProfile_8() { return &___inputActionRulesProfile_8; }
	inline void set_inputActionRulesProfile_8(MixedRealityInputActionRulesProfile_t4CE915FD59B3CEE0DDE18E9BF5922E5628DCCD3A * value)
	{
		___inputActionRulesProfile_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionRulesProfile_8), (void*)value);
	}

	inline static int32_t get_offset_of_pointerProfile_9() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___pointerProfile_9)); }
	inline MixedRealityPointerProfile_t006E66A5D042614269E3195CA2042A3AC964671E * get_pointerProfile_9() const { return ___pointerProfile_9; }
	inline MixedRealityPointerProfile_t006E66A5D042614269E3195CA2042A3AC964671E ** get_address_of_pointerProfile_9() { return &___pointerProfile_9; }
	inline void set_pointerProfile_9(MixedRealityPointerProfile_t006E66A5D042614269E3195CA2042A3AC964671E * value)
	{
		___pointerProfile_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerProfile_9), (void*)value);
	}

	inline static int32_t get_offset_of_gesturesProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___gesturesProfile_10)); }
	inline MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * get_gesturesProfile_10() const { return ___gesturesProfile_10; }
	inline MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 ** get_address_of_gesturesProfile_10() { return &___gesturesProfile_10; }
	inline void set_gesturesProfile_10(MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * value)
	{
		___gesturesProfile_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gesturesProfile_10), (void*)value);
	}

	inline static int32_t get_offset_of_speechSystem_11() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___speechSystem_11)); }
	inline RuntimeObject* get_speechSystem_11() const { return ___speechSystem_11; }
	inline RuntimeObject** get_address_of_speechSystem_11() { return &___speechSystem_11; }
	inline void set_speechSystem_11(RuntimeObject* value)
	{
		___speechSystem_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechSystem_11), (void*)value);
	}

	inline static int32_t get_offset_of_supportedVoiceCultures_12() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___supportedVoiceCultures_12)); }
	inline List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * get_supportedVoiceCultures_12() const { return ___supportedVoiceCultures_12; }
	inline List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 ** get_address_of_supportedVoiceCultures_12() { return &___supportedVoiceCultures_12; }
	inline void set_supportedVoiceCultures_12(List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * value)
	{
		___supportedVoiceCultures_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___supportedVoiceCultures_12), (void*)value);
	}

	inline static int32_t get_offset_of_speechCommandsProfile_13() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___speechCommandsProfile_13)); }
	inline MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD * get_speechCommandsProfile_13() const { return ___speechCommandsProfile_13; }
	inline MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD ** get_address_of_speechCommandsProfile_13() { return &___speechCommandsProfile_13; }
	inline void set_speechCommandsProfile_13(MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD * value)
	{
		___speechCommandsProfile_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechCommandsProfile_13), (void*)value);
	}

	inline static int32_t get_offset_of_dictationSystem_14() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___dictationSystem_14)); }
	inline RuntimeObject* get_dictationSystem_14() const { return ___dictationSystem_14; }
	inline RuntimeObject** get_address_of_dictationSystem_14() { return &___dictationSystem_14; }
	inline void set_dictationSystem_14(RuntimeObject* value)
	{
		___dictationSystem_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationSystem_14), (void*)value);
	}

	inline static int32_t get_offset_of_enableControllerMapping_15() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___enableControllerMapping_15)); }
	inline bool get_enableControllerMapping_15() const { return ___enableControllerMapping_15; }
	inline bool* get_address_of_enableControllerMapping_15() { return &___enableControllerMapping_15; }
	inline void set_enableControllerMapping_15(bool value)
	{
		___enableControllerMapping_15 = value;
	}

	inline static int32_t get_offset_of_controllerMappingProfile_16() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___controllerMappingProfile_16)); }
	inline MixedRealityControllerMappingProfile_t254FF0C8E28DA6341E36D23A9DD832B11ACCE9DB * get_controllerMappingProfile_16() const { return ___controllerMappingProfile_16; }
	inline MixedRealityControllerMappingProfile_t254FF0C8E28DA6341E36D23A9DD832B11ACCE9DB ** get_address_of_controllerMappingProfile_16() { return &___controllerMappingProfile_16; }
	inline void set_controllerMappingProfile_16(MixedRealityControllerMappingProfile_t254FF0C8E28DA6341E36D23A9DD832B11ACCE9DB * value)
	{
		___controllerMappingProfile_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerMappingProfile_16), (void*)value);
	}

	inline static int32_t get_offset_of_controllerVisualizationProfile_17() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___controllerVisualizationProfile_17)); }
	inline MixedRealityControllerVisualizationProfile_tDF62A9AB730F36F2AF8454D32ECF008D046E899D * get_controllerVisualizationProfile_17() const { return ___controllerVisualizationProfile_17; }
	inline MixedRealityControllerVisualizationProfile_tDF62A9AB730F36F2AF8454D32ECF008D046E899D ** get_address_of_controllerVisualizationProfile_17() { return &___controllerVisualizationProfile_17; }
	inline void set_controllerVisualizationProfile_17(MixedRealityControllerVisualizationProfile_tDF62A9AB730F36F2AF8454D32ECF008D046E899D * value)
	{
		___controllerVisualizationProfile_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerVisualizationProfile_17), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackingProfile_18() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___handTrackingProfile_18)); }
	inline MixedRealityHandTrackingProfile_tFA3A9118040918D9E221EEB94786E3A333A12E36 * get_handTrackingProfile_18() const { return ___handTrackingProfile_18; }
	inline MixedRealityHandTrackingProfile_tFA3A9118040918D9E221EEB94786E3A333A12E36 ** get_address_of_handTrackingProfile_18() { return &___handTrackingProfile_18; }
	inline void set_handTrackingProfile_18(MixedRealityHandTrackingProfile_tFA3A9118040918D9E221EEB94786E3A333A12E36 * value)
	{
		___handTrackingProfile_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackingProfile_18), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct  MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::startBehavior
	int32_t ___startBehavior_5;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::recognitionConfidenceLevel
	int32_t ___recognitionConfidenceLevel_6;
	// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[] Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::speechCommands
	SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* ___speechCommands_7;

public:
	inline static int32_t get_offset_of_startBehavior_5() { return static_cast<int32_t>(offsetof(MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD, ___startBehavior_5)); }
	inline int32_t get_startBehavior_5() const { return ___startBehavior_5; }
	inline int32_t* get_address_of_startBehavior_5() { return &___startBehavior_5; }
	inline void set_startBehavior_5(int32_t value)
	{
		___startBehavior_5 = value;
	}

	inline static int32_t get_offset_of_recognitionConfidenceLevel_6() { return static_cast<int32_t>(offsetof(MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD, ___recognitionConfidenceLevel_6)); }
	inline int32_t get_recognitionConfidenceLevel_6() const { return ___recognitionConfidenceLevel_6; }
	inline int32_t* get_address_of_recognitionConfidenceLevel_6() { return &___recognitionConfidenceLevel_6; }
	inline void set_recognitionConfidenceLevel_6(int32_t value)
	{
		___recognitionConfidenceLevel_6 = value;
	}

	inline static int32_t get_offset_of_speechCommands_7() { return static_cast<int32_t>(offsetof(MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD, ___speechCommands_7)); }
	inline SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* get_speechCommands_7() const { return ___speechCommands_7; }
	inline SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3** get_address_of_speechCommands_7() { return &___speechCommands_7; }
	inline void set_speechCommands_7(SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* value)
	{
		___speechCommands_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechCommands_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile
struct  MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::targetExperienceScale
	int32_t ___targetExperienceScale_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableCameraProfile
	bool ___enableCameraProfile_6;
	// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::cameraProfile
	MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * ___cameraProfile_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableInputSystem
	bool ___enableInputSystem_8;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::inputSystemProfile
	MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * ___inputSystemProfile_9;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::inputSystemType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___inputSystemType_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableBoundarySystem
	bool ___enableBoundarySystem_11;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::boundarySystemType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___boundarySystemType_12;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::boundaryVisualizationProfile
	MixedRealityBoundaryVisualizationProfile_t730676E2834214BB1B8A69370446D87E52FF9092 * ___boundaryVisualizationProfile_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableTeleportSystem
	bool ___enableTeleportSystem_14;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::teleportSystemType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___teleportSystemType_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableSpatialAwarenessSystem
	bool ___enableSpatialAwarenessSystem_16;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::spatialAwarenessSystemType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___spatialAwarenessSystemType_17;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::spatialAwarenessSystemProfile
	MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * ___spatialAwarenessSystemProfile_18;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * ___diagnosticsSystemProfile_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableDiagnosticsSystem
	bool ___enableDiagnosticsSystem_20;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::diagnosticsSystemType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___diagnosticsSystemType_21;
	// Microsoft.MixedReality.Toolkit.MixedRealityRegisteredServiceProvidersProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::registeredServiceProvidersProfile
	MixedRealityRegisteredServiceProvidersProfile_tDB4B24605DAF2F884E7BB57E2A9E24AD8082B586 * ___registeredServiceProvidersProfile_22;

public:
	inline static int32_t get_offset_of_targetExperienceScale_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___targetExperienceScale_5)); }
	inline int32_t get_targetExperienceScale_5() const { return ___targetExperienceScale_5; }
	inline int32_t* get_address_of_targetExperienceScale_5() { return &___targetExperienceScale_5; }
	inline void set_targetExperienceScale_5(int32_t value)
	{
		___targetExperienceScale_5 = value;
	}

	inline static int32_t get_offset_of_enableCameraProfile_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___enableCameraProfile_6)); }
	inline bool get_enableCameraProfile_6() const { return ___enableCameraProfile_6; }
	inline bool* get_address_of_enableCameraProfile_6() { return &___enableCameraProfile_6; }
	inline void set_enableCameraProfile_6(bool value)
	{
		___enableCameraProfile_6 = value;
	}

	inline static int32_t get_offset_of_cameraProfile_7() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___cameraProfile_7)); }
	inline MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * get_cameraProfile_7() const { return ___cameraProfile_7; }
	inline MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 ** get_address_of_cameraProfile_7() { return &___cameraProfile_7; }
	inline void set_cameraProfile_7(MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * value)
	{
		___cameraProfile_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraProfile_7), (void*)value);
	}

	inline static int32_t get_offset_of_enableInputSystem_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___enableInputSystem_8)); }
	inline bool get_enableInputSystem_8() const { return ___enableInputSystem_8; }
	inline bool* get_address_of_enableInputSystem_8() { return &___enableInputSystem_8; }
	inline void set_enableInputSystem_8(bool value)
	{
		___enableInputSystem_8 = value;
	}

	inline static int32_t get_offset_of_inputSystemProfile_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___inputSystemProfile_9)); }
	inline MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * get_inputSystemProfile_9() const { return ___inputSystemProfile_9; }
	inline MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 ** get_address_of_inputSystemProfile_9() { return &___inputSystemProfile_9; }
	inline void set_inputSystemProfile_9(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * value)
	{
		___inputSystemProfile_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystemProfile_9), (void*)value);
	}

	inline static int32_t get_offset_of_inputSystemType_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___inputSystemType_10)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_inputSystemType_10() const { return ___inputSystemType_10; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_inputSystemType_10() { return &___inputSystemType_10; }
	inline void set_inputSystemType_10(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___inputSystemType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystemType_10), (void*)value);
	}

	inline static int32_t get_offset_of_enableBoundarySystem_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___enableBoundarySystem_11)); }
	inline bool get_enableBoundarySystem_11() const { return ___enableBoundarySystem_11; }
	inline bool* get_address_of_enableBoundarySystem_11() { return &___enableBoundarySystem_11; }
	inline void set_enableBoundarySystem_11(bool value)
	{
		___enableBoundarySystem_11 = value;
	}

	inline static int32_t get_offset_of_boundarySystemType_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___boundarySystemType_12)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_boundarySystemType_12() const { return ___boundarySystemType_12; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_boundarySystemType_12() { return &___boundarySystemType_12; }
	inline void set_boundarySystemType_12(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___boundarySystemType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundarySystemType_12), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryVisualizationProfile_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___boundaryVisualizationProfile_13)); }
	inline MixedRealityBoundaryVisualizationProfile_t730676E2834214BB1B8A69370446D87E52FF9092 * get_boundaryVisualizationProfile_13() const { return ___boundaryVisualizationProfile_13; }
	inline MixedRealityBoundaryVisualizationProfile_t730676E2834214BB1B8A69370446D87E52FF9092 ** get_address_of_boundaryVisualizationProfile_13() { return &___boundaryVisualizationProfile_13; }
	inline void set_boundaryVisualizationProfile_13(MixedRealityBoundaryVisualizationProfile_t730676E2834214BB1B8A69370446D87E52FF9092 * value)
	{
		___boundaryVisualizationProfile_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryVisualizationProfile_13), (void*)value);
	}

	inline static int32_t get_offset_of_enableTeleportSystem_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___enableTeleportSystem_14)); }
	inline bool get_enableTeleportSystem_14() const { return ___enableTeleportSystem_14; }
	inline bool* get_address_of_enableTeleportSystem_14() { return &___enableTeleportSystem_14; }
	inline void set_enableTeleportSystem_14(bool value)
	{
		___enableTeleportSystem_14 = value;
	}

	inline static int32_t get_offset_of_teleportSystemType_15() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___teleportSystemType_15)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_teleportSystemType_15() const { return ___teleportSystemType_15; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_teleportSystemType_15() { return &___teleportSystemType_15; }
	inline void set_teleportSystemType_15(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___teleportSystemType_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportSystemType_15), (void*)value);
	}

	inline static int32_t get_offset_of_enableSpatialAwarenessSystem_16() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___enableSpatialAwarenessSystem_16)); }
	inline bool get_enableSpatialAwarenessSystem_16() const { return ___enableSpatialAwarenessSystem_16; }
	inline bool* get_address_of_enableSpatialAwarenessSystem_16() { return &___enableSpatialAwarenessSystem_16; }
	inline void set_enableSpatialAwarenessSystem_16(bool value)
	{
		___enableSpatialAwarenessSystem_16 = value;
	}

	inline static int32_t get_offset_of_spatialAwarenessSystemType_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___spatialAwarenessSystemType_17)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_spatialAwarenessSystemType_17() const { return ___spatialAwarenessSystemType_17; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_spatialAwarenessSystemType_17() { return &___spatialAwarenessSystemType_17; }
	inline void set_spatialAwarenessSystemType_17(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___spatialAwarenessSystemType_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessSystemType_17), (void*)value);
	}

	inline static int32_t get_offset_of_spatialAwarenessSystemProfile_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___spatialAwarenessSystemProfile_18)); }
	inline MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * get_spatialAwarenessSystemProfile_18() const { return ___spatialAwarenessSystemProfile_18; }
	inline MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 ** get_address_of_spatialAwarenessSystemProfile_18() { return &___spatialAwarenessSystemProfile_18; }
	inline void set_spatialAwarenessSystemProfile_18(MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * value)
	{
		___spatialAwarenessSystemProfile_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessSystemProfile_18), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticsSystemProfile_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___diagnosticsSystemProfile_19)); }
	inline MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * get_diagnosticsSystemProfile_19() const { return ___diagnosticsSystemProfile_19; }
	inline MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 ** get_address_of_diagnosticsSystemProfile_19() { return &___diagnosticsSystemProfile_19; }
	inline void set_diagnosticsSystemProfile_19(MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * value)
	{
		___diagnosticsSystemProfile_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticsSystemProfile_19), (void*)value);
	}

	inline static int32_t get_offset_of_enableDiagnosticsSystem_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___enableDiagnosticsSystem_20)); }
	inline bool get_enableDiagnosticsSystem_20() const { return ___enableDiagnosticsSystem_20; }
	inline bool* get_address_of_enableDiagnosticsSystem_20() { return &___enableDiagnosticsSystem_20; }
	inline void set_enableDiagnosticsSystem_20(bool value)
	{
		___enableDiagnosticsSystem_20 = value;
	}

	inline static int32_t get_offset_of_diagnosticsSystemType_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___diagnosticsSystemType_21)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_diagnosticsSystemType_21() const { return ___diagnosticsSystemType_21; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_diagnosticsSystemType_21() { return &___diagnosticsSystemType_21; }
	inline void set_diagnosticsSystemType_21(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___diagnosticsSystemType_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticsSystemType_21), (void*)value);
	}

	inline static int32_t get_offset_of_registeredServiceProvidersProfile_22() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___registeredServiceProvidersProfile_22)); }
	inline MixedRealityRegisteredServiceProvidersProfile_tDB4B24605DAF2F884E7BB57E2A9E24AD8082B586 * get_registeredServiceProvidersProfile_22() const { return ___registeredServiceProvidersProfile_22; }
	inline MixedRealityRegisteredServiceProvidersProfile_tDB4B24605DAF2F884E7BB57E2A9E24AD8082B586 ** get_address_of_registeredServiceProvidersProfile_22() { return &___registeredServiceProvidersProfile_22; }
	inline void set_registeredServiceProvidersProfile_22(MixedRealityRegisteredServiceProvidersProfile_tDB4B24605DAF2F884E7BB57E2A9E24AD8082B586 * value)
	{
		___registeredServiceProvidersProfile_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registeredServiceProvidersProfile_22), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct  MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeProfile
	MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * ___activeProfile_7;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.MixedRealityToolkit::mixedRealityPlayspace
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___mixedRealityPlayspace_14;

public:
	inline static int32_t get_offset_of_activeProfile_7() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47, ___activeProfile_7)); }
	inline MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * get_activeProfile_7() const { return ___activeProfile_7; }
	inline MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 ** get_address_of_activeProfile_7() { return &___activeProfile_7; }
	inline void set_activeProfile_7(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * value)
	{
		___activeProfile_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeProfile_7), (void*)value);
	}

	inline static int32_t get_offset_of_mixedRealityPlayspace_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47, ___mixedRealityPlayspace_14)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_mixedRealityPlayspace_14() const { return ___mixedRealityPlayspace_14; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_mixedRealityPlayspace_14() { return &___mixedRealityPlayspace_14; }
	inline void set_mixedRealityPlayspace_14(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___mixedRealityPlayspace_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixedRealityPlayspace_14), (void*)value);
	}
};

struct MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::isInitializing
	bool ___isInitializing_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::isApplicationQuitting
	bool ___isApplicationQuitting_6;
	// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeSystems
	Dictionary_2_t800AAE737FB312BBA9170905905D74ED86BF5F59 * ___activeSystems_8;
	// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::registeredMixedRealityServices
	List_1_t8665C2870C9F0DA5B6D62AF0F0323E984195D9CC * ___registeredMixedRealityServices_9;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkit Microsoft.MixedReality.Toolkit.MixedRealityToolkit::instance
	MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * ___instance_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::newInstanceBeingInitialized
	bool ___newInstanceBeingInitialized_11;
	// System.Object Microsoft.MixedReality.Toolkit.MixedRealityToolkit::initializedLock
	RuntimeObject * ___initializedLock_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::searchForInstance
	bool ___searchForInstance_13;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.MixedRealityToolkit::inputSystem
	RuntimeObject* ___inputSystem_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::logInputSystem
	bool ___logInputSystem_16;
	// Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundarySystem Microsoft.MixedReality.Toolkit.MixedRealityToolkit::boundarySystem
	RuntimeObject* ___boundarySystem_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::logBoundarySystem
	bool ___logBoundarySystem_18;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.MixedRealityToolkit::spatialAwarenessSystem
	RuntimeObject* ___spatialAwarenessSystem_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::logSpatialAwarenessSystem
	bool ___logSpatialAwarenessSystem_20;
	// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportSystem Microsoft.MixedReality.Toolkit.MixedRealityToolkit::teleportSystem
	RuntimeObject* ___teleportSystem_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::logTeleportSystem
	bool ___logTeleportSystem_22;
	// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem Microsoft.MixedReality.Toolkit.MixedRealityToolkit::diagnosticsSystem
	RuntimeObject* ___diagnosticsSystem_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::logDiagnosticsSystem
	bool ___logDiagnosticsSystem_24;

public:
	inline static int32_t get_offset_of_isInitializing_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___isInitializing_5)); }
	inline bool get_isInitializing_5() const { return ___isInitializing_5; }
	inline bool* get_address_of_isInitializing_5() { return &___isInitializing_5; }
	inline void set_isInitializing_5(bool value)
	{
		___isInitializing_5 = value;
	}

	inline static int32_t get_offset_of_isApplicationQuitting_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___isApplicationQuitting_6)); }
	inline bool get_isApplicationQuitting_6() const { return ___isApplicationQuitting_6; }
	inline bool* get_address_of_isApplicationQuitting_6() { return &___isApplicationQuitting_6; }
	inline void set_isApplicationQuitting_6(bool value)
	{
		___isApplicationQuitting_6 = value;
	}

	inline static int32_t get_offset_of_activeSystems_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___activeSystems_8)); }
	inline Dictionary_2_t800AAE737FB312BBA9170905905D74ED86BF5F59 * get_activeSystems_8() const { return ___activeSystems_8; }
	inline Dictionary_2_t800AAE737FB312BBA9170905905D74ED86BF5F59 ** get_address_of_activeSystems_8() { return &___activeSystems_8; }
	inline void set_activeSystems_8(Dictionary_2_t800AAE737FB312BBA9170905905D74ED86BF5F59 * value)
	{
		___activeSystems_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeSystems_8), (void*)value);
	}

	inline static int32_t get_offset_of_registeredMixedRealityServices_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___registeredMixedRealityServices_9)); }
	inline List_1_t8665C2870C9F0DA5B6D62AF0F0323E984195D9CC * get_registeredMixedRealityServices_9() const { return ___registeredMixedRealityServices_9; }
	inline List_1_t8665C2870C9F0DA5B6D62AF0F0323E984195D9CC ** get_address_of_registeredMixedRealityServices_9() { return &___registeredMixedRealityServices_9; }
	inline void set_registeredMixedRealityServices_9(List_1_t8665C2870C9F0DA5B6D62AF0F0323E984195D9CC * value)
	{
		___registeredMixedRealityServices_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registeredMixedRealityServices_9), (void*)value);
	}

	inline static int32_t get_offset_of_instance_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___instance_10)); }
	inline MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * get_instance_10() const { return ___instance_10; }
	inline MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 ** get_address_of_instance_10() { return &___instance_10; }
	inline void set_instance_10(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * value)
	{
		___instance_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_10), (void*)value);
	}

	inline static int32_t get_offset_of_newInstanceBeingInitialized_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___newInstanceBeingInitialized_11)); }
	inline bool get_newInstanceBeingInitialized_11() const { return ___newInstanceBeingInitialized_11; }
	inline bool* get_address_of_newInstanceBeingInitialized_11() { return &___newInstanceBeingInitialized_11; }
	inline void set_newInstanceBeingInitialized_11(bool value)
	{
		___newInstanceBeingInitialized_11 = value;
	}

	inline static int32_t get_offset_of_initializedLock_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___initializedLock_12)); }
	inline RuntimeObject * get_initializedLock_12() const { return ___initializedLock_12; }
	inline RuntimeObject ** get_address_of_initializedLock_12() { return &___initializedLock_12; }
	inline void set_initializedLock_12(RuntimeObject * value)
	{
		___initializedLock_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initializedLock_12), (void*)value);
	}

	inline static int32_t get_offset_of_searchForInstance_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___searchForInstance_13)); }
	inline bool get_searchForInstance_13() const { return ___searchForInstance_13; }
	inline bool* get_address_of_searchForInstance_13() { return &___searchForInstance_13; }
	inline void set_searchForInstance_13(bool value)
	{
		___searchForInstance_13 = value;
	}

	inline static int32_t get_offset_of_inputSystem_15() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___inputSystem_15)); }
	inline RuntimeObject* get_inputSystem_15() const { return ___inputSystem_15; }
	inline RuntimeObject** get_address_of_inputSystem_15() { return &___inputSystem_15; }
	inline void set_inputSystem_15(RuntimeObject* value)
	{
		___inputSystem_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystem_15), (void*)value);
	}

	inline static int32_t get_offset_of_logInputSystem_16() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___logInputSystem_16)); }
	inline bool get_logInputSystem_16() const { return ___logInputSystem_16; }
	inline bool* get_address_of_logInputSystem_16() { return &___logInputSystem_16; }
	inline void set_logInputSystem_16(bool value)
	{
		___logInputSystem_16 = value;
	}

	inline static int32_t get_offset_of_boundarySystem_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___boundarySystem_17)); }
	inline RuntimeObject* get_boundarySystem_17() const { return ___boundarySystem_17; }
	inline RuntimeObject** get_address_of_boundarySystem_17() { return &___boundarySystem_17; }
	inline void set_boundarySystem_17(RuntimeObject* value)
	{
		___boundarySystem_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundarySystem_17), (void*)value);
	}

	inline static int32_t get_offset_of_logBoundarySystem_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___logBoundarySystem_18)); }
	inline bool get_logBoundarySystem_18() const { return ___logBoundarySystem_18; }
	inline bool* get_address_of_logBoundarySystem_18() { return &___logBoundarySystem_18; }
	inline void set_logBoundarySystem_18(bool value)
	{
		___logBoundarySystem_18 = value;
	}

	inline static int32_t get_offset_of_spatialAwarenessSystem_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___spatialAwarenessSystem_19)); }
	inline RuntimeObject* get_spatialAwarenessSystem_19() const { return ___spatialAwarenessSystem_19; }
	inline RuntimeObject** get_address_of_spatialAwarenessSystem_19() { return &___spatialAwarenessSystem_19; }
	inline void set_spatialAwarenessSystem_19(RuntimeObject* value)
	{
		___spatialAwarenessSystem_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessSystem_19), (void*)value);
	}

	inline static int32_t get_offset_of_logSpatialAwarenessSystem_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___logSpatialAwarenessSystem_20)); }
	inline bool get_logSpatialAwarenessSystem_20() const { return ___logSpatialAwarenessSystem_20; }
	inline bool* get_address_of_logSpatialAwarenessSystem_20() { return &___logSpatialAwarenessSystem_20; }
	inline void set_logSpatialAwarenessSystem_20(bool value)
	{
		___logSpatialAwarenessSystem_20 = value;
	}

	inline static int32_t get_offset_of_teleportSystem_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___teleportSystem_21)); }
	inline RuntimeObject* get_teleportSystem_21() const { return ___teleportSystem_21; }
	inline RuntimeObject** get_address_of_teleportSystem_21() { return &___teleportSystem_21; }
	inline void set_teleportSystem_21(RuntimeObject* value)
	{
		___teleportSystem_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportSystem_21), (void*)value);
	}

	inline static int32_t get_offset_of_logTeleportSystem_22() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___logTeleportSystem_22)); }
	inline bool get_logTeleportSystem_22() const { return ___logTeleportSystem_22; }
	inline bool* get_address_of_logTeleportSystem_22() { return &___logTeleportSystem_22; }
	inline void set_logTeleportSystem_22(bool value)
	{
		___logTeleportSystem_22 = value;
	}

	inline static int32_t get_offset_of_diagnosticsSystem_23() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___diagnosticsSystem_23)); }
	inline RuntimeObject* get_diagnosticsSystem_23() const { return ___diagnosticsSystem_23; }
	inline RuntimeObject** get_address_of_diagnosticsSystem_23() { return &___diagnosticsSystem_23; }
	inline void set_diagnosticsSystem_23(RuntimeObject* value)
	{
		___diagnosticsSystem_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticsSystem_23), (void*)value);
	}

	inline static int32_t get_offset_of_logDiagnosticsSystem_24() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___logDiagnosticsSystem_24)); }
	inline bool get_logDiagnosticsSystem_24() const { return ___logDiagnosticsSystem_24; }
	inline bool* get_address_of_logDiagnosticsSystem_24() { return &___logDiagnosticsSystem_24; }
	inline void set_logDiagnosticsSystem_24(bool value)
	{
		___logDiagnosticsSystem_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t39DD1136CDE343C8864073AF61557AFC03AB3778  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[]
struct SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B  m_Items[1];

public:
	inline SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___action_4))->___description_2), (void*)NULL);
		#endif
	}
	inline SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___action_4))->___description_2), (void*)NULL);
		#endif
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_gshared (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__21>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8_mF79397CAEB945141490F59C1BD206EE99A665923_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__23>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307_m36C69B770CEA16E8B0FF3EF5775C20999581B7C4_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__24>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE_mACD959048E0BEFAAB64A7AF3235BADEC66CE3B8B_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__25>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14_m68FCE75711F21611A5A26B9A22AB7A26A7BACACB_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 * p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663  AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__26>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13_m246C48D4A023BC591A2BD9486B18FA794B8AAFBF_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 * p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977  Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__21>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8_m6F59F3939C4B862731E835CA89DDF692AAFA964D_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * p0, U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 * p1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__23>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307_m57731DA77A5FCC5404C6C80E7E4DEC03F080D7AB_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * p0, U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__24>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE_mFEA2A86456A5DE1991D342BF30DCB50E25545DBC_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, RuntimeObject ** p0, U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__25>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14_m8C8434C84AF03D866D62B1E53C1364319F556995_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * p0, U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__26>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13_m8759843BFAF275211D16587CAF37B6E58D93E63F_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject ** p0, U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);

// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552 (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1 (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * __this, Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile,UnityEngine.Transform,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputDeviceManager__ctor_m90FF1C7E620BF651768D717F18C817B74CF2CBA8 (BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC * __this, RuntimeObject* p0, RuntimeObject* p1, MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * p2, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p3, String_t* p4, uint32_t p5, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * p6, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.IMixedRealityService Microsoft.MixedReality.Toolkit.BaseDataProvider::get_Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseDataProvider_get_Service_m98C3A6FC44F6BF183A5812DB3ADC6018B838E943 (BaseDataProvider_t2C66AC3F1D45196D4C589CFEBFAF20004EAF2ED7 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer__ctor_mF4F9C45412131377C1FF6B7A25CBAD0D02C0D6ED (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationHypothesisDelegate__ctor_mFB606F04C9375D67CD8701F116EA58381924D3A1 (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationHypothesis(UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationHypothesis_m18C5A5B49B3503D141FD3BF25E8CAE78DA2D2196 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationResultDelegate__ctor_mDECF2707DE7D125C6DE6BE8EC8E1BCD1539CF40C (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationResult(UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationResult_m72E518611183A8F055394759C76AF2C04C2C049E (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationCompletedDelegate__ctor_m5B703B2796175B619EDBD28F7B6EB86294678369 (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationComplete(UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationComplete_m7F58F5353A6197EDF83790B3A11B07A7C4775F10 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationErrorHandler__ctor_m13B3D1B66DB5DB3FA513E70E2DBEEBA1FDC6D0D6 (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationError(UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationError_m4A09F1227E7C3F954FACA66DD6F0F1720AF50C56 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::get_IsListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsDictationInputProvider_get_IsListening_mD0BB7681BF29793C36321C901A43882CD4F51F55 (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Microphone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m2E3373AD36865B7261BBA5E9140271A08E0FA004 (String_t* p0, const RuntimeMethod* method);
// UnityEngine.Windows.Speech.SpeechSystemStatus UnityEngine.Windows.Speech.DictationRecognizer::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_StopRecording_m2E54FAC6FE4C8E84C357F5BDF3912D37A9353B02 (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__21>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8_mF79397CAEB945141490F59C1BD206EE99A665923 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8_mF79397CAEB945141490F59C1BD206EE99A665923_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Dispose_m8D8EB78BD3CD6B18CF2240AD8506CE943F1692E7 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__23>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307_m36C69B770CEA16E8B0FF3EF5775C20999581B7C4 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307_m36C69B770CEA16E8B0FF3EF5775C20999581B7C4_gshared)(__this, p0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__24>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE_mACD959048E0BEFAAB64A7AF3235BADEC66CE3B8B (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE_mACD959048E0BEFAAB64A7AF3235BADEC66CE3B8B_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__25>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14_m68FCE75711F21611A5A26B9A22AB7A26A7BACACB (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14_m68FCE75711F21611A5A26B9A22AB7A26A7BACACB_gshared)(__this, p0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::Create()
inline AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  AsyncTaskMethodBuilder_1_Create_mA48D98A1A0551E8B40C8CFE8DCA405F2583BA6C8 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::Start<Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__26>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13_m974B24B91917D5D98A603145587D0E175ADA0657 (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13_m246C48D4A023BC591A2BD9486B18FA794B8AAFBF_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::get_Task()
inline Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * AsyncTaskMethodBuilder_1_get_Task_mA471503E5B53C6386B364975800C30B1CAC3F267 (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_m2E3D0E4890AE014AF687987F6160CA3D5ACDC29F (String_t* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m049465C7577B8DF294977376978A75C4B7D45AB8 (U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Windows.Speech.SpeechSystemStatus UnityEngine.Windows.Speech.PhraseRecognitionSystem::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC (const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecordingAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * WindowsDictationInputProvider_StopRecordingAsync_m970B34085B1E29671D89FDC39AED49B356598D8C (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<UnityEngine.AudioClip>::GetAwaiter()
inline TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986 (Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  (*) (Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC *, const RuntimeMethod*))Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444 (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__21>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8_mEEA6E381616F1BBC1B967D380C91272A08F8DDE9 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * p0, U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *, U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8_m6F59F3939C4B862731E835CA89DDF692AAFA964D_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>::GetResult()
inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * __this, const RuntimeMethod* method)
{
	return ((  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * (*) (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared)(__this, method);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationHypothesis(UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationHypothesis_m33D106BA3BD2C231CF9B3AB7CFC9D5D28DD63816 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationResult(UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationResult_mD2832F82043B0E918D07AB2F3D8C6F83AD7A4AE6 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationComplete(UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationComplete_m1C2487A5E937F84D15B73A2853AD4C65A537FB6F (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationError(UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationError_mA5CF0BEDD8CBC96098B623B48E70C5BD913C00B3 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__21_MoveNext_m47A33CB63BF9DB152DA4E153277D4AFA0C275E7D (U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<Disable>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__21_SetStateMachine_m9A497C5BA724040E66D8E8A86DE374F79002CD11 (U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecordingAsync(UnityEngine.GameObject,System.Single,System.Single,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * WindowsDictationInputProvider_StartRecordingAsync_m589DD5872344989C877F28863898B6B9BE503CD6 (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, float ___initialSilenceTimeout1, float ___autoSilenceTimeout2, int32_t ___recordingTime3, String_t* ___micDeviceName4, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87 (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__23>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307_m57731DA77A5FCC5404C6C80E7E4DEC03F080D7AB (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * p0, U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307_m57731DA77A5FCC5404C6C80E7E4DEC03F080D7AB_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__23_MoveNext_m775BFF294DD41099A424FDDD06B86D0AA538591D (U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecording>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__23_SetStateMachine_m7AA53F15F45C5CCBA719503EAA8356901B5041A9 (U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::set_IsListening(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_set_IsListening_m5088D38E5362A1A5F1248E662454FE52455537A5 (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_Shutdown_m902D4966E62C9D32367FE101DE80B09D93B5B2BC (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * AwaiterExtensions_GetAwaiter_m3AD10B6553E80BAE88129FAB5C60875B2AFF0FA4 (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m633D60D5E32FEB89721D580C2DCC2776A2100D5E (SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__24>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_TisU3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE_m0027BE8454A225CC4DC66A41BCBC9E963CA350E7 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 ** p0, U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 **, U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE_mFEA2A86456A5DE1991D342BF30DCB50E25545DBC_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m054B4EB97533092C2F65E157B15944A62BEAACB1 (SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_mF079FFC698AE94F132D4E0AD072498F6937BAF6B (String_t* p0, int32_t* p1, int32_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::set_InitialSilenceTimeoutSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_set_InitialSilenceTimeoutSeconds_mD355A47F132B4E26C60C1E200C9C0B99FDCABC06 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::set_AutoSilenceTimeoutSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_set_AutoSilenceTimeoutSeconds_m96E3450BE28A238970C5548AD8896BE3F02DB8F9 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Start_mA9B2AB4490205206F640DFE552B0944396D30536 (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * Microphone_Start_mF756A7EBA3E62EF0D138A220482B725D16E96047 (String_t* p0, bool p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__24_MoveNext_m1049AB8081E5753F324230DC7DBD5BA6F184387C (U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StartRecordingAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__24_SetStateMachine_m0AD712D91EA5F2C5CE45A21185CABEEFA3ACDDBF (U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__25>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14_mEC43BCB77FBA06BB0419EBAF4E95E02F9BBF2C89 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * p0, U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *, U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14_m8C8434C84AF03D866D62B1E53C1364319F556995_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__25_MoveNext_mDB280324AC77948251889B37780FB2E2DB7FFCA8 (U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecording>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__25_SetStateMachine_mE7B5B184E72BBC57AF389B135CC3FDB114F50962 (U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictationRecognizer_Stop_m42D22C5D03B17B6DDF94B13E9DC678AB4C11970E (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__26>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_TisU3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13_m77D9C8675BB71625C9881F4C6E9851C072316554 (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 ** p0, U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 **, U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13_m8759843BFAF275211D16587CAF37B6E58D93E63F_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_Restart_m8FE23747DD233E3E42BDDC5A6F3C3B79A1F20A3F (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m3546DBB6B478B7DB18842DC0782B98EBC9D05EE1 (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mD5596BF881B6EC3D7675495E22695C03E96D0101 (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__26_MoveNext_mBD85A2A675FF659A6D2A85D20DFE3F82EB3DECC8 (U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m6D0E84B2F66A998AE916997EB96A356441721D76 (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider/<StopRecordingAsync>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__26_SetStateMachine_m2DEB172373D04B0A93904EA906CB402DE296C9E5 (U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.MixedRealityToolkit Microsoft.MixedReality.Toolkit.MixedRealityToolkit::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * MixedRealityToolkit_get_Instance_m02A5ECDA0A8291AA2EDDC518554EF3FAA470DBAD (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkit::get_ActiveProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * MixedRealityToolkit_get_ActiveProfile_m8D92538CC2A86B4117355C5EF93CCB39CAFE0602 (MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::get_InputSystemProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * MixedRealityToolkitConfigurationProfile_get_InputSystemProfile_mEE2A27C332E7A55371E173C1AC6057EB58E66538 (MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::get_SpeechCommandsProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD * MixedRealityInputSystemProfile_get_SpeechCommandsProfile_m112B9F7B5EE6ACDBF893BB69A8AED00ABF0F949E (MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[] Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::get_SpeechCommands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* MixedRealitySpeechCommandsProfile_get_SpeechCommands_m1BAA28B890C02DD8984C7FBA1EF1B905BDBAD6B9 (MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Windows.Speech.PhraseRecognizer::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[] Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_Commands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* WindowsSpeechInputProvider_get_Commands_m5E794CB29A7524A9B5F2FEFFD681307D80CFC314 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::get_LocalizedKeyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechCommands_get_LocalizedKeyword_m5CB14BEDBB6125BD45E76EA4EB6E66A9D8C6781D (SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::get_SpeechRecognitionConfidenceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealitySpeechCommandsProfile_get_SpeechRecognitionConfidenceLevel_mD07EC3F0C555F0635B714CC901BD1635C8F3609A (MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::set_RecognitionConfidenceLevel(Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_mC9C28B85D91B50F6181C8A832DBC2378B7E6A063 (WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * __this, int32_t ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_RecognitionConfidenceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_mD0722F8222669F932A114159E2B4AA84BA819C0E (WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.KeywordRecognizer::.ctor(System.String[],UnityEngine.Windows.Speech.ConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognizer__ctor_m10E461E5F20190D903506B99E53E522C589F9A56 (KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizedDelegate__ctor_m0D7CFE194591D6DEE1120B7E23917C77ED5027F1 (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::add_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_add_OnPhraseRecognized_m3A70137B301880FB1CCA497AADC4457DF879B223 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile::get_SpeechRecognizerStartBehavior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_m8DB42B73900D75367BCCADE158634F41C237363A (MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::StartRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StartRecognition_m9799DAFEC06E5F78EC639BC903A9371B06CF17EF (WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::get_KeyCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechCommands_get_KeyCode_m57FD6DCFF88FC2282A875DA0F22A262F37FAD11A (SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA (int32_t p0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::OnPhraseRecognized(UnityEngine.Windows.Speech.ConfidenceLevel,System.TimeSpan,System.DateTime,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_OnPhraseRecognized_mD2BA3DF559733CE98DE4EB3F20E6F7550B4F0914 (WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * __this, int32_t ___confidence0, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration1, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime2, String_t* ___text3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::StopRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StopRecognition_mEDBAC69B9FE8A1AF26F2E1A817D5D7767E88B69C (WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::remove_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_remove_OnPhraseRecognized_m238073B8E92F06363AAFE5918FDF5B7328A55F69 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Dispose_m617A308A831D5314CE7B10301DB0CADAD080F73A (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Start_m2CDF8ABBF99C79C181488B6F0310375BC39D2459 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhraseRecognizer_Stop_mD94B6DDFE77D1AC1DC10C5BF015F76F607B81F19 (PhraseRecognizer_t3D0602E6C70DD7177C28FBA60BE17CF2D8D5701F * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, p0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared)(__this, method);
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile,UnityEngine.Transform,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider__ctor_mEB27B643B9EBE5761D7712F6FE7269C3DDFF7EDD (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, RuntimeObject* ___registrar0, RuntimeObject* ___inputSystem1, MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * ___inputSystemProfile2, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___playspace3, String_t* ___name4, uint32_t ___priority5, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___profile6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider__ctor_mEB27B643B9EBE5761D7712F6FE7269C3DDFF7EDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B2_0 = NULL;
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * G_B2_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B1_0 = NULL;
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * G_B1_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B4_0 = NULL;
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * G_B4_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B3_0 = NULL;
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * G_B3_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B6_0 = NULL;
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * G_B6_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B5_0 = NULL;
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * G_B5_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B8_0 = NULL;
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * G_B8_1 = NULL;
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * G_B7_0 = NULL;
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * G_B7_1 = NULL;
	{
		// private string deviceName = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_deviceName_15(L_0);
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStarted = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Stopped);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_1 = ((U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var);
		U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE * L_3 = ((U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_4 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__0_0_m23DE4E969F2784FC9BA21403A9FDF7E19FB44649_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_5 = L_4;
		((U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_6 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
		WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_6, G_B2_0, /*hidden argument*/NULL);
		NullCheck(G_B2_1);
		G_B2_1->set_waitUntilPhraseRecognitionSystemHasStarted_20(L_6);
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStopped = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Running);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_7 = ((U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var))->get_U3CU3E9__0_1_2();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = __this;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = __this;
			goto IL_0055;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var);
		U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE * L_9 = ((U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_10 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__0_1_m1C03C46B118BE1156878635D1D8EA7666C57EE39_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_11 = L_10;
		((U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var))->set_U3CU3E9__0_1_2(L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_0055:
	{
		WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_12 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
		WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_12, G_B4_0, /*hidden argument*/NULL);
		NullCheck(G_B4_1);
		G_B4_1->set_waitUntilPhraseRecognitionSystemHasStopped_21(L_12);
		// private readonly WaitUntil waitUntilDictationRecognizerHasStarted = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Stopped);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_13 = ((U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var))->get_U3CU3E9__0_2_3();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_14 = L_13;
		G_B5_0 = L_14;
		G_B5_1 = __this;
		if (L_14)
		{
			G_B6_0 = L_14;
			G_B6_1 = __this;
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var);
		U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE * L_15 = ((U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_16 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__0_2_mE0048D6F6879093B6017BB04604AB72FAE428447_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_17 = L_16;
		((U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var))->set_U3CU3E9__0_2_3(L_17);
		G_B6_0 = L_17;
		G_B6_1 = G_B5_1;
	}

IL_007f:
	{
		WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_18 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
		WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_18, G_B6_0, /*hidden argument*/NULL);
		NullCheck(G_B6_1);
		G_B6_1->set_waitUntilDictationRecognizerHasStarted_22(L_18);
		// private readonly WaitUntil waitUntilDictationRecognizerHasStopped = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Running);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_19 = ((U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var))->get_U3CU3E9__0_3_4();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_20 = L_19;
		G_B7_0 = L_20;
		G_B7_1 = __this;
		if (L_20)
		{
			G_B8_0 = L_20;
			G_B8_1 = __this;
			goto IL_00a9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var);
		U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE * L_21 = ((U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_22 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552(L_22, L_21, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__0_3_mA228641EF5CDC00551286593AE8873D6B338A749_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m479BA9DCBE3F496111BD05CC90CB1044C5FFD552_RuntimeMethod_var);
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_23 = L_22;
		((U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var))->set_U3CU3E9__0_3_4(L_23);
		G_B8_0 = L_23;
		G_B8_1 = G_B7_1;
	}

IL_00a9:
	{
		WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_24 = (WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F *)il2cpp_codegen_object_new(WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F_il2cpp_TypeInfo_var);
		WaitUntil__ctor_mC1A43A512B185C55FBE858F741BEA6D4417105C1(L_24, G_B8_0, /*hidden argument*/NULL);
		NullCheck(G_B8_1);
		G_B8_1->set_waitUntilDictationRecognizerHasStopped_23(L_24);
		// BaseMixedRealityProfile profile = null) : base(registrar, inputSystem, inputSystemProfile, playspace, name, priority, profile) { }
		RuntimeObject* L_25 = ___registrar0;
		RuntimeObject* L_26 = ___inputSystem1;
		MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * L_27 = ___inputSystemProfile2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = ___playspace3;
		String_t* L_29 = ___name4;
		uint32_t L_30 = ___priority5;
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_31 = ___profile6;
		BaseInputDeviceManager__ctor_m90FF1C7E620BF651768D717F18C817B74CF2CBA8(__this, L_25, L_26, L_27, L_28, L_29, L_30, L_31, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(registrar, inputSystem, inputSystemProfile, playspace, name, priority, profile) { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::get_IsListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsDictationInputProvider_get_IsListening_mD0BB7681BF29793C36321C901A43882CD4F51F55 (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; private set; } = false;
		bool L_0 = __this->get_U3CIsListeningU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::set_IsListening(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_set_IsListening_m5088D38E5362A1A5F1248E662454FE52455537A5 (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsListeningU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Enable_mC85C435F781B24E856FA2D5589F0D5342A12DC12 (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_Enable_mC85C435F781B24E856FA2D5589F0D5342A12DC12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (!Application.isPlaying) { return; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!Application.isPlaying) { return; }
		return;
	}

IL_0008:
	{
		// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
		RuntimeObject* L_1 = BaseDataProvider_get_Service_m98C3A6FC44F6BF183A5812DB3ADC6018B838E943(__this, /*hidden argument*/NULL);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var));
		// if (inputSystem == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.LogError($"Unable to start {Name}. An Input System is required for this feature.");
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String Microsoft.MixedReality.Toolkit.BaseService::get_Name() */, __this);
		String_t* L_4 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralFF448159DC2D8E7C27FB42F3D195D5863191E18B, L_3, _stringLiteral3DA53827DA45EEF8CE51E69F81BFF90A6864DA69, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_4, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0032:
	{
		// inputSource = inputSystem.RequestNewGenericInputSource(Name, sourceType: InputSourceType.Voice);
		RuntimeObject* L_5 = V_0;
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String Microsoft.MixedReality.Toolkit.BaseService::get_Name() */, __this);
		NullCheck(L_5);
		RuntimeObject* L_7 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, IMixedRealityPointerU5BU5D_t39DD1136CDE343C8864073AF61557AFC03AB3778*, int32_t >::Invoke(20 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RequestNewGenericInputSource(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[],Microsoft.MixedReality.Toolkit.Input.InputSourceType) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, L_5, L_6, (IMixedRealityPointerU5BU5D_t39DD1136CDE343C8864073AF61557AFC03AB3778*)(IMixedRealityPointerU5BU5D_t39DD1136CDE343C8864073AF61557AFC03AB3778*)NULL, 3);
		__this->set_inputSource_13(L_7);
		// dictationResult = string.Empty;
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_dictationResult_17(L_8);
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			// if (dictationRecognizer == null)
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_9 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
			if (L_9)
			{
				goto IL_00ba;
			}
		}

IL_0058:
		{
			// dictationRecognizer = new DictationRecognizer();
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_10 = (DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 *)il2cpp_codegen_object_new(DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355_il2cpp_TypeInfo_var);
			DictationRecognizer__ctor_mF4F9C45412131377C1FF6B7A25CBAD0D02C0D6ED(L_10, /*hidden argument*/NULL);
			((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->set_dictationRecognizer_19(L_10);
			// dictationRecognizer.DictationHypothesis += DictationRecognizer_DictationHypothesis;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_11 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
			DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_12 = (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF *)il2cpp_codegen_object_new(DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF_il2cpp_TypeInfo_var);
			DictationHypothesisDelegate__ctor_mFB606F04C9375D67CD8701F116EA58381924D3A1(L_12, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mAAAA8DDD2F3A94F3C06C5457AE27BACB8FEDF238_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_11);
			DictationRecognizer_add_DictationHypothesis_m18C5A5B49B3503D141FD3BF25E8CAE78DA2D2196(L_11, L_12, /*hidden argument*/NULL);
			// dictationRecognizer.DictationResult += DictationRecognizer_DictationResult;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_13 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
			DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_14 = (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 *)il2cpp_codegen_object_new(DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87_il2cpp_TypeInfo_var);
			DictationResultDelegate__ctor_mDECF2707DE7D125C6DE6BE8EC8E1BCD1539CF40C(L_14, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationResult_m5EBBA30C99CA9F33A09DBD107141DA17794D3CA9_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_13);
			DictationRecognizer_add_DictationResult_m72E518611183A8F055394759C76AF2C04C2C049E(L_13, L_14, /*hidden argument*/NULL);
			// dictationRecognizer.DictationComplete += DictationRecognizer_DictationComplete;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_15 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
			DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_16 = (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC *)il2cpp_codegen_object_new(DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_il2cpp_TypeInfo_var);
			DictationCompletedDelegate__ctor_m5B703B2796175B619EDBD28F7B6EB86294678369(L_16, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mB73F8B7863759593D8C29CED21711FC64CE1D283_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_15);
			DictationRecognizer_add_DictationComplete_m7F58F5353A6197EDF83790B3A11B07A7C4775F10(L_15, L_16, /*hidden argument*/NULL);
			// dictationRecognizer.DictationError += DictationRecognizer_DictationError;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_17 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
			DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_18 = (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 *)il2cpp_codegen_object_new(DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13_il2cpp_TypeInfo_var);
			DictationErrorHandler__ctor_m13B3D1B66DB5DB3FA513E70E2DBEEBA1FDC6D0D6(L_18, __this, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationError_m8B37F8CAE58CEDCFA7AC40D3BDC3C47CA0C13456_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_17);
			DictationRecognizer_add_DictationError_m4A09F1227E7C3F954FACA66DD6F0F1720AF50C56(L_17, L_18, /*hidden argument*/NULL);
		}

IL_00ba:
		{
			// }
			goto IL_00d5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00bc;
		throw e;
	}

CATCH_00bc:
	{ // begin catch(System.Exception)
		// catch (System.Exception ex)
		V_1 = ((Exception_t *)__exception_local);
		// Debug.LogError($"Failed to start dictation recognizer. Are microphone permissions granted? Exception: {ex}");
		Exception_t * L_19 = V_1;
		String_t* L_20 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralE8FC5A5EAF7157371226B78F77C919CAD83E741A, L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_20, /*hidden argument*/NULL);
		// Disable();
		VirtActionInvoker0::Invoke(23 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable() */, __this);
		// }
		goto IL_00d5;
	} // end catch (depth: 1)

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Update_m089C4765A4F794D8F7F383084C0F86E0985539DF (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_Update_m089C4765A4F794D8F7F383084C0F86E0985539DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
		RuntimeObject* L_0 = BaseDataProvider_get_Service_m98C3A6FC44F6BF183A5812DB3ADC6018B838E943(__this, /*hidden argument*/NULL);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var));
		// if (!Application.isPlaying || inputSystem == null) { return; }
		bool L_1 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (!Application.isPlaying || inputSystem == null) { return; }
		return;
	}

IL_0017:
	{
		// if (!isTransitioning && IsListening && !Microphone.IsRecording(deviceName) && dictationRecognizer.Status == SpeechSystemStatus.Running)
		bool L_3 = __this->get_isTransitioning_12();
		if (L_3)
		{
			goto IL_0047;
		}
	}
	{
		bool L_4 = WindowsDictationInputProvider_get_IsListening_mD0BB7681BF29793C36321C901A43882CD4F51F55(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_5 = __this->get_deviceName_15();
		bool L_6 = Microphone_IsRecording_m2E3373AD36865B7261BBA5E9140271A08E0FA004(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0047;
		}
	}
	{
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_7 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
		NullCheck(L_7);
		int32_t L_8 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		// StopRecording();
		WindowsDictationInputProvider_StopRecording_m2E54FAC6FE4C8E84C357F5BDF3912D37A9353B02(__this, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// if (!hasFailed && dictationRecognizer.Status == SpeechSystemStatus.Failed)
		bool L_9 = __this->get_hasFailed_10();
		if (L_9)
		{
			goto IL_0075;
		}
	}
	{
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_10 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
		NullCheck(L_10);
		int32_t L_11 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_10, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_0075;
		}
	}
	{
		// hasFailed = true;
		__this->set_hasFailed_10((bool)1);
		// inputSystem.RaiseDictationError(inputSource, "Dictation recognizer has failed!");
		RuntimeObject* L_12 = V_0;
		RuntimeObject* L_13 = __this->get_inputSource_13();
		NullCheck(L_12);
		InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(59 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, L_12, L_13, _stringLiteral043544CCA4B2803EA7424D747276922CA441C1F9, (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Disable_m3C36CE9BE7EEAFC5F69BE88D5868E8479C351CB9 (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_Disable_m3C36CE9BE7EEAFC5F69BE88D5868E8479C351CB9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8_mF79397CAEB945141490F59C1BD206EE99A665923((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8_mF79397CAEB945141490F59C1BD206EE99A665923_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_Destroy_mCD943619CA4EBE4FF9B7839A8D7C11FE5B5863D3 (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_Destroy_mCD943619CA4EBE4FF9B7839A8D7C11FE5B5863D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * G_B3_0 = NULL;
	DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * G_B2_0 = NULL;
	{
		// if (Application.isPlaying)
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// dictationRecognizer?.Dispose();
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_1 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		NullCheck(G_B3_0);
		DictationRecognizer_Dispose_m8D8EB78BD3CD6B18CF2240AD8506CE943F1692E7(G_B3_0, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecording(UnityEngine.GameObject,System.Single,System.Single,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_StartRecording_mDE646B84BAE9D0F13822DB874D0DEE3810DE88B4 (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, float ___initialSilenceTimeout1, float ___autoSilenceTimeout2, int32_t ___recordingTime3, String_t* ___micDeviceName4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_StartRecording_mDE646B84BAE9D0F13822DB874D0DEE3810DE88B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___listener0;
		(&V_0)->set_listener_3(L_0);
		float L_1 = ___initialSilenceTimeout1;
		(&V_0)->set_initialSilenceTimeout_4(L_1);
		float L_2 = ___autoSilenceTimeout2;
		(&V_0)->set_autoSilenceTimeout_5(L_2);
		int32_t L_3 = ___recordingTime3;
		(&V_0)->set_recordingTime_6(L_3);
		String_t* L_4 = ___micDeviceName4;
		(&V_0)->set_micDeviceName_7(L_4);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_5 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_5);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307  L_6 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_7 = L_6.get_U3CU3Et__builder_1();
		V_1 = L_7;
		AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307_m36C69B770CEA16E8B0FF3EF5775C20999581B7C4((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307_m36C69B770CEA16E8B0FF3EF5775C20999581B7C4_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecordingAsync(UnityEngine.GameObject,System.Single,System.Single,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * WindowsDictationInputProvider_StartRecordingAsync_m589DD5872344989C877F28863898B6B9BE503CD6 (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, float ___initialSilenceTimeout1, float ___autoSilenceTimeout2, int32_t ___recordingTime3, String_t* ___micDeviceName4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_StartRecordingAsync_m589DD5872344989C877F28863898B6B9BE503CD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___listener0;
		(&V_0)->set_listener_3(L_0);
		float L_1 = ___initialSilenceTimeout1;
		(&V_0)->set_initialSilenceTimeout_5(L_1);
		float L_2 = ___autoSilenceTimeout2;
		(&V_0)->set_autoSilenceTimeout_6(L_2);
		int32_t L_3 = ___recordingTime3;
		(&V_0)->set_recordingTime_7(L_3);
		String_t* L_4 = ___micDeviceName4;
		(&V_0)->set_micDeviceName_4(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_5 = AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_5);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE  L_6 = V_0;
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_7 = L_6.get_U3CU3Et__builder_1();
		V_1 = L_7;
		AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE_mACD959048E0BEFAAB64A7AF3235BADEC66CE3B8B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)(&V_1), (U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE_mACD959048E0BEFAAB64A7AF3235BADEC66CE3B8B_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_8 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_9 = AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_StopRecording_m2E54FAC6FE4C8E84C357F5BDF3912D37A9353B02 (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_StopRecording_m2E54FAC6FE4C8E84C357F5BDF3912D37A9353B02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14_m68FCE75711F21611A5A26B9A22AB7A26A7BACACB((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14_m68FCE75711F21611A5A26B9A22AB7A26A7BACACB_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecordingAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * WindowsDictationInputProvider_StopRecordingAsync_m970B34085B1E29671D89FDC39AED49B356598D8C (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_StopRecordingAsync_m970B34085B1E29671D89FDC39AED49B356598D8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  L_0 = AsyncTaskMethodBuilder_1_Create_mA48D98A1A0551E8B40C8CFE8DCA405F2583BA6C8(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_mA48D98A1A0551E8B40C8CFE8DCA405F2583BA6C8_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13  L_1 = V_0;
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13_m974B24B91917D5D98A603145587D0E175ADA0657((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)(&V_1), (U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13_m974B24B91917D5D98A603145587D0E175ADA0657_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * L_4 = AsyncTaskMethodBuilder_1_get_Task_mA471503E5B53C6386B364975800C30B1CAC3F267((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_mA471503E5B53C6386B364975800C30B1CAC3F267_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationRecognizer_DictationHypothesis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mAAAA8DDD2F3A94F3C06C5457AE27BACB8FEDF238 (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mAAAA8DDD2F3A94F3C06C5457AE27BACB8FEDF238_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// dictationResult = $"{textSoFar} {text}...";
		StringBuilder_t * L_0 = __this->get_textSoFar_14();
		String_t* L_1 = ___text0;
		String_t* L_2 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral8E8C95F1F8BE0FB75474F5AC7AEA8661848072B6, L_0, L_1, /*hidden argument*/NULL);
		__this->set_dictationResult_17(L_2);
		// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
		RuntimeObject* L_3 = BaseDataProvider_get_Service_m98C3A6FC44F6BF183A5812DB3ADC6018B838E943(__this, /*hidden argument*/NULL);
		// inputSystem?.RaiseDictationHypothesis(inputSource, dictationResult);
		RuntimeObject* L_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var));
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0027;
		}
	}
	{
		return;
	}

IL_0027:
	{
		RuntimeObject* L_5 = __this->get_inputSource_13();
		String_t* L_6 = __this->get_dictationResult_17();
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(56 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationHypothesis(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B2_0, L_5, L_6, (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationRecognizer_DictationResult(System.String,UnityEngine.Windows.Speech.ConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationResult_m5EBBA30C99CA9F33A09DBD107141DA17794D3CA9 (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, String_t* ___text0, int32_t ___confidence1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_DictationRecognizer_DictationResult_m5EBBA30C99CA9F33A09DBD107141DA17794D3CA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// textSoFar.Append($"{text}. ");
		StringBuilder_t * L_0 = __this->get_textSoFar_14();
		String_t* L_1 = ___text0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_1, _stringLiteral94C67DA09E3C3949480AC8458C225636B0DD8B77, /*hidden argument*/NULL);
		NullCheck(L_0);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_0, L_2, /*hidden argument*/NULL);
		// dictationResult = textSoFar.ToString();
		StringBuilder_t * L_3 = __this->get_textSoFar_14();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		__this->set_dictationResult_17(L_4);
		// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
		RuntimeObject* L_5 = BaseDataProvider_get_Service_m98C3A6FC44F6BF183A5812DB3ADC6018B838E943(__this, /*hidden argument*/NULL);
		// inputSystem?.RaiseDictationResult(inputSource, dictationResult);
		RuntimeObject* L_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var));
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0038;
		}
	}
	{
		return;
	}

IL_0038:
	{
		RuntimeObject* L_7 = __this->get_inputSource_13();
		String_t* L_8 = __this->get_dictationResult_17();
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(57 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationResult(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B2_0, L_7, L_8, (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationRecognizer_DictationComplete(UnityEngine.Windows.Speech.DictationCompletionCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mB73F8B7863759593D8C29CED21711FC64CE1D283 (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mB73F8B7863759593D8C29CED21711FC64CE1D283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// if (cause == DictationCompletionCause.TimeoutExceeded)
		int32_t L_0 = ___cause0;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_001a;
		}
	}
	{
		// Microphone.End(deviceName);
		String_t* L_1 = __this->get_deviceName_15();
		Microphone_End_m2E3D0E4890AE014AF687987F6160CA3D5ACDC29F(L_1, /*hidden argument*/NULL);
		// dictationResult = "Dictation has timed out. Please try again.";
		__this->set_dictationResult_17(_stringLiteralD42A426DCC3C853B65741017F69E8B4FF3533311);
	}

IL_001a:
	{
		// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
		RuntimeObject* L_2 = BaseDataProvider_get_Service_m98C3A6FC44F6BF183A5812DB3ADC6018B838E943(__this, /*hidden argument*/NULL);
		// inputSystem?.RaiseDictationComplete(inputSource, dictationResult, dictationAudioClip);
		RuntimeObject* L_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var));
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_002b;
		}
	}
	{
		goto IL_0042;
	}

IL_002b:
	{
		RuntimeObject* L_4 = __this->get_inputSource_13();
		String_t* L_5 = __this->get_dictationResult_17();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_6 = __this->get_dictationAudioClip_18();
		NullCheck(G_B4_0);
		InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(58 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationComplete(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B4_0, L_4, L_5, L_6);
	}

IL_0042:
	{
		// textSoFar = null;
		__this->set_textSoFar_14((StringBuilder_t *)NULL);
		// dictationResult = string.Empty;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_dictationResult_17(L_7);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationRecognizer_DictationError(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsDictationInputProvider_DictationRecognizer_DictationError_m8B37F8CAE58CEDCFA7AC40D3BDC3C47CA0C13456 (WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsDictationInputProvider_DictationRecognizer_DictationError_m8B37F8CAE58CEDCFA7AC40D3BDC3C47CA0C13456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// dictationResult = $"{error}\nHRESULT: {hresult}";
		String_t* L_0 = ___error0;
		int32_t L_1 = ___hresult1;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6CF5E30AB1D5042BC2499F17DC8EC6FC604FEEE3, L_0, L_3, /*hidden argument*/NULL);
		__this->set_dictationResult_17(L_4);
		// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
		RuntimeObject* L_5 = BaseDataProvider_get_Service_m98C3A6FC44F6BF183A5812DB3ADC6018B838E943(__this, /*hidden argument*/NULL);
		// inputSystem?.RaiseDictationError(inputSource, dictationResult);
		RuntimeObject* L_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var));
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0028;
		}
	}
	{
		goto IL_003a;
	}

IL_0028:
	{
		RuntimeObject* L_7 = __this->get_inputSource_13();
		String_t* L_8 = __this->get_dictationResult_17();
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(59 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B2_0, L_7, L_8, (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL);
	}

IL_003a:
	{
		// textSoFar = null;
		__this->set_textSoFar_14((StringBuilder_t *)NULL);
		// dictationResult = string.Empty;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_dictationResult_17(L_9);
		// }
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3A0FE450C38C04A83E5CB2EC3B0722AF4ECD0AAB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m3A0FE450C38C04A83E5CB2EC3B0722AF4ECD0AAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE * L_0 = (U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE *)il2cpp_codegen_object_new(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m049465C7577B8DF294977376978A75C4B7D45AB8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m049465C7577B8DF294977376978A75C4B7D45AB8 (U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<.ctor>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__0_0_m23DE4E969F2784FC9BA21403A9FDF7E19FB44649 (U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE * __this, const RuntimeMethod* method)
{
	{
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStarted = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Stopped);
		int32_t L_0 = PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC(/*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<.ctor>b__0_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__0_1_m1C03C46B118BE1156878635D1D8EA7666C57EE39 (U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE * __this, const RuntimeMethod* method)
{
	{
		// private readonly WaitUntil waitUntilPhraseRecognitionSystemHasStopped = new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Running);
		int32_t L_0 = PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC(/*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<.ctor>b__0_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__0_2_mE0048D6F6879093B6017BB04604AB72FAE428447 (U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__0_2_mE0048D6F6879093B6017BB04604AB72FAE428447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly WaitUntil waitUntilDictationRecognizerHasStarted = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Stopped);
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_0 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
		NullCheck(L_0);
		int32_t L_1 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_0, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<>c::<.ctor>b__0_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__0_3_mA228641EF5CDC00551286593AE8873D6B338A749 (U3CU3Ec_t50C182B37EDC5ED5FFF4C1936C0F4BFE8DA0ADEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__0_3_mA228641EF5CDC00551286593AE8873D6B338A749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly WaitUntil waitUntilDictationRecognizerHasStopped = new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Running);
		DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_0 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
		NullCheck(L_0);
		int32_t L_1 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<Disable>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__21_MoveNext_m47A33CB63BF9DB152DA4E153277D4AFA0C275E7D (U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDisableU3Ed__21_MoveNext_m47A33CB63BF9DB152DA4E153277D4AFA0C275E7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * V_1 = NULL;
	TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006d;
			}
		}

IL_0011:
		{
			// if (Application.isPlaying && dictationRecognizer != null)
			bool L_3 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_00e9;
			}
		}

IL_001b:
		{
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_4 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
			if (!L_4)
			{
				goto IL_00e9;
			}
		}

IL_0025:
		{
			// if (!isTransitioning && IsListening) { await StopRecordingAsync(); }
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = L_5->get_isTransitioning_12();
			if (L_6)
			{
				goto IL_0091;
			}
		}

IL_002d:
		{
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = WindowsDictationInputProvider_get_IsListening_mD0BB7681BF29793C36321C901A43882CD4F51F55(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0091;
			}
		}

IL_0035:
		{
			// if (!isTransitioning && IsListening) { await StopRecordingAsync(); }
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_9 = V_1;
			NullCheck(L_9);
			Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * L_10 = WindowsDictationInputProvider_StopRecordingAsync_m970B34085B1E29671D89FDC39AED49B356598D8C(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_11 = Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986(L_10, /*hidden argument*/Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986_RuntimeMethod_var);
			V_2 = L_11;
			bool L_12 = TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444((TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0089;
			}
		}

IL_004a:
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_14 = V_2;
			__this->set_U3CU3Eu__1_3(L_14);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_15 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8_mEEA6E381616F1BBC1B967D380C91272A08F8DDE9((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_15, (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_2), (U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8_mEEA6E381616F1BBC1B967D380C91272A08F8DDE9_RuntimeMethod_var);
			goto IL_0115;
		}

IL_006d:
		{
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_16 = __this->get_U3CU3Eu__1_3();
			V_2 = L_16;
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * L_17 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 ));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->set_U3CU3E1__state_0(L_18);
		}

IL_0089:
		{
			TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD((TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD_RuntimeMethod_var);
		}

IL_0091:
		{
			// dictationRecognizer.DictationHypothesis -= DictationRecognizer_DictationHypothesis;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_19 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_20 = V_1;
			DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF * L_21 = (DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF *)il2cpp_codegen_object_new(DictationHypothesisDelegate_tC4A57853B520FE11F0C48C80E2C8009B7A1691FF_il2cpp_TypeInfo_var);
			DictationHypothesisDelegate__ctor_mFB606F04C9375D67CD8701F116EA58381924D3A1(L_21, L_20, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationHypothesis_mAAAA8DDD2F3A94F3C06C5457AE27BACB8FEDF238_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_19);
			DictationRecognizer_remove_DictationHypothesis_m33D106BA3BD2C231CF9B3AB7CFC9D5D28DD63816(L_19, L_21, /*hidden argument*/NULL);
			// dictationRecognizer.DictationResult -= DictationRecognizer_DictationResult;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_22 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_23 = V_1;
			DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 * L_24 = (DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87 *)il2cpp_codegen_object_new(DictationResultDelegate_t7827401C3739DC46ED8973A260871DC62D84DB87_il2cpp_TypeInfo_var);
			DictationResultDelegate__ctor_mDECF2707DE7D125C6DE6BE8EC8E1BCD1539CF40C(L_24, L_23, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationResult_m5EBBA30C99CA9F33A09DBD107141DA17794D3CA9_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_22);
			DictationRecognizer_remove_DictationResult_mD2832F82043B0E918D07AB2F3D8C6F83AD7A4AE6(L_22, L_24, /*hidden argument*/NULL);
			// dictationRecognizer.DictationComplete -= DictationRecognizer_DictationComplete;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_25 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_26 = V_1;
			DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC * L_27 = (DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC *)il2cpp_codegen_object_new(DictationCompletedDelegate_tA2164679CEDD4101C6D628AFE6F38988D4D1D0DC_il2cpp_TypeInfo_var);
			DictationCompletedDelegate__ctor_m5B703B2796175B619EDBD28F7B6EB86294678369(L_27, L_26, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationComplete_mB73F8B7863759593D8C29CED21711FC64CE1D283_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_25);
			DictationRecognizer_remove_DictationComplete_m1C2487A5E937F84D15B73A2853AD4C65A537FB6F(L_25, L_27, /*hidden argument*/NULL);
			// dictationRecognizer.DictationError -= DictationRecognizer_DictationError;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_28 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_29 = V_1;
			DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 * L_30 = (DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13 *)il2cpp_codegen_object_new(DictationErrorHandler_t2FD4C7DAA73E5B75D13591C4D45523577C66FF13_il2cpp_TypeInfo_var);
			DictationErrorHandler__ctor_m13B3D1B66DB5DB3FA513E70E2DBEEBA1FDC6D0D6(L_30, L_29, (intptr_t)((intptr_t)WindowsDictationInputProvider_DictationRecognizer_DictationError_m8B37F8CAE58CEDCFA7AC40D3BDC3C47CA0C13456_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_28);
			DictationRecognizer_remove_DictationError_mA5CF0BEDD8CBC96098B623B48E70C5BD913C00B3(L_28, L_30, /*hidden argument*/NULL);
		}

IL_00e9:
		{
			goto IL_0102;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00eb;
		throw e;
	}

CATCH_00eb:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_31 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_32 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_31, L_32, /*hidden argument*/NULL);
		goto IL_0115;
	} // end catch (depth: 1)

IL_0102:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_33 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_33, /*hidden argument*/NULL);
	}

IL_0115:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisableU3Ed__21_MoveNext_m47A33CB63BF9DB152DA4E153277D4AFA0C275E7D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 * _thisAdjusted = reinterpret_cast<U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 *>(__this + 1);
	U3CDisableU3Ed__21_MoveNext_m47A33CB63BF9DB152DA4E153277D4AFA0C275E7D(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<Disable>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__21_SetStateMachine_m9A497C5BA724040E66D8E8A86DE374F79002CD11 (U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisableU3Ed__21_SetStateMachine_m9A497C5BA724040E66D8E8A86DE374F79002CD11_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 * _thisAdjusted = reinterpret_cast<U3CDisableU3Ed__21_t8EE7E78DBC0401A58E04530E88EFF36A333AECA8 *>(__this + 1);
	U3CDisableU3Ed__21_SetStateMachine_m9A497C5BA724040E66D8E8A86DE374F79002CD11(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__23_MoveNext_m775BFF294DD41099A424FDDD06B86D0AA538591D (U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartRecordingU3Ed__23_MoveNext_m775BFF294DD41099A424FDDD06B86D0AA538591D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * V_1 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0064;
			}
		}

IL_0011:
		{
			// await StartRecordingAsync(listener, initialSilenceTimeout, autoSilenceTimeout, recordingTime, micDeviceName);
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_3 = V_1;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_listener_3();
			float L_5 = __this->get_initialSilenceTimeout_4();
			float L_6 = __this->get_autoSilenceTimeout_5();
			int32_t L_7 = __this->get_recordingTime_6();
			String_t* L_8 = __this->get_micDeviceName_7();
			NullCheck(L_3);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_9 = WindowsDictationInputProvider_StartRecordingAsync_m589DD5872344989C877F28863898B6B9BE503CD6(L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_10 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			bool L_11 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_0080;
			}
		}

IL_0044:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_13 = V_2;
			__this->set_U3CU3Eu__1_8(L_13);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307_m57731DA77A5FCC5404C6C80E7E4DEC03F080D7AB((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_14, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), (U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307_m57731DA77A5FCC5404C6C80E7E4DEC03F080D7AB_RuntimeMethod_var);
			goto IL_00b3;
		}

IL_0064:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_15 = __this->get_U3CU3Eu__1_8();
			V_2 = L_15;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_16 = __this->get_address_of_U3CU3Eu__1_8();
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_0080:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			goto IL_00a0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0089;
		throw e;
	}

CATCH_0089:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_18, L_19, /*hidden argument*/NULL);
		goto IL_00b3;
	} // end catch (depth: 1)

IL_00a0:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_20, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartRecordingU3Ed__23_MoveNext_m775BFF294DD41099A424FDDD06B86D0AA538591D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 * _thisAdjusted = reinterpret_cast<U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 *>(__this + 1);
	U3CStartRecordingU3Ed__23_MoveNext_m775BFF294DD41099A424FDDD06B86D0AA538591D(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecording>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingU3Ed__23_SetStateMachine_m7AA53F15F45C5CCBA719503EAA8356901B5041A9 (U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartRecordingU3Ed__23_SetStateMachine_m7AA53F15F45C5CCBA719503EAA8356901B5041A9_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 * _thisAdjusted = reinterpret_cast<U3CStartRecordingU3Ed__23_t0BE1FA7CC05309A6AF33874F3535131D08140307 *>(__this + 1);
	U3CStartRecordingU3Ed__23_SetStateMachine_m7AA53F15F45C5CCBA719503EAA8356901B5041A9(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__24_MoveNext_m1049AB8081E5753F324230DC7DBD5BA6F184387C (U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartRecordingAsyncU3Ed__24_MoveNext_m1049AB8081E5753F324230DC7DBD5BA6F184387C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * V_1 = NULL;
	int32_t V_2 = 0;
	SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 6);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00d9;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_017b;
			}
		}

IL_001b:
		{
			// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject* L_5 = BaseDataProvider_get_Service_m98C3A6FC44F6BF183A5812DB3ADC6018B838E943(L_4, /*hidden argument*/NULL);
			__this->set_U3CinputSystemU3E5__2_8(((RuntimeObject*)IsInst((RuntimeObject*)L_5, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var)));
			// if (IsListening || isTransitioning || inputSystem == null || !Application.isPlaying)
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = WindowsDictationInputProvider_get_IsListening_mD0BB7681BF29793C36321C901A43882CD4F51F55(L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_004b;
			}
		}

IL_0034:
		{
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_8 = V_1;
			NullCheck(L_8);
			bool L_9 = L_8->get_isTransitioning_12();
			if (L_9)
			{
				goto IL_004b;
			}
		}

IL_003c:
		{
			RuntimeObject* L_10 = __this->get_U3CinputSystemU3E5__2_8();
			if (!L_10)
			{
				goto IL_004b;
			}
		}

IL_0044:
		{
			bool L_11 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_005a;
			}
		}

IL_004b:
		{
			// Debug.LogWarning("Unable to start recording");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralEF4630D5403BE67FC48ED06A577179A2198B317E, /*hidden argument*/NULL);
			// return;
			goto IL_020e;
		}

IL_005a:
		{
			// hasFailed = false;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_12 = V_1;
			NullCheck(L_12);
			L_12->set_hasFailed_10((bool)0);
			// IsListening = true;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_13 = V_1;
			NullCheck(L_13);
			WindowsDictationInputProvider_set_IsListening_m5088D38E5362A1A5F1248E662454FE52455537A5(L_13, (bool)1, /*hidden argument*/NULL);
			// isTransitioning = true;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_14 = V_1;
			NullCheck(L_14);
			L_14->set_isTransitioning_12((bool)1);
			// if (listener != null)
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = __this->get_listener_3();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_16 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_15, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_0095;
			}
		}

IL_007d:
		{
			// hasListener = true;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_17 = V_1;
			NullCheck(L_17);
			L_17->set_hasListener_11((bool)1);
			// inputSystem.PushModalInputHandler(listener);
			RuntimeObject* L_18 = __this->get_U3CinputSystemU3E5__2_8();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = __this->get_listener_3();
			NullCheck(L_18);
			InterfaceActionInvoker1< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::PushModalInputHandler(UnityEngine.GameObject) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, L_18, L_19);
		}

IL_0095:
		{
			// if (PhraseRecognitionSystem.Status == SpeechSystemStatus.Running)
			int32_t L_20 = PhraseRecognitionSystem_get_Status_m8AEDCE0E644824367B5672B39BAA2838E08277AC(/*hidden argument*/NULL);
			if ((!(((uint32_t)L_20) == ((uint32_t)1))))
			{
				goto IL_00a2;
			}
		}

IL_009d:
		{
			// PhraseRecognitionSystem.Shutdown();
			PhraseRecognitionSystem_Shutdown_m902D4966E62C9D32367FE101DE80B09D93B5B2BC(/*hidden argument*/NULL);
		}

IL_00a2:
		{
			// await waitUntilPhraseRecognitionSystemHasStopped;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_21 = V_1;
			NullCheck(L_21);
			WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_22 = L_21->get_waitUntilPhraseRecognitionSystemHasStopped_21();
			SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * L_23 = AwaiterExtensions_GetAwaiter_m3AD10B6553E80BAE88129FAB5C60875B2AFF0FA4(L_22, /*hidden argument*/NULL);
			V_3 = L_23;
			SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * L_24 = V_3;
			NullCheck(L_24);
			bool L_25 = SimpleCoroutineAwaiter_get_IsCompleted_m633D60D5E32FEB89721D580C2DCC2776A2100D5E(L_24, /*hidden argument*/NULL);
			if (L_25)
			{
				goto IL_00f5;
			}
		}

IL_00b6:
		{
			int32_t L_26 = 0;
			V_0 = L_26;
			__this->set_U3CU3E1__state_0(L_26);
			SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * L_27 = V_3;
			__this->set_U3CU3Eu__1_9(L_27);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_28 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_TisU3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE_m0027BE8454A225CC4DC66A41BCBC9E963CA350E7((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_28, (SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 **)(&V_3), (U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_TisU3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE_m0027BE8454A225CC4DC66A41BCBC9E963CA350E7_RuntimeMethod_var);
			goto IL_0221;
		}

IL_00d9:
		{
			RuntimeObject * L_29 = __this->get_U3CU3Eu__1_9();
			V_3 = ((SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 *)CastclassClass((RuntimeObject*)L_29, SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_9(NULL);
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
		}

IL_00f5:
		{
			SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * L_31 = V_3;
			NullCheck(L_31);
			SimpleCoroutineAwaiter_GetResult_m054B4EB97533092C2F65E157B15944A62BEAACB1(L_31, /*hidden argument*/NULL);
			// deviceName = micDeviceName;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_32 = V_1;
			String_t* L_33 = __this->get_micDeviceName_4();
			NullCheck(L_32);
			L_32->set_deviceName_15(L_33);
			// Microphone.GetDeviceCaps(deviceName, out minSamplingRate, out samplingRate);
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_34 = V_1;
			NullCheck(L_34);
			String_t* L_35 = L_34->get_deviceName_15();
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_36 = V_1;
			NullCheck(L_36);
			int32_t* L_37 = L_36->get_address_of_samplingRate_16();
			Microphone_GetDeviceCaps_mF079FFC698AE94F132D4E0AD072498F6937BAF6B(L_35, (int32_t*)(&V_2), (int32_t*)L_37, /*hidden argument*/NULL);
			// dictationRecognizer.InitialSilenceTimeoutSeconds = initialSilenceTimeout;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_38 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
			float L_39 = __this->get_initialSilenceTimeout_5();
			NullCheck(L_38);
			DictationRecognizer_set_InitialSilenceTimeoutSeconds_mD355A47F132B4E26C60C1E200C9C0B99FDCABC06(L_38, L_39, /*hidden argument*/NULL);
			// dictationRecognizer.AutoSilenceTimeoutSeconds = autoSilenceTimeout;
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_40 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
			float L_41 = __this->get_autoSilenceTimeout_6();
			NullCheck(L_40);
			DictationRecognizer_set_AutoSilenceTimeoutSeconds_m96E3450BE28A238970C5548AD8896BE3F02DB8F9(L_40, L_41, /*hidden argument*/NULL);
			// dictationRecognizer.Start();
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_42 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
			NullCheck(L_42);
			DictationRecognizer_Start_mA9B2AB4490205206F640DFE552B0944396D30536(L_42, /*hidden argument*/NULL);
			// await waitUntilDictationRecognizerHasStarted;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_43 = V_1;
			NullCheck(L_43);
			WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_44 = L_43->get_waitUntilDictationRecognizerHasStarted_22();
			SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * L_45 = AwaiterExtensions_GetAwaiter_m3AD10B6553E80BAE88129FAB5C60875B2AFF0FA4(L_44, /*hidden argument*/NULL);
			V_3 = L_45;
			SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * L_46 = V_3;
			NullCheck(L_46);
			bool L_47 = SimpleCoroutineAwaiter_get_IsCompleted_m633D60D5E32FEB89721D580C2DCC2776A2100D5E(L_46, /*hidden argument*/NULL);
			if (L_47)
			{
				goto IL_0197;
			}
		}

IL_0158:
		{
			int32_t L_48 = 1;
			V_0 = L_48;
			__this->set_U3CU3E1__state_0(L_48);
			SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * L_49 = V_3;
			__this->set_U3CU3Eu__1_9(L_49);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_50 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_TisU3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE_m0027BE8454A225CC4DC66A41BCBC9E963CA350E7((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_50, (SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 **)(&V_3), (U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_TisU3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE_m0027BE8454A225CC4DC66A41BCBC9E963CA350E7_RuntimeMethod_var);
			goto IL_0221;
		}

IL_017b:
		{
			RuntimeObject * L_51 = __this->get_U3CU3Eu__1_9();
			V_3 = ((SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 *)CastclassClass((RuntimeObject*)L_51, SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_9(NULL);
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->set_U3CU3E1__state_0(L_52);
		}

IL_0197:
		{
			SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * L_53 = V_3;
			NullCheck(L_53);
			SimpleCoroutineAwaiter_GetResult_m054B4EB97533092C2F65E157B15944A62BEAACB1(L_53, /*hidden argument*/NULL);
			// if (dictationRecognizer.Status == SpeechSystemStatus.Failed)
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_54 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
			NullCheck(L_54);
			int32_t L_55 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_54, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_55) == ((uint32_t)2))))
			{
				goto IL_01c3;
			}
		}

IL_01aa:
		{
			// inputSystem.RaiseDictationError(inputSource, "Dictation recognizer failed to start!");
			RuntimeObject* L_56 = __this->get_U3CinputSystemU3E5__2_8();
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_57 = V_1;
			NullCheck(L_57);
			RuntimeObject* L_58 = L_57->get_inputSource_13();
			NullCheck(L_56);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * >::Invoke(59 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, L_56, L_58, _stringLiteral8448B71DECE19EE2AD3DEAAC5CE97CA3501F67B6, (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL);
			// return;
			goto IL_020e;
		}

IL_01c3:
		{
			// dictationAudioClip = Microphone.Start(deviceName, false, recordingTime, samplingRate);
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_59 = V_1;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_60 = V_1;
			NullCheck(L_60);
			String_t* L_61 = L_60->get_deviceName_15();
			int32_t L_62 = __this->get_recordingTime_7();
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_63 = V_1;
			NullCheck(L_63);
			int32_t L_64 = L_63->get_samplingRate_16();
			AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_65 = Microphone_Start_mF756A7EBA3E62EF0D138A220482B725D16E96047(L_61, (bool)0, L_62, L_64, /*hidden argument*/NULL);
			NullCheck(L_59);
			L_59->set_dictationAudioClip_18(L_65);
			// textSoFar = new StringBuilder();
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_66 = V_1;
			StringBuilder_t * L_67 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_67, /*hidden argument*/NULL);
			NullCheck(L_66);
			L_66->set_textSoFar_14(L_67);
			// isTransitioning = false;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_68 = V_1;
			NullCheck(L_68);
			L_68->set_isTransitioning_12((bool)0);
			goto IL_020e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_01f5;
		throw e;
	}

CATCH_01f5:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_69 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_70 = V_4;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_69, L_70, /*hidden argument*/NULL);
		goto IL_0221;
	} // end catch (depth: 1)

IL_020e:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_71 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_71, /*hidden argument*/NULL);
	}

IL_0221:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartRecordingAsyncU3Ed__24_MoveNext_m1049AB8081E5753F324230DC7DBD5BA6F184387C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE * _thisAdjusted = reinterpret_cast<U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE *>(__this + 1);
	U3CStartRecordingAsyncU3Ed__24_MoveNext_m1049AB8081E5753F324230DC7DBD5BA6F184387C(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StartRecordingAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__24_SetStateMachine_m0AD712D91EA5F2C5CE45A21185CABEEFA3ACDDBF (U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartRecordingAsyncU3Ed__24_SetStateMachine_m0AD712D91EA5F2C5CE45A21185CABEEFA3ACDDBF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE * _thisAdjusted = reinterpret_cast<U3CStartRecordingAsyncU3Ed__24_t95EC66EAFC9588CF0F5B89D4CF41D09EB9FA7AAE *>(__this + 1);
	U3CStartRecordingAsyncU3Ed__24_SetStateMachine_m0AD712D91EA5F2C5CE45A21185CABEEFA3ACDDBF(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecording>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__25_MoveNext_mDB280324AC77948251889B37780FB2E2DB7FFCA8 (U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopRecordingU3Ed__25_MoveNext_mDB280324AC77948251889B37780FB2E2DB7FFCA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * V_1 = NULL;
	TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0046;
			}
		}

IL_0011:
		{
			// await StopRecordingAsync();
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_3 = V_1;
			NullCheck(L_3);
			Task_1_t1FD9AF71747895AEE56DD875875ED8409EFAD2CC * L_4 = WindowsDictationInputProvider_StopRecordingAsync_m970B34085B1E29671D89FDC39AED49B356598D8C(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_5 = Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986(L_4, /*hidden argument*/Task_1_GetAwaiter_mC7B1136330A9B7066A116285C7388989F8133986_RuntimeMethod_var);
			V_2 = L_5;
			bool L_6 = TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444((TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m6EA45C62085A881D247B95828C7579A87E030444_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0062;
			}
		}

IL_0026:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_8 = V_2;
			__this->set_U3CU3Eu__1_3(L_8);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14_mEC43BCB77FBA06BB0419EBAF4E95E02F9BBF2C89((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_9, (TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_2), (U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99_TisU3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14_mEC43BCB77FBA06BB0419EBAF4E95E02F9BBF2C89_RuntimeMethod_var);
			goto IL_0096;
		}

IL_0046:
		{
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99  L_10 = __this->get_U3CU3Eu__1_3();
			V_2 = L_10;
			TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 * L_11 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_0062:
		{
			TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD((TaskAwaiter_1_t1CBDF733362C45EC91B0E9317C766E5A2FA02B99 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_mF69D645FC74CDE2F31361F7CDCB81C5A19D10DDD_RuntimeMethod_var);
			goto IL_0083;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006c;
		throw e;
	}

CATCH_006c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_13 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_14 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_13, L_14, /*hidden argument*/NULL);
		goto IL_0096;
	} // end catch (depth: 1)

IL_0083:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_15 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_15, /*hidden argument*/NULL);
	}

IL_0096:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopRecordingU3Ed__25_MoveNext_mDB280324AC77948251889B37780FB2E2DB7FFCA8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 * _thisAdjusted = reinterpret_cast<U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 *>(__this + 1);
	U3CStopRecordingU3Ed__25_MoveNext_mDB280324AC77948251889B37780FB2E2DB7FFCA8(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecording>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingU3Ed__25_SetStateMachine_mE7B5B184E72BBC57AF389B135CC3FDB114F50962 (U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopRecordingU3Ed__25_SetStateMachine_mE7B5B184E72BBC57AF389B135CC3FDB114F50962_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 * _thisAdjusted = reinterpret_cast<U3CStopRecordingU3Ed__25_tCD5622981B6C15DA323898CCAFCD396DD1DC9D14 *>(__this + 1);
	U3CStopRecordingU3Ed__25_SetStateMachine_mE7B5B184E72BBC57AF389B135CC3FDB114F50962(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__26_MoveNext_mBD85A2A675FF659A6D2A85D20DFE3F82EB3DECC8 (U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopRecordingAsyncU3Ed__26_MoveNext_mBD85A2A675FF659A6D2A85D20DFE3F82EB3DECC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * V_1 = NULL;
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * V_4 = NULL;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00d1;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0131;
			}
		}

IL_001b:
		{
			// if (!IsListening || isTransitioning || !Application.isPlaying)
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = WindowsDictationInputProvider_get_IsListening_mD0BB7681BF29793C36321C901A43882CD4F51F55(L_4, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0032;
			}
		}

IL_0023:
		{
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = L_6->get_isTransitioning_12();
			if (L_7)
			{
				goto IL_0032;
			}
		}

IL_002b:
		{
			bool L_8 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0043;
			}
		}

IL_0032:
		{
			// Debug.LogWarning("Unable to stop recording");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral494AC3D8C4EEAECDF41D31C8677620154D322DE6, /*hidden argument*/NULL);
			// return null;
			V_2 = (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)NULL;
			goto IL_017e;
		}

IL_0043:
		{
			// IsListening = false;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_9 = V_1;
			NullCheck(L_9);
			WindowsDictationInputProvider_set_IsListening_m5088D38E5362A1A5F1248E662454FE52455537A5(L_9, (bool)0, /*hidden argument*/NULL);
			// isTransitioning = true;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_10 = V_1;
			NullCheck(L_10);
			L_10->set_isTransitioning_12((bool)1);
			// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_11 = V_1;
			NullCheck(L_11);
			RuntimeObject* L_12 = BaseDataProvider_get_Service_m98C3A6FC44F6BF183A5812DB3ADC6018B838E943(L_11, /*hidden argument*/NULL);
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var));
			// if (hasListener)
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_13 = V_1;
			NullCheck(L_13);
			bool L_14 = L_13->get_hasListener_11();
			if (!L_14)
			{
				goto IL_0075;
			}
		}

IL_0065:
		{
			// inputSystem?.PopModalInputHandler();
			RuntimeObject* L_15 = V_3;
			if (!L_15)
			{
				goto IL_006e;
			}
		}

IL_0068:
		{
			RuntimeObject* L_16 = V_3;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(14 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::PopModalInputHandler() */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, L_16);
		}

IL_006e:
		{
			// hasListener = false;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_17 = V_1;
			NullCheck(L_17);
			L_17->set_hasListener_11((bool)0);
		}

IL_0075:
		{
			// Microphone.End(deviceName);
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_18 = V_1;
			NullCheck(L_18);
			String_t* L_19 = L_18->get_deviceName_15();
			Microphone_End_m2E3D0E4890AE014AF687987F6160CA3D5ACDC29F(L_19, /*hidden argument*/NULL);
			// if (dictationRecognizer.Status == SpeechSystemStatus.Running)
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_20 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
			NullCheck(L_20);
			int32_t L_21 = DictationRecognizer_get_Status_mA6647775F5A7639B6BA816FD7E8911C72E61B6BF(L_20, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_21) == ((uint32_t)1))))
			{
				goto IL_0097;
			}
		}

IL_008d:
		{
			// dictationRecognizer.Stop();
			DictationRecognizer_tAABC39C7583FCB17ADB78BCE15E2E1AEFA85F355 * L_22 = ((WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_StaticFields*)il2cpp_codegen_static_fields_for(WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6_il2cpp_TypeInfo_var))->get_dictationRecognizer_19();
			NullCheck(L_22);
			DictationRecognizer_Stop_m42D22C5D03B17B6DDF94B13E9DC678AB4C11970E(L_22, /*hidden argument*/NULL);
		}

IL_0097:
		{
			// await waitUntilDictationRecognizerHasStopped;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_23 = V_1;
			NullCheck(L_23);
			WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_24 = L_23->get_waitUntilDictationRecognizerHasStopped_23();
			SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * L_25 = AwaiterExtensions_GetAwaiter_m3AD10B6553E80BAE88129FAB5C60875B2AFF0FA4(L_24, /*hidden argument*/NULL);
			V_4 = L_25;
			SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * L_26 = V_4;
			NullCheck(L_26);
			bool L_27 = SimpleCoroutineAwaiter_get_IsCompleted_m633D60D5E32FEB89721D580C2DCC2776A2100D5E(L_26, /*hidden argument*/NULL);
			if (L_27)
			{
				goto IL_00ee;
			}
		}

IL_00ad:
		{
			int32_t L_28 = 0;
			V_0 = L_28;
			__this->set_U3CU3E1__state_0(L_28);
			SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * L_29 = V_4;
			__this->set_U3CU3Eu__1_3(L_29);
			AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_30 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_TisU3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13_m77D9C8675BB71625C9881F4C6E9851C072316554((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_30, (SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 **)(&V_4), (U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_TisU3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13_m77D9C8675BB71625C9881F4C6E9851C072316554_RuntimeMethod_var);
			goto IL_0192;
		}

IL_00d1:
		{
			RuntimeObject * L_31 = __this->get_U3CU3Eu__1_3();
			V_4 = ((SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 *)CastclassClass((RuntimeObject*)L_31, SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_32 = (-1);
			V_0 = L_32;
			__this->set_U3CU3E1__state_0(L_32);
		}

IL_00ee:
		{
			SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * L_33 = V_4;
			NullCheck(L_33);
			SimpleCoroutineAwaiter_GetResult_m054B4EB97533092C2F65E157B15944A62BEAACB1(L_33, /*hidden argument*/NULL);
			// PhraseRecognitionSystem.Restart();
			PhraseRecognitionSystem_Restart_m8FE23747DD233E3E42BDDC5A6F3C3B79A1F20A3F(/*hidden argument*/NULL);
			// await waitUntilPhraseRecognitionSystemHasStarted;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_34 = V_1;
			NullCheck(L_34);
			WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F * L_35 = L_34->get_waitUntilPhraseRecognitionSystemHasStarted_20();
			SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * L_36 = AwaiterExtensions_GetAwaiter_m3AD10B6553E80BAE88129FAB5C60875B2AFF0FA4(L_35, /*hidden argument*/NULL);
			V_4 = L_36;
			SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * L_37 = V_4;
			NullCheck(L_37);
			bool L_38 = SimpleCoroutineAwaiter_get_IsCompleted_m633D60D5E32FEB89721D580C2DCC2776A2100D5E(L_37, /*hidden argument*/NULL);
			if (L_38)
			{
				goto IL_014e;
			}
		}

IL_0110:
		{
			int32_t L_39 = 1;
			V_0 = L_39;
			__this->set_U3CU3E1__state_0(L_39);
			SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * L_40 = V_4;
			__this->set_U3CU3Eu__1_3(L_40);
			AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_41 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_TisU3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13_m77D9C8675BB71625C9881F4C6E9851C072316554((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_41, (SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 **)(&V_4), (U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_TisU3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13_m77D9C8675BB71625C9881F4C6E9851C072316554_RuntimeMethod_var);
			goto IL_0192;
		}

IL_0131:
		{
			RuntimeObject * L_42 = __this->get_U3CU3Eu__1_3();
			V_4 = ((SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 *)CastclassClass((RuntimeObject*)L_42, SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->set_U3CU3E1__state_0(L_43);
		}

IL_014e:
		{
			SimpleCoroutineAwaiter_t55EB9D440004C78775B3A67F89DE26552EE6C5F2 * L_44 = V_4;
			NullCheck(L_44);
			SimpleCoroutineAwaiter_GetResult_m054B4EB97533092C2F65E157B15944A62BEAACB1(L_44, /*hidden argument*/NULL);
			// isTransitioning = false;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_45 = V_1;
			NullCheck(L_45);
			L_45->set_isTransitioning_12((bool)0);
			// return dictationAudioClip;
			WindowsDictationInputProvider_t809EABD8AB25946655E49F5B36AF2C6613E16DA6 * L_46 = V_1;
			NullCheck(L_46);
			AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_47 = L_46->get_dictationAudioClip_18();
			V_2 = L_47;
			goto IL_017e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0165;
		throw e;
	}

CATCH_0165:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_48 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_49 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m3546DBB6B478B7DB18842DC0782B98EBC9D05EE1((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_48, L_49, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3546DBB6B478B7DB18842DC0782B98EBC9D05EE1_RuntimeMethod_var);
		goto IL_0192;
	} // end catch (depth: 1)

IL_017e:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_50 = __this->get_address_of_U3CU3Et__builder_1();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_51 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mD5596BF881B6EC3D7675495E22695C03E96D0101((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_50, L_51, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mD5596BF881B6EC3D7675495E22695C03E96D0101_RuntimeMethod_var);
	}

IL_0192:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopRecordingAsyncU3Ed__26_MoveNext_mBD85A2A675FF659A6D2A85D20DFE3F82EB3DECC8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 * _thisAdjusted = reinterpret_cast<U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 *>(__this + 1);
	U3CStopRecordingAsyncU3Ed__26_MoveNext_mBD85A2A675FF659A6D2A85D20DFE3F82EB3DECC8(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider_<StopRecordingAsync>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__26_SetStateMachine_m2DEB172373D04B0A93904EA906CB402DE296C9E5 (U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopRecordingAsyncU3Ed__26_SetStateMachine_m2DEB172373D04B0A93904EA906CB402DE296C9E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m6D0E84B2F66A998AE916997EB96A356441721D76((AsyncTaskMethodBuilder_1_tD2F8773433ABAC7266323C8FBDFE204289FE17B6 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m6D0E84B2F66A998AE916997EB96A356441721D76_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopRecordingAsyncU3Ed__26_SetStateMachine_m2DEB172373D04B0A93904EA906CB402DE296C9E5_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 * _thisAdjusted = reinterpret_cast<U3CStopRecordingAsyncU3Ed__26_tB4C7B53C9ACE73172F07249D94254D97AD0DAE13 *>(__this + 1);
	U3CStopRecordingAsyncU3Ed__26_SetStateMachine_m2DEB172373D04B0A93904EA906CB402DE296C9E5(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile,UnityEngine.Transform,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider__ctor_m79B4693A6EF25A7521245AAF7E3737EC89C1AF04 (WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * __this, RuntimeObject* ___registrar0, RuntimeObject* ___inputSystem1, MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * ___inputSystemProfile2, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___playspace3, String_t* ___name4, uint32_t ___priority5, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___profile6, const RuntimeMethod* method)
{
	{
		// BaseMixedRealityProfile profile = null) : base(registrar, inputSystem, inputSystemProfile, playspace, name, priority, profile) { }
		RuntimeObject* L_0 = ___registrar0;
		RuntimeObject* L_1 = ___inputSystem1;
		MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * L_2 = ___inputSystemProfile2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___playspace3;
		String_t* L_4 = ___name4;
		uint32_t L_5 = ___priority5;
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_6 = ___profile6;
		BaseInputDeviceManager__ctor_m90FF1C7E620BF651768D717F18C817B74CF2CBA8(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(registrar, inputSystem, inputSystemProfile, playspace, name, priority, profile) { }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands[] Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_Commands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* WindowsSpeechInputProvider_get_Commands_m5E794CB29A7524A9B5F2FEFFD681307D80CFC314 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider_get_Commands_m5E794CB29A7524A9B5F2FEFFD681307D80CFC314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static SpeechCommands[] Commands => MixedRealityToolkit.Instance.ActiveProfile.InputSystemProfile.SpeechCommandsProfile.SpeechCommands;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_il2cpp_TypeInfo_var);
		MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * L_0 = MixedRealityToolkit_get_Instance_m02A5ECDA0A8291AA2EDDC518554EF3FAA470DBAD(/*hidden argument*/NULL);
		NullCheck(L_0);
		MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * L_1 = MixedRealityToolkit_get_ActiveProfile_m8D92538CC2A86B4117355C5EF93CCB39CAFE0602(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * L_2 = MixedRealityToolkitConfigurationProfile_get_InputSystemProfile_mEE2A27C332E7A55371E173C1AC6057EB58E66538(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD * L_3 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_m112B9F7B5EE6ACDBF893BB69A8AED00ABF0F949E(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* L_4 = MixedRealitySpeechCommandsProfile_get_SpeechCommands_m1BAA28B890C02DD8984C7FBA1EF1B905BDBAD6B9(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_RecognitionConfidenceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_mD0722F8222669F932A114159E2B4AA84BA819C0E (WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * __this, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = __this->get_U3CRecognitionConfidenceLevelU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::set_RecognitionConfidenceLevel(Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_mC9C28B85D91B50F6181C8A832DBC2378B7E6A063 (WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public RecognitionConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRecognitionConfidenceLevelU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::get_IsRecognitionActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSpeechInputProvider_get_IsRecognitionActive_m2B883DA5F6D01F3B126CB79655F1D670C79E042E (WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * __this, const RuntimeMethod* method)
{
	{
		// get { return keywordRecognizer != null && keywordRecognizer.IsRunning; }
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_0 = __this->get_keywordRecognizer_11();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_1 = __this->get_keywordRecognizer_11();
		NullCheck(L_1);
		bool L_2 = PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Enable_m1ACD3641CC2B267B1E646F0200C9EC8A3B87B9BA (WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider_Enable_m1ACD3641CC2B267B1E646F0200C9EC8A3B87B9BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	int32_t V_2 = 0;
	UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * G_B7_0 = NULL;
	WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * G_B6_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * G_B8_1 = NULL;
	{
		// if (!Application.isPlaying || Commands.Length == 0) { return; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* L_1 = WindowsSpeechInputProvider_get_Commands_m5E794CB29A7524A9B5F2FEFFD681307D80CFC314(/*hidden argument*/NULL);
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// if (!Application.isPlaying || Commands.Length == 0) { return; }
		return;
	}

IL_0010:
	{
		// if (InputSystemProfile == null) { return; }
		MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * L_2 = ((BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC *)__this)->get_InputSystemProfile_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// if (InputSystemProfile == null) { return; }
		return;
	}

IL_001f:
	{
		// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
		RuntimeObject* L_4 = BaseDataProvider_get_Service_m98C3A6FC44F6BF183A5812DB3ADC6018B838E943(__this, /*hidden argument*/NULL);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var));
		// InputSource = inputSystem?.RequestNewGenericInputSource("Windows Speech Input Source", sourceType: InputSourceType.Voice);
		RuntimeObject* L_5 = V_0;
		G_B6_0 = __this;
		if (L_5)
		{
			G_B7_0 = __this;
			goto IL_0032;
		}
	}
	{
		G_B8_0 = ((RuntimeObject*)(NULL));
		G_B8_1 = G_B6_0;
		goto IL_003f;
	}

IL_0032:
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, IMixedRealityPointerU5BU5D_t39DD1136CDE343C8864073AF61557AFC03AB3778*, int32_t >::Invoke(20 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RequestNewGenericInputSource(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[],Microsoft.MixedReality.Toolkit.Input.InputSourceType) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, L_6, _stringLiteral0B759AD845C0355947EA875C903DD48C3EED47E0, (IMixedRealityPointerU5BU5D_t39DD1136CDE343C8864073AF61557AFC03AB3778*)(IMixedRealityPointerU5BU5D_t39DD1136CDE343C8864073AF61557AFC03AB3778*)NULL, 3);
		G_B8_0 = L_7;
		G_B8_1 = G_B7_0;
	}

IL_003f:
	{
		NullCheck(G_B8_1);
		G_B8_1->set_InputSource_9(G_B8_0);
		// var newKeywords = new string[Commands.Length];
		SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* L_8 = WindowsSpeechInputProvider_get_Commands_m5E794CB29A7524A9B5F2FEFFD681307D80CFC314(/*hidden argument*/NULL);
		NullCheck(L_8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))));
		V_1 = L_9;
		// for (int i = 0; i < Commands.Length; i++)
		V_2 = 0;
		goto IL_006c;
	}

IL_0055:
	{
		// newKeywords[i] = Commands[i].LocalizedKeyword;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = V_1;
		int32_t L_11 = V_2;
		SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* L_12 = WindowsSpeechInputProvider_get_Commands_m5E794CB29A7524A9B5F2FEFFD681307D80CFC314(/*hidden argument*/NULL);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		String_t* L_14 = SpeechCommands_get_LocalizedKeyword_m5CB14BEDBB6125BD45E76EA4EB6E66A9D8C6781D((SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B *)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_14);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (String_t*)L_14);
		// for (int i = 0; i < Commands.Length; i++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_006c:
	{
		// for (int i = 0; i < Commands.Length; i++)
		int32_t L_16 = V_2;
		SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* L_17 = WindowsSpeechInputProvider_get_Commands_m5E794CB29A7524A9B5F2FEFFD681307D80CFC314(/*hidden argument*/NULL);
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))))
		{
			goto IL_0055;
		}
	}
	{
		// RecognitionConfidenceLevel = InputSystemProfile.SpeechCommandsProfile.SpeechRecognitionConfidenceLevel;
		MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * L_18 = ((BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC *)__this)->get_InputSystemProfile_7();
		NullCheck(L_18);
		MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD * L_19 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_m112B9F7B5EE6ACDBF893BB69A8AED00ABF0F949E(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = MixedRealitySpeechCommandsProfile_get_SpeechRecognitionConfidenceLevel_mD07EC3F0C555F0635B714CC901BD1635C8F3609A(L_19, /*hidden argument*/NULL);
		WindowsSpeechInputProvider_set_RecognitionConfidenceLevel_mC9C28B85D91B50F6181C8A832DBC2378B7E6A063(__this, L_20, /*hidden argument*/NULL);
		// if (keywordRecognizer == null)
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_21 = __this->get_keywordRecognizer_11();
		if (L_21)
		{
			goto IL_00d9;
		}
	}

IL_0094:
	try
	{ // begin try (depth: 1)
		// keywordRecognizer = new KeywordRecognizer(newKeywords, (ConfidenceLevel)RecognitionConfidenceLevel);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = V_1;
		int32_t L_23 = WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_mD0722F8222669F932A114159E2B4AA84BA819C0E(__this, /*hidden argument*/NULL);
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_24 = (KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C *)il2cpp_codegen_object_new(KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C_il2cpp_TypeInfo_var);
		KeywordRecognizer__ctor_m10E461E5F20190D903506B99E53E522C589F9A56(L_24, L_22, L_23, /*hidden argument*/NULL);
		__this->set_keywordRecognizer_11(L_24);
		// }
		goto IL_00c2;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00a8;
		throw e;
	}

CATCH_00a8:
	{ // begin catch(UnityEngine.UnityException)
		// catch (UnityException ex)
		V_3 = ((UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 *)__exception_local);
		// Debug.LogError($"Failed to start keyword recognizer. Are microphone permissions granted? Exception: {ex}");
		UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * L_25 = V_3;
		String_t* L_26 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralD8259643549B7FA2D109DA0AFC1E9486946DC0C1, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_26, /*hidden argument*/NULL);
		// keywordRecognizer = null;
		__this->set_keywordRecognizer_11((KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C *)NULL);
		// return;
		goto IL_00f1;
	} // end catch (depth: 1)

IL_00c2:
	{
		// keywordRecognizer.OnPhraseRecognized += KeywordRecognizer_OnPhraseRecognized;
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_27 = __this->get_keywordRecognizer_11();
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_28 = (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 *)il2cpp_codegen_object_new(PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0_il2cpp_TypeInfo_var);
		PhraseRecognizedDelegate__ctor_m0D7CFE194591D6DEE1120B7E23917C77ED5027F1(L_28, __this, (intptr_t)((intptr_t)WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m76FA2711269633BCD327F0C53648CAE4F576877F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_27);
		PhraseRecognizer_add_OnPhraseRecognized_m3A70137B301880FB1CCA497AADC4457DF879B223(L_27, L_28, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		// if (InputSystemProfile.SpeechCommandsProfile.SpeechRecognizerStartBehavior == AutoStartBehavior.AutoStart)
		MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * L_29 = ((BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC *)__this)->get_InputSystemProfile_7();
		NullCheck(L_29);
		MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD * L_30 = MixedRealityInputSystemProfile_get_SpeechCommandsProfile_m112B9F7B5EE6ACDBF893BB69A8AED00ABF0F949E(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		int32_t L_31 = MixedRealitySpeechCommandsProfile_get_SpeechRecognizerStartBehavior_m8DB42B73900D75367BCCADE158634F41C237363A(L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00f1;
		}
	}
	{
		// StartRecognition();
		WindowsSpeechInputProvider_StartRecognition_m9799DAFEC06E5F78EC639BC903A9371B06CF17EF(__this, /*hidden argument*/NULL);
	}

IL_00f1:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Update_mBB5369D96CCB392942F764C647F5B9B2CBB58CEA (WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider_Update_mBB5369D96CCB392942F764C647F5B9B2CBB58CEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (keywordRecognizer != null && keywordRecognizer.IsRunning)
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_0 = __this->get_keywordRecognizer_11();
		if (!L_0)
		{
			goto IL_0064;
		}
	}
	{
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_1 = __this->get_keywordRecognizer_11();
		NullCheck(L_1);
		bool L_2 = PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0064;
		}
	}
	{
		// for (int i = 0; i < Commands.Length; i++)
		V_0 = 0;
		goto IL_005a;
	}

IL_0019:
	{
		// if (UInput.GetKeyDown(Commands[i].KeyCode))
		SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* L_3 = WindowsSpeechInputProvider_get_Commands_m5E794CB29A7524A9B5F2FEFFD681307D80CFC314(/*hidden argument*/NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = SpeechCommands_get_KeyCode_m57FD6DCFF88FC2282A875DA0F22A262F37FAD11A((SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), /*hidden argument*/NULL);
		bool L_6 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		// OnPhraseRecognized((ConfidenceLevel)RecognitionConfidenceLevel, TimeSpan.Zero, DateTime.UtcNow, Commands[i].LocalizedKeyword);
		int32_t L_7 = WindowsSpeechInputProvider_get_RecognitionConfidenceLevel_mD0722F8222669F932A114159E2B4AA84BA819C0E(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_8 = ((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var))->get_Zero_0();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_9 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
		SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* L_10 = WindowsSpeechInputProvider_get_Commands_m5E794CB29A7524A9B5F2FEFFD681307D80CFC314(/*hidden argument*/NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		String_t* L_12 = SpeechCommands_get_LocalizedKeyword_m5CB14BEDBB6125BD45E76EA4EB6E66A9D8C6781D((SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), /*hidden argument*/NULL);
		WindowsSpeechInputProvider_OnPhraseRecognized_mD2BA3DF559733CE98DE4EB3F20E6F7550B4F0914(__this, L_7, L_8, L_9, L_12, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// for (int i = 0; i < Commands.Length; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_005a:
	{
		// for (int i = 0; i < Commands.Length; i++)
		int32_t L_14 = V_0;
		SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* L_15 = WindowsSpeechInputProvider_get_Commands_m5E794CB29A7524A9B5F2FEFFD681307D80CFC314(/*hidden argument*/NULL);
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))))
		{
			goto IL_0019;
		}
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_Disable_m73A44C3242B6491D2AEB3D22A4440246CD64FE4D (WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider_Disable_m73A44C3242B6491D2AEB3D22A4440246CD64FE4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (keywordRecognizer != null)
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_0 = __this->get_keywordRecognizer_11();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// StopRecognition();
		WindowsSpeechInputProvider_StopRecognition_mEDBAC69B9FE8A1AF26F2E1A817D5D7767E88B69C(__this, /*hidden argument*/NULL);
		// keywordRecognizer.OnPhraseRecognized -= KeywordRecognizer_OnPhraseRecognized;
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_1 = __this->get_keywordRecognizer_11();
		PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 * L_2 = (PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0 *)il2cpp_codegen_object_new(PhraseRecognizedDelegate_tC74E35BB76ACD314D7112D01626D41BEDC01B0D0_il2cpp_TypeInfo_var);
		PhraseRecognizedDelegate__ctor_m0D7CFE194591D6DEE1120B7E23917C77ED5027F1(L_2, __this, (intptr_t)((intptr_t)WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m76FA2711269633BCD327F0C53648CAE4F576877F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		PhraseRecognizer_remove_OnPhraseRecognized_m238073B8E92F06363AAFE5918FDF5B7328A55F69(L_1, L_2, /*hidden argument*/NULL);
		// keywordRecognizer.Dispose();
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_3 = __this->get_keywordRecognizer_11();
		NullCheck(L_3);
		PhraseRecognizer_Dispose_m617A308A831D5314CE7B10301DB0CADAD080F73A(L_3, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::StartRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StartRecognition_m9799DAFEC06E5F78EC639BC903A9371B06CF17EF (WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * __this, const RuntimeMethod* method)
{
	{
		// if (keywordRecognizer != null && !keywordRecognizer.IsRunning)
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_0 = __this->get_keywordRecognizer_11();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_1 = __this->get_keywordRecognizer_11();
		NullCheck(L_1);
		bool L_2 = PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		// keywordRecognizer.Start();
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_3 = __this->get_keywordRecognizer_11();
		NullCheck(L_3);
		PhraseRecognizer_Start_m2CDF8ABBF99C79C181488B6F0310375BC39D2459(L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::StopRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_StopRecognition_mEDBAC69B9FE8A1AF26F2E1A817D5D7767E88B69C (WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * __this, const RuntimeMethod* method)
{
	{
		// if (keywordRecognizer != null && keywordRecognizer.IsRunning)
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_0 = __this->get_keywordRecognizer_11();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_1 = __this->get_keywordRecognizer_11();
		NullCheck(L_1);
		bool L_2 = PhraseRecognizer_get_IsRunning_m26DF9151D332930662ACB87E00D2498DCC87F7E1(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// keywordRecognizer.Stop();
		KeywordRecognizer_t8F0A26BBF11FE0307328C06B4A9EB4268386578C * L_3 = __this->get_keywordRecognizer_11();
		NullCheck(L_3);
		PhraseRecognizer_Stop_mD94B6DDFE77D1AC1DC10C5BF015F76F607B81F19(L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::KeywordRecognizer_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_KeywordRecognizer_OnPhraseRecognized_m76FA2711269633BCD327F0C53648CAE4F576877F (WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * __this, PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  ___args0, const RuntimeMethod* method)
{
	{
		// OnPhraseRecognized(args.confidence, args.phraseDuration, args.phraseStartTime, args.text);
		PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  L_0 = ___args0;
		int32_t L_1 = L_0.get_confidence_0();
		PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  L_2 = ___args0;
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_3 = L_2.get_phraseDuration_4();
		PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  L_4 = ___args0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_5 = L_4.get_phraseStartTime_3();
		PhraseRecognizedEventArgs_t5045E5956BF185A7C661A2B56466E9C6101BAFAD  L_6 = ___args0;
		String_t* L_7 = L_6.get_text_2();
		WindowsSpeechInputProvider_OnPhraseRecognized_mD2BA3DF559733CE98DE4EB3F20E6F7550B4F0914(__this, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::OnPhraseRecognized(UnityEngine.Windows.Speech.ConfidenceLevel,System.TimeSpan,System.DateTime,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSpeechInputProvider_OnPhraseRecognized_mD2BA3DF559733CE98DE4EB3F20E6F7550B4F0914 (WindowsSpeechInputProvider_t8D9E8429149A4626D950437F554AD60F6CAF3DDE * __this, int32_t ___confidence0, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___phraseDuration1, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___phraseStartTime2, String_t* ___text3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsSpeechInputProvider_OnPhraseRecognized_mD2BA3DF559733CE98DE4EB3F20E6F7550B4F0914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_3;
	memset((&V_3), 0, sizeof(V_3));
	SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	int32_t G_B8_1 = 0;
	{
		// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
		RuntimeObject* L_0 = BaseDataProvider_get_Service_m98C3A6FC44F6BF183A5812DB3ADC6018B838E943(__this, /*hidden argument*/NULL);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var));
		// for (int i = 0; i < Commands?.Length; i++)
		V_1 = 0;
		goto IL_004b;
	}

IL_0010:
	{
		// if (Commands[i].LocalizedKeyword == text)
		SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* L_1 = WindowsSpeechInputProvider_get_Commands_m5E794CB29A7524A9B5F2FEFFD681307D80CFC314(/*hidden argument*/NULL);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		String_t* L_3 = SpeechCommands_get_LocalizedKeyword_m5CB14BEDBB6125BD45E76EA4EB6E66A9D8C6781D((SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), /*hidden argument*/NULL);
		String_t* L_4 = ___text3;
		bool L_5 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// inputSystem?.RaiseSpeechCommandRecognized(InputSource, (RecognitionConfidenceLevel)confidence, phraseDuration, phraseStartTime, Commands[i]);
		RuntimeObject* L_6 = V_0;
		if (!L_6)
		{
			goto IL_007b;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		RuntimeObject* L_8 = __this->get_InputSource_9();
		int32_t L_9 = ___confidence0;
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_10 = ___phraseDuration1;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_11 = ___phraseStartTime2;
		SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* L_12 = WindowsSpeechInputProvider_get_Commands_m5E794CB29A7524A9B5F2FEFFD681307D80CFC314(/*hidden argument*/NULL);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B  L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_7);
		InterfaceActionInvoker5< RuntimeObject*, int32_t, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , SpeechCommands_tF37A6AFE4D69C10D0E30BC190E5C97A64354878B  >::Invoke(55 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSpeechCommandRecognized(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel,System.TimeSpan,System.DateTime,Microsoft.MixedReality.Toolkit.Input.SpeechCommands) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, L_7, L_8, L_9, L_10, L_11, L_15);
		// break;
		return;
	}

IL_0047:
	{
		// for (int i = 0; i < Commands?.Length; i++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_004b:
	{
		// for (int i = 0; i < Commands?.Length; i++)
		int32_t L_17 = V_1;
		SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* L_18 = WindowsSpeechInputProvider_get_Commands_m5E794CB29A7524A9B5F2FEFFD681307D80CFC314(/*hidden argument*/NULL);
		SpeechCommandsU5BU5D_t78420D7B2EBEAB886AC40221CA5E4C7B5FA675C3* L_19 = L_18;
		G_B6_0 = L_19;
		G_B6_1 = L_17;
		if (L_19)
		{
			G_B7_0 = L_19;
			G_B7_1 = L_17;
			goto IL_0060;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_20 = V_3;
		G_B8_0 = L_20;
		G_B8_1 = G_B6_1;
		goto IL_0067;
	}

IL_0060:
	{
		NullCheck(G_B7_0);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_21), (((int32_t)((int32_t)(((RuntimeArray*)G_B7_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B8_0 = L_21;
		G_B8_1 = G_B7_1;
	}

IL_0067:
	{
		V_2 = G_B8_0;
		int32_t L_22 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
		bool L_23 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B8_1) < ((int32_t)L_22))? 1 : 0)&(int32_t)L_23)))
		{
			goto IL_0010;
		}
	}

IL_007b:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
