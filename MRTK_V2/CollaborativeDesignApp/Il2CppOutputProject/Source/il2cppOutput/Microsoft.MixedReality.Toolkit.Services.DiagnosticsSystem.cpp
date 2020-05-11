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

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8;
// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A;
// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler
struct IMixedRealityDiagnosticsHandler_tAC8B8890808E612F060CE50709F7C28A7AF003DD;
// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem
struct IMixedRealityDiagnosticsSystem_t60A83629BE6315E6FE52306F971A6EE38463C952;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c
struct U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_tCDAABC4976E965E99580F716B1B2CDD9CDBE1865;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t7B6E2AF9599FB6847FE71FC6F5DE9AE0BC8ABB50;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
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
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct EventFunction_1_t2A3095B7B4C68632AF2DA9C7696E4F52BF2FDFA5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D;
// UnityEngine.FrameTiming[]
struct FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Shader
struct Shader_tE2731FF351B74AB4186897484FB01E000C1160CA;
// UnityEngine.TextMesh
struct TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;
// UnityEngine.WaitUntil
struct WaitUntil_t012561515C0E1D3DEA19DB3A05444B020C68E13F;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t2A3095B7B4C68632AF2DA9C7696E4F52BF2FDFA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDiagnosticsHandler_tAC8B8890808E612F060CE50709F7C28A7AF003DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0085F04FFAF54410F314A1739CA00743371D3A5B;
IL2CPP_EXTERN_C String_t* _stringLiteral0E8EC13A3AA3AD0DF348D45AF23180EF013500EE;
IL2CPP_EXTERN_C String_t* _stringLiteral10091FE4A98C623CD25DBBAE02B40227888E2A05;
IL2CPP_EXTERN_C String_t* _stringLiteral239E0C1950725645EB093C14A66E2BBDD321DF7A;
IL2CPP_EXTERN_C String_t* _stringLiteral2A2E2357C56DD659D0DC9E3D8ECE1D8242034491;
IL2CPP_EXTERN_C String_t* _stringLiteral33073F1D8AD8D5D56D77E1146D8D2BA3DBBA746C;
IL2CPP_EXTERN_C String_t* _stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A;
IL2CPP_EXTERN_C String_t* _stringLiteral3AF2279F9E306ACD0A4644E2B0F2F48A1E06D8D9;
IL2CPP_EXTERN_C String_t* _stringLiteral469FB70DED7914453A23F856E6F6A00E7461E923;
IL2CPP_EXTERN_C String_t* _stringLiteral5BFD6CD9A18872E3AB00178F2F3588D3A16CC24A;
IL2CPP_EXTERN_C String_t* _stringLiteral5E044C5A2E8F3D4F49006EA5361F7FEB04CD498F;
IL2CPP_EXTERN_C String_t* _stringLiteral60DD62DDA6D0E9082284B2E9AF1CB4E2AFFEDFC5;
IL2CPP_EXTERN_C String_t* _stringLiteral6AC3D240BE15CDE5454371B7FC93D8B50949262C;
IL2CPP_EXTERN_C String_t* _stringLiteral9315667F99D5901C8E062AAC730B9254258670B5;
IL2CPP_EXTERN_C String_t* _stringLiteral9C3A49852D90133B9BEB027ECCB54020A3D56034;
IL2CPP_EXTERN_C String_t* _stringLiteralACCAD3295265225D2B9E4FB826E53031E4D933F6;
IL2CPP_EXTERN_C String_t* _stringLiteralB066E98ABD1787899F779143B75CEDB2486305D4;
IL2CPP_EXTERN_C String_t* _stringLiteralB43776D3A8057BCB7F05D18BE4E19FA5C0A1171E;
IL2CPP_EXTERN_C String_t* _stringLiteralCA1DF7778711AC043DE19DBF92546587DCB1A0BD;
IL2CPP_EXTERN_C String_t* _stringLiteralD48C67736A90281297DD96BF118099E6CB6939B8;
IL2CPP_EXTERN_C String_t* _stringLiteralDE54FCF888EB0C889DFF7964C29E0C89A5613301;
IL2CPP_EXTERN_C String_t* _stringLiteralE6CCEBA6FB0724DD7ABAA53A7A4801E3696007F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEDE2ACC6A2CAB5D8B552539E6ED55D7498F1BD1D;
IL2CPP_EXTERN_C String_t* _stringLiteralEFDD3FFFDEBF8938E0ACF2BA36C21ADB990D938B;
IL2CPP_EXTERN_C String_t* _stringLiteralF11AF337B3340D92B47E93D08CB0B65A6AE686F5;
IL2CPP_EXTERN_C String_t* _stringLiteralFBE2C10212C6D261022FC9B3F7F7D5A3F2318FB3;
IL2CPP_EXTERN_C String_t* _stringLiteralFE2CE179ADA45417D29FD8AAF094AD2E7762DB78;
IL2CPP_EXTERN_C const RuntimeMethod* BaseEventSystem_HandleEvent_TisIMixedRealityDiagnosticsHandler_tAC8B8890808E612F060CE50709F7C28A7AF003DD_m1F1033D89A4FE79967F28D6B5D99DF99FBB7ECEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventFunction_1__ctor_m17F86D47E0DAA3F7764E21D792C35AD90F11B238_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A_mABCD54315A98A0E0F2A59B53A6039617521D10A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_mFF0DDA81B1E84F573D01719E2DA57171F4015309_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__44_0_m57E393F7C53A957AC097BAA32FA722112EC91BE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_CreateVisualizations_m214A0F325502CED06D23857EB80CB99CAEB4992F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_Destroy_mF9797E46A39E2D4F1B209AC37FAC820DD9DB3BBF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_Initialize_m5F44B97BE6CB246CB99407FBE08D19EB52F99887_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_RaiseDiagnosticsChanged_m01CEB9027EA33434C9C50AA454AAF86D46BD9463_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem__cctor_mB8A467F793C81752FFE5579F89D2197BA5E6FDA1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem__ctor_m1ADF9A62301E27021C8DF7ADF4A89635BB4A9B7A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_get_SourceName_m44979AE05A11BB469CB59A0CDA553A5A09A36493_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_FrameSampleRate_m3228AE96D08B7BFBE252293BB03360D7F804353B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_ShowDiagnostics_mFB68AC67692BFCF1A4ED0FC7DE084F6024B6D310_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_ShowProfiler_m00F0A1C7680D0533C997FEF809CA3C799162B153_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_WindowAnchor_mD42B556D1B1C9F72EC6B7801A9EF8755A07B5EB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_m4BC50F560A96AFB755C3E20F968AACDA1A412AAA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_WindowOffset_m57121940B80B4D9A118EDD8C776CB18BAF14B8EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_WindowScale_m47AC967F9AF3933E774009ACC00F180F109464B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_m79FEF92F92458DD769CC0586A075583B3D7065A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_BuildWindow_m7DFB6CD3A03FD28EFA8E108A0F5CC26CE286BD2F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m5B8990C40F43E1AAD60E6FB57C8E1C56A0030B05_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CalculateWindowRotation_m67319F78284DD1EC046364ABB5AB9A4C4968D8EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CreateAnchor_m4486E8DE5E3EA03B512E8B3A1499546B7F73AF04_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CreateQuad_mAF186023A8C485536CCEDB161FEF530A3CDD7C01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CreateText_m6B81A217F4ACF6A008ECEED5E84305B447572C0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_InitializeRenderer_m1C2099ADD8FD8E08BDC38A34106B6C63E0181922_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_LateUpdate_m5EE465BD3CB8EC11A8E8CB51EF42600863A42034_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_MemoryUsageToString_mC893DD71728C09A7CE681C5067CC2BDB9624A18C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_OnDestroy_m8E22F2A9B91D0339AA620F68B764452669ECDB38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_Reset_m61E154D3FEABEF64C7B3657EBA520CB01EBBDE39_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mC274784CB75499E39A4291190F37570C9A42311E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler__cctor_mEC776427D1C36DB327BD028FCBB41739332DBCC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler__ctor_mE1EA44AB37FE840EB8CAE5671438B5935F646E2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_get_AppFrameRate_m868DEB9C63BCD4F917C17D7E034BABD5720402EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m2BC9705FACDC1FA3B61386D8357DD8CB2AB3067C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_set_WindowScale_m1D5C8234FA06A9CE8816D2CD38899135D4117181_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__44_0_m57E393F7C53A957AC097BAA32FA722112EC91BE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m7059C3F5DD3AD9D309B189A7C58056FE048A764D_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3;
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9;
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t4128AA319B877B9CF69AB4915499E9717D75242E 
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


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem_<>c
struct  U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem_<>c Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem_<>c::<>9
	U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Diagnostics.Stopwatch
struct  Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
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


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
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


// UnityEngine.FrameTiming
struct  FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC 
{
public:
	// System.UInt64 UnityEngine.FrameTiming::cpuTimePresentCalled
	uint64_t ___cpuTimePresentCalled_0;
	// System.Double UnityEngine.FrameTiming::cpuFrameTime
	double ___cpuFrameTime_1;
	// System.UInt64 UnityEngine.FrameTiming::cpuTimeFrameComplete
	uint64_t ___cpuTimeFrameComplete_2;
	// System.Double UnityEngine.FrameTiming::gpuFrameTime
	double ___gpuFrameTime_3;
	// System.Single UnityEngine.FrameTiming::heightScale
	float ___heightScale_4;
	// System.Single UnityEngine.FrameTiming::widthScale
	float ___widthScale_5;
	// System.UInt32 UnityEngine.FrameTiming::syncInterval
	uint32_t ___syncInterval_6;

public:
	inline static int32_t get_offset_of_cpuTimePresentCalled_0() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___cpuTimePresentCalled_0)); }
	inline uint64_t get_cpuTimePresentCalled_0() const { return ___cpuTimePresentCalled_0; }
	inline uint64_t* get_address_of_cpuTimePresentCalled_0() { return &___cpuTimePresentCalled_0; }
	inline void set_cpuTimePresentCalled_0(uint64_t value)
	{
		___cpuTimePresentCalled_0 = value;
	}

	inline static int32_t get_offset_of_cpuFrameTime_1() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___cpuFrameTime_1)); }
	inline double get_cpuFrameTime_1() const { return ___cpuFrameTime_1; }
	inline double* get_address_of_cpuFrameTime_1() { return &___cpuFrameTime_1; }
	inline void set_cpuFrameTime_1(double value)
	{
		___cpuFrameTime_1 = value;
	}

	inline static int32_t get_offset_of_cpuTimeFrameComplete_2() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___cpuTimeFrameComplete_2)); }
	inline uint64_t get_cpuTimeFrameComplete_2() const { return ___cpuTimeFrameComplete_2; }
	inline uint64_t* get_address_of_cpuTimeFrameComplete_2() { return &___cpuTimeFrameComplete_2; }
	inline void set_cpuTimeFrameComplete_2(uint64_t value)
	{
		___cpuTimeFrameComplete_2 = value;
	}

	inline static int32_t get_offset_of_gpuFrameTime_3() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___gpuFrameTime_3)); }
	inline double get_gpuFrameTime_3() const { return ___gpuFrameTime_3; }
	inline double* get_address_of_gpuFrameTime_3() { return &___gpuFrameTime_3; }
	inline void set_gpuFrameTime_3(double value)
	{
		___gpuFrameTime_3 = value;
	}

	inline static int32_t get_offset_of_heightScale_4() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___heightScale_4)); }
	inline float get_heightScale_4() const { return ___heightScale_4; }
	inline float* get_address_of_heightScale_4() { return &___heightScale_4; }
	inline void set_heightScale_4(float value)
	{
		___heightScale_4 = value;
	}

	inline static int32_t get_offset_of_widthScale_5() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___widthScale_5)); }
	inline float get_widthScale_5() const { return ___widthScale_5; }
	inline float* get_address_of_widthScale_5() { return &___widthScale_5; }
	inline void set_widthScale_5(float value)
	{
		___widthScale_5 = value;
	}

	inline static int32_t get_offset_of_syncInterval_6() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___syncInterval_6)); }
	inline uint32_t get_syncInterval_6() const { return ___syncInterval_6; }
	inline uint32_t* get_address_of_syncInterval_6() { return &___syncInterval_6; }
	inline void set_syncInterval_6(uint32_t value)
	{
		___syncInterval_6 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
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


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
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

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.MaterialPropertyBlock
struct  MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.MotionVectorGenerationMode
struct  MotionVectorGenerationMode_tB3408BD37D803441061663F0BAD2EE29B32D2B63 
{
public:
	// System.Int32 UnityEngine.MotionVectorGenerationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MotionVectorGenerationMode_tB3408BD37D803441061663F0BAD2EE29B32D2B63, ___value___2)); }
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

// UnityEngine.PrimitiveType
struct  PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.LightProbeUsage
struct  LightProbeUsage_tC8F0DD8098B4ED548AEAD72D6B39089CE68CBBD8 
{
public:
	// System.Int32 UnityEngine.Rendering.LightProbeUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightProbeUsage_tC8F0DD8098B4ED548AEAD72D6B39089CE68CBBD8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ReflectionProbeUsage
struct  ReflectionProbeUsage_tAFF366D7F5E43B871C7302C4D7D0F48859E7B31A 
{
public:
	// System.Int32 UnityEngine.Rendering.ReflectionProbeUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeUsage_tAFF366D7F5E43B871C7302C4D7D0F48859E7B31A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ShadowCastingMode
struct  ShadowCastingMode_t699023357D66025632B533A17D0FB1E4548141FF 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowCastingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowCastingMode_t699023357D66025632B533A17D0FB1E4548141FF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct  TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct  DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A  : public GenericBaseEventData_tF7A8347659841F4C7134C28074F9CCC3688BA49D
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct  MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4  : public BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticVisualizationParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___diagnosticVisualizationParent_9;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::visualProfiler
	MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * ___visualProfiler_10;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::Playspace
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___Playspace_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showDiagnostics
	bool ___showDiagnostics_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfiler
	bool ___showProfiler_13;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::frameSampleRate
	float ___frameSampleRate_14;
	// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::eventData
	DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A * ___eventData_15;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowAnchor
	int32_t ___windowAnchor_17;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___windowOffset_18;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowScale
	float ___windowScale_19;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowFollowSpeed
	float ___windowFollowSpeed_20;

public:
	inline static int32_t get_offset_of_diagnosticVisualizationParent_9() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4, ___diagnosticVisualizationParent_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_diagnosticVisualizationParent_9() const { return ___diagnosticVisualizationParent_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_diagnosticVisualizationParent_9() { return &___diagnosticVisualizationParent_9; }
	inline void set_diagnosticVisualizationParent_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___diagnosticVisualizationParent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticVisualizationParent_9), (void*)value);
	}

	inline static int32_t get_offset_of_visualProfiler_10() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4, ___visualProfiler_10)); }
	inline MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * get_visualProfiler_10() const { return ___visualProfiler_10; }
	inline MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA ** get_address_of_visualProfiler_10() { return &___visualProfiler_10; }
	inline void set_visualProfiler_10(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * value)
	{
		___visualProfiler_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visualProfiler_10), (void*)value);
	}

	inline static int32_t get_offset_of_Playspace_11() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4, ___Playspace_11)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_Playspace_11() const { return ___Playspace_11; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_Playspace_11() { return &___Playspace_11; }
	inline void set_Playspace_11(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___Playspace_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Playspace_11), (void*)value);
	}

	inline static int32_t get_offset_of_showDiagnostics_12() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4, ___showDiagnostics_12)); }
	inline bool get_showDiagnostics_12() const { return ___showDiagnostics_12; }
	inline bool* get_address_of_showDiagnostics_12() { return &___showDiagnostics_12; }
	inline void set_showDiagnostics_12(bool value)
	{
		___showDiagnostics_12 = value;
	}

	inline static int32_t get_offset_of_showProfiler_13() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4, ___showProfiler_13)); }
	inline bool get_showProfiler_13() const { return ___showProfiler_13; }
	inline bool* get_address_of_showProfiler_13() { return &___showProfiler_13; }
	inline void set_showProfiler_13(bool value)
	{
		___showProfiler_13 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_14() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4, ___frameSampleRate_14)); }
	inline float get_frameSampleRate_14() const { return ___frameSampleRate_14; }
	inline float* get_address_of_frameSampleRate_14() { return &___frameSampleRate_14; }
	inline void set_frameSampleRate_14(float value)
	{
		___frameSampleRate_14 = value;
	}

	inline static int32_t get_offset_of_eventData_15() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4, ___eventData_15)); }
	inline DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A * get_eventData_15() const { return ___eventData_15; }
	inline DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A ** get_address_of_eventData_15() { return &___eventData_15; }
	inline void set_eventData_15(DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A * value)
	{
		___eventData_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_15), (void*)value);
	}

	inline static int32_t get_offset_of_windowAnchor_17() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4, ___windowAnchor_17)); }
	inline int32_t get_windowAnchor_17() const { return ___windowAnchor_17; }
	inline int32_t* get_address_of_windowAnchor_17() { return &___windowAnchor_17; }
	inline void set_windowAnchor_17(int32_t value)
	{
		___windowAnchor_17 = value;
	}

	inline static int32_t get_offset_of_windowOffset_18() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4, ___windowOffset_18)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_windowOffset_18() const { return ___windowOffset_18; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_windowOffset_18() { return &___windowOffset_18; }
	inline void set_windowOffset_18(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___windowOffset_18 = value;
	}

	inline static int32_t get_offset_of_windowScale_19() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4, ___windowScale_19)); }
	inline float get_windowScale_19() const { return ___windowScale_19; }
	inline float* get_address_of_windowScale_19() { return &___windowScale_19; }
	inline void set_windowScale_19(float value)
	{
		___windowScale_19 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_20() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4, ___windowFollowSpeed_20)); }
	inline float get_windowFollowSpeed_20() const { return ___windowFollowSpeed_20; }
	inline float* get_address_of_windowFollowSpeed_20() { return &___windowFollowSpeed_20; }
	inline void set_windowFollowSpeed_20(float value)
	{
		___windowFollowSpeed_20 = value;
	}
};

struct MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler> Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChanged
	EventFunction_1_t2A3095B7B4C68632AF2DA9C7696E4F52BF2FDFA5 * ___OnDiagnosticsChanged_16;

public:
	inline static int32_t get_offset_of_OnDiagnosticsChanged_16() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4_StaticFields, ___OnDiagnosticsChanged_16)); }
	inline EventFunction_1_t2A3095B7B4C68632AF2DA9C7696E4F52BF2FDFA5 * get_OnDiagnosticsChanged_16() const { return ___OnDiagnosticsChanged_16; }
	inline EventFunction_1_t2A3095B7B4C68632AF2DA9C7696E4F52BF2FDFA5 ** get_address_of_OnDiagnosticsChanged_16() { return &___OnDiagnosticsChanged_16; }
	inline void set_OnDiagnosticsChanged_16(EventFunction_1_t2A3095B7B4C68632AF2DA9C7696E4F52BF2FDFA5 * value)
	{
		___OnDiagnosticsChanged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDiagnosticsChanged_16), (void*)value);
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


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
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

// UnityEngine.Shader
struct  Shader_tE2731FF351B74AB4186897484FB01E000C1160CA  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
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


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct  EventFunction_1_t2A3095B7B4C68632AF2DA9C7696E4F52BF2FDFA5  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.TextMesh
struct  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct  MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showDiagnostics
	bool ___showDiagnostics_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showProfiler
	bool ___showProfiler_6;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::frameSampleRate
	float ___frameSampleRate_7;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowAnchor
	int32_t ___windowAnchor_8;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___windowOffset_9;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowScale
	float ___windowScale_10;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowFollowSpeed
	float ___windowFollowSpeed_11;

public:
	inline static int32_t get_offset_of_showDiagnostics_5() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467, ___showDiagnostics_5)); }
	inline bool get_showDiagnostics_5() const { return ___showDiagnostics_5; }
	inline bool* get_address_of_showDiagnostics_5() { return &___showDiagnostics_5; }
	inline void set_showDiagnostics_5(bool value)
	{
		___showDiagnostics_5 = value;
	}

	inline static int32_t get_offset_of_showProfiler_6() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467, ___showProfiler_6)); }
	inline bool get_showProfiler_6() const { return ___showProfiler_6; }
	inline bool* get_address_of_showProfiler_6() { return &___showProfiler_6; }
	inline void set_showProfiler_6(bool value)
	{
		___showProfiler_6 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_7() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467, ___frameSampleRate_7)); }
	inline float get_frameSampleRate_7() const { return ___frameSampleRate_7; }
	inline float* get_address_of_frameSampleRate_7() { return &___frameSampleRate_7; }
	inline void set_frameSampleRate_7(float value)
	{
		___frameSampleRate_7 = value;
	}

	inline static int32_t get_offset_of_windowAnchor_8() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467, ___windowAnchor_8)); }
	inline int32_t get_windowAnchor_8() const { return ___windowAnchor_8; }
	inline int32_t* get_address_of_windowAnchor_8() { return &___windowAnchor_8; }
	inline void set_windowAnchor_8(int32_t value)
	{
		___windowAnchor_8 = value;
	}

	inline static int32_t get_offset_of_windowOffset_9() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467, ___windowOffset_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_windowOffset_9() const { return ___windowOffset_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_windowOffset_9() { return &___windowOffset_9; }
	inline void set_windowOffset_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___windowOffset_9 = value;
	}

	inline static int32_t get_offset_of_windowScale_10() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467, ___windowScale_10)); }
	inline float get_windowScale_10() const { return ___windowScale_10; }
	inline float* get_address_of_windowScale_10() { return &___windowScale_10; }
	inline void set_windowScale_10(float value)
	{
		___windowScale_10 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_11() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467, ___windowFollowSpeed_11)); }
	inline float get_windowFollowSpeed_11() const { return ___windowFollowSpeed_11; }
	inline float* get_address_of_windowFollowSpeed_11() { return &___windowFollowSpeed_11; }
	inline void set_windowFollowSpeed_11(float value)
	{
		___windowFollowSpeed_11 = value;
	}
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


// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct  MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::<WindowParent>k__BackingField
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___U3CWindowParentU3Ek__BackingField_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::isVisible
	bool ___isVisible_14;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameSampleRate
	float ___frameSampleRate_15;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowAnchor
	int32_t ___windowAnchor_16;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___windowOffset_17;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowScale
	float ___windowScale_18;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowFollowSpeed
	float ___windowFollowSpeed_19;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::displayedDecimalDigits
	int32_t ___displayedDecimalDigits_20;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::baseColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___baseColor_21;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::targetFrameRateColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___targetFrameRateColor_22;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::missedFrameRateColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___missedFrameRateColor_23;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryUsedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___memoryUsedColor_24;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryPeakColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___memoryPeakColor_25;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryLimitColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___memoryLimitColor_26;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::window
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___window_27;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::cpuFrameRateText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___cpuFrameRateText_28;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::gpuFrameRateText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___gpuFrameRateText_29;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::usedMemoryText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___usedMemoryText_30;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakMemoryText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___peakMemoryText_31;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::limitMemoryText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___limitMemoryText_32;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::usedAnchor
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___usedAnchor_33;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakAnchor
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___peakAnchor_34;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowHorizontalRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___windowHorizontalRotation_35;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowHorizontalRotationInverse
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___windowHorizontalRotationInverse_36;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowVerticalRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___windowVerticalRotation_37;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowVerticalRotationInverse
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___windowVerticalRotationInverse_38;
	// UnityEngine.Matrix4x4[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoMatrices
	Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* ___frameInfoMatrices_39;
	// UnityEngine.Vector4[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoColors
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ___frameInfoColors_40;
	// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoPropertyBlock
	MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___frameInfoPropertyBlock_41;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::colorID
	int32_t ___colorID_42;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::parentMatrixID
	int32_t ___parentMatrixID_43;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameCount
	int32_t ___frameCount_44;
	// System.Diagnostics.Stopwatch Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::stopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___stopwatch_45;
	// UnityEngine.FrameTiming[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameTimings
	FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* ___frameTimings_46;
	// System.String[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::cpuFrameRateStrings
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___cpuFrameRateStrings_47;
	// System.String[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::gpuFrameRateStrings
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___gpuFrameRateStrings_48;
	// System.Char[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::stringBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___stringBuffer_49;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryUsage
	uint64_t ___memoryUsage_50;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakMemoryUsage
	uint64_t ___peakMemoryUsage_51;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::limitMemoryUsage
	uint64_t ___limitMemoryUsage_52;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___defaultMaterial_53;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultInstancedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___defaultInstancedMaterial_54;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::backgroundMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___backgroundMaterial_55;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::foregroundMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___foregroundMaterial_56;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::textMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___textMaterial_57;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::quadMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___quadMesh_58;

public:
	inline static int32_t get_offset_of_U3CWindowParentU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___U3CWindowParentU3Ek__BackingField_13)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_U3CWindowParentU3Ek__BackingField_13() const { return ___U3CWindowParentU3Ek__BackingField_13; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_U3CWindowParentU3Ek__BackingField_13() { return &___U3CWindowParentU3Ek__BackingField_13; }
	inline void set_U3CWindowParentU3Ek__BackingField_13(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___U3CWindowParentU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWindowParentU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_isVisible_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___isVisible_14)); }
	inline bool get_isVisible_14() const { return ___isVisible_14; }
	inline bool* get_address_of_isVisible_14() { return &___isVisible_14; }
	inline void set_isVisible_14(bool value)
	{
		___isVisible_14 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_15() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___frameSampleRate_15)); }
	inline float get_frameSampleRate_15() const { return ___frameSampleRate_15; }
	inline float* get_address_of_frameSampleRate_15() { return &___frameSampleRate_15; }
	inline void set_frameSampleRate_15(float value)
	{
		___frameSampleRate_15 = value;
	}

	inline static int32_t get_offset_of_windowAnchor_16() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___windowAnchor_16)); }
	inline int32_t get_windowAnchor_16() const { return ___windowAnchor_16; }
	inline int32_t* get_address_of_windowAnchor_16() { return &___windowAnchor_16; }
	inline void set_windowAnchor_16(int32_t value)
	{
		___windowAnchor_16 = value;
	}

	inline static int32_t get_offset_of_windowOffset_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___windowOffset_17)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_windowOffset_17() const { return ___windowOffset_17; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_windowOffset_17() { return &___windowOffset_17; }
	inline void set_windowOffset_17(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___windowOffset_17 = value;
	}

	inline static int32_t get_offset_of_windowScale_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___windowScale_18)); }
	inline float get_windowScale_18() const { return ___windowScale_18; }
	inline float* get_address_of_windowScale_18() { return &___windowScale_18; }
	inline void set_windowScale_18(float value)
	{
		___windowScale_18 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___windowFollowSpeed_19)); }
	inline float get_windowFollowSpeed_19() const { return ___windowFollowSpeed_19; }
	inline float* get_address_of_windowFollowSpeed_19() { return &___windowFollowSpeed_19; }
	inline void set_windowFollowSpeed_19(float value)
	{
		___windowFollowSpeed_19 = value;
	}

	inline static int32_t get_offset_of_displayedDecimalDigits_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___displayedDecimalDigits_20)); }
	inline int32_t get_displayedDecimalDigits_20() const { return ___displayedDecimalDigits_20; }
	inline int32_t* get_address_of_displayedDecimalDigits_20() { return &___displayedDecimalDigits_20; }
	inline void set_displayedDecimalDigits_20(int32_t value)
	{
		___displayedDecimalDigits_20 = value;
	}

	inline static int32_t get_offset_of_baseColor_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___baseColor_21)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_baseColor_21() const { return ___baseColor_21; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_baseColor_21() { return &___baseColor_21; }
	inline void set_baseColor_21(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___baseColor_21 = value;
	}

	inline static int32_t get_offset_of_targetFrameRateColor_22() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___targetFrameRateColor_22)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_targetFrameRateColor_22() const { return ___targetFrameRateColor_22; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_targetFrameRateColor_22() { return &___targetFrameRateColor_22; }
	inline void set_targetFrameRateColor_22(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___targetFrameRateColor_22 = value;
	}

	inline static int32_t get_offset_of_missedFrameRateColor_23() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___missedFrameRateColor_23)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_missedFrameRateColor_23() const { return ___missedFrameRateColor_23; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_missedFrameRateColor_23() { return &___missedFrameRateColor_23; }
	inline void set_missedFrameRateColor_23(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___missedFrameRateColor_23 = value;
	}

	inline static int32_t get_offset_of_memoryUsedColor_24() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___memoryUsedColor_24)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_memoryUsedColor_24() const { return ___memoryUsedColor_24; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_memoryUsedColor_24() { return &___memoryUsedColor_24; }
	inline void set_memoryUsedColor_24(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___memoryUsedColor_24 = value;
	}

	inline static int32_t get_offset_of_memoryPeakColor_25() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___memoryPeakColor_25)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_memoryPeakColor_25() const { return ___memoryPeakColor_25; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_memoryPeakColor_25() { return &___memoryPeakColor_25; }
	inline void set_memoryPeakColor_25(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___memoryPeakColor_25 = value;
	}

	inline static int32_t get_offset_of_memoryLimitColor_26() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___memoryLimitColor_26)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_memoryLimitColor_26() const { return ___memoryLimitColor_26; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_memoryLimitColor_26() { return &___memoryLimitColor_26; }
	inline void set_memoryLimitColor_26(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___memoryLimitColor_26 = value;
	}

	inline static int32_t get_offset_of_window_27() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___window_27)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_window_27() const { return ___window_27; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_window_27() { return &___window_27; }
	inline void set_window_27(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___window_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_27), (void*)value);
	}

	inline static int32_t get_offset_of_cpuFrameRateText_28() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___cpuFrameRateText_28)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_cpuFrameRateText_28() const { return ___cpuFrameRateText_28; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_cpuFrameRateText_28() { return &___cpuFrameRateText_28; }
	inline void set_cpuFrameRateText_28(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___cpuFrameRateText_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpuFrameRateText_28), (void*)value);
	}

	inline static int32_t get_offset_of_gpuFrameRateText_29() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___gpuFrameRateText_29)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_gpuFrameRateText_29() const { return ___gpuFrameRateText_29; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_gpuFrameRateText_29() { return &___gpuFrameRateText_29; }
	inline void set_gpuFrameRateText_29(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___gpuFrameRateText_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gpuFrameRateText_29), (void*)value);
	}

	inline static int32_t get_offset_of_usedMemoryText_30() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___usedMemoryText_30)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_usedMemoryText_30() const { return ___usedMemoryText_30; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_usedMemoryText_30() { return &___usedMemoryText_30; }
	inline void set_usedMemoryText_30(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___usedMemoryText_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedMemoryText_30), (void*)value);
	}

	inline static int32_t get_offset_of_peakMemoryText_31() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___peakMemoryText_31)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_peakMemoryText_31() const { return ___peakMemoryText_31; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_peakMemoryText_31() { return &___peakMemoryText_31; }
	inline void set_peakMemoryText_31(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___peakMemoryText_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peakMemoryText_31), (void*)value);
	}

	inline static int32_t get_offset_of_limitMemoryText_32() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___limitMemoryText_32)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_limitMemoryText_32() const { return ___limitMemoryText_32; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_limitMemoryText_32() { return &___limitMemoryText_32; }
	inline void set_limitMemoryText_32(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___limitMemoryText_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___limitMemoryText_32), (void*)value);
	}

	inline static int32_t get_offset_of_usedAnchor_33() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___usedAnchor_33)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_usedAnchor_33() const { return ___usedAnchor_33; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_usedAnchor_33() { return &___usedAnchor_33; }
	inline void set_usedAnchor_33(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___usedAnchor_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedAnchor_33), (void*)value);
	}

	inline static int32_t get_offset_of_peakAnchor_34() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___peakAnchor_34)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_peakAnchor_34() const { return ___peakAnchor_34; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_peakAnchor_34() { return &___peakAnchor_34; }
	inline void set_peakAnchor_34(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___peakAnchor_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peakAnchor_34), (void*)value);
	}

	inline static int32_t get_offset_of_windowHorizontalRotation_35() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___windowHorizontalRotation_35)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_windowHorizontalRotation_35() const { return ___windowHorizontalRotation_35; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_windowHorizontalRotation_35() { return &___windowHorizontalRotation_35; }
	inline void set_windowHorizontalRotation_35(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___windowHorizontalRotation_35 = value;
	}

	inline static int32_t get_offset_of_windowHorizontalRotationInverse_36() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___windowHorizontalRotationInverse_36)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_windowHorizontalRotationInverse_36() const { return ___windowHorizontalRotationInverse_36; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_windowHorizontalRotationInverse_36() { return &___windowHorizontalRotationInverse_36; }
	inline void set_windowHorizontalRotationInverse_36(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___windowHorizontalRotationInverse_36 = value;
	}

	inline static int32_t get_offset_of_windowVerticalRotation_37() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___windowVerticalRotation_37)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_windowVerticalRotation_37() const { return ___windowVerticalRotation_37; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_windowVerticalRotation_37() { return &___windowVerticalRotation_37; }
	inline void set_windowVerticalRotation_37(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___windowVerticalRotation_37 = value;
	}

	inline static int32_t get_offset_of_windowVerticalRotationInverse_38() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___windowVerticalRotationInverse_38)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_windowVerticalRotationInverse_38() const { return ___windowVerticalRotationInverse_38; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_windowVerticalRotationInverse_38() { return &___windowVerticalRotationInverse_38; }
	inline void set_windowVerticalRotationInverse_38(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___windowVerticalRotationInverse_38 = value;
	}

	inline static int32_t get_offset_of_frameInfoMatrices_39() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___frameInfoMatrices_39)); }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* get_frameInfoMatrices_39() const { return ___frameInfoMatrices_39; }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9** get_address_of_frameInfoMatrices_39() { return &___frameInfoMatrices_39; }
	inline void set_frameInfoMatrices_39(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* value)
	{
		___frameInfoMatrices_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameInfoMatrices_39), (void*)value);
	}

	inline static int32_t get_offset_of_frameInfoColors_40() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___frameInfoColors_40)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get_frameInfoColors_40() const { return ___frameInfoColors_40; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of_frameInfoColors_40() { return &___frameInfoColors_40; }
	inline void set_frameInfoColors_40(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		___frameInfoColors_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameInfoColors_40), (void*)value);
	}

	inline static int32_t get_offset_of_frameInfoPropertyBlock_41() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___frameInfoPropertyBlock_41)); }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * get_frameInfoPropertyBlock_41() const { return ___frameInfoPropertyBlock_41; }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 ** get_address_of_frameInfoPropertyBlock_41() { return &___frameInfoPropertyBlock_41; }
	inline void set_frameInfoPropertyBlock_41(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * value)
	{
		___frameInfoPropertyBlock_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameInfoPropertyBlock_41), (void*)value);
	}

	inline static int32_t get_offset_of_colorID_42() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___colorID_42)); }
	inline int32_t get_colorID_42() const { return ___colorID_42; }
	inline int32_t* get_address_of_colorID_42() { return &___colorID_42; }
	inline void set_colorID_42(int32_t value)
	{
		___colorID_42 = value;
	}

	inline static int32_t get_offset_of_parentMatrixID_43() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___parentMatrixID_43)); }
	inline int32_t get_parentMatrixID_43() const { return ___parentMatrixID_43; }
	inline int32_t* get_address_of_parentMatrixID_43() { return &___parentMatrixID_43; }
	inline void set_parentMatrixID_43(int32_t value)
	{
		___parentMatrixID_43 = value;
	}

	inline static int32_t get_offset_of_frameCount_44() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___frameCount_44)); }
	inline int32_t get_frameCount_44() const { return ___frameCount_44; }
	inline int32_t* get_address_of_frameCount_44() { return &___frameCount_44; }
	inline void set_frameCount_44(int32_t value)
	{
		___frameCount_44 = value;
	}

	inline static int32_t get_offset_of_stopwatch_45() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___stopwatch_45)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_stopwatch_45() const { return ___stopwatch_45; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_stopwatch_45() { return &___stopwatch_45; }
	inline void set_stopwatch_45(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___stopwatch_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopwatch_45), (void*)value);
	}

	inline static int32_t get_offset_of_frameTimings_46() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___frameTimings_46)); }
	inline FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* get_frameTimings_46() const { return ___frameTimings_46; }
	inline FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3** get_address_of_frameTimings_46() { return &___frameTimings_46; }
	inline void set_frameTimings_46(FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* value)
	{
		___frameTimings_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameTimings_46), (void*)value);
	}

	inline static int32_t get_offset_of_cpuFrameRateStrings_47() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___cpuFrameRateStrings_47)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_cpuFrameRateStrings_47() const { return ___cpuFrameRateStrings_47; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_cpuFrameRateStrings_47() { return &___cpuFrameRateStrings_47; }
	inline void set_cpuFrameRateStrings_47(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___cpuFrameRateStrings_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpuFrameRateStrings_47), (void*)value);
	}

	inline static int32_t get_offset_of_gpuFrameRateStrings_48() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___gpuFrameRateStrings_48)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_gpuFrameRateStrings_48() const { return ___gpuFrameRateStrings_48; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_gpuFrameRateStrings_48() { return &___gpuFrameRateStrings_48; }
	inline void set_gpuFrameRateStrings_48(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___gpuFrameRateStrings_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gpuFrameRateStrings_48), (void*)value);
	}

	inline static int32_t get_offset_of_stringBuffer_49() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___stringBuffer_49)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_stringBuffer_49() const { return ___stringBuffer_49; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_stringBuffer_49() { return &___stringBuffer_49; }
	inline void set_stringBuffer_49(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___stringBuffer_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringBuffer_49), (void*)value);
	}

	inline static int32_t get_offset_of_memoryUsage_50() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___memoryUsage_50)); }
	inline uint64_t get_memoryUsage_50() const { return ___memoryUsage_50; }
	inline uint64_t* get_address_of_memoryUsage_50() { return &___memoryUsage_50; }
	inline void set_memoryUsage_50(uint64_t value)
	{
		___memoryUsage_50 = value;
	}

	inline static int32_t get_offset_of_peakMemoryUsage_51() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___peakMemoryUsage_51)); }
	inline uint64_t get_peakMemoryUsage_51() const { return ___peakMemoryUsage_51; }
	inline uint64_t* get_address_of_peakMemoryUsage_51() { return &___peakMemoryUsage_51; }
	inline void set_peakMemoryUsage_51(uint64_t value)
	{
		___peakMemoryUsage_51 = value;
	}

	inline static int32_t get_offset_of_limitMemoryUsage_52() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___limitMemoryUsage_52)); }
	inline uint64_t get_limitMemoryUsage_52() const { return ___limitMemoryUsage_52; }
	inline uint64_t* get_address_of_limitMemoryUsage_52() { return &___limitMemoryUsage_52; }
	inline void set_limitMemoryUsage_52(uint64_t value)
	{
		___limitMemoryUsage_52 = value;
	}

	inline static int32_t get_offset_of_defaultMaterial_53() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___defaultMaterial_53)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_defaultMaterial_53() const { return ___defaultMaterial_53; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_defaultMaterial_53() { return &___defaultMaterial_53; }
	inline void set_defaultMaterial_53(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___defaultMaterial_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_53), (void*)value);
	}

	inline static int32_t get_offset_of_defaultInstancedMaterial_54() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___defaultInstancedMaterial_54)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_defaultInstancedMaterial_54() const { return ___defaultInstancedMaterial_54; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_defaultInstancedMaterial_54() { return &___defaultInstancedMaterial_54; }
	inline void set_defaultInstancedMaterial_54(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___defaultInstancedMaterial_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultInstancedMaterial_54), (void*)value);
	}

	inline static int32_t get_offset_of_backgroundMaterial_55() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___backgroundMaterial_55)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_backgroundMaterial_55() const { return ___backgroundMaterial_55; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_backgroundMaterial_55() { return &___backgroundMaterial_55; }
	inline void set_backgroundMaterial_55(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___backgroundMaterial_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundMaterial_55), (void*)value);
	}

	inline static int32_t get_offset_of_foregroundMaterial_56() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___foregroundMaterial_56)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_foregroundMaterial_56() const { return ___foregroundMaterial_56; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_foregroundMaterial_56() { return &___foregroundMaterial_56; }
	inline void set_foregroundMaterial_56(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___foregroundMaterial_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foregroundMaterial_56), (void*)value);
	}

	inline static int32_t get_offset_of_textMaterial_57() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___textMaterial_57)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_textMaterial_57() const { return ___textMaterial_57; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_textMaterial_57() { return &___textMaterial_57; }
	inline void set_textMaterial_57(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___textMaterial_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textMaterial_57), (void*)value);
	}

	inline static int32_t get_offset_of_quadMesh_58() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA, ___quadMesh_58)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_quadMesh_58() const { return ___quadMesh_58; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_quadMesh_58() { return &___quadMesh_58; }
	inline void set_quadMesh_58(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___quadMesh_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quadMesh_58), (void*)value);
	}
};

struct MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::maxStringLength
	int32_t ___maxStringLength_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::maxTargetFrameRate
	int32_t ___maxTargetFrameRate_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::maxFrameTimings
	int32_t ___maxFrameTimings_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameRange
	int32_t ___frameRange_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultWindowRotation
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___defaultWindowRotation_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultWindowScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___defaultWindowScale_9;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::usedMemoryString
	String_t* ___usedMemoryString_10;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakMemoryString
	String_t* ___peakMemoryString_11;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::limitMemoryString
	String_t* ___limitMemoryString_12;

public:
	inline static int32_t get_offset_of_maxStringLength_4() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields, ___maxStringLength_4)); }
	inline int32_t get_maxStringLength_4() const { return ___maxStringLength_4; }
	inline int32_t* get_address_of_maxStringLength_4() { return &___maxStringLength_4; }
	inline void set_maxStringLength_4(int32_t value)
	{
		___maxStringLength_4 = value;
	}

	inline static int32_t get_offset_of_maxTargetFrameRate_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields, ___maxTargetFrameRate_5)); }
	inline int32_t get_maxTargetFrameRate_5() const { return ___maxTargetFrameRate_5; }
	inline int32_t* get_address_of_maxTargetFrameRate_5() { return &___maxTargetFrameRate_5; }
	inline void set_maxTargetFrameRate_5(int32_t value)
	{
		___maxTargetFrameRate_5 = value;
	}

	inline static int32_t get_offset_of_maxFrameTimings_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields, ___maxFrameTimings_6)); }
	inline int32_t get_maxFrameTimings_6() const { return ___maxFrameTimings_6; }
	inline int32_t* get_address_of_maxFrameTimings_6() { return &___maxFrameTimings_6; }
	inline void set_maxFrameTimings_6(int32_t value)
	{
		___maxFrameTimings_6 = value;
	}

	inline static int32_t get_offset_of_frameRange_7() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields, ___frameRange_7)); }
	inline int32_t get_frameRange_7() const { return ___frameRange_7; }
	inline int32_t* get_address_of_frameRange_7() { return &___frameRange_7; }
	inline void set_frameRange_7(int32_t value)
	{
		___frameRange_7 = value;
	}

	inline static int32_t get_offset_of_defaultWindowRotation_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields, ___defaultWindowRotation_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_defaultWindowRotation_8() const { return ___defaultWindowRotation_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_defaultWindowRotation_8() { return &___defaultWindowRotation_8; }
	inline void set_defaultWindowRotation_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___defaultWindowRotation_8 = value;
	}

	inline static int32_t get_offset_of_defaultWindowScale_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields, ___defaultWindowScale_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_defaultWindowScale_9() const { return ___defaultWindowScale_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_defaultWindowScale_9() { return &___defaultWindowScale_9; }
	inline void set_defaultWindowScale_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___defaultWindowScale_9 = value;
	}

	inline static int32_t get_offset_of_usedMemoryString_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields, ___usedMemoryString_10)); }
	inline String_t* get_usedMemoryString_10() const { return ___usedMemoryString_10; }
	inline String_t** get_address_of_usedMemoryString_10() { return &___usedMemoryString_10; }
	inline void set_usedMemoryString_10(String_t* value)
	{
		___usedMemoryString_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedMemoryString_10), (void*)value);
	}

	inline static int32_t get_offset_of_peakMemoryString_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields, ___peakMemoryString_11)); }
	inline String_t* get_peakMemoryString_11() const { return ___peakMemoryString_11; }
	inline String_t** get_address_of_peakMemoryString_11() { return &___peakMemoryString_11; }
	inline void set_peakMemoryString_11(String_t* value)
	{
		___peakMemoryString_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peakMemoryString_11), (void*)value);
	}

	inline static int32_t get_offset_of_limitMemoryString_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields, ___limitMemoryString_12)); }
	inline String_t* get_limitMemoryString_12() const { return ___limitMemoryString_12; }
	inline String_t** get_address_of_limitMemoryString_12() { return &___limitMemoryString_12; }
	inline void set_limitMemoryString_12(String_t* value)
	{
		___limitMemoryString_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___limitMemoryString_12), (void*)value);
	}
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
// UnityEngine.FrameTiming[]
struct FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC  m_Items[1];

public:
	inline FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC  value)
	{
		m_Items[index] = value;
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
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  m_Items[1];

public:
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  m_Items[1];

public:
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_1__ctor_mC3690E11086D102EEB1BCC561DCA0ACD61D055D1_gshared (EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m6AC645E74FA8C753DD50130438B2D226EF2478E4_gshared (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___data0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCoreSystem__ctor_m02E2EEF1017481C5A7F2530877DD9FED02396A13 (BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41 * __this, RuntimeObject* ___registrar0, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___profile1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowDiagnostics()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowDiagnostics_m48A9E5022E53A3E0CE24CFA9D6B51CEC156DBC1C_inline (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler>()
inline MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_mFF0DDA81B1E84F573D01719E2DA57171F4015309 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowParent(UnityEngine.Transform)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_m680923D7F1A4A97A7A7F8EC3E0BA88DC4D081831_inline (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowProfiler()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfiler_m954CBBD20901C9368BEB43861DA407739275C91B_inline (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_mB63C30808F13BFCF8B6EB48537C9073B3C0B3E1C_inline (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, bool ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_FrameSampleRate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_FrameSampleRate_m2BAF2190FFD5ED55D246C04D7A69242EB5B64D67_inline (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameSampleRate_m60FE92F1B9DDAEB9F61D503DCC443648CFDD1B38_inline (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowAnchor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_get_WindowAnchor_m9F92DE91EB32A1C3F1F3837F46F5EF8E970DB456_inline (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowAnchor_m767F79B16433712327149EFA2E6F164DB72D48C2_inline (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityDiagnosticsSystem_get_WindowOffset_m99FDAD863D33077DEE9292B8883C13514FA77171_inline (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowOffset_m5EC5AC9BBDEB1BD54D16BF23DBF821C0142C985F_inline (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowScale_m50264C80B4B92FA56041C9C92A926181EE5E1E2A_inline (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowScale_m1D5C8234FA06A9CE8816D2CD38899135D4117181 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowFollowSpeed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_mEB77D8A853F8A6848138F58EB46EAF4B86B341FE_inline (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m2BC9705FACDC1FA3B61386D8357DD8CB2AB3067C (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseCoreSystem::get_ConfigurationProfile()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * BaseCoreSystem_get_ConfigurationProfile_m723756DC3F4A791841C5BB6564DE0A0256ED0E26_inline (BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsEventData__ctor_mB3C1DA680976AE5A82D8C3A89088A98DB1619027 (DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___eventSystem0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowDiagnostics()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowDiagnostics_mD8504202BFDDE3FCCDCFEC8784C4191DDDDE8727_inline (MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowDiagnostics_mFB68AC67692BFCF1A4ED0FC7DE084F6024B6D310 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowProfiler()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfiler_m5B1AE259728FAE3C8B37A929811B7418576B56CE_inline (MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfiler_m00F0A1C7680D0533C997FEF809CA3C799162B153 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_FrameSampleRate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_FrameSampleRate_mFABD4A30CFDF8C6E6913BFDCA23F18D9793FE32D_inline (MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_FrameSampleRate_m3228AE96D08B7BFBE252293BB03360D7F804353B (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowAnchor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsProfile_get_WindowAnchor_m842718F0059E63F2F4825FEF78D6A4AE2629B4A6_inline (MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowAnchor_mD42B556D1B1C9F72EC6B7801A9EF8755A07B5EB0 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityDiagnosticsProfile_get_WindowOffset_mC85665064D7E9942EC1732ACD81C1DA554C0269F_inline (MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowOffset_m57121940B80B4D9A118EDD8C776CB18BAF14B8EC (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowScale_mFED301AB50697247C22FE9A697CE33987606A6F6_inline (MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowScale_m47AC967F9AF3933E774009ACC00F180F109464B1 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowFollowSpeed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowFollowSpeed_mB03B8AED85040324288ED310F56AAC52AE7510CC_inline (MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_m4BC50F560A96AFB755C3E20F968AACDA1A412AAA (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::CreateVisualizations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_CreateVisualizations_m214A0F325502CED06D23857EB80CB99CAEB4992F (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E (float ___a0, float ___b1, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityDiagnosticsSystem_get_SourceName_m44979AE05A11BB469CB59A0CDA553A5A09A36493 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData::Initialize(Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsEventData_Initialize_m367558A785A4128B951C90039A1E5C8DE65D931E (DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A * __this, RuntimeObject* ___diagnosticsSystem0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___lhs0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m17F86D47E0DAA3F7764E21D792C35AD90F11B238 (EventFunction_1_t2A3095B7B4C68632AF2DA9C7696E4F52BF2FDFA5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t2A3095B7B4C68632AF2DA9C7696E4F52BF2FDFA5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_mC3690E11086D102EEB1BCC561DCA0ACD61D055D1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBB1C2FE612A53C1F70027E003DFF1AE3C17871B3 (U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData>(UnityEngine.EventSystems.BaseEventData)
inline DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A * ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A_mABCD54315A98A0E0F2A59B53A6039617521D10A0 (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___data0, const RuntimeMethod* method)
{
	return ((  DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A * (*) (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m6AC645E74FA8C753DD50130438B2D226EF2478E4_gshared)(___data0, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_enableInstancing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_enableInstancing_m745D94DF21B9749DA7CFE42BAB3CBD05F614B81E (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___source0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Material::get_renderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.TextMesh>()
inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A (int32_t ___type0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___size1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bounds_mB09338F622466456ADBCC449BB1F62F2EF1731B6 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___value0, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Reset_m61E154D3FEABEF64C7B3657EBA520CB01EBBDE39 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildWindow_m7DFB6CD3A03FD28EFA8E108A0F5CC26CE286BD2F (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildFrameRateStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_m79FEF92F92458DD769CC0586A075583B3D7065A7 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowPosition(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m5B8990C40F43E1AAD60E6FB57C8E1C56A0030B05 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraTransform0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowRotation(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityToolkitVisualProfiler_CalculateWindowRotation_m67319F78284DD1EC046364ABB5AB9A4C4968D8EB (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraTransform0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___a0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.FrameTimingManager::CaptureFrameTimings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameTimingManager_CaptureFrameTimings_m1816EB99EFF92F9394E7000A9CB1F9F9363A90F5 (const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.FrameTimingManager::GetLatestTimings(System.UInt32,UnityEngine.FrameTiming[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FrameTimingManager_GetLatestTimings_m286888EFC8779C9F97D5140EE5D7EE80BEE3DE35 (uint32_t ___numFrames0, FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* ___timings1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::AverageFrameTiming(UnityEngine.FrameTiming[],System.UInt32,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_AverageFrameTiming_m07276EFC915F52468C5CD3CE0826ABB84D79AAFB (FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* ___frameTimings0, uint32_t ___frameTimingsCount1, float* ___cpuFrameTime2, float* ___gpuFrameTime3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389 (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_AppFrameRate_m868DEB9C63BCD4F917C17D7E034BABD5720402EC (const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Color_op_Implicit_m653C1CE2391B0A04114B9132C37E41AC92B33AFE (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___c0, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetVectorArray(System.Int32,UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetVectorArray_m189E1657C000ACBCAF56CB62F3A4DCF1FD472787 (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, int32_t ___nameID0, Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ___values1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetMatrix_mF4694BD7CFC224C638D30BFC9CC91D5D711EA227 (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, int32_t ___nameID0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::DrawMeshInstanced(UnityEngine.Mesh,System.Int32,UnityEngine.Material,UnityEngine.Matrix4x4[],System.Int32,UnityEngine.MaterialPropertyBlock,UnityEngine.Rendering.ShadowCastingMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMeshInstanced_mD1048BED7CCCC0675C7EC696407E545456D27D19 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh0, int32_t ___submeshIndex1, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material2, Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* ___matrices3, int32_t ___count4, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___properties5, int32_t ___castShadows6, bool ___receiveShadows7, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_op_Implicit_m51CEC50D37ABC484073AECE7EB958B414F2B6E7B (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_mAD64140F8E6FC74CA36AF187B649BC575B4D666F (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, int32_t ___nameID0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___lhs0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,UnityEngine.Camera,System.Int32,UnityEngine.MaterialPropertyBlock,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMesh_mA26415237B646D7C832483597F98C6C158785660 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___matrix1, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material2, int32_t ___layer3, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera4, int32_t ___submeshIndex5, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___properties6, bool ___castShadows7, bool ___receiveShadows8, bool ___useLightProbes9, const RuntimeMethod* method);
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsageLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_m2A127025F25EAC32022E16BC27268524140831D8 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::WillDisplayedMemoryUsageDiffer(System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mC274784CB75499E39A4291190F37570C9A42311E (uint64_t ___oldUsage0, uint64_t ___newUsage1, int32_t ___displayedDecimalDigits2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryUsageToString(System.Char[],System.Int32,UnityEngine.TextMesh,System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_MemoryUsageToString_mC893DD71728C09A7CE681C5067CC2BDB9624A18C (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___stringBuffer0, int32_t ___displayedDecimalDigits1, TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___textMesh2, String_t* ___prefixString3, uint64_t ___memoryUsage4, const RuntimeMethod* method);
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_mB5766870EC6F2AE13BD8536C00FC73B0A1E0890E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_mD9D3E3D27186BBAC2CC354CE3609E6118A5BF66C (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45 (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateQuad(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityToolkitVisualProfiler_CreateQuad_mAF186023A8C485536CCEDB161FEF530A3CDD7C01 (String_t* ___name0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowParent()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_get_WindowParent_m9C1A0C12219E4D078B9A4A26E148C64513187536_inline (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method);
// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::InitializeRenderer(UnityEngine.GameObject,UnityEngine.Material,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * MixedRealityToolkitVisualProfiler_InitializeRenderer_m1C2099ADD8FD8E08BDC38A34106B6C63E0181922 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj0, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material1, int32_t ___colorID2, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float ___angle0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateText(System.String,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.TextAnchor,UnityEngine.Material,UnityEngine.Color,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * MixedRealityToolkitVisualProfiler_CreateText_m6B81A217F4ACF6A008ECEED5E84305B447572C0C (String_t* ___name0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent2, int32_t ___anchor3, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material4, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color5, String_t* ___text6, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s2, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3 (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateAnchor(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_CreateAnchor_m4486E8DE5E3EA03B512E8B3A1499546B7F73AF04 (String_t* ___name0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956 (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m9DBA7709F546159ABC85BA341965305AB044D1B7 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_fontSize_m6701886D6E870EF23C2462B1BE7F67903A2649BA (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_anchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_anchor_m013CFCFA46AB8478ADD1C4818FAAD90596BF4E15 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_color_mF86B9E8CD0F9FD387AF7D543337B5C14DFE67AF0 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_richText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_richText_mEA6ACA489617BC48D2317385C92C542C5EFD15CA (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::OptimizeRenderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OptimizeRenderer_m491D20D49258950C44BA35A6B12F84E4CDC0A2D8 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___renderer0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetPropertyBlock_mCD279F8A7CEB56ABB9EF9D150103FB1C4FB3CE8C (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___properties0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_m1B999AB9B425587EF44CF1CB83CDE0A191F76C40 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___properties0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mC7E601EE9B32B63097B216C78ED4F854B0AF21EC (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_mD2BD2FF58156E328677EAE5E175D2069BC2925A0 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_motionVectorGenerationMode(UnityEngine.MotionVectorGenerationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_motionVectorGenerationMode_m4C127FB86BB4B20031F77B66CC629F272904178B (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightProbeUsage_mD4F86D1953BD7A2E98C187C207AB9C2A4DA8839D (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_reflectionProbeUsage_mB1E5A77AB7204CA2FD3AE3294D2CBC0EF352DD08 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_allowOcclusionWhenDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_allowOcclusionWhenDynamic_m32286F46CA4405E850B5BFA6245E243641E85D55 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::ConvertBytesToMegabytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m928709B3945B5BA4DA2341C34FADA7E3324241EF (uint64_t ___bytes0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryItoA(System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityToolkitVisualProfiler_MemoryItoA_m0134CD89916F3D4F38D8F6749B69192816D815FB (int32_t ___value0, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___stringBuffer1, int32_t ___bufferIndex2, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Single UnityEngine.XR.XRDevice::get_refreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRDevice_get_refreshRate_m8EE18868D630D0ED3AD10A02A0A94821D0C7DEC8 (const RuntimeMethod* method);
// System.UInt64 Windows.System.MemoryManager::get_AppMemoryUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MemoryManager_get_AppMemoryUsage_m3BBDE59FC2DCB6074A92C7859CC42E3311BD8D3B (const RuntimeMethod* method);
// System.UInt64 Windows.System.MemoryManager::get_AppMemoryUsageLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MemoryManager_get_AppMemoryUsageLimit_m8A8BF85D26D6A48DE98963D3BDB7C87B7FD67113 (const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__ctor_m1ADF9A62301E27021C8DF7ADF4A89635BB4A9B7A (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, RuntimeObject* ___registrar0, MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * ___profile1, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___playspace2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem__ctor_m1ADF9A62301E27021C8DF7ADF4A89635BB4A9B7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float frameSampleRate = 0.1f;
		__this->set_frameSampleRate_14((0.1f));
		// private TextAnchor windowAnchor = TextAnchor.LowerCenter;
		__this->set_windowAnchor_17(7);
		// private Vector2 windowOffset = new Vector2(0.1f, 0.1f);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.1f), (0.1f), /*hidden argument*/NULL);
		__this->set_windowOffset_18(L_0);
		// private float windowScale = 1.0f;
		__this->set_windowScale_19((1.0f));
		// private float windowFollowSpeed = 5.0f;
		__this->set_windowFollowSpeed_20((5.0f));
		// Transform playspace) : base(registrar, profile)
		RuntimeObject* L_1 = ___registrar0;
		MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * L_2 = ___profile1;
		BaseCoreSystem__ctor_m02E2EEF1017481C5A7F2530877DD9FED02396A13(__this, L_1, L_2, /*hidden argument*/NULL);
		// if (playspace == null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___playspace2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// Debug.LogError("The MixedRealityDiagnosticSystem object requires a valid playspace Transform.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral33073F1D8AD8D5D56D77E1146D8D2BA3DBBA746C, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// Playspace = playspace;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___playspace2;
		__this->set_Playspace_11(L_5);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::CreateVisualizations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_CreateVisualizations_m214A0F325502CED06D23857EB80CB99CAEB4992F (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_CreateVisualizations_m214A0F325502CED06D23857EB80CB99CAEB4992F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// diagnosticVisualizationParent = new GameObject("Diagnostics");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteral3AF2279F9E306ACD0A4644E2B0F2F48A1E06D8D9, /*hidden argument*/NULL);
		__this->set_diagnosticVisualizationParent_9(L_0);
		// diagnosticVisualizationParent.transform.parent = Playspace.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_diagnosticVisualizationParent_9();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = __this->get_Playspace_11();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_2, L_4, /*hidden argument*/NULL);
		// diagnosticVisualizationParent.SetActive(ShowDiagnostics);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_diagnosticVisualizationParent_9();
		bool L_6 = MixedRealityDiagnosticsSystem_get_ShowDiagnostics_m48A9E5022E53A3E0CE24CFA9D6B51CEC156DBC1C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, L_6, /*hidden argument*/NULL);
		// visualProfiler = diagnosticVisualizationParent.AddComponent<MixedRealityToolkitVisualProfiler>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_diagnosticVisualizationParent_9();
		NullCheck(L_7);
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_8 = GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_mFF0DDA81B1E84F573D01719E2DA57171F4015309(L_7, /*hidden argument*/GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_mFF0DDA81B1E84F573D01719E2DA57171F4015309_RuntimeMethod_var);
		__this->set_visualProfiler_10(L_8);
		// visualProfiler.WindowParent = diagnosticVisualizationParent.transform;
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_9 = __this->get_visualProfiler_10();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_diagnosticVisualizationParent_9();
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		MixedRealityToolkitVisualProfiler_set_WindowParent_m680923D7F1A4A97A7A7F8EC3E0BA88DC4D081831_inline(L_9, L_11, /*hidden argument*/NULL);
		// visualProfiler.IsVisible = ShowProfiler;
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_12 = __this->get_visualProfiler_10();
		bool L_13 = MixedRealityDiagnosticsSystem_get_ShowProfiler_m954CBBD20901C9368BEB43861DA407739275C91B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		MixedRealityToolkitVisualProfiler_set_IsVisible_mB63C30808F13BFCF8B6EB48537C9073B3C0B3E1C_inline(L_12, L_13, /*hidden argument*/NULL);
		// visualProfiler.FrameSampleRate = FrameSampleRate;
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_14 = __this->get_visualProfiler_10();
		float L_15 = MixedRealityDiagnosticsSystem_get_FrameSampleRate_m2BAF2190FFD5ED55D246C04D7A69242EB5B64D67_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		MixedRealityToolkitVisualProfiler_set_FrameSampleRate_m60FE92F1B9DDAEB9F61D503DCC443648CFDD1B38_inline(L_14, L_15, /*hidden argument*/NULL);
		// visualProfiler.WindowAnchor = WindowAnchor;
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_16 = __this->get_visualProfiler_10();
		int32_t L_17 = MixedRealityDiagnosticsSystem_get_WindowAnchor_m9F92DE91EB32A1C3F1F3837F46F5EF8E970DB456_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		MixedRealityToolkitVisualProfiler_set_WindowAnchor_m767F79B16433712327149EFA2E6F164DB72D48C2_inline(L_16, L_17, /*hidden argument*/NULL);
		// visualProfiler.WindowOffset = WindowOffset;
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_18 = __this->get_visualProfiler_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = MixedRealityDiagnosticsSystem_get_WindowOffset_m99FDAD863D33077DEE9292B8883C13514FA77171_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		MixedRealityToolkitVisualProfiler_set_WindowOffset_m5EC5AC9BBDEB1BD54D16BF23DBF821C0142C985F_inline(L_18, L_19, /*hidden argument*/NULL);
		// visualProfiler.WindowScale = WindowScale;
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_20 = __this->get_visualProfiler_10();
		float L_21 = MixedRealityDiagnosticsSystem_get_WindowScale_m50264C80B4B92FA56041C9C92A926181EE5E1E2A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		MixedRealityToolkitVisualProfiler_set_WindowScale_m1D5C8234FA06A9CE8816D2CD38899135D4117181(L_20, L_21, /*hidden argument*/NULL);
		// visualProfiler.WindowFollowSpeed = WindowFollowSpeed;
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_22 = __this->get_visualProfiler_10();
		float L_23 = MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_mEB77D8A853F8A6848138F58EB46EAF4B86B341FE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m2BC9705FACDC1FA3B61386D8357DD8CB2AB3067C(L_22, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_Initialize_m5F44B97BE6CB246CB99407FBE08D19EB52F99887 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_Initialize_m5F44B97BE6CB246CB99407FBE08D19EB52F99887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * V_0 = NULL;
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
		// MixedRealityDiagnosticsProfile profile = ConfigurationProfile as MixedRealityDiagnosticsProfile;
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_1 = BaseCoreSystem_get_ConfigurationProfile_m723756DC3F4A791841C5BB6564DE0A0256ED0E26_inline(__this, /*hidden argument*/NULL);
		V_0 = ((MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 *)IsInstClass((RuntimeObject*)L_1, MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467_il2cpp_TypeInfo_var));
		// if (profile == null) { return; }
		MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// if (profile == null) { return; }
		return;
	}

IL_001e:
	{
		// eventData = new DiagnosticsEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_4 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A * L_5 = (DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A *)il2cpp_codegen_object_new(DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A_il2cpp_TypeInfo_var);
		DiagnosticsEventData__ctor_mB3C1DA680976AE5A82D8C3A89088A98DB1619027(L_5, L_4, /*hidden argument*/NULL);
		__this->set_eventData_15(L_5);
		// ShowDiagnostics = profile.ShowDiagnostics;
		MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = MixedRealityDiagnosticsProfile_get_ShowDiagnostics_mD8504202BFDDE3FCCDCFEC8784C4191DDDDE8727_inline(L_6, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowDiagnostics_mFB68AC67692BFCF1A4ED0FC7DE084F6024B6D310(__this, L_7, /*hidden argument*/NULL);
		// ShowProfiler = profile.ShowProfiler;
		MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = MixedRealityDiagnosticsProfile_get_ShowProfiler_m5B1AE259728FAE3C8B37A929811B7418576B56CE_inline(L_8, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowProfiler_m00F0A1C7680D0533C997FEF809CA3C799162B153(__this, L_9, /*hidden argument*/NULL);
		// FrameSampleRate = profile.FrameSampleRate;
		MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * L_10 = V_0;
		NullCheck(L_10);
		float L_11 = MixedRealityDiagnosticsProfile_get_FrameSampleRate_mFABD4A30CFDF8C6E6913BFDCA23F18D9793FE32D_inline(L_10, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_FrameSampleRate_m3228AE96D08B7BFBE252293BB03360D7F804353B(__this, L_11, /*hidden argument*/NULL);
		// WindowAnchor = profile.WindowAnchor;
		MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = MixedRealityDiagnosticsProfile_get_WindowAnchor_m842718F0059E63F2F4825FEF78D6A4AE2629B4A6_inline(L_12, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_WindowAnchor_mD42B556D1B1C9F72EC6B7801A9EF8755A07B5EB0(__this, L_13, /*hidden argument*/NULL);
		// WindowOffset = profile.WindowOffset;
		MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * L_14 = V_0;
		NullCheck(L_14);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = MixedRealityDiagnosticsProfile_get_WindowOffset_mC85665064D7E9942EC1732ACD81C1DA554C0269F_inline(L_14, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_WindowOffset_m57121940B80B4D9A118EDD8C776CB18BAF14B8EC(__this, L_15, /*hidden argument*/NULL);
		// WindowScale = profile.WindowScale;
		MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * L_16 = V_0;
		NullCheck(L_16);
		float L_17 = MixedRealityDiagnosticsProfile_get_WindowScale_mFED301AB50697247C22FE9A697CE33987606A6F6_inline(L_16, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_WindowScale_m47AC967F9AF3933E774009ACC00F180F109464B1(__this, L_17, /*hidden argument*/NULL);
		// WindowFollowSpeed = profile.WindowFollowSpeed;
		MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * L_18 = V_0;
		NullCheck(L_18);
		float L_19 = MixedRealityDiagnosticsProfile_get_WindowFollowSpeed_mB03B8AED85040324288ED310F56AAC52AE7510CC_inline(L_18, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_m4BC50F560A96AFB755C3E20F968AACDA1A412AAA(__this, L_19, /*hidden argument*/NULL);
		// CreateVisualizations();
		MixedRealityDiagnosticsSystem_CreateVisualizations_m214A0F325502CED06D23857EB80CB99CAEB4992F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_Destroy_mF9797E46A39E2D4F1B209AC37FAC820DD9DB3BBF (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_Destroy_mF9797E46A39E2D4F1B209AC37FAC820DD9DB3BBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (diagnosticVisualizationParent != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_diagnosticVisualizationParent_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// if (Application.isEditor)
		bool L_2 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// Object.DestroyImmediate(diagnosticVisualizationParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_diagnosticVisualizationParent_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_3, /*hidden argument*/NULL);
		// }
		goto IL_003d;
	}

IL_0022:
	{
		// diagnosticVisualizationParent.transform.DetachChildren();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_diagnosticVisualizationParent_9();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23(L_5, /*hidden argument*/NULL);
		// Object.Destroy(diagnosticVisualizationParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_diagnosticVisualizationParent_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_6, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// diagnosticVisualizationParent = null;
		__this->set_diagnosticVisualizationParent_9((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowDiagnostics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowDiagnostics_m48A9E5022E53A3E0CE24CFA9D6B51CEC156DBC1C (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	{
		// get { return showDiagnostics; }
		bool L_0 = __this->get_showDiagnostics_12();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowDiagnostics_mFB68AC67692BFCF1A4ED0FC7DE084F6024B6D310 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_ShowDiagnostics_mFB68AC67692BFCF1A4ED0FC7DE084F6024B6D310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showDiagnostics)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showDiagnostics_12();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		// showDiagnostics = value;
		bool L_2 = ___value0;
		__this->set_showDiagnostics_12(L_2);
		// if (diagnosticVisualizationParent != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_diagnosticVisualizationParent_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// diagnosticVisualizationParent.SetActive(value);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_diagnosticVisualizationParent_9();
		bool L_6 = ___value0;
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfiler_m954CBBD20901C9368BEB43861DA407739275C91B (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	{
		// return showProfiler;
		bool L_0 = __this->get_showProfiler_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfiler_m00F0A1C7680D0533C997FEF809CA3C799162B153 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_ShowProfiler_m00F0A1C7680D0533C997FEF809CA3C799162B153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showProfiler)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showProfiler_13();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		// showProfiler = value;
		bool L_2 = ___value0;
		__this->set_showProfiler_13(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_3 = __this->get_visualProfiler_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// visualProfiler.IsVisible = value;
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_5 = __this->get_visualProfiler_10();
		bool L_6 = ___value0;
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_IsVisible_mB63C30808F13BFCF8B6EB48537C9073B3C0B3E1C_inline(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_FrameSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_FrameSampleRate_m2BAF2190FFD5ED55D246C04D7A69242EB5B64D67 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	{
		// return frameSampleRate;
		float L_0 = __this->get_frameSampleRate_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_FrameSampleRate_m3228AE96D08B7BFBE252293BB03360D7F804353B (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_FrameSampleRate_m3228AE96D08B7BFBE252293BB03360D7F804353B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Mathf.Approximately(frameSampleRate, value))
		float L_0 = __this->get_frameSampleRate_14();
		float L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		// frameSampleRate = value;
		float L_3 = ___value0;
		__this->set_frameSampleRate_14(L_3);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_4 = __this->get_visualProfiler_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// visualProfiler.FrameSampleRate = frameSampleRate;
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_6 = __this->get_visualProfiler_10();
		float L_7 = __this->get_frameSampleRate_14();
		NullCheck(L_6);
		MixedRealityToolkitVisualProfiler_set_FrameSampleRate_m60FE92F1B9DDAEB9F61D503DCC443648CFDD1B38_inline(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_SourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealityDiagnosticsSystem_get_SourceId_mB38D29E8F9C129486852C0EA57DB99C7F0017994 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	{
		// public uint SourceId => (uint)SourceName.GetHashCode();
		String_t* L_0 = MixedRealityDiagnosticsSystem_get_SourceName_m44979AE05A11BB469CB59A0CDA553A5A09A36493(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityDiagnosticsSystem_get_SourceName_m44979AE05A11BB469CB59A0CDA553A5A09A36493 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_get_SourceName_m44979AE05A11BB469CB59A0CDA553A5A09A36493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string SourceName => "Mixed Reality Diagnostics System";
		return _stringLiteral239E0C1950725645EB093C14A66E2BBDD321DF7A;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_Equals_m296E0A15EE540809C21B3838E9BB929BE374DAA8 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	{
		// public new bool Equals(object x, object y) => false;
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_GetHashCode_m8913FE8D1476FE535A5242A1FFFE376ABC0BA6EE (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// public int GetHashCode(object obj) => SourceName.GetHashCode();
		String_t* L_0 = MixedRealityDiagnosticsSystem_get_SourceName_m44979AE05A11BB469CB59A0CDA553A5A09A36493(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::RaiseDiagnosticsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_RaiseDiagnosticsChanged_m01CEB9027EA33434C9C50AA454AAF86D46BD9463 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_RaiseDiagnosticsChanged_m01CEB9027EA33434C9C50AA454AAF86D46BD9463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventData.Initialize(this);
		DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A * L_0 = __this->get_eventData_15();
		NullCheck(L_0);
		DiagnosticsEventData_Initialize_m367558A785A4128B951C90039A1E5C8DE65D931E(L_0, __this, /*hidden argument*/NULL);
		// HandleEvent(eventData, OnDiagnosticsChanged);
		DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A * L_1 = __this->get_eventData_15();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4_il2cpp_TypeInfo_var);
		EventFunction_1_t2A3095B7B4C68632AF2DA9C7696E4F52BF2FDFA5 * L_2 = ((MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4_il2cpp_TypeInfo_var))->get_OnDiagnosticsChanged_16();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t2A3095B7B4C68632AF2DA9C7696E4F52BF2FDFA5 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityDiagnosticsHandler_tAC8B8890808E612F060CE50709F7C28A7AF003DD_m1F1033D89A4FE79967F28D6B5D99DF99FBB7ECEB_RuntimeMethod_var, __this, L_1, L_2);
		// }
		return;
	}
}
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_get_WindowAnchor_m9F92DE91EB32A1C3F1F3837F46F5EF8E970DB456 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowAnchor; }
		int32_t L_0 = __this->get_windowAnchor_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowAnchor_mD42B556D1B1C9F72EC6B7801A9EF8755A07B5EB0 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_WindowAnchor_mD42B556D1B1C9F72EC6B7801A9EF8755A07B5EB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowAnchor)
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->get_windowAnchor_17();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// windowAnchor = value;
		int32_t L_2 = ___value0;
		__this->set_windowAnchor_17(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_3 = __this->get_visualProfiler_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.WindowAnchor = windowAnchor;
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_5 = __this->get_visualProfiler_10();
		int32_t L_6 = __this->get_windowAnchor_17();
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_WindowAnchor_m767F79B16433712327149EFA2E6F164DB72D48C2_inline(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityDiagnosticsSystem_get_WindowOffset_m99FDAD863D33077DEE9292B8883C13514FA77171 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowOffset; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_windowOffset_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowOffset_m57121940B80B4D9A118EDD8C776CB18BAF14B8EC (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_WindowOffset_m57121940B80B4D9A118EDD8C776CB18BAF14B8EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowOffset)
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = __this->get_windowOffset_18();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		bool L_2 = Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// windowOffset = value;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___value0;
		__this->set_windowOffset_18(L_3);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_4 = __this->get_visualProfiler_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// visualProfiler.WindowOffset = windowOffset;
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_6 = __this->get_visualProfiler_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = __this->get_windowOffset_18();
		NullCheck(L_6);
		MixedRealityToolkitVisualProfiler_set_WindowOffset_m5EC5AC9BBDEB1BD54D16BF23DBF821C0142C985F_inline(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowScale_m50264C80B4B92FA56041C9C92A926181EE5E1E2A (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowScale; }
		float L_0 = __this->get_windowScale_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowScale_m47AC967F9AF3933E774009ACC00F180F109464B1 (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_WindowScale_m47AC967F9AF3933E774009ACC00F180F109464B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowScale)
		float L_0 = ___value0;
		float L_1 = __this->get_windowScale_19();
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// windowScale = value;
		float L_2 = ___value0;
		__this->set_windowScale_19(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_3 = __this->get_visualProfiler_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.WindowScale = windowScale;
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_5 = __this->get_visualProfiler_10();
		float L_6 = __this->get_windowScale_19();
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_WindowScale_m1D5C8234FA06A9CE8816D2CD38899135D4117181(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowFollowSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_mEB77D8A853F8A6848138F58EB46EAF4B86B341FE (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowFollowSpeed; }
		float L_0 = __this->get_windowFollowSpeed_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_m4BC50F560A96AFB755C3E20F968AACDA1A412AAA (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_m4BC50F560A96AFB755C3E20F968AACDA1A412AAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowFollowSpeed)
		float L_0 = ___value0;
		float L_1 = __this->get_windowFollowSpeed_20();
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// windowFollowSpeed = value;
		float L_2 = ___value0;
		__this->set_windowFollowSpeed_20(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_3 = __this->get_visualProfiler_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.WindowFollowSpeed = windowFollowSpeed;
		MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * L_5 = __this->get_visualProfiler_10();
		float L_6 = __this->get_windowFollowSpeed_20();
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m2BC9705FACDC1FA3B61386D8357DD8CB2AB3067C(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__cctor_mB8A467F793C81752FFE5579F89D2197BA5E6FDA1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem__cctor_mB8A467F793C81752FFE5579F89D2197BA5E6FDA1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityDiagnosticsHandler> OnDiagnosticsChanged =
		//     delegate (IMixedRealityDiagnosticsHandler handler, BaseEventData eventData)
		//     {
		//         var diagnosticsEventsData = ExecuteEvents.ValidateEventData<DiagnosticsEventData>(eventData);
		//         handler.OnDiagnosticSettingsChanged(diagnosticsEventsData);
		//     };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A_il2cpp_TypeInfo_var);
		U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A * L_0 = ((U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t2A3095B7B4C68632AF2DA9C7696E4F52BF2FDFA5 * L_1 = (EventFunction_1_t2A3095B7B4C68632AF2DA9C7696E4F52BF2FDFA5 *)il2cpp_codegen_object_new(EventFunction_1_t2A3095B7B4C68632AF2DA9C7696E4F52BF2FDFA5_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m17F86D47E0DAA3F7764E21D792C35AD90F11B238(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__44_0_m57E393F7C53A957AC097BAA32FA722112EC91BE1_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m17F86D47E0DAA3F7764E21D792C35AD90F11B238_RuntimeMethod_var);
		((MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4_il2cpp_TypeInfo_var))->set_OnDiagnosticsChanged_16(L_1);
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
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7059C3F5DD3AD9D309B189A7C58056FE048A764D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m7059C3F5DD3AD9D309B189A7C58056FE048A764D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A * L_0 = (U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A *)il2cpp_codegen_object_new(U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mBB1C2FE612A53C1F70027E003DFF1AE3C17871B3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBB1C2FE612A53C1F70027E003DFF1AE3C17871B3 (U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem_<>c::<.cctor>b__44_0(Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__44_0_m57E393F7C53A957AC097BAA32FA722112EC91BE1 (U3CU3Ec_tBC05142EECCF08733992E48CA5392EA3ECD8098A * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__44_0_m57E393F7C53A957AC097BAA32FA722112EC91BE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A * V_0 = NULL;
	{
		// var diagnosticsEventsData = ExecuteEvents.ValidateEventData<DiagnosticsEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A * L_1 = ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A_mABCD54315A98A0E0F2A59B53A6039617521D10A0(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A_mABCD54315A98A0E0F2A59B53A6039617521D10A0_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDiagnosticSettingsChanged(diagnosticsEventsData);
		RuntimeObject* L_2 = ___handler0;
		DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DiagnosticsEventData_t7FED483F8EBEF8ABC8CB4692EF2FC4AF3D8E958A * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler::OnDiagnosticSettingsChanged(Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData) */, IMixedRealityDiagnosticsHandler_tAC8B8890808E612F060CE50709F7C28A7AF003DD_il2cpp_TypeInfo_var, L_2, L_3);
		// };
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
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_get_WindowParent_m9C1A0C12219E4D078B9A4A26E148C64513187536 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_U3CWindowParentU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_m680923D7F1A4A97A7A7F8EC3E0BA88DC4D081831 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		__this->set_U3CWindowParentU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_IsVisible_m73317B537FB3CDBFBC8D3F221BCBEC05CBAE09F0 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method)
{
	{
		// get { return isVisible; }
		bool L_0 = __this->get_isVisible_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_mB63C30808F13BFCF8B6EB48537C9073B3C0B3E1C (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { isVisible = value; }
		bool L_0 = ___value0;
		__this->set_isVisible_14(L_0);
		// set { isVisible = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_FrameSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_FrameSampleRate_m0E3F9E94F126175FCFC2D97E816FA3DF05AFAFA8 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method)
{
	{
		// get { return frameSampleRate; }
		float L_0 = __this->get_frameSampleRate_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameSampleRate_m60FE92F1B9DDAEB9F61D503DCC443648CFDD1B38 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { frameSampleRate = value; }
		float L_0 = ___value0;
		__this->set_frameSampleRate_15(L_0);
		// set { frameSampleRate = value; }
		return;
	}
}
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityToolkitVisualProfiler_get_WindowAnchor_m430D1903CB196C6D7B15D4BBA1308E5B32160315 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method)
{
	{
		// get { return windowAnchor; }
		int32_t L_0 = __this->get_windowAnchor_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowAnchor_m767F79B16433712327149EFA2E6F164DB72D48C2 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { windowAnchor = value; }
		int32_t L_0 = ___value0;
		__this->set_windowAnchor_16(L_0);
		// set { windowAnchor = value; }
		return;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityToolkitVisualProfiler_get_WindowOffset_m7A936489D500F6A783300EE90FDB7A0D5E0C121A (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method)
{
	{
		// get { return windowOffset; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_windowOffset_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowOffset_m5EC5AC9BBDEB1BD54D16BF23DBF821C0142C985F (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		// set { windowOffset = value; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_windowOffset_17(L_0);
		// set { windowOffset = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_WindowScale_m99921CB03E3D02812CA986268C5739696815E7A3 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method)
{
	{
		// get { return windowScale; }
		float L_0 = __this->get_windowScale_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowScale_m1D5C8234FA06A9CE8816D2CD38899135D4117181 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_set_WindowScale_m1D5C8234FA06A9CE8816D2CD38899135D4117181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { windowScale = Mathf.Clamp(value, 0.5f, 5.0f); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_0, (0.5f), (5.0f), /*hidden argument*/NULL);
		__this->set_windowScale_18(L_1);
		// set { windowScale = Mathf.Clamp(value, 0.5f, 5.0f); }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowFollowSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_WindowFollowSpeed_m9FD8B968B96950269E1BE7B321F0B923AA25934D (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method)
{
	{
		// get { return windowFollowSpeed; }
		float L_0 = __this->get_windowFollowSpeed_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m2BC9705FACDC1FA3B61386D8357DD8CB2AB3067C (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m2BC9705FACDC1FA3B61386D8357DD8CB2AB3067C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { windowFollowSpeed = Mathf.Abs(value); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = fabsf(L_0);
		__this->set_windowFollowSpeed_19(L_1);
		// set { windowFollowSpeed = Mathf.Abs(value); }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Reset_m61E154D3FEABEF64C7B3657EBA520CB01EBBDE39 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_Reset_m61E154D3FEABEF64C7B3657EBA520CB01EBBDE39_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * V_0 = NULL;
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * V_1 = NULL;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * V_2 = NULL;
	{
		// if (defaultMaterial == null)
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_defaultMaterial_53();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Hidden/Internal-Colored"));
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_2 = Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B(_stringLiteralF11AF337B3340D92B47E93D08CB0B65A6AE686F5, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8(L_3, L_2, /*hidden argument*/NULL);
		__this->set_defaultMaterial_53(L_3);
		// defaultMaterial.SetFloat("_ZWrite", 0.0f);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = __this->get_defaultMaterial_53();
		NullCheck(L_4);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_4, _stringLiteralD48C67736A90281297DD96BF118099E6CB6939B8, (0.0f), /*hidden argument*/NULL);
		// defaultMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Disabled);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = __this->get_defaultMaterial_53();
		NullCheck(L_5);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_5, _stringLiteralE6CCEBA6FB0724DD7ABAA53A7A4801E3696007F3, (0.0f), /*hidden argument*/NULL);
		// defaultMaterial.renderQueue = 5000;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = __this->get_defaultMaterial_53();
		NullCheck(L_6);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_6, ((int32_t)5000), /*hidden argument*/NULL);
	}

IL_005d:
	{
		// if (defaultInstancedMaterial == null)
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = __this->get_defaultInstancedMaterial_54();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00dd;
		}
	}
	{
		// Shader defaultInstancedShader = Shader.Find("Hidden/Instanced-Colored");
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_9 = Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B(_stringLiteralFE2CE179ADA45417D29FD8AAF094AD2E7762DB78, /*hidden argument*/NULL);
		V_0 = L_9;
		// if (defaultInstancedShader != null)
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00d3;
		}
	}
	{
		// defaultInstancedMaterial = new Material(defaultInstancedShader);
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_12 = V_0;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_13 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8(L_13, L_12, /*hidden argument*/NULL);
		__this->set_defaultInstancedMaterial_54(L_13);
		// defaultInstancedMaterial.enableInstancing = true;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_14 = __this->get_defaultInstancedMaterial_54();
		NullCheck(L_14);
		Material_set_enableInstancing_m745D94DF21B9749DA7CFE42BAB3CBD05F614B81E(L_14, (bool)1, /*hidden argument*/NULL);
		// defaultInstancedMaterial.SetFloat("_ZWrite", 0.0f);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_15 = __this->get_defaultInstancedMaterial_54();
		NullCheck(L_15);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_15, _stringLiteralD48C67736A90281297DD96BF118099E6CB6939B8, (0.0f), /*hidden argument*/NULL);
		// defaultInstancedMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Disabled);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_16 = __this->get_defaultInstancedMaterial_54();
		NullCheck(L_16);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_16, _stringLiteralE6CCEBA6FB0724DD7ABAA53A7A4801E3696007F3, (0.0f), /*hidden argument*/NULL);
		// defaultInstancedMaterial.renderQueue = 5000;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_17 = __this->get_defaultInstancedMaterial_54();
		NullCheck(L_17);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_17, ((int32_t)5000), /*hidden argument*/NULL);
		// }
		goto IL_00dd;
	}

IL_00d3:
	{
		// Debug.LogWarning("A shader supporting instancing could not be found for the VisualProfiler, falling back to traditional rendering. This may impact performance.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral6AC3D240BE15CDE5454371B7FC93D8B50949262C, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		// if (Application.isPlaying)
		bool L_18 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_01de;
		}
	}
	{
		// backgroundMaterial = new Material(defaultMaterial);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_19 = __this->get_defaultMaterial_53();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_20 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_20, L_19, /*hidden argument*/NULL);
		__this->set_backgroundMaterial_55(L_20);
		// foregroundMaterial = new Material(defaultMaterial);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_21 = __this->get_defaultMaterial_53();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_22 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_22, L_21, /*hidden argument*/NULL);
		__this->set_foregroundMaterial_56(L_22);
		// defaultMaterial.renderQueue = foregroundMaterial.renderQueue - 1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_23 = __this->get_defaultMaterial_53();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_24 = __this->get_foregroundMaterial_56();
		NullCheck(L_24);
		int32_t L_25 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_23, ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)), /*hidden argument*/NULL);
		// backgroundMaterial.renderQueue = defaultMaterial.renderQueue - 1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_26 = __this->get_backgroundMaterial_55();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_27 = __this->get_defaultMaterial_53();
		NullCheck(L_27);
		int32_t L_28 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_26, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)), /*hidden argument*/NULL);
		// MeshRenderer meshRenderer = new GameObject().AddComponent<TextMesh>().GetComponent<MeshRenderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_29, /*hidden argument*/NULL);
		NullCheck(L_29);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_30 = GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A(L_29, /*hidden argument*/GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A_RuntimeMethod_var);
		NullCheck(L_30);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_31 = Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D(L_30, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D_RuntimeMethod_var);
		V_1 = L_31;
		// textMaterial = new Material(meshRenderer.sharedMaterial);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_32 = V_1;
		NullCheck(L_32);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_33 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_32, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_34 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_34, L_33, /*hidden argument*/NULL);
		__this->set_textMaterial_57(L_34);
		// textMaterial.renderQueue = defaultMaterial.renderQueue;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_35 = __this->get_textMaterial_57();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_36 = __this->get_defaultMaterial_53();
		NullCheck(L_36);
		int32_t L_37 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_35, L_37, /*hidden argument*/NULL);
		// Destroy(meshRenderer.gameObject);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_38 = V_1;
		NullCheck(L_38);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_39, /*hidden argument*/NULL);
		// MeshFilter quadMeshFilter = GameObject.CreatePrimitive(PrimitiveType.Quad).GetComponent<MeshFilter>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_40 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(5, /*hidden argument*/NULL);
		NullCheck(L_40);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_41 = GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4(L_40, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var);
		V_2 = L_41;
		// if (defaultInstancedMaterial != null)
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_42 = __this->get_defaultInstancedMaterial_54();
		bool L_43 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_42, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_01c7;
		}
	}
	{
		// quadMesh = quadMeshFilter.mesh;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_44 = V_2;
		NullCheck(L_44);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_45 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_44, /*hidden argument*/NULL);
		__this->set_quadMesh_58(L_45);
		// quadMesh.bounds = new Bounds(Vector3.zero, Vector3.one * float.MaxValue);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_46 = __this->get_quadMesh_58();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_48, ((std::numeric_limits<float>::max)()), /*hidden argument*/NULL);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D((&L_50), L_47, L_49, /*hidden argument*/NULL);
		NullCheck(L_46);
		Mesh_set_bounds_mB09338F622466456ADBCC449BB1F62F2EF1731B6(L_46, L_50, /*hidden argument*/NULL);
		// }
		goto IL_01d3;
	}

IL_01c7:
	{
		// quadMesh = quadMeshFilter.sharedMesh;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_51 = V_2;
		NullCheck(L_51);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_52 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_51, /*hidden argument*/NULL);
		__this->set_quadMesh_58(L_52);
	}

IL_01d3:
	{
		// Destroy(quadMeshFilter.gameObject);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_53 = V_2;
		NullCheck(L_53);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_54 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_54, /*hidden argument*/NULL);
	}

IL_01de:
	{
		// stopwatch.Reset();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_55 = __this->get_stopwatch_45();
		NullCheck(L_55);
		Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765(L_55, /*hidden argument*/NULL);
		// stopwatch.Start();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_56 = __this->get_stopwatch_45();
		NullCheck(L_56);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_56, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Start_m74E0CBF7EBA5E6BCBCE92EF5B7F4C6B3BD22914F (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method)
{
	{
		// Reset();
		MixedRealityToolkitVisualProfiler_Reset_m61E154D3FEABEF64C7B3657EBA520CB01EBBDE39(__this, /*hidden argument*/NULL);
		// BuildWindow();
		MixedRealityToolkitVisualProfiler_BuildWindow_m7DFB6CD3A03FD28EFA8E108A0F5CC26CE286BD2F(__this, /*hidden argument*/NULL);
		// BuildFrameRateStrings();
		MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_m79FEF92F92458DD769CC0586A075583B3D7065A7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OnDestroy_m8E22F2A9B91D0339AA620F68B764452669ECDB38 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_OnDestroy_m8E22F2A9B91D0339AA620F68B764452669ECDB38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(window);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_window_27();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_LateUpdate_m5EE465BD3CB8EC11A8E8CB51EF42600863A42034 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_LateUpdate_m5EE465BD3CB8EC11A8E8CB51EF42600863A42034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	float V_1 = 0.0f;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B5_0 = NULL;
	int32_t G_B18_0 = 0;
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* G_B18_1 = NULL;
	int32_t G_B17_0 = 0;
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* G_B17_1 = NULL;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	int32_t G_B19_1 = 0;
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* G_B19_2 = NULL;
	{
		// if (window == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_window_27();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// Transform cameraTransform = Camera.main ? Camera.main.transform : null;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)(NULL));
		goto IL_0028;
	}

IL_001e:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		G_B5_0 = L_5;
	}

IL_0028:
	{
		V_0 = G_B5_0;
		// if (window.activeSelf && cameraTransform != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_window_27();
		NullCheck(L_6);
		bool L_7 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00cf;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00cf;
		}
	}
	{
		// float t = Time.deltaTime * windowFollowSpeed;
		float L_10 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_11 = __this->get_windowFollowSpeed_19();
		V_4 = ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11));
		// window.transform.position = Vector3.Lerp(window.transform.position, CalculateWindowPosition(cameraTransform), t);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_window_27();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_12, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = __this->get_window_27();
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m5B8990C40F43E1AAD60E6FB57C8E1C56A0030B05(__this, L_17, /*hidden argument*/NULL);
		float L_19 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_16, L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_13, L_20, /*hidden argument*/NULL);
		// window.transform.rotation = Quaternion.Slerp(window.transform.rotation, CalculateWindowRotation(cameraTransform), t);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = __this->get_window_27();
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_21, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = __this->get_window_27();
		NullCheck(L_23);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_24, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_27 = MixedRealityToolkitVisualProfiler_CalculateWindowRotation_m67319F78284DD1EC046364ABB5AB9A4C4968D8EB(__this, L_26, /*hidden argument*/NULL);
		float L_28 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_25, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_22, L_29, /*hidden argument*/NULL);
		// window.transform.localScale = defaultWindowScale * windowScale;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = __this->get_window_27();
		NullCheck(L_30);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_defaultWindowScale_9();
		float L_33 = __this->get_windowScale_18();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_31, L_34, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		// FrameTimingManager.CaptureFrameTimings();
		FrameTimingManager_CaptureFrameTimings_m1816EB99EFF92F9394E7000A9CB1F9F9363A90F5(/*hidden argument*/NULL);
		// ++frameCount;
		int32_t L_35 = __this->get_frameCount_44();
		__this->set_frameCount_44(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)));
		// float elapsedSeconds = stopwatch.ElapsedMilliseconds * 0.001f;
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_36 = __this->get_stopwatch_45();
		NullCheck(L_36);
		int64_t L_37 = Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177(L_36, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_37))), (float)(0.001f)));
		// if (elapsedSeconds >= frameSampleRate)
		float L_38 = V_1;
		float L_39 = __this->get_frameSampleRate_15();
		if ((!(((float)L_38) >= ((float)L_39))))
		{
			goto IL_0252;
		}
	}
	{
		// int cpuFrameRate = (int)(1.0f / (elapsedSeconds / frameCount));
		float L_40 = V_1;
		int32_t L_41 = __this->get_frameCount_44();
		V_5 = (((int32_t)((int32_t)(int32_t)((float)((float)(1.0f)/(float)((float)((float)L_40/(float)(((float)((float)L_41))))))))));
		// int gpuFrameRate = 0;
		V_6 = 0;
		// uint frameTimingsCount = FrameTimingManager.GetLatestTimings((uint)Mathf.Min(frameCount, maxFrameTimings), frameTimings);
		int32_t L_42 = __this->get_frameCount_44();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		int32_t L_43 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_maxFrameTimings_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_44 = Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A(L_42, L_43, /*hidden argument*/NULL);
		FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* L_45 = __this->get_frameTimings_46();
		uint32_t L_46 = FrameTimingManager_GetLatestTimings_m286888EFC8779C9F97D5140EE5D7EE80BEE3DE35(L_44, L_45, /*hidden argument*/NULL);
		V_7 = L_46;
		// if (frameTimingsCount != 0)
		uint32_t L_47 = V_7;
		if (!L_47)
		{
			goto IL_016e;
		}
	}
	{
		// AverageFrameTiming(frameTimings, frameTimingsCount, out cpuFrameTime, out gpuFrameTime);
		FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* L_48 = __this->get_frameTimings_46();
		uint32_t L_49 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		MixedRealityToolkitVisualProfiler_AverageFrameTiming_m07276EFC915F52468C5CD3CE0826ABB84D79AAFB(L_48, L_49, (float*)(&V_8), (float*)(&V_9), /*hidden argument*/NULL);
		// cpuFrameRate = (int)(1.0f / (cpuFrameTime / frameCount));
		float L_50 = V_8;
		int32_t L_51 = __this->get_frameCount_44();
		V_5 = (((int32_t)((int32_t)(int32_t)((float)((float)(1.0f)/(float)((float)((float)L_50/(float)(((float)((float)L_51))))))))));
		// gpuFrameRate = (int)(1.0f / (gpuFrameTime / frameCount));
		float L_52 = V_9;
		int32_t L_53 = __this->get_frameCount_44();
		V_6 = (((int32_t)((int32_t)(int32_t)((float)((float)(1.0f)/(float)((float)((float)L_52/(float)(((float)((float)L_53))))))))));
	}

IL_016e:
	{
		// cpuFrameRateText.text = cpuFrameRateStrings[Mathf.Clamp(cpuFrameRate, 0, maxTargetFrameRate)];
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_54 = __this->get_cpuFrameRateText_28();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_55 = __this->get_cpuFrameRateStrings_47();
		int32_t L_56 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		int32_t L_57 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_maxTargetFrameRate_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_58 = Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389(L_56, 0, L_57, /*hidden argument*/NULL);
		NullCheck(L_55);
		int32_t L_59 = L_58;
		String_t* L_60 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_54);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_54, L_60, /*hidden argument*/NULL);
		// if (gpuFrameRate != 0)
		int32_t L_61 = V_6;
		if (!L_61)
		{
			goto IL_01c1;
		}
	}
	{
		// gpuFrameRateText.gameObject.SetActive(true);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_62 = __this->get_gpuFrameRateText_29();
		NullCheck(L_62);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_63 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_63, (bool)1, /*hidden argument*/NULL);
		// gpuFrameRateText.text = gpuFrameRateStrings[Mathf.Clamp(gpuFrameRate, 0, maxTargetFrameRate)];
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_64 = __this->get_gpuFrameRateText_29();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_65 = __this->get_gpuFrameRateStrings_48();
		int32_t L_66 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		int32_t L_67 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_maxTargetFrameRate_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_68 = Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389(L_66, 0, L_67, /*hidden argument*/NULL);
		NullCheck(L_65);
		int32_t L_69 = L_68;
		String_t* L_70 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_64);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_64, L_70, /*hidden argument*/NULL);
	}

IL_01c1:
	{
		// for (int i = frameRange - 1; i > 0; --i)
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		int32_t L_71 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_frameRange_7();
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)1));
		goto IL_01ee;
	}

IL_01cc:
	{
		// frameInfoColors[i] = frameInfoColors[i - 1];
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_72 = __this->get_frameInfoColors_40();
		int32_t L_73 = V_10;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_74 = __this->get_frameInfoColors_40();
		int32_t L_75 = V_10;
		NullCheck(L_74);
		int32_t L_76 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)1));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_77);
		// for (int i = frameRange - 1; i > 0; --i)
		int32_t L_78 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_78, (int32_t)1));
	}

IL_01ee:
	{
		// for (int i = frameRange - 1; i > 0; --i)
		int32_t L_79 = V_10;
		if ((((int32_t)L_79) > ((int32_t)0)))
		{
			goto IL_01cc;
		}
	}
	{
		// frameInfoColors[0] = (cpuFrameRate < ((int)(AppFrameRate) - 1)) ? missedFrameRateColor : targetFrameRateColor;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_80 = __this->get_frameInfoColors_40();
		int32_t L_81 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		float L_82 = MixedRealityToolkitVisualProfiler_get_AppFrameRate_m868DEB9C63BCD4F917C17D7E034BABD5720402EC(/*hidden argument*/NULL);
		G_B17_0 = 0;
		G_B17_1 = L_80;
		if ((((int32_t)L_81) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(int32_t)L_82))), (int32_t)1)))))
		{
			G_B18_0 = 0;
			G_B18_1 = L_80;
			goto IL_020e;
		}
	}
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_83 = __this->get_targetFrameRateColor_22();
		G_B19_0 = L_83;
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		goto IL_0214;
	}

IL_020e:
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_84 = __this->get_missedFrameRateColor_23();
		G_B19_0 = L_84;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
	}

IL_0214:
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_85 = Color_op_Implicit_m653C1CE2391B0A04114B9132C37E41AC92B33AFE(G_B19_0, /*hidden argument*/NULL);
		NullCheck(G_B19_2);
		(G_B19_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B19_1), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_85);
		// frameInfoPropertyBlock.SetVectorArray(colorID, frameInfoColors);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_86 = __this->get_frameInfoPropertyBlock_41();
		int32_t L_87 = __this->get_colorID_42();
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_88 = __this->get_frameInfoColors_40();
		NullCheck(L_86);
		MaterialPropertyBlock_SetVectorArray_m189E1657C000ACBCAF56CB62F3A4DCF1FD472787(L_86, L_87, L_88, /*hidden argument*/NULL);
		// frameCount = 0;
		__this->set_frameCount_44(0);
		// stopwatch.Reset();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_89 = __this->get_stopwatch_45();
		NullCheck(L_89);
		Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765(L_89, /*hidden argument*/NULL);
		// stopwatch.Start();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_90 = __this->get_stopwatch_45();
		NullCheck(L_90);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_90, /*hidden argument*/NULL);
	}

IL_0252:
	{
		// if (window.activeSelf)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_91 = __this->get_window_27();
		NullCheck(L_91);
		bool L_92 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_91, /*hidden argument*/NULL);
		if (!L_92)
		{
			goto IL_032a;
		}
	}
	{
		// Matrix4x4 parentLocalToWorldMatrix = window.transform.localToWorldMatrix;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_93 = __this->get_window_27();
		NullCheck(L_93);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_94 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_93, /*hidden argument*/NULL);
		NullCheck(L_94);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_95 = Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED(L_94, /*hidden argument*/NULL);
		V_11 = L_95;
		// if (defaultInstancedMaterial != null)
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_96 = __this->get_defaultInstancedMaterial_54();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_97 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_96, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_97)
		{
			goto IL_02bf;
		}
	}
	{
		// frameInfoPropertyBlock.SetMatrix(parentMatrixID, parentLocalToWorldMatrix);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_98 = __this->get_frameInfoPropertyBlock_41();
		int32_t L_99 = __this->get_parentMatrixID_43();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_100 = V_11;
		NullCheck(L_98);
		MaterialPropertyBlock_SetMatrix_mF4694BD7CFC224C638D30BFC9CC91D5D711EA227(L_98, L_99, L_100, /*hidden argument*/NULL);
		// Graphics.DrawMeshInstanced(quadMesh, 0, defaultInstancedMaterial, frameInfoMatrices, frameInfoMatrices.Length, frameInfoPropertyBlock, UnityEngine.Rendering.ShadowCastingMode.Off, false);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_101 = __this->get_quadMesh_58();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_102 = __this->get_defaultInstancedMaterial_54();
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_103 = __this->get_frameInfoMatrices_39();
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_104 = __this->get_frameInfoMatrices_39();
		NullCheck(L_104);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_105 = __this->get_frameInfoPropertyBlock_41();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
		Graphics_DrawMeshInstanced_mD1048BED7CCCC0675C7EC696407E545456D27D19(L_101, 0, L_102, L_103, (((int32_t)((int32_t)(((RuntimeArray*)L_104)->max_length)))), L_105, 0, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_032a;
	}

IL_02bf:
	{
		// for (int i  = 0; i < frameInfoMatrices.Length; ++i)
		V_12 = 0;
		goto IL_031e;
	}

IL_02c4:
	{
		// frameInfoPropertyBlock.SetColor(colorID, frameInfoColors[i]);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_106 = __this->get_frameInfoPropertyBlock_41();
		int32_t L_107 = __this->get_colorID_42();
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_108 = __this->get_frameInfoColors_40();
		int32_t L_109 = V_12;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_112 = Color_op_Implicit_m51CEC50D37ABC484073AECE7EB958B414F2B6E7B(L_111, /*hidden argument*/NULL);
		NullCheck(L_106);
		MaterialPropertyBlock_SetColor_mAD64140F8E6FC74CA36AF187B649BC575B4D666F(L_106, L_107, L_112, /*hidden argument*/NULL);
		// Graphics.DrawMesh(quadMesh, parentLocalToWorldMatrix * frameInfoMatrices[i], defaultMaterial, 0, null, 0, frameInfoPropertyBlock, false, false, false);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_113 = __this->get_quadMesh_58();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_114 = V_11;
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_115 = __this->get_frameInfoMatrices_39();
		int32_t L_116 = V_12;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_119 = Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E(L_114, L_118, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_120 = __this->get_defaultMaterial_53();
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_121 = __this->get_frameInfoPropertyBlock_41();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
		Graphics_DrawMesh_mA26415237B646D7C832483597F98C6C158785660(L_113, L_119, L_120, 0, (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 *)NULL, 0, L_121, (bool)0, (bool)0, (bool)0, /*hidden argument*/NULL);
		// for (int i  = 0; i < frameInfoMatrices.Length; ++i)
		int32_t L_122 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1));
	}

IL_031e:
	{
		// for (int i  = 0; i < frameInfoMatrices.Length; ++i)
		int32_t L_123 = V_12;
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_124 = __this->get_frameInfoMatrices_39();
		NullCheck(L_124);
		if ((((int32_t)L_123) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_124)->max_length)))))))
		{
			goto IL_02c4;
		}
	}

IL_032a:
	{
		// ulong limit = AppMemoryUsageLimit;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		uint64_t L_125 = MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_m2A127025F25EAC32022E16BC27268524140831D8(/*hidden argument*/NULL);
		V_2 = L_125;
		// if (limit != limitMemoryUsage)
		uint64_t L_126 = V_2;
		uint64_t L_127 = __this->get_limitMemoryUsage_52();
		if ((((int64_t)L_126) == ((int64_t)L_127)))
		{
			goto IL_037e;
		}
	}
	{
		// if (window.activeSelf && WillDisplayedMemoryUsageDiffer(limitMemoryUsage, limit, displayedDecimalDigits))
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_128 = __this->get_window_27();
		NullCheck(L_128);
		bool L_129 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_128, /*hidden argument*/NULL);
		if (!L_129)
		{
			goto IL_0377;
		}
	}
	{
		uint64_t L_130 = __this->get_limitMemoryUsage_52();
		uint64_t L_131 = V_2;
		int32_t L_132 = __this->get_displayedDecimalDigits_20();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		bool L_133 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mC274784CB75499E39A4291190F37570C9A42311E(L_130, L_131, L_132, /*hidden argument*/NULL);
		if (!L_133)
		{
			goto IL_0377;
		}
	}
	{
		// MemoryUsageToString(stringBuffer, displayedDecimalDigits, limitMemoryText, limitMemoryString, limit);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_134 = __this->get_stringBuffer_49();
		int32_t L_135 = __this->get_displayedDecimalDigits_20();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_136 = __this->get_limitMemoryText_32();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		String_t* L_137 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_limitMemoryString_12();
		uint64_t L_138 = V_2;
		MixedRealityToolkitVisualProfiler_MemoryUsageToString_mC893DD71728C09A7CE681C5067CC2BDB9624A18C(L_134, L_135, L_136, L_137, L_138, /*hidden argument*/NULL);
	}

IL_0377:
	{
		// limitMemoryUsage = limit;
		uint64_t L_139 = V_2;
		__this->set_limitMemoryUsage_52(L_139);
	}

IL_037e:
	{
		// ulong usage = AppMemoryUsage;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		uint64_t L_140 = MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_mB5766870EC6F2AE13BD8536C00FC73B0A1E0890E(/*hidden argument*/NULL);
		V_3 = L_140;
		// if (usage != memoryUsage)
		uint64_t L_141 = V_3;
		uint64_t L_142 = __this->get_memoryUsage_50();
		if ((((int64_t)L_141) == ((int64_t)L_142)))
		{
			goto IL_0411;
		}
	}
	{
		// usedAnchor.localScale = new Vector3((float)usage / limitMemoryUsage, usedAnchor.localScale.y, usedAnchor.localScale.z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_143 = __this->get_usedAnchor_33();
		uint64_t L_144 = V_3;
		uint64_t L_145 = __this->get_limitMemoryUsage_52();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_146 = __this->get_usedAnchor_33();
		NullCheck(L_146);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_147 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_146, /*hidden argument*/NULL);
		float L_148 = L_147.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_149 = __this->get_usedAnchor_33();
		NullCheck(L_149);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_150 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_149, /*hidden argument*/NULL);
		float L_151 = L_150.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_152;
		memset((&L_152), 0, sizeof(L_152));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_152), ((float)((float)(((float)((float)(float)(((double)((uint64_t)L_144))))))/(float)(((float)((float)(float)(((double)((uint64_t)L_145)))))))), L_148, L_151, /*hidden argument*/NULL);
		NullCheck(L_143);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_143, L_152, /*hidden argument*/NULL);
		// if (window.activeSelf && WillDisplayedMemoryUsageDiffer(memoryUsage, usage, displayedDecimalDigits))
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_153 = __this->get_window_27();
		NullCheck(L_153);
		bool L_154 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_153, /*hidden argument*/NULL);
		if (!L_154)
		{
			goto IL_040a;
		}
	}
	{
		uint64_t L_155 = __this->get_memoryUsage_50();
		uint64_t L_156 = V_3;
		int32_t L_157 = __this->get_displayedDecimalDigits_20();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		bool L_158 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mC274784CB75499E39A4291190F37570C9A42311E(L_155, L_156, L_157, /*hidden argument*/NULL);
		if (!L_158)
		{
			goto IL_040a;
		}
	}
	{
		// MemoryUsageToString(stringBuffer, displayedDecimalDigits, usedMemoryText, usedMemoryString, usage);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_159 = __this->get_stringBuffer_49();
		int32_t L_160 = __this->get_displayedDecimalDigits_20();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_161 = __this->get_usedMemoryText_30();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		String_t* L_162 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_usedMemoryString_10();
		uint64_t L_163 = V_3;
		MixedRealityToolkitVisualProfiler_MemoryUsageToString_mC893DD71728C09A7CE681C5067CC2BDB9624A18C(L_159, L_160, L_161, L_162, L_163, /*hidden argument*/NULL);
	}

IL_040a:
	{
		// memoryUsage = usage;
		uint64_t L_164 = V_3;
		__this->set_memoryUsage_50(L_164);
	}

IL_0411:
	{
		// if (memoryUsage > peakMemoryUsage)
		uint64_t L_165 = __this->get_memoryUsage_50();
		uint64_t L_166 = __this->get_peakMemoryUsage_51();
		if ((!(((uint64_t)L_165) > ((uint64_t)L_166))))
		{
			goto IL_04b7;
		}
	}
	{
		// peakAnchor.localScale = new Vector3((float)memoryUsage / limitMemoryUsage, peakAnchor.localScale.y, peakAnchor.localScale.z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_167 = __this->get_peakAnchor_34();
		uint64_t L_168 = __this->get_memoryUsage_50();
		uint64_t L_169 = __this->get_limitMemoryUsage_52();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_170 = __this->get_peakAnchor_34();
		NullCheck(L_170);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_171 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_170, /*hidden argument*/NULL);
		float L_172 = L_171.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_173 = __this->get_peakAnchor_34();
		NullCheck(L_173);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_174 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_173, /*hidden argument*/NULL);
		float L_175 = L_174.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_176;
		memset((&L_176), 0, sizeof(L_176));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_176), ((float)((float)(((float)((float)(float)(((double)((uint64_t)L_168))))))/(float)(((float)((float)(float)(((double)((uint64_t)L_169)))))))), L_172, L_175, /*hidden argument*/NULL);
		NullCheck(L_167);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_167, L_176, /*hidden argument*/NULL);
		// if (window.activeSelf && WillDisplayedMemoryUsageDiffer(peakMemoryUsage, memoryUsage, displayedDecimalDigits))
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_177 = __this->get_window_27();
		NullCheck(L_177);
		bool L_178 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_177, /*hidden argument*/NULL);
		if (!L_178)
		{
			goto IL_04ab;
		}
	}
	{
		uint64_t L_179 = __this->get_peakMemoryUsage_51();
		uint64_t L_180 = __this->get_memoryUsage_50();
		int32_t L_181 = __this->get_displayedDecimalDigits_20();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		bool L_182 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mC274784CB75499E39A4291190F37570C9A42311E(L_179, L_180, L_181, /*hidden argument*/NULL);
		if (!L_182)
		{
			goto IL_04ab;
		}
	}
	{
		// MemoryUsageToString(stringBuffer, displayedDecimalDigits, peakMemoryText, peakMemoryString, memoryUsage);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_183 = __this->get_stringBuffer_49();
		int32_t L_184 = __this->get_displayedDecimalDigits_20();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_185 = __this->get_peakMemoryText_31();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		String_t* L_186 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_peakMemoryString_11();
		uint64_t L_187 = __this->get_memoryUsage_50();
		MixedRealityToolkitVisualProfiler_MemoryUsageToString_mC893DD71728C09A7CE681C5067CC2BDB9624A18C(L_183, L_184, L_185, L_186, L_187, /*hidden argument*/NULL);
	}

IL_04ab:
	{
		// peakMemoryUsage = memoryUsage;
		uint64_t L_188 = __this->get_memoryUsage_50();
		__this->set_peakMemoryUsage_51(L_188);
	}

IL_04b7:
	{
		// window.SetActive(isVisible);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_189 = __this->get_window_27();
		bool L_190 = __this->get_isVisible_14();
		NullCheck(L_189);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_189, L_190, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowPosition(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m5B8990C40F43E1AAD60E6FB57C8E1C56A0030B05 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraTransform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m5B8990C40F43E1AAD60E6FB57C8E1C56A0030B05_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		// float windowDistance = Mathf.Max(16.0f / Camera.main.fieldOfView, Camera.main.nearClipPlane + 0.25f);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1 = Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6(L_0, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3 = Camera_get_nearClipPlane_mD9D3E3D27186BBAC2CC354CE3609E6118A5BF66C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(((float)((float)(16.0f)/(float)L_1)), ((float)il2cpp_codegen_add((float)L_3, (float)(0.25f))), /*hidden argument*/NULL);
		V_0 = L_4;
		// Vector3 position = cameraTransform.position + (cameraTransform.forward * windowDistance);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___cameraTransform0;
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ___cameraTransform0;
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_7, /*hidden argument*/NULL);
		float L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_8, L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_6, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// Vector3 horizontalOffset = cameraTransform.right * windowOffset.x;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = ___cameraTransform0;
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_12, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_14 = __this->get_address_of_windowOffset_17();
		float L_15 = L_14->get_x_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_13, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// Vector3 verticalOffset = cameraTransform.up * windowOffset.y;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = ___cameraTransform0;
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_17, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_19 = __this->get_address_of_windowOffset_17();
		float L_20 = L_19->get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_18, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		// switch (windowAnchor)
		int32_t L_22 = __this->get_windowAnchor_16();
		V_4 = L_22;
		int32_t L_23 = V_4;
		switch (L_23)
		{
			case 0:
			{
				goto IL_00a1;
			}
			case 1:
			{
				goto IL_00b1;
			}
			case 2:
			{
				goto IL_00bb;
			}
			case 3:
			{
				goto IL_00cb;
			}
			case 4:
			{
				goto IL_0107;
			}
			case 5:
			{
				goto IL_00d5;
			}
			case 6:
			{
				goto IL_00df;
			}
			case 7:
			{
				goto IL_00ef;
			}
			case 8:
			{
				goto IL_00f9;
			}
		}
	}
	{
		goto IL_0107;
	}

IL_00a1:
	{
		// case TextAnchor.UpperLeft: position += verticalOffset - horizontalOffset; break;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_25, L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_24, L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		// case TextAnchor.UpperLeft: position += verticalOffset - horizontalOffset; break;
		goto IL_0107;
	}

IL_00b1:
	{
		// case TextAnchor.UpperCenter: position += verticalOffset; break;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_29, L_30, /*hidden argument*/NULL);
		V_1 = L_31;
		// case TextAnchor.UpperCenter: position += verticalOffset; break;
		goto IL_0107;
	}

IL_00bb:
	{
		// case TextAnchor.UpperRight: position += verticalOffset + horizontalOffset; break;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_33, L_34, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_32, L_35, /*hidden argument*/NULL);
		V_1 = L_36;
		// case TextAnchor.UpperRight: position += verticalOffset + horizontalOffset; break;
		goto IL_0107;
	}

IL_00cb:
	{
		// case TextAnchor.MiddleLeft: position -= horizontalOffset; break;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_37, L_38, /*hidden argument*/NULL);
		V_1 = L_39;
		// case TextAnchor.MiddleLeft: position -= horizontalOffset; break;
		goto IL_0107;
	}

IL_00d5:
	{
		// case TextAnchor.MiddleRight: position += horizontalOffset; break;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_40, L_41, /*hidden argument*/NULL);
		V_1 = L_42;
		// case TextAnchor.MiddleRight: position += horizontalOffset; break;
		goto IL_0107;
	}

IL_00df:
	{
		// case TextAnchor.LowerLeft: position -= verticalOffset + horizontalOffset; break;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_44, L_45, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_43, L_46, /*hidden argument*/NULL);
		V_1 = L_47;
		// case TextAnchor.LowerLeft: position -= verticalOffset + horizontalOffset; break;
		goto IL_0107;
	}

IL_00ef:
	{
		// case TextAnchor.LowerCenter: position -= verticalOffset; break;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_48, L_49, /*hidden argument*/NULL);
		V_1 = L_50;
		// case TextAnchor.LowerCenter: position -= verticalOffset; break;
		goto IL_0107;
	}

IL_00f9:
	{
		// case TextAnchor.LowerRight: position -= verticalOffset - horizontalOffset; break;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_52, L_53, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_51, L_54, /*hidden argument*/NULL);
		V_1 = L_55;
	}

IL_0107:
	{
		// return position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = V_1;
		return L_56;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowRotation(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityToolkitVisualProfiler_CalculateWindowRotation_m67319F78284DD1EC046364ABB5AB9A4C4968D8EB (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraTransform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CalculateWindowRotation_m67319F78284DD1EC046364ABB5AB9A4C4968D8EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Quaternion rotation = cameraTransform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___cameraTransform0;
		NullCheck(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// switch (windowAnchor)
		int32_t L_2 = __this->get_windowAnchor_16();
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_0069;
			}
			case 3:
			{
				goto IL_0083;
			}
			case 4:
			{
				goto IL_00e2;
			}
			case 5:
			{
				goto IL_0092;
			}
			case 6:
			{
				goto IL_00a1;
			}
			case 7:
			{
				goto IL_00bb;
			}
			case 8:
			{
				goto IL_00ca;
			}
		}
	}
	{
		goto IL_00e2;
	}

IL_003d:
	{
		// case TextAnchor.UpperLeft: rotation *= windowHorizontalRotationInverse * windowVerticalRotationInverse; break;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = __this->get_windowHorizontalRotationInverse_36();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = __this->get_windowVerticalRotationInverse_38();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_5, L_6, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_4, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// case TextAnchor.UpperLeft: rotation *= windowHorizontalRotationInverse * windowVerticalRotationInverse; break;
		goto IL_00e2;
	}

IL_005a:
	{
		// case TextAnchor.UpperCenter: rotation *= windowHorizontalRotationInverse; break;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = __this->get_windowHorizontalRotationInverse_36();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// case TextAnchor.UpperCenter: rotation *= windowHorizontalRotationInverse; break;
		goto IL_00e2;
	}

IL_0069:
	{
		// case TextAnchor.UpperRight: rotation *= windowHorizontalRotationInverse * windowVerticalRotation; break;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = __this->get_windowHorizontalRotationInverse_36();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = __this->get_windowVerticalRotation_37();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_13, L_14, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_12, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// case TextAnchor.UpperRight: rotation *= windowHorizontalRotationInverse * windowVerticalRotation; break;
		goto IL_00e2;
	}

IL_0083:
	{
		// case TextAnchor.MiddleLeft: rotation *= windowVerticalRotationInverse; break;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = __this->get_windowVerticalRotationInverse_38();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		// case TextAnchor.MiddleLeft: rotation *= windowVerticalRotationInverse; break;
		goto IL_00e2;
	}

IL_0092:
	{
		// case TextAnchor.MiddleRight: rotation *= windowVerticalRotation; break;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = __this->get_windowVerticalRotation_37();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_20, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		// case TextAnchor.MiddleRight: rotation *= windowVerticalRotation; break;
		goto IL_00e2;
	}

IL_00a1:
	{
		// case TextAnchor.LowerLeft: rotation *= windowHorizontalRotation * windowVerticalRotationInverse; break;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = __this->get_windowHorizontalRotation_35();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = __this->get_windowVerticalRotationInverse_38();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_24, L_25, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_27 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_23, L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		// case TextAnchor.LowerLeft: rotation *= windowHorizontalRotation * windowVerticalRotationInverse; break;
		goto IL_00e2;
	}

IL_00bb:
	{
		// case TextAnchor.LowerCenter: rotation *= windowHorizontalRotation; break;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = __this->get_windowHorizontalRotation_35();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_28, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		// case TextAnchor.LowerCenter: rotation *= windowHorizontalRotation; break;
		goto IL_00e2;
	}

IL_00ca:
	{
		// case TextAnchor.LowerRight: rotation *= windowHorizontalRotation * windowVerticalRotation; break;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_31 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = __this->get_windowHorizontalRotation_35();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_33 = __this->get_windowVerticalRotation_37();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_34 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_32, L_33, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_31, L_34, /*hidden argument*/NULL);
		V_0 = L_35;
	}

IL_00e2:
	{
		// return rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = V_0;
		return L_36;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildWindow_m7DFB6CD3A03FD28EFA8E108A0F5CC26CE286BD2F (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_BuildWindow_m7DFB6CD3A03FD28EFA8E108A0F5CC26CE286BD2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_3 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_4 = NULL;
	{
		// colorID = Shader.PropertyToID("_Color");
		int32_t L_0 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(_stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A, /*hidden argument*/NULL);
		__this->set_colorID_42(L_0);
		// parentMatrixID = Shader.PropertyToID("_ParentLocalToWorldMatrix");
		int32_t L_1 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(_stringLiteral60DD62DDA6D0E9082284B2E9AF1CB4E2AFFEDFC5, /*hidden argument*/NULL);
		__this->set_parentMatrixID_43(L_1);
		// window = CreateQuad("VisualProfiler", null);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = MixedRealityToolkitVisualProfiler_CreateQuad_mAF186023A8C485536CCEDB161FEF530A3CDD7C01(_stringLiteral5BFD6CD9A18872E3AB00178F2F3588D3A16CC24A, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL, /*hidden argument*/NULL);
		__this->set_window_27(L_2);
		// window.transform.parent = WindowParent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_window_27();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_3, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = MixedRealityToolkitVisualProfiler_get_WindowParent_m9C1A0C12219E4D078B9A4A26E148C64513187536_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_4, L_5, /*hidden argument*/NULL);
		// InitializeRenderer(window, backgroundMaterial, colorID, baseColor);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_window_27();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = __this->get_backgroundMaterial_55();
		int32_t L_8 = __this->get_colorID_42();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_9 = __this->get_baseColor_21();
		MixedRealityToolkitVisualProfiler_InitializeRenderer_m1C2099ADD8FD8E08BDC38A34106B6C63E0181922(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		// window.transform.localScale = defaultWindowScale;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_window_27();
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_10, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_defaultWindowScale_9();
		NullCheck(L_11);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_11, L_12, /*hidden argument*/NULL);
		// windowHorizontalRotation = Quaternion.AngleAxis(defaultWindowRotation.y, Vector3.right);
		float L_13 = (((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_address_of_defaultWindowRotation_8())->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_13, L_14, /*hidden argument*/NULL);
		__this->set_windowHorizontalRotation_35(L_15);
		// windowHorizontalRotationInverse = Quaternion.Inverse(windowHorizontalRotation);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = __this->get_windowHorizontalRotation_35();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_16, /*hidden argument*/NULL);
		__this->set_windowHorizontalRotationInverse_36(L_17);
		// windowVerticalRotation = Quaternion.AngleAxis(defaultWindowRotation.x, Vector3.up);
		float L_18 = (((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_address_of_defaultWindowRotation_8())->get_x_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_18, L_19, /*hidden argument*/NULL);
		__this->set_windowVerticalRotation_37(L_20);
		// windowVerticalRotationInverse = Quaternion.Inverse(windowVerticalRotation);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = __this->get_windowVerticalRotation_37();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_21, /*hidden argument*/NULL);
		__this->set_windowVerticalRotationInverse_38(L_22);
		// cpuFrameRateText = CreateText("CPUFrameRateText", new Vector3(-0.495f, 0.5f, 0.0f), window.transform, TextAnchor.UpperLeft, textMaterial, Color.white, string.Empty);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_23), (-0.495f), (0.5f), (0.0f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = __this->get_window_27();
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_24, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_26 = __this->get_textMaterial_57();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_27 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		String_t* L_28 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_29 = MixedRealityToolkitVisualProfiler_CreateText_m6B81A217F4ACF6A008ECEED5E84305B447572C0C(_stringLiteralEDE2ACC6A2CAB5D8B552539E6ED55D7498F1BD1D, L_23, L_25, 0, L_26, L_27, L_28, /*hidden argument*/NULL);
		__this->set_cpuFrameRateText_28(L_29);
		// gpuFrameRateText = CreateText("GPUFrameRateText", new Vector3(0.495f, 0.5f, 0.0f), window.transform, TextAnchor.UpperRight, textMaterial, Color.white, string.Empty);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_30), (0.495f), (0.5f), (0.0f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = __this->get_window_27();
		NullCheck(L_31);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_31, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_33 = __this->get_textMaterial_57();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_34 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		String_t* L_35 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_36 = MixedRealityToolkitVisualProfiler_CreateText_m6B81A217F4ACF6A008ECEED5E84305B447572C0C(_stringLiteralB43776D3A8057BCB7F05D18BE4E19FA5C0A1171E, L_30, L_32, 2, L_33, L_34, L_35, /*hidden argument*/NULL);
		__this->set_gpuFrameRateText_29(L_36);
		// gpuFrameRateText.gameObject.SetActive(false);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_37 = __this->get_gpuFrameRateText_29();
		NullCheck(L_37);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_38 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_38, (bool)0, /*hidden argument*/NULL);
		// frameInfoMatrices = new Matrix4x4[frameRange];
		int32_t L_39 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_frameRange_7();
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_40 = (Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9*)(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9*)SZArrayNew(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9_il2cpp_TypeInfo_var, (uint32_t)L_39);
		__this->set_frameInfoMatrices_39(L_40);
		// frameInfoColors = new Vector4[frameRange];
		int32_t L_41 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_frameRange_7();
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_42 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66_il2cpp_TypeInfo_var, (uint32_t)L_41);
		__this->set_frameInfoColors_40(L_42);
		// Vector3 scale = new Vector3(1.0f / frameRange, 0.2f, 1.0f);
		int32_t L_43 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_frameRange_7();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), ((float)((float)(1.0f)/(float)(((float)((float)L_43))))), (0.2f), (1.0f), /*hidden argument*/NULL);
		// Vector3 position = new Vector3(0.5f - (scale.x * 0.5f), 0.15f, 0.0f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = V_0;
		float L_45 = L_44.get_x_2();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), ((float)il2cpp_codegen_subtract((float)(0.5f), (float)((float)il2cpp_codegen_multiply((float)L_45, (float)(0.5f))))), (0.15f), (0.0f), /*hidden argument*/NULL);
		// for (int i = 0; i < frameRange; ++i)
		V_2 = 0;
		goto IL_0225;
	}

IL_01c5:
	{
		// frameInfoMatrices[i] = Matrix4x4.TRS(position, Quaternion.identity, new Vector3(scale.x * 0.8f, scale.y, scale.z));
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_46 = __this->get_frameInfoMatrices_39();
		int32_t L_47 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_49 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = V_0;
		float L_51 = L_50.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = V_0;
		float L_53 = L_52.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = V_0;
		float L_55 = L_54.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_56), ((float)il2cpp_codegen_multiply((float)L_51, (float)(0.8f))), L_53, L_55, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_57 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_48, L_49, L_56, /*hidden argument*/NULL);
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA )L_57);
		// position.x -= scale.x;
		float* L_58 = (&V_1)->get_address_of_x_2();
		float* L_59 = L_58;
		float L_60 = *((float*)L_59);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = V_0;
		float L_62 = L_61.get_x_2();
		*((float*)L_59) = (float)((float)il2cpp_codegen_subtract((float)L_60, (float)L_62));
		// frameInfoColors[i] = targetFrameRateColor;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_63 = __this->get_frameInfoColors_40();
		int32_t L_64 = V_2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_65 = __this->get_targetFrameRateColor_22();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_66 = Color_op_Implicit_m653C1CE2391B0A04114B9132C37E41AC92B33AFE(L_65, /*hidden argument*/NULL);
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_66);
		// for (int i = 0; i < frameRange; ++i)
		int32_t L_67 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
	}

IL_0225:
	{
		// for (int i = 0; i < frameRange; ++i)
		int32_t L_68 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		int32_t L_69 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_frameRange_7();
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_01c5;
		}
	}
	{
		// frameInfoPropertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_70 = (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3(L_70, /*hidden argument*/NULL);
		__this->set_frameInfoPropertyBlock_41(L_70);
		// frameInfoPropertyBlock.SetVectorArray(colorID, frameInfoColors);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_71 = __this->get_frameInfoPropertyBlock_41();
		int32_t L_72 = __this->get_colorID_42();
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_73 = __this->get_frameInfoColors_40();
		NullCheck(L_71);
		MaterialPropertyBlock_SetVectorArray_m189E1657C000ACBCAF56CB62F3A4DCF1FD472787(L_71, L_72, L_73, /*hidden argument*/NULL);
		// usedMemoryText = CreateText("UsedMemoryText", new Vector3(-0.495f, 0.0f, 0.0f), window.transform, TextAnchor.UpperLeft, textMaterial, memoryUsedColor, usedMemoryString);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_74), (-0.495f), (0.0f), (0.0f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_75 = __this->get_window_27();
		NullCheck(L_75);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_76 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_75, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_77 = __this->get_textMaterial_57();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_78 = __this->get_memoryUsedColor_24();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		String_t* L_79 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_usedMemoryString_10();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_80 = MixedRealityToolkitVisualProfiler_CreateText_m6B81A217F4ACF6A008ECEED5E84305B447572C0C(_stringLiteral10091FE4A98C623CD25DBBAE02B40227888E2A05, L_74, L_76, 0, L_77, L_78, L_79, /*hidden argument*/NULL);
		__this->set_usedMemoryText_30(L_80);
		// peakMemoryText = CreateText("PeakMemoryText", new Vector3(0.0f, 0.0f, 0.0f), window.transform, TextAnchor.UpperCenter, textMaterial, memoryPeakColor, peakMemoryString);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_81), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_82 = __this->get_window_27();
		NullCheck(L_82);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_83 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_82, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_84 = __this->get_textMaterial_57();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_85 = __this->get_memoryPeakColor_25();
		String_t* L_86 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_peakMemoryString_11();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_87 = MixedRealityToolkitVisualProfiler_CreateText_m6B81A217F4ACF6A008ECEED5E84305B447572C0C(_stringLiteral2A2E2357C56DD659D0DC9E3D8ECE1D8242034491, L_81, L_83, 1, L_84, L_85, L_86, /*hidden argument*/NULL);
		__this->set_peakMemoryText_31(L_87);
		// limitMemoryText = CreateText("LimitMemoryText", new Vector3(0.495f, 0.0f, 0.0f), window.transform, TextAnchor.UpperRight, textMaterial, Color.white, limitMemoryString);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_88), (0.495f), (0.0f), (0.0f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_89 = __this->get_window_27();
		NullCheck(L_89);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_90 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_89, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_91 = __this->get_textMaterial_57();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_92 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		String_t* L_93 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_limitMemoryString_12();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_94 = MixedRealityToolkitVisualProfiler_CreateText_m6B81A217F4ACF6A008ECEED5E84305B447572C0C(_stringLiteral9315667F99D5901C8E062AAC730B9254258670B5, L_88, L_90, 2, L_91, L_92, L_93, /*hidden argument*/NULL);
		__this->set_limitMemoryText_32(L_94);
		// GameObject limitBar = CreateQuad("LimitBar", window.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_95 = __this->get_window_27();
		NullCheck(L_95);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_96 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_95, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_97 = MixedRealityToolkitVisualProfiler_CreateQuad_mAF186023A8C485536CCEDB161FEF530A3CDD7C01(_stringLiteralCA1DF7778711AC043DE19DBF92546587DCB1A0BD, L_96, /*hidden argument*/NULL);
		V_3 = L_97;
		// InitializeRenderer(limitBar, defaultMaterial, colorID, memoryLimitColor);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_98 = V_3;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_99 = __this->get_defaultMaterial_53();
		int32_t L_100 = __this->get_colorID_42();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_101 = __this->get_memoryLimitColor_26();
		MixedRealityToolkitVisualProfiler_InitializeRenderer_m1C2099ADD8FD8E08BDC38A34106B6C63E0181922(L_98, L_99, L_100, L_101, /*hidden argument*/NULL);
		// limitBar.transform.localScale = new Vector3(0.99f, 0.2f, 1.0f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_102 = V_3;
		NullCheck(L_102);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_103 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_102, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_104), (0.99f), (0.2f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_103);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_103, L_104, /*hidden argument*/NULL);
		// limitBar.transform.localPosition = new Vector3(0.0f, -0.37f, 0.0f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_105 = V_3;
		NullCheck(L_105);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_106 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_105, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_107;
		memset((&L_107), 0, sizeof(L_107));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_107), (0.0f), (-0.37f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_106);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_106, L_107, /*hidden argument*/NULL);
		// usedAnchor = CreateAnchor("UsedAnchor", limitBar.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_108 = V_3;
		NullCheck(L_108);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_109 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_108, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_110 = MixedRealityToolkitVisualProfiler_CreateAnchor_m4486E8DE5E3EA03B512E8B3A1499546B7F73AF04(_stringLiteralDE54FCF888EB0C889DFF7964C29E0C89A5613301, L_109, /*hidden argument*/NULL);
		__this->set_usedAnchor_33(L_110);
		// GameObject bar = CreateQuad("UsedBar", usedAnchor);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_111 = __this->get_usedAnchor_33();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_112 = MixedRealityToolkitVisualProfiler_CreateQuad_mAF186023A8C485536CCEDB161FEF530A3CDD7C01(_stringLiteralACCAD3295265225D2B9E4FB826E53031E4D933F6, L_111, /*hidden argument*/NULL);
		// Material material = new Material(foregroundMaterial);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_113 = __this->get_foregroundMaterial_56();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_114 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_114, L_113, /*hidden argument*/NULL);
		V_4 = L_114;
		// material.renderQueue = material.renderQueue + 1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_115 = V_4;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_116 = V_4;
		NullCheck(L_116);
		int32_t L_117 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_116, /*hidden argument*/NULL);
		NullCheck(L_115);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_115, ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1)), /*hidden argument*/NULL);
		// InitializeRenderer(bar, material, colorID, memoryUsedColor);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_118 = L_112;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_119 = V_4;
		int32_t L_120 = __this->get_colorID_42();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_121 = __this->get_memoryUsedColor_24();
		MixedRealityToolkitVisualProfiler_InitializeRenderer_m1C2099ADD8FD8E08BDC38A34106B6C63E0181922(L_118, L_119, L_120, L_121, /*hidden argument*/NULL);
		// bar.transform.localScale = Vector3.one;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_122 = L_118;
		NullCheck(L_122);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_123 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_122, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_124 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_123);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_123, L_124, /*hidden argument*/NULL);
		// bar.transform.localPosition = new Vector3(0.5f, 0.0f, 0.0f);
		NullCheck(L_122);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_125 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_122, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_126;
		memset((&L_126), 0, sizeof(L_126));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_126), (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_125);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_125, L_126, /*hidden argument*/NULL);
		// peakAnchor = CreateAnchor("PeakAnchor", limitBar.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_127 = V_3;
		NullCheck(L_127);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_128 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_127, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_129 = MixedRealityToolkitVisualProfiler_CreateAnchor_m4486E8DE5E3EA03B512E8B3A1499546B7F73AF04(_stringLiteralFBE2C10212C6D261022FC9B3F7F7D5A3F2318FB3, L_128, /*hidden argument*/NULL);
		__this->set_peakAnchor_34(L_129);
		// GameObject bar = CreateQuad("PeakBar", peakAnchor);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_130 = __this->get_peakAnchor_34();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_131 = MixedRealityToolkitVisualProfiler_CreateQuad_mAF186023A8C485536CCEDB161FEF530A3CDD7C01(_stringLiteralB066E98ABD1787899F779143B75CEDB2486305D4, L_130, /*hidden argument*/NULL);
		// InitializeRenderer(bar, foregroundMaterial, colorID, memoryPeakColor);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_132 = L_131;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_133 = __this->get_foregroundMaterial_56();
		int32_t L_134 = __this->get_colorID_42();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_135 = __this->get_memoryPeakColor_25();
		MixedRealityToolkitVisualProfiler_InitializeRenderer_m1C2099ADD8FD8E08BDC38A34106B6C63E0181922(L_132, L_133, L_134, L_135, /*hidden argument*/NULL);
		// bar.transform.localScale = Vector3.one;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_136 = L_132;
		NullCheck(L_136);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_137 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_136, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_138 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_137);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_137, L_138, /*hidden argument*/NULL);
		// bar.transform.localPosition = new Vector3(0.5f, 0.0f, 0.0f);
		NullCheck(L_136);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_139 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_136, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_140;
		memset((&L_140), 0, sizeof(L_140));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_140), (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_139);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_139, L_140, /*hidden argument*/NULL);
		// window.SetActive(isVisible);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_141 = __this->get_window_27();
		bool L_142 = __this->get_isVisible_14();
		NullCheck(L_141);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_141, L_142, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildFrameRateStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_m79FEF92F92458DD769CC0586A075583B3D7065A7 (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_m79FEF92F92458DD769CC0586A075583B3D7065A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	StringBuilder_t * V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// cpuFrameRateStrings = new string[maxTargetFrameRate + 1];
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		int32_t L_0 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_maxTargetFrameRate_5();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		__this->set_cpuFrameRateStrings_47(L_1);
		// gpuFrameRateStrings = new string[maxTargetFrameRate + 1];
		int32_t L_2 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_maxTargetFrameRate_5();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		__this->set_gpuFrameRateStrings_48(L_3);
		// string displayedDecimalFormat = string.Format("{{0:F{0}}}", displayedDecimalDigits);
		int32_t L_4 = __this->get_displayedDecimalDigits_20();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral0E8EC13A3AA3AD0DF348D45AF23180EF013500EE, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// StringBuilder stringBuilder = new StringBuilder(32);
		StringBuilder_t * L_8 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_8, ((int32_t)32), /*hidden argument*/NULL);
		V_1 = L_8;
		// StringBuilder milisecondStringBuilder = new StringBuilder(16);
		StringBuilder_t * L_9 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_9, ((int32_t)16), /*hidden argument*/NULL);
		V_2 = L_9;
		// for (int i = 0; i < cpuFrameRateStrings.Length; ++i)
		V_3 = 0;
		goto IL_00e1;
	}

IL_0051:
	{
		// float miliseconds = (i == 0) ? 0.0f : (1.0f / i) * 1000.0f;
		int32_t L_10 = V_3;
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_11 = V_3;
		G_B4_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)(1.0f)/(float)(((float)((float)L_11))))), (float)(1000.0f)));
		goto IL_0069;
	}

IL_0064:
	{
		G_B4_0 = (0.0f);
	}

IL_0069:
	{
		V_4 = G_B4_0;
		// milisecondStringBuilder.AppendFormat(displayedDecimalFormat, miliseconds);
		StringBuilder_t * L_12 = V_2;
		String_t* L_13 = V_0;
		float L_14 = V_4;
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_12, L_13, L_16, /*hidden argument*/NULL);
		// stringBuilder.AppendFormat("CPU: {0} fps ({1} ms)", i.ToString(), milisecondStringBuilder.ToString());
		StringBuilder_t * L_17 = V_1;
		String_t* L_18 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_3), /*hidden argument*/NULL);
		StringBuilder_t * L_19 = V_2;
		NullCheck(L_19);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		NullCheck(L_17);
		StringBuilder_AppendFormat_m9DBA7709F546159ABC85BA341965305AB044D1B7(L_17, _stringLiteral469FB70DED7914453A23F856E6F6A00E7461E923, L_18, L_20, /*hidden argument*/NULL);
		// cpuFrameRateStrings[i] = stringBuilder.ToString();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = __this->get_cpuFrameRateStrings_47();
		int32_t L_22 = V_3;
		StringBuilder_t * L_23 = V_1;
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (String_t*)L_24);
		// stringBuilder.Length = 0;
		StringBuilder_t * L_25 = V_1;
		NullCheck(L_25);
		StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B(L_25, 0, /*hidden argument*/NULL);
		// stringBuilder.AppendFormat("GPU: {0} fps ({1} ms)", i.ToString(), milisecondStringBuilder.ToString());
		StringBuilder_t * L_26 = V_1;
		String_t* L_27 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_3), /*hidden argument*/NULL);
		StringBuilder_t * L_28 = V_2;
		NullCheck(L_28);
		String_t* L_29 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		NullCheck(L_26);
		StringBuilder_AppendFormat_m9DBA7709F546159ABC85BA341965305AB044D1B7(L_26, _stringLiteral9C3A49852D90133B9BEB027ECCB54020A3D56034, L_27, L_29, /*hidden argument*/NULL);
		// gpuFrameRateStrings[i] = stringBuilder.ToString();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_30 = __this->get_gpuFrameRateStrings_48();
		int32_t L_31 = V_3;
		StringBuilder_t * L_32 = V_1;
		NullCheck(L_32);
		String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (String_t*)L_33);
		// milisecondStringBuilder.Length = 0;
		StringBuilder_t * L_34 = V_2;
		NullCheck(L_34);
		StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B(L_34, 0, /*hidden argument*/NULL);
		// stringBuilder.Length = 0;
		StringBuilder_t * L_35 = V_1;
		NullCheck(L_35);
		StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B(L_35, 0, /*hidden argument*/NULL);
		// for (int i = 0; i < cpuFrameRateStrings.Length; ++i)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00e1:
	{
		// for (int i = 0; i < cpuFrameRateStrings.Length; ++i)
		int32_t L_37 = V_3;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_38 = __this->get_cpuFrameRateStrings_47();
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))))
		{
			goto IL_0051;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateAnchor(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_CreateAnchor_m4486E8DE5E3EA03B512E8B3A1499546B7F73AF04 (String_t* ___name0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CreateAnchor_m4486E8DE5E3EA03B512E8B3A1499546B7F73AF04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform anchor = new GameObject(name).transform;
		String_t* L_0 = ___name0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_1, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		// anchor.parent = parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = L_2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___parent1;
		NullCheck(L_3);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_3, L_4, /*hidden argument*/NULL);
		// anchor.localScale = Vector3.one;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_5, L_6, /*hidden argument*/NULL);
		// anchor.localPosition = new Vector3(-0.5f, 0.0f, 0.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), (-0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_7, L_8, /*hidden argument*/NULL);
		// return anchor;
		return L_7;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateQuad(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityToolkitVisualProfiler_CreateQuad_mAF186023A8C485536CCEDB161FEF530A3CDD7C01 (String_t* ___name0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CreateQuad_mAF186023A8C485536CCEDB161FEF530A3CDD7C01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(5, /*hidden argument*/NULL);
		// Destroy(quad.GetComponent<Collider>());
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = L_0;
		NullCheck(L_1);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_2 = GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300(L_1, /*hidden argument*/GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
		// quad.name = name;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = L_1;
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_3, L_4, /*hidden argument*/NULL);
		// quad.transform.parent = parent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = L_3;
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ___parent1;
		NullCheck(L_6);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_6, L_7, /*hidden argument*/NULL);
		// return quad;
		return L_5;
	}
}
// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateText(System.String,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.TextAnchor,UnityEngine.Material,UnityEngine.Color,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * MixedRealityToolkitVisualProfiler_CreateText_m6B81A217F4ACF6A008ECEED5E84305B447572C0C (String_t* ___name0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent2, int32_t ___anchor3, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material4, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color5, String_t* ___text6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CreateText_m6B81A217F4ACF6A008ECEED5E84305B447572C0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// GameObject obj = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// obj.transform.localScale = Vector3.one * 0.0016f;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_4, (0.0016f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_3, L_5, /*hidden argument*/NULL);
		// obj.transform.parent = parent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_6, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = ___parent2;
		NullCheck(L_7);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_7, L_8, /*hidden argument*/NULL);
		// obj.transform.localPosition = position;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = V_0;
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = ___position1;
		NullCheck(L_10);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_10, L_11, /*hidden argument*/NULL);
		// TextMesh textMesh = obj.AddComponent<TextMesh>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = V_0;
		NullCheck(L_12);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_13 = GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A(L_12, /*hidden argument*/GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A_RuntimeMethod_var);
		// textMesh.fontSize = 48;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_14 = L_13;
		NullCheck(L_14);
		TextMesh_set_fontSize_m6701886D6E870EF23C2462B1BE7F67903A2649BA(L_14, ((int32_t)48), /*hidden argument*/NULL);
		// textMesh.anchor = anchor;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_15 = L_14;
		int32_t L_16 = ___anchor3;
		NullCheck(L_15);
		TextMesh_set_anchor_m013CFCFA46AB8478ADD1C4818FAAD90596BF4E15(L_15, L_16, /*hidden argument*/NULL);
		// textMesh.color = color;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_17 = L_15;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_18 = ___color5;
		NullCheck(L_17);
		TextMesh_set_color_mF86B9E8CD0F9FD387AF7D543337B5C14DFE67AF0(L_17, L_18, /*hidden argument*/NULL);
		// textMesh.text = text;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_19 = L_17;
		String_t* L_20 = ___text6;
		NullCheck(L_19);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_19, L_20, /*hidden argument*/NULL);
		// textMesh.richText = false;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_21 = L_19;
		NullCheck(L_21);
		TextMesh_set_richText_mEA6ACA489617BC48D2317385C92C542C5EFD15CA(L_21, (bool)0, /*hidden argument*/NULL);
		// Renderer renderer = obj.GetComponent<Renderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = V_0;
		NullCheck(L_22);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_23 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_22, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		// renderer.sharedMaterial = material;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_24 = L_23;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_25 = ___material4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_24, L_25, /*hidden argument*/NULL);
		// OptimizeRenderer(renderer);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		MixedRealityToolkitVisualProfiler_OptimizeRenderer_m491D20D49258950C44BA35A6B12F84E4CDC0A2D8(L_24, /*hidden argument*/NULL);
		// return textMesh;
		return L_21;
	}
}
// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::InitializeRenderer(UnityEngine.GameObject,UnityEngine.Material,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * MixedRealityToolkitVisualProfiler_InitializeRenderer_m1C2099ADD8FD8E08BDC38A34106B6C63E0181922 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj0, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material1, int32_t ___colorID2, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_InitializeRenderer_m1C2099ADD8FD8E08BDC38A34106B6C63E0181922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * V_0 = NULL;
	{
		// Renderer renderer = obj.GetComponent<Renderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___obj0;
		NullCheck(L_0);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_1 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		// renderer.sharedMaterial = material;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_2 = L_1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = ___material1;
		NullCheck(L_2);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_2, L_3, /*hidden argument*/NULL);
		// MaterialPropertyBlock propertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_4 = (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3(L_4, /*hidden argument*/NULL);
		V_0 = L_4;
		// renderer.GetPropertyBlock(propertyBlock);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_5 = L_2;
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_6 = V_0;
		NullCheck(L_5);
		Renderer_GetPropertyBlock_mCD279F8A7CEB56ABB9EF9D150103FB1C4FB3CE8C(L_5, L_6, /*hidden argument*/NULL);
		// propertyBlock.SetColor(colorID, color);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_7 = V_0;
		int32_t L_8 = ___colorID2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_9 = ___color3;
		NullCheck(L_7);
		MaterialPropertyBlock_SetColor_mAD64140F8E6FC74CA36AF187B649BC575B4D666F(L_7, L_8, L_9, /*hidden argument*/NULL);
		// renderer.SetPropertyBlock(propertyBlock);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_10 = L_5;
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_11 = V_0;
		NullCheck(L_10);
		Renderer_SetPropertyBlock_m1B999AB9B425587EF44CF1CB83CDE0A191F76C40(L_10, L_11, /*hidden argument*/NULL);
		// OptimizeRenderer(renderer);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_12 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		MixedRealityToolkitVisualProfiler_OptimizeRenderer_m491D20D49258950C44BA35A6B12F84E4CDC0A2D8(L_12, /*hidden argument*/NULL);
		// return renderer;
		return L_12;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::OptimizeRenderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OptimizeRenderer_m491D20D49258950C44BA35A6B12F84E4CDC0A2D8 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___renderer0, const RuntimeMethod* method)
{
	{
		// renderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = ___renderer0;
		NullCheck(L_0);
		Renderer_set_shadowCastingMode_mC7E601EE9B32B63097B216C78ED4F854B0AF21EC(L_0, 0, /*hidden argument*/NULL);
		// renderer.receiveShadows = false;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_1 = ___renderer0;
		NullCheck(L_1);
		Renderer_set_receiveShadows_mD2BD2FF58156E328677EAE5E175D2069BC2925A0(L_1, (bool)0, /*hidden argument*/NULL);
		// renderer.motionVectorGenerationMode = MotionVectorGenerationMode.ForceNoMotion;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_2 = ___renderer0;
		NullCheck(L_2);
		Renderer_set_motionVectorGenerationMode_m4C127FB86BB4B20031F77B66CC629F272904178B(L_2, 2, /*hidden argument*/NULL);
		// renderer.lightProbeUsage = UnityEngine.Rendering.LightProbeUsage.Off;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_3 = ___renderer0;
		NullCheck(L_3);
		Renderer_set_lightProbeUsage_mD4F86D1953BD7A2E98C187C207AB9C2A4DA8839D(L_3, 0, /*hidden argument*/NULL);
		// renderer.reflectionProbeUsage = UnityEngine.Rendering.ReflectionProbeUsage.Off;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_4 = ___renderer0;
		NullCheck(L_4);
		Renderer_set_reflectionProbeUsage_mB1E5A77AB7204CA2FD3AE3294D2CBC0EF352DD08(L_4, 0, /*hidden argument*/NULL);
		// renderer.allowOcclusionWhenDynamic = false;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_5 = ___renderer0;
		NullCheck(L_5);
		Renderer_set_allowOcclusionWhenDynamic_m32286F46CA4405E850B5BFA6245E243641E85D55(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryUsageToString(System.Char[],System.Int32,UnityEngine.TextMesh,System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_MemoryUsageToString_mC893DD71728C09A7CE681C5067CC2BDB9624A18C (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___stringBuffer0, int32_t ___displayedDecimalDigits1, TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___textMesh2, String_t* ___prefixString3, uint64_t ___memoryUsage4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_MemoryUsageToString_mC893DD71728C09A7CE681C5067CC2BDB9624A18C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// float memoryUsageMB = ConvertBytesToMegabytes(memoryUsage);
		uint64_t L_0 = ___memoryUsage4;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		float L_1 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m928709B3945B5BA4DA2341C34FADA7E3324241EF(L_0, /*hidden argument*/NULL);
		// int memoryUsageIntegerDigits = (int)memoryUsageMB;
		float L_2 = L_1;
		V_0 = (((int32_t)((int32_t)(int32_t)L_2)));
		// int memoryUsageFractionalDigits = (int)((memoryUsageMB - memoryUsageIntegerDigits) * Mathf.Pow(10.0f, displayedDecimalDigits));
		int32_t L_3 = V_0;
		int32_t L_4 = ___displayedDecimalDigits1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_5 = powf((10.0f), (((float)((float)L_4))));
		V_1 = (((int32_t)((int32_t)(int32_t)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_2, (float)(((float)((float)L_3))))), (float)L_5)))));
		// int bufferIndex = 0;
		V_2 = 0;
		// for (int i = 0; i < prefixString.Length; ++i)
		V_3 = 0;
		goto IL_0034;
	}

IL_0022:
	{
		// stringBuffer[bufferIndex++] = prefixString[i];
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_6 = ___stringBuffer0;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		String_t* L_9 = ___prefixString3;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		Il2CppChar L_11 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Il2CppChar)L_11);
		// for (int i = 0; i < prefixString.Length; ++i)
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0034:
	{
		// for (int i = 0; i < prefixString.Length; ++i)
		int32_t L_13 = V_3;
		String_t* L_14 = ___prefixString3;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0022;
		}
	}
	{
		// bufferIndex = MemoryItoA(memoryUsageIntegerDigits, stringBuffer, bufferIndex);
		int32_t L_16 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_17 = ___stringBuffer0;
		int32_t L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		int32_t L_19 = MixedRealityToolkitVisualProfiler_MemoryItoA_m0134CD89916F3D4F38D8F6749B69192816D815FB(L_16, L_17, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// stringBuffer[bufferIndex++] = '.';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_20 = ___stringBuffer0;
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (Il2CppChar)((int32_t)46));
		// if (memoryUsageFractionalDigits != 0)
		int32_t L_23 = V_1;
		if (!L_23)
		{
			goto IL_005d;
		}
	}
	{
		// bufferIndex = MemoryItoA(memoryUsageFractionalDigits, stringBuffer, bufferIndex);
		int32_t L_24 = V_1;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_25 = ___stringBuffer0;
		int32_t L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		int32_t L_27 = MixedRealityToolkitVisualProfiler_MemoryItoA_m0134CD89916F3D4F38D8F6749B69192816D815FB(L_24, L_25, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		// }
		goto IL_0076;
	}

IL_005d:
	{
		// for (int i = 0; i < displayedDecimalDigits; ++i)
		V_4 = 0;
		goto IL_0071;
	}

IL_0062:
	{
		// stringBuffer[bufferIndex++] = '0';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_28 = ___stringBuffer0;
		int32_t L_29 = V_2;
		int32_t L_30 = L_29;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Il2CppChar)((int32_t)48));
		// for (int i = 0; i < displayedDecimalDigits; ++i)
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_0071:
	{
		// for (int i = 0; i < displayedDecimalDigits; ++i)
		int32_t L_32 = V_4;
		int32_t L_33 = ___displayedDecimalDigits1;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0062;
		}
	}

IL_0076:
	{
		// stringBuffer[bufferIndex++] = 'M';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_34 = ___stringBuffer0;
		int32_t L_35 = V_2;
		int32_t L_36 = L_35;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Il2CppChar)((int32_t)77));
		// stringBuffer[bufferIndex++] = 'B';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_37 = ___stringBuffer0;
		int32_t L_38 = V_2;
		int32_t L_39 = L_38;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (Il2CppChar)((int32_t)66));
		// textMesh.text = new string(stringBuffer, 0, bufferIndex);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_40 = ___textMesh2;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_41 = ___stringBuffer0;
		int32_t L_42 = V_2;
		String_t* L_43 = String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509(NULL, L_41, 0, L_42, /*hidden argument*/NULL);
		NullCheck(L_40);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_40, L_43, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryItoA(System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityToolkitVisualProfiler_MemoryItoA_m0134CD89916F3D4F38D8F6749B69192816D815FB (int32_t ___value0, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___stringBuffer1, int32_t ___bufferIndex2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	{
		// int startIndex = bufferIndex;
		int32_t L_0 = ___bufferIndex2;
		V_0 = L_0;
		goto IL_001b;
	}

IL_0004:
	{
		// stringBuffer[bufferIndex++] = (char)((char)(value % 10) + '0');
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = ___stringBuffer1;
		int32_t L_2 = ___bufferIndex2;
		int32_t L_3 = L_2;
		___bufferIndex2 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		int32_t L_4 = ___value0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_4%(int32_t)((int32_t)10)))))), (int32_t)((int32_t)48)))))));
		// for (; value != 0; value /= 10)
		int32_t L_5 = ___value0;
		___value0 = ((int32_t)((int32_t)L_5/(int32_t)((int32_t)10)));
	}

IL_001b:
	{
		// for (; value != 0; value /= 10)
		int32_t L_6 = ___value0;
		if (L_6)
		{
			goto IL_0004;
		}
	}
	{
		// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
		int32_t L_7 = ___bufferIndex2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		goto IL_003a;
	}

IL_0024:
	{
		// temp = stringBuffer[startIndex];
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_8 = ___stringBuffer1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint16_t L_11 = (uint16_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		// stringBuffer[startIndex] = stringBuffer[endIndex];
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_12 = ___stringBuffer1;
		int32_t L_13 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_14 = ___stringBuffer1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint16_t L_17 = (uint16_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Il2CppChar)L_17);
		// stringBuffer[endIndex] = temp;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_18 = ___stringBuffer1;
		int32_t L_19 = V_2;
		Il2CppChar L_20 = V_1;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Il2CppChar)L_20);
		// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1));
	}

IL_003a:
	{
		// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
		int32_t L_23 = V_0;
		int32_t L_24 = V_2;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0024;
		}
	}
	{
		// return bufferIndex;
		int32_t L_25 = ___bufferIndex2;
		return L_25;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_AppFrameRate_m868DEB9C63BCD4F917C17D7E034BABD5720402EC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_get_AppFrameRate_m868DEB9C63BCD4F917C17D7E034BABD5720402EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float refreshRate = UnityEngine.XR.XRDevice.refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		float L_0 = XRDevice_get_refreshRate_m8EE18868D630D0ED3AD10A02A0A94821D0C7DEC8(/*hidden argument*/NULL);
		V_0 = L_0;
		// return ((int)refreshRate == 0) ? 60.0f : refreshRate;
		float L_1 = V_0;
		if (!(((int32_t)((int32_t)(int32_t)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		float L_2 = V_0;
		return L_2;
	}

IL_000c:
	{
		return (60.0f);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::AverageFrameTiming(UnityEngine.FrameTiming[],System.UInt32,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_AverageFrameTiming_m07276EFC915F52468C5CD3CE0826ABB84D79AAFB (FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* ___frameTimings0, uint32_t ___frameTimingsCount1, float* ___cpuFrameTime2, float* ___gpuFrameTime3, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	{
		// double cpuTime = 0.0f;
		V_0 = (0.0);
		// double gpuTime = 0.0f;
		V_1 = (0.0);
		// for (int i = 0; i < frameTimingsCount; ++i)
		V_2 = 0;
		goto IL_003a;
	}

IL_0018:
	{
		// cpuTime += frameTimings[i].cpuFrameTime;
		double L_0 = V_0;
		FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* L_1 = ___frameTimings0;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		double L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_cpuFrameTime_1();
		V_0 = ((double)il2cpp_codegen_add((double)L_0, (double)L_3));
		// gpuTime += frameTimings[i].gpuFrameTime;
		double L_4 = V_1;
		FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* L_5 = ___frameTimings0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		double L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_gpuFrameTime_3();
		V_1 = ((double)il2cpp_codegen_add((double)L_4, (double)L_7));
		// for (int i = 0; i < frameTimingsCount; ++i)
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003a:
	{
		// for (int i = 0; i < frameTimingsCount; ++i)
		int32_t L_9 = V_2;
		uint32_t L_10 = ___frameTimingsCount1;
		if ((((int64_t)(((int64_t)((int64_t)L_9)))) < ((int64_t)(((int64_t)((uint64_t)L_10))))))
		{
			goto IL_0018;
		}
	}
	{
		// cpuTime /= frameTimingsCount;
		double L_11 = V_0;
		uint32_t L_12 = ___frameTimingsCount1;
		V_0 = ((double)((double)L_11/(double)(((double)((double)(double)(((double)((uint32_t)L_12))))))));
		// gpuTime /= frameTimingsCount;
		double L_13 = V_1;
		uint32_t L_14 = ___frameTimingsCount1;
		V_1 = ((double)((double)L_13/(double)(((double)((double)(double)(((double)((uint32_t)L_14))))))));
		// cpuFrameTime = (float)(cpuTime * 0.001);
		float* L_15 = ___cpuFrameTime2;
		double L_16 = V_0;
		*((float*)L_15) = (float)(((float)((float)(float)((double)il2cpp_codegen_multiply((double)L_16, (double)(0.001))))));
		// gpuFrameTime = (float)(gpuTime * 0.001);
		float* L_17 = ___gpuFrameTime3;
		double L_18 = V_1;
		*((float*)L_17) = (float)(((float)((float)(float)((double)il2cpp_codegen_multiply((double)L_18, (double)(0.001))))));
		// }
		return;
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_mB5766870EC6F2AE13BD8536C00FC73B0A1E0890E (const RuntimeMethod* method)
{
	{
		// return MemoryManager.AppMemoryUsage;
		uint64_t L_0 = MemoryManager_get_AppMemoryUsage_m3BBDE59FC2DCB6074A92C7859CC42E3311BD8D3B(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsageLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_m2A127025F25EAC32022E16BC27268524140831D8 (const RuntimeMethod* method)
{
	{
		// return MemoryManager.AppMemoryUsageLimit;
		uint64_t L_0 = MemoryManager_get_AppMemoryUsageLimit_m8A8BF85D26D6A48DE98963D3BDB7C87B7FD67113(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::WillDisplayedMemoryUsageDiffer(System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mC274784CB75499E39A4291190F37570C9A42311E (uint64_t ___oldUsage0, uint64_t ___newUsage1, int32_t ___displayedDecimalDigits2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mC274784CB75499E39A4291190F37570C9A42311E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float oldUsageMBs = ConvertBytesToMegabytes(oldUsage);
		uint64_t L_0 = ___oldUsage0;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		float L_1 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m928709B3945B5BA4DA2341C34FADA7E3324241EF(L_0, /*hidden argument*/NULL);
		// float newUsageMBs = ConvertBytesToMegabytes(newUsage);
		uint64_t L_2 = ___newUsage1;
		float L_3 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m928709B3945B5BA4DA2341C34FADA7E3324241EF(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// float decimalPower = Mathf.Pow(10.0f, displayedDecimalDigits);
		int32_t L_4 = ___displayedDecimalDigits2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_5 = powf((10.0f), (((float)((float)L_4))));
		V_1 = L_5;
		// return (int)(oldUsageMBs * decimalPower) != (int)(newUsageMBs * decimalPower);
		float L_6 = V_1;
		float L_7 = V_0;
		float L_8 = V_1;
		return (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(int32_t)((float)il2cpp_codegen_multiply((float)L_1, (float)L_6)))))) == ((int32_t)(((int32_t)((int32_t)(int32_t)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::ConvertMegabytesToBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_ConvertMegabytesToBytes_m107AF569682603223649CD9DD32FAC70B5494F14 (int32_t ___megabytes0, const RuntimeMethod* method)
{
	{
		// return ((ulong)megabytes * 1024UL) * 1024UL;
		int32_t L_0 = ___megabytes0;
		return ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_0))), (int64_t)(((int64_t)((int64_t)((int32_t)1024)))))), (int64_t)(((int64_t)((int64_t)((int32_t)1024))))));
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::ConvertBytesToMegabytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m928709B3945B5BA4DA2341C34FADA7E3324241EF (uint64_t ___bytes0, const RuntimeMethod* method)
{
	{
		// return (bytes / 1024.0f) / 1024.0f;
		uint64_t L_0 = ___bytes0;
		return ((float)((float)((float)((float)(((float)((float)(float)(((double)((uint64_t)L_0))))))/(float)(1024.0f)))/(float)(1024.0f)));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler__ctor_mE1EA44AB37FE840EB8CAE5671438B5935F646E2A (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler__ctor_mE1EA44AB37FE840EB8CAE5671438B5935F646E2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float frameSampleRate = 0.1f;
		__this->set_frameSampleRate_15((0.1f));
		// private TextAnchor windowAnchor = TextAnchor.LowerCenter;
		__this->set_windowAnchor_16(7);
		// private Vector2 windowOffset = new Vector2(0.1f, 0.1f);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.1f), (0.1f), /*hidden argument*/NULL);
		__this->set_windowOffset_17(L_0);
		// private float windowScale = 1.0f;
		__this->set_windowScale_18((1.0f));
		// private float windowFollowSpeed = 5.0f;
		__this->set_windowFollowSpeed_19((5.0f));
		// private int displayedDecimalDigits = 1;
		__this->set_displayedDecimalDigits_20(1);
		// private Color baseColor = new Color(80 / 256.0f, 80 / 256.0f, 80 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_1), (0.3125f), (0.3125f), (0.3125f), (1.0f), /*hidden argument*/NULL);
		__this->set_baseColor_21(L_1);
		// private Color targetFrameRateColor = new Color(127 / 256.0f, 186 / 256.0f, 0 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_2), (0.49609375f), (0.7265625f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_targetFrameRateColor_22(L_2);
		// private Color missedFrameRateColor = new Color(242 / 256.0f, 80 / 256.0f, 34 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_3), (0.9453125f), (0.3125f), (0.1328125f), (1.0f), /*hidden argument*/NULL);
		__this->set_missedFrameRateColor_23(L_3);
		// private Color memoryUsedColor = new Color(0 / 256.0f, 164 / 256.0f, 239 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_4), (0.0f), (0.640625f), (0.93359375f), (1.0f), /*hidden argument*/NULL);
		__this->set_memoryUsedColor_24(L_4);
		// private Color memoryPeakColor = new Color(255 / 256.0f, 185 / 256.0f, 0 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_5), (0.99609375f), (0.72265625f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_memoryPeakColor_25(L_5);
		// private Color memoryLimitColor = new Color(150 / 256.0f, 150 / 256.0f, 150 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_6), (0.5859375f), (0.5859375f), (0.5859375f), (1.0f), /*hidden argument*/NULL);
		__this->set_memoryLimitColor_26(L_6);
		// private System.Diagnostics.Stopwatch stopwatch = new System.Diagnostics.Stopwatch();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_7 = (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 *)il2cpp_codegen_object_new(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860(L_7, /*hidden argument*/NULL);
		__this->set_stopwatch_45(L_7);
		// private FrameTiming[] frameTimings = new FrameTiming[maxFrameTimings];
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var);
		int32_t L_8 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_maxFrameTimings_6();
		FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* L_9 = (FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3*)(FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3*)SZArrayNew(FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->set_frameTimings_46(L_9);
		// private char[] stringBuffer = new char[maxStringLength];
		int32_t L_10 = ((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->get_maxStringLength_4();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_11 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->set_stringBuffer_49(L_11);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler__cctor_mEC776427D1C36DB327BD028FCBB41739332DBCC7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler__cctor_mEC776427D1C36DB327BD028FCBB41739332DBCC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int maxStringLength = 32;
		((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->set_maxStringLength_4(((int32_t)32));
		// private static readonly int maxTargetFrameRate = 120;
		((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->set_maxTargetFrameRate_5(((int32_t)120));
		// private static readonly int maxFrameTimings = 128;
		((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->set_maxFrameTimings_6(((int32_t)128));
		// private static readonly int frameRange = 30;
		((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->set_frameRange_7(((int32_t)30));
		// private static readonly Vector2 defaultWindowRotation = new Vector2(10.0f, 20.0f);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (10.0f), (20.0f), /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->set_defaultWindowRotation_8(L_0);
		// private static readonly Vector3 defaultWindowScale = new Vector3(0.2f, 0.04f, 1.0f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.2f), (0.04f), (1.0f), /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->set_defaultWindowScale_9(L_1);
		// private static readonly string usedMemoryString = "Used: ";
		((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->set_usedMemoryString_10(_stringLiteral0085F04FFAF54410F314A1739CA00743371D3A5B);
		// private static readonly string peakMemoryString = "Peak: ";
		((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->set_peakMemoryString_11(_stringLiteralEFDD3FFFDEBF8938E0ACF2BA36C21ADB990D938B);
		// private static readonly string limitMemoryString = "Limit: ";
		((MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA_il2cpp_TypeInfo_var))->set_limitMemoryString_12(_stringLiteral5E044C5A2E8F3D4F49006EA5361F7FEB04CD498F);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowDiagnostics_m48A9E5022E53A3E0CE24CFA9D6B51CEC156DBC1C_inline (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	{
		// get { return showDiagnostics; }
		bool L_0 = __this->get_showDiagnostics_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_m680923D7F1A4A97A7A7F8EC3E0BA88DC4D081831_inline (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		__this->set_U3CWindowParentU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfiler_m954CBBD20901C9368BEB43861DA407739275C91B_inline (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	{
		// return showProfiler;
		bool L_0 = __this->get_showProfiler_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_mB63C30808F13BFCF8B6EB48537C9073B3C0B3E1C_inline (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { isVisible = value; }
		bool L_0 = ___value0;
		__this->set_isVisible_14(L_0);
		// set { isVisible = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_FrameSampleRate_m2BAF2190FFD5ED55D246C04D7A69242EB5B64D67_inline (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	{
		// return frameSampleRate;
		float L_0 = __this->get_frameSampleRate_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameSampleRate_m60FE92F1B9DDAEB9F61D503DCC443648CFDD1B38_inline (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { frameSampleRate = value; }
		float L_0 = ___value0;
		__this->set_frameSampleRate_15(L_0);
		// set { frameSampleRate = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_get_WindowAnchor_m9F92DE91EB32A1C3F1F3837F46F5EF8E970DB456_inline (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowAnchor; }
		int32_t L_0 = __this->get_windowAnchor_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowAnchor_m767F79B16433712327149EFA2E6F164DB72D48C2_inline (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { windowAnchor = value; }
		int32_t L_0 = ___value0;
		__this->set_windowAnchor_16(L_0);
		// set { windowAnchor = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityDiagnosticsSystem_get_WindowOffset_m99FDAD863D33077DEE9292B8883C13514FA77171_inline (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowOffset; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_windowOffset_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowOffset_m5EC5AC9BBDEB1BD54D16BF23DBF821C0142C985F_inline (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		// set { windowOffset = value; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_windowOffset_17(L_0);
		// set { windowOffset = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowScale_m50264C80B4B92FA56041C9C92A926181EE5E1E2A_inline (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowScale; }
		float L_0 = __this->get_windowScale_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_mEB77D8A853F8A6848138F58EB46EAF4B86B341FE_inline (MixedRealityDiagnosticsSystem_tC653BAEFF2747DCE4C4DE383029829857F9582C4 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowFollowSpeed; }
		float L_0 = __this->get_windowFollowSpeed_20();
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowDiagnostics_mD8504202BFDDE3FCCDCFEC8784C4191DDDDE8727_inline (MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowDiagnostics => showDiagnostics;
		bool L_0 = __this->get_showDiagnostics_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfiler_m5B1AE259728FAE3C8B37A929811B7418576B56CE_inline (MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowProfiler => showProfiler;
		bool L_0 = __this->get_showProfiler_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_FrameSampleRate_mFABD4A30CFDF8C6E6913BFDCA23F18D9793FE32D_inline (MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * __this, const RuntimeMethod* method)
{
	{
		// public float FrameSampleRate => frameSampleRate;
		float L_0 = __this->get_frameSampleRate_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsProfile_get_WindowAnchor_m842718F0059E63F2F4825FEF78D6A4AE2629B4A6_inline (MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * __this, const RuntimeMethod* method)
{
	{
		// public TextAnchor WindowAnchor => windowAnchor;
		int32_t L_0 = __this->get_windowAnchor_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityDiagnosticsProfile_get_WindowOffset_mC85665064D7E9942EC1732ACD81C1DA554C0269F_inline (MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 WindowOffset => windowOffset;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_windowOffset_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowScale_mFED301AB50697247C22FE9A697CE33987606A6F6_inline (MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * __this, const RuntimeMethod* method)
{
	{
		// public float WindowScale => windowScale;
		float L_0 = __this->get_windowScale_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowFollowSpeed_mB03B8AED85040324288ED310F56AAC52AE7510CC_inline (MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * __this, const RuntimeMethod* method)
{
	{
		// public float WindowFollowSpeed => windowFollowSpeed;
		float L_0 = __this->get_windowFollowSpeed_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_get_WindowParent_m9C1A0C12219E4D078B9A4A26E148C64513187536_inline (MixedRealityToolkitVisualProfiler_t8BAC8F408C0574F9283CBA3BB8B355BD9E1853EA * __this, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_U3CWindowParentU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
