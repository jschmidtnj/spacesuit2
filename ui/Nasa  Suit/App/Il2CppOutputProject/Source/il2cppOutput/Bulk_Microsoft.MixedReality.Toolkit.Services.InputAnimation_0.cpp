﻿#include "il2cpp-config.h"

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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t8C3B933A708BE562C4BDC1FD2C156B6106747C6F;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_tB988343BFD94F876141BBD8CA84993978D8E498B;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tA8F67CB2C442808E11CAA63ABD09B8423BEE3920;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_tEF8D01403D71D3E705766141604A6AFBE3DBFE3F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand
struct IMixedRealityHand_tB69B0DE743F5339169170CA05BF2F0CCFC208E83;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation
struct InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable
struct AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/CompareMarkers
struct CompareMarkers_tFC03464F02C8C4CA5139EE44D7919F3469C9A522;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves
struct PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529;
// Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker
struct InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15;
// Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker[]
struct InputAnimationMarkerU5BU5D_tE074887607C187796A567F4B8534523A05234C60;
// Microsoft.MixedReality.Toolkit.Input.InputRecordingService
struct InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile
struct MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>[]
struct EntryU5BU5D_tD89DCD4F0DB5E44EFED76015C9C4A882F1D3CDB2;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct KeyCollection_t2E3934A5E124660D5DE60088780A029A3DC69C30;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct ValueCollection_t3581AC8A87D864C9D02B7C8D1B2CD52CB751696E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Object>
struct ValueCollection_t3FD53D56DE3134B77455B3BF32328593D667229E;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_tF2E1873ACFEC47880263EA85F4BE17D1832A1BAC;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t0D7F3A50EB302696E4E5A19D582D99A8C7F70060;
// System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve>
struct IEnumerable_1_tFE1CA38261E80EDA4FFE60B69E47E9337C4DEAF5;
// System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve>
struct IEnumerator_1_t6F3A7452C63AED19D28A8E4A2676065FC436AC37;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_t4CEBE23321125B6E8D8B4B82EA2D83BCE8ADE39E;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>
struct List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.BinaryReader
struct BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969;
// System.IO.BinaryWriter
struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3;
// System.IO.FileStream
struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Decoder
struct Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26;
// System.Text.Encoder
struct Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

extern RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
extern RuntimeClass* AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199_il2cpp_TypeInfo_var;
extern RuntimeClass* AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var;
extern RuntimeClass* BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B_il2cpp_TypeInfo_var;
extern RuntimeClass* BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969_il2cpp_TypeInfo_var;
extern RuntimeClass* BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_tFE1CA38261E80EDA4FFE60B69E47E9337C4DEAF5_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t6F3A7452C63AED19D28A8E4A2676065FC436AC37_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityHand_tB69B0DE743F5339169170CA05BF2F0CCFC208E83_il2cpp_TypeInfo_var;
extern RuntimeClass* IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var;
extern RuntimeClass* InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15_il2cpp_TypeInfo_var;
extern RuntimeClass* InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_il2cpp_TypeInfo_var;
extern RuntimeClass* InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var;
extern RuntimeClass* InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
extern RuntimeClass* PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral04CF528CA8E847143DC7CEEF7A4A0DFE3BE72DCF;
extern String_t* _stringLiteral1150C4452D5B1995C5A530A7B8F01505D190AE1C;
extern String_t* _stringLiteral26DFC60E6D308FD5C82010F93B8A9731F73CEA64;
extern String_t* _stringLiteral49CB7901725A7C08D45BF819DE60B1F88586B38E;
extern String_t* _stringLiteral9A5D56716D566997FA290054D161AF96305AFF9A;
extern String_t* _stringLiteralCD876FAE672FE7A4A5AE253CE35CD2AE86873E20;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralDA9D033C5377CFE8B6725CEA34BE3573195E0BBC;
extern String_t* _stringLiteralEA135DC4B20E79545AD6455D5C02EFF9058E0AFB;
extern const RuntimeMethod* BaseDataProvider_1_set_Registrar_m3822A19991F40A2E0F2E7D1A11C7643DCBC643AC_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m90B7F3B9A7E3B2556BD57EBF11AE237A9DEDA9C2_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m92512E68CA898C9A2D7CD673E7C13659D91F6E26_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Values_m69FF2FC7A53C9BD649B4B884C813AA0802D2242D_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m7FFD43E309A2011AD1A00EADB7895454437977B2_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mB2F7C3456A1775CA1F13D14771F5C9C656B37FAB_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m59956644717D1199FE7EA597DF14A9A6514F4AD4_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_mCF433AF8333ACAF087A9987DC238A5F47159FCD5_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1716C38467B81980A598F8050EF5D5C6270C57F5_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_mB80CD1573C11A0554AA097BD5D10534D5344C93A_RuntimeMethod_var;
extern const RuntimeMethod* InputAnimationSerializationUtils_ReadHeader_m80601186DB739CF56DA5711215A3F3AD003C4747_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m206389017799A262D8D25B96003D913CA58AD59E_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_mA255E5A83D07CFE46042354A3A430392ADDC69A7_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_mC9034EAB7FECA8B62883FADB2B97E928A3F28571_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Insert_mAA1ADC7F12F17010AD1C08D4C1AE94E7A3BDD4FD_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m4C40F836269AC480B7C6F060BA584BAE6A561BCC_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m59FF5E3E8F5181A3C636EFF4F7958C580B3B154A_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m9660D9652127B41D761DBF34E5359CAEF030AFEF_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m357203A6C8DC2CEE68D51DBDA4854A987592F217_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Capacity_m5993C6D98EC2CE4D753F72519771D5B5AAE034F8_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_RuntimeMethod_var;
extern const RuntimeMethod* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m28ACFC6782CD9C4A1D2B827EDFF552E39F9D74D7_RuntimeMethod_var;
extern const RuntimeMethod* ValueCollection_GetEnumerator_m3A4B41130EE76484F813ECC14382309AD4E73EFF_RuntimeMethod_var;
extern const RuntimeType* TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648_0_0_0_var;
extern const uint32_t AnimationCurveEnumerable_GetEnumerator_m8F5700FFDDBBE6DE44B916CD9AC59FA539EB3AB5_MetadataUsageId;
extern const uint32_t InputAnimationMarker__ctor_mBA9692B6AACFDB9E38B103D1131562097C6A4D32_MetadataUsageId;
extern const uint32_t InputAnimationSerializationUtils_GetOutputFilename_mB10168E8921AAF465829FD4102258316F4A4614F_MetadataUsageId;
extern const uint32_t InputAnimationSerializationUtils_ReadBoolCurveArray_m296596EF06BCD00E3DA245E25791C98B3A835618_MetadataUsageId;
extern const uint32_t InputAnimationSerializationUtils_ReadBoolCurve_m50760053F50E3662368AABD7DF636173FB72E6EC_MetadataUsageId;
extern const uint32_t InputAnimationSerializationUtils_ReadFloatCurveArray_m5E08AAB776E6FEC35630C555B3F2245C682A9D9A_MetadataUsageId;
extern const uint32_t InputAnimationSerializationUtils_ReadFloatCurve_mA4953EB4C19CF3896F7A064DA15EF828AD25B825_MetadataUsageId;
extern const uint32_t InputAnimationSerializationUtils_ReadHeader_m80601186DB739CF56DA5711215A3F3AD003C4747_MetadataUsageId;
extern const uint32_t InputAnimationSerializationUtils_ReadMarkerList_m2AE74ACACD5F7FCA66D623AA427E4EC8B2C41AD2_MetadataUsageId;
extern const uint32_t InputAnimationSerializationUtils_WriteBoolCurveArray_m2BE653B82813F9CB161FDCDE707503A2D4669D39_MetadataUsageId;
extern const uint32_t InputAnimationSerializationUtils_WriteFloatCurveArray_m45428C85800E394587F498ECB6ABF6A140F398B9_MetadataUsageId;
extern const uint32_t InputAnimationSerializationUtils_WriteMarkerList_m88C80BC53B538384BCDA521B4DD667DABA7E7343_MetadataUsageId;
extern const uint32_t InputAnimationSerializationUtils__cctor_m8992B5E9F632E4E186F0F98A721F36EA4B5CDE7D_MetadataUsageId;
extern const uint32_t InputAnimation_AddBoolKeyFiltered_mF03D2B987F447EA01520980BF80C02CA48DA18EF_MetadataUsageId;
extern const uint32_t InputAnimation_AddCameraPoseKey_mB15BCFBF35157EED7BEBFB5A11740BAD5BC1F51C_MetadataUsageId;
extern const uint32_t InputAnimation_AddHandJointKey_m08E825C860930CDE843203504ADF22641E8FC787_MetadataUsageId;
extern const uint32_t InputAnimation_AddHandStateKey_m92FF52B5974A27A51A8B8D476342B6490B5906D9_MetadataUsageId;
extern const uint32_t InputAnimation_AddMarker_m0C1E5BB1400D38BDCCFBB08F7FA1AF8C0E0FBAC4_MetadataUsageId;
extern const uint32_t InputAnimation_AddPoseKeyFiltered_m5A4B405C7F7E108AE2E42597B2CD2F542C6FEDC0_MetadataUsageId;
extern const uint32_t InputAnimation_AddPoseKey_m55716AD2A6AA29B99325643547C019103668AA41_MetadataUsageId;
extern const uint32_t InputAnimation_AddPositionKeyFiltered_m33D6A58CD6FFA465153ACF6A208D5C6E4EF15784_MetadataUsageId;
extern const uint32_t InputAnimation_AddRotationKeyFiltered_m9916B87DEDE6AA0835FDE40EA9D582FFE1441189_MetadataUsageId;
extern const uint32_t InputAnimation_Clear_m1BC29C06CDEC1CB9FDAAAAF140C4F443659C5BDF_MetadataUsageId;
extern const uint32_t InputAnimation_ComputeDuration_m856B555BF30D567E2D0EC87CEF344B6056232227_MetadataUsageId;
extern const uint32_t InputAnimation_CreateHandJointCurves_m27A4DBD239F96E6CE676F37D643D5011A5866D43_MetadataUsageId;
extern const uint32_t InputAnimation_CutoffBeforeTime_mF34905951FE5E1316756302D617291EFFDF57ED4_MetadataUsageId;
extern const uint32_t InputAnimation_CutoffBeforeTime_mF63F80F2119882ECC144BD8204776CDEAB0FFBDA_MetadataUsageId;
extern const uint32_t InputAnimation_EvaluateCameraPose_m41BBD3CD203796298A28D367A957D50B202C98C5_MetadataUsageId;
extern const uint32_t InputAnimation_EvaluateHandJoint_m0869660694B5A969767C56F811D210EDD646F2FF_MetadataUsageId;
extern const uint32_t InputAnimation_EvaluateHandJoint_mC26F99F5767B742321F8F8247F0EEA356C1977A9_MetadataUsageId;
extern const uint32_t InputAnimation_FindMarkerInterval_m6AE0085BB3A6F92BE9583ADBF779A7290676E859_MetadataUsageId;
extern const uint32_t InputAnimation_FromStream_m4CE3438F6040EC2E04ADFDBD03F22C85DF3025F9_MetadataUsageId;
extern const uint32_t InputAnimation_GetMarker_mD8409BFB0D7B103BCF5D385BFAF95E9943069891_MetadataUsageId;
extern const uint32_t InputAnimation_PoseCurvesFromStream_m055C729EF6356173E9E9A9A0947CC76BA51E7568_MetadataUsageId;
extern const uint32_t InputAnimation_PoseCurvesToStream_mA526F07A7A8F89FB31A2EA0CF16CDE4E3410E6BB_MetadataUsageId;
extern const uint32_t InputAnimation_RemoveMarker_mFC3055DEBB5FC0715116DD6F5191093AF6C6E087_MetadataUsageId;
extern const uint32_t InputAnimation_SetMarkerTime_mC40A7BAEE9076CB86ACDD737D77C0DEFCA33C5A0_MetadataUsageId;
extern const uint32_t InputAnimation_ToStream_m30A985C695CC60F01F20F99C4199C7EA23AB72DF_MetadataUsageId;
extern const uint32_t InputAnimation_TryGetHandJointCurves_mCC77E460C287906321450324E4469F55CBE19531_MetadataUsageId;
extern const uint32_t InputAnimation__cctor_mF6EEE3CF10C9B6A5869B0CA351C03CABAFD62A1C_MetadataUsageId;
extern const uint32_t InputAnimation__ctor_m3F865B984BC134035E018E424CDA97E144F0F9D1_MetadataUsageId;
extern const uint32_t InputAnimation_get_AnimationCurves_m696C63C6C376A90CF6E1AC33F715E05370ED3E21_MetadataUsageId;
extern const uint32_t InputAnimation_get_markerCount_m18F2F2FA692CEFE3899394EE5D6A65E5B07CED04_MetadataUsageId;
extern const uint32_t InputRecordingService_Enable_m2B04E38B5C80699964810730D3E0D8FA8F976842_MetadataUsageId;
extern const uint32_t InputRecordingService_RecordInputHandData_m79F3873485C42DD0D3CA964B8343A813F5229530_MetadataUsageId;
extern const uint32_t InputRecordingService_RecordKeyframe_mCBCAEF9D03FF64D86DBB5F8BEDE3CD67CA600B46_MetadataUsageId;
extern const uint32_t InputRecordingService_ResetStartTime_mB347BAD39248483F400882D199A54E7514EDB5CC_MetadataUsageId;
extern const uint32_t InputRecordingService_SaveInputAnimation_m2A7E122A27D69DEDCB2B83C49DD476833409A733_MetadataUsageId;
extern const uint32_t InputRecordingService_SaveInputAnimation_m5E10C15128F94A6ACAA710235943DC860E251EF3_MetadataUsageId;
extern const uint32_t InputRecordingService_StartRecording_m57C34579B1C17F274C884B772B2F2AD70814DDDC_MetadataUsageId;
extern const uint32_t InputRecordingService__cctor_mCB1E34AE425DC2DC64F50B9141B4F85EBEAA58C5_MetadataUsageId;
extern const uint32_t InputRecordingService__ctor_m52FA4810C35FE21A97C748B357735B040903299C_MetadataUsageId;
extern const uint32_t InputRecordingService__ctor_m79019FB2C78B9D3869030D84321D390BEB7A19C2_MetadataUsageId;
extern const uint32_t InputRecordingService_add_OnRecordingStarted_mD5D6E9B98C08E36DF2D01C7BB3FA50C5F2F04212_MetadataUsageId;
extern const uint32_t InputRecordingService_add_OnRecordingStopped_mC883A399729A73892E918432B82CA59104A7A1EE_MetadataUsageId;
extern const uint32_t InputRecordingService_get_InputRecordingProfile_m135857BF9212B532C0BED576B65F57D57C0C34E6_MetadataUsageId;
extern const uint32_t InputRecordingService_get_StartTime_mEA9D822729F3AD6BAE981EA48C67FBD6BCF22CB4_MetadataUsageId;
extern const uint32_t InputRecordingService_remove_OnRecordingStarted_mBD637B1A6CADB8935C68869C4420F0FBD8264761_MetadataUsageId;
extern const uint32_t InputRecordingService_remove_OnRecordingStopped_m70835D52BD908ECD41B7C9E8B66C14078A5D3011_MetadataUsageId;
extern const uint32_t InputRecordingService_set_RecordingBufferTimeLimit_m0DECBF9FD93ED8F2EF7CFD5F6C1F4269985857CB_MetadataUsageId;
extern const uint32_t InputRecordingService_set_UseBufferTimeLimit_m441467EEA1AFF857CC40987D715BA4DE28AABA7E_MetadataUsageId;
extern const uint32_t PoseCurves__ctor_m5C84AAF7123F5FEF488B2C0F85C2B89EC6301514_MetadataUsageId;
extern const uint32_t U3CGetEnumeratorU3Ed__2_MoveNext_m48CB31720E89976775EDDFB59C987347EBBB06C6_MetadataUsageId;
extern const uint32_t U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m28ACFC6782CD9C4A1D2B827EDFF552E39F9D74D7_MetadataUsageId;
extern const uint32_t U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally1_m316D89FEB42609EA2FDCDE30240AB56A2AED0F6E_MetadataUsageId;
extern const uint32_t U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally2_m1DF8D07C3C90361825C9359A8550B9EA1BD3149B_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1;
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D;


#ifndef U3CMODULEU3E_T74A03F2645D3A35A9493BAD2F9424D09DB3146E5_H
#define U3CMODULEU3E_T74A03F2645D3A35A9493BAD2F9424D09DB3146E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t74A03F2645D3A35A9493BAD2F9424D09DB3146E5 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T74A03F2645D3A35A9493BAD2F9424D09DB3146E5_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef BASESERVICE_T36F2CDECE3A85454DBE01298EA436EFD3BB1F96D_H
#define BASESERVICE_T36F2CDECE3A85454DBE01298EA436EFD3BB1F96D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.BaseService
struct  BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CConfigurationProfileU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASESERVICE_T36F2CDECE3A85454DBE01298EA436EFD3BB1F96D_H
#ifndef INPUTANIMATION_T412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_H
#define INPUTANIMATION_T412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.InputAnimation
struct  InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485  : public RuntimeObject
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimation::duration
	float ___duration_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation::handTrackedCurveLeft
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___handTrackedCurveLeft_2;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation::handTrackedCurveRight
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___handTrackedCurveRight_3;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation::handPinchCurveLeft
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___handPinchCurveLeft_4;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation::handPinchCurveRight
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___handPinchCurveRight_5;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves> Microsoft.MixedReality.Toolkit.Input.InputAnimation::handJointCurvesLeft
	Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * ___handJointCurvesLeft_6;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves> Microsoft.MixedReality.Toolkit.Input.InputAnimation::handJointCurvesRight
	Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * ___handJointCurvesRight_7;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves Microsoft.MixedReality.Toolkit.Input.InputAnimation::cameraCurves
	PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * ___cameraCurves_8;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker> Microsoft.MixedReality.Toolkit.Input.InputAnimation::markers
	List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * ___markers_9;

public:
	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_handTrackedCurveLeft_2() { return static_cast<int32_t>(offsetof(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485, ___handTrackedCurveLeft_2)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_handTrackedCurveLeft_2() const { return ___handTrackedCurveLeft_2; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_handTrackedCurveLeft_2() { return &___handTrackedCurveLeft_2; }
	inline void set_handTrackedCurveLeft_2(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___handTrackedCurveLeft_2 = value;
		Il2CppCodeGenWriteBarrier((&___handTrackedCurveLeft_2), value);
	}

	inline static int32_t get_offset_of_handTrackedCurveRight_3() { return static_cast<int32_t>(offsetof(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485, ___handTrackedCurveRight_3)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_handTrackedCurveRight_3() const { return ___handTrackedCurveRight_3; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_handTrackedCurveRight_3() { return &___handTrackedCurveRight_3; }
	inline void set_handTrackedCurveRight_3(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___handTrackedCurveRight_3 = value;
		Il2CppCodeGenWriteBarrier((&___handTrackedCurveRight_3), value);
	}

	inline static int32_t get_offset_of_handPinchCurveLeft_4() { return static_cast<int32_t>(offsetof(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485, ___handPinchCurveLeft_4)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_handPinchCurveLeft_4() const { return ___handPinchCurveLeft_4; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_handPinchCurveLeft_4() { return &___handPinchCurveLeft_4; }
	inline void set_handPinchCurveLeft_4(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___handPinchCurveLeft_4 = value;
		Il2CppCodeGenWriteBarrier((&___handPinchCurveLeft_4), value);
	}

	inline static int32_t get_offset_of_handPinchCurveRight_5() { return static_cast<int32_t>(offsetof(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485, ___handPinchCurveRight_5)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_handPinchCurveRight_5() const { return ___handPinchCurveRight_5; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_handPinchCurveRight_5() { return &___handPinchCurveRight_5; }
	inline void set_handPinchCurveRight_5(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___handPinchCurveRight_5 = value;
		Il2CppCodeGenWriteBarrier((&___handPinchCurveRight_5), value);
	}

	inline static int32_t get_offset_of_handJointCurvesLeft_6() { return static_cast<int32_t>(offsetof(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485, ___handJointCurvesLeft_6)); }
	inline Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * get_handJointCurvesLeft_6() const { return ___handJointCurvesLeft_6; }
	inline Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 ** get_address_of_handJointCurvesLeft_6() { return &___handJointCurvesLeft_6; }
	inline void set_handJointCurvesLeft_6(Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * value)
	{
		___handJointCurvesLeft_6 = value;
		Il2CppCodeGenWriteBarrier((&___handJointCurvesLeft_6), value);
	}

	inline static int32_t get_offset_of_handJointCurvesRight_7() { return static_cast<int32_t>(offsetof(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485, ___handJointCurvesRight_7)); }
	inline Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * get_handJointCurvesRight_7() const { return ___handJointCurvesRight_7; }
	inline Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 ** get_address_of_handJointCurvesRight_7() { return &___handJointCurvesRight_7; }
	inline void set_handJointCurvesRight_7(Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * value)
	{
		___handJointCurvesRight_7 = value;
		Il2CppCodeGenWriteBarrier((&___handJointCurvesRight_7), value);
	}

	inline static int32_t get_offset_of_cameraCurves_8() { return static_cast<int32_t>(offsetof(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485, ___cameraCurves_8)); }
	inline PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * get_cameraCurves_8() const { return ___cameraCurves_8; }
	inline PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 ** get_address_of_cameraCurves_8() { return &___cameraCurves_8; }
	inline void set_cameraCurves_8(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * value)
	{
		___cameraCurves_8 = value;
		Il2CppCodeGenWriteBarrier((&___cameraCurves_8), value);
	}

	inline static int32_t get_offset_of_markers_9() { return static_cast<int32_t>(offsetof(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485, ___markers_9)); }
	inline List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * get_markers_9() const { return ___markers_9; }
	inline List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 ** get_address_of_markers_9() { return &___markers_9; }
	inline void set_markers_9(List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * value)
	{
		___markers_9 = value;
		Il2CppCodeGenWriteBarrier((&___markers_9), value);
	}
};

struct InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::jointCount
	int32_t ___jointCount_0;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTANIMATION_T412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_H
#ifndef ANIMATIONCURVEENUMERABLE_T4E51181560773F4C5665842150150FF7484F4199_H
#define ANIMATIONCURVEENUMERABLE_T4E51181560773F4C5665842150150FF7484F4199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable
struct  AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable::animation
	InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * ___animation_0;

public:
	inline static int32_t get_offset_of_animation_0() { return static_cast<int32_t>(offsetof(AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199, ___animation_0)); }
	inline InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * get_animation_0() const { return ___animation_0; }
	inline InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 ** get_address_of_animation_0() { return &___animation_0; }
	inline void set_animation_0(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * value)
	{
		___animation_0 = value;
		Il2CppCodeGenWriteBarrier((&___animation_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCURVEENUMERABLE_T4E51181560773F4C5665842150150FF7484F4199_H
#ifndef COMPAREMARKERS_TFC03464F02C8C4CA5139EE44D7919F3469C9A522_H
#define COMPAREMARKERS_TFC03464F02C8C4CA5139EE44D7919F3469C9A522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.InputAnimation_CompareMarkers
struct  CompareMarkers_tFC03464F02C8C4CA5139EE44D7919F3469C9A522  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREMARKERS_TFC03464F02C8C4CA5139EE44D7919F3469C9A522_H
#ifndef POSECURVES_T16AE82142B99A239147D3DC79A5ECC1F3D566529_H
#define POSECURVES_T16AE82142B99A239147D3DC79A5ECC1F3D566529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves
struct  PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529  : public RuntimeObject
{
public:
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves::PositionX
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___PositionX_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves::PositionY
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___PositionY_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves::PositionZ
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___PositionZ_2;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves::RotationX
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___RotationX_3;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves::RotationY
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___RotationY_4;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves::RotationZ
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___RotationZ_5;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves::RotationW
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___RotationW_6;

public:
	inline static int32_t get_offset_of_PositionX_0() { return static_cast<int32_t>(offsetof(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529, ___PositionX_0)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_PositionX_0() const { return ___PositionX_0; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_PositionX_0() { return &___PositionX_0; }
	inline void set_PositionX_0(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___PositionX_0 = value;
		Il2CppCodeGenWriteBarrier((&___PositionX_0), value);
	}

	inline static int32_t get_offset_of_PositionY_1() { return static_cast<int32_t>(offsetof(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529, ___PositionY_1)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_PositionY_1() const { return ___PositionY_1; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_PositionY_1() { return &___PositionY_1; }
	inline void set_PositionY_1(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___PositionY_1 = value;
		Il2CppCodeGenWriteBarrier((&___PositionY_1), value);
	}

	inline static int32_t get_offset_of_PositionZ_2() { return static_cast<int32_t>(offsetof(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529, ___PositionZ_2)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_PositionZ_2() const { return ___PositionZ_2; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_PositionZ_2() { return &___PositionZ_2; }
	inline void set_PositionZ_2(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___PositionZ_2 = value;
		Il2CppCodeGenWriteBarrier((&___PositionZ_2), value);
	}

	inline static int32_t get_offset_of_RotationX_3() { return static_cast<int32_t>(offsetof(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529, ___RotationX_3)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_RotationX_3() const { return ___RotationX_3; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_RotationX_3() { return &___RotationX_3; }
	inline void set_RotationX_3(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___RotationX_3 = value;
		Il2CppCodeGenWriteBarrier((&___RotationX_3), value);
	}

	inline static int32_t get_offset_of_RotationY_4() { return static_cast<int32_t>(offsetof(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529, ___RotationY_4)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_RotationY_4() const { return ___RotationY_4; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_RotationY_4() { return &___RotationY_4; }
	inline void set_RotationY_4(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___RotationY_4 = value;
		Il2CppCodeGenWriteBarrier((&___RotationY_4), value);
	}

	inline static int32_t get_offset_of_RotationZ_5() { return static_cast<int32_t>(offsetof(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529, ___RotationZ_5)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_RotationZ_5() const { return ___RotationZ_5; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_RotationZ_5() { return &___RotationZ_5; }
	inline void set_RotationZ_5(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___RotationZ_5 = value;
		Il2CppCodeGenWriteBarrier((&___RotationZ_5), value);
	}

	inline static int32_t get_offset_of_RotationW_6() { return static_cast<int32_t>(offsetof(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529, ___RotationW_6)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_RotationW_6() const { return ___RotationW_6; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_RotationW_6() { return &___RotationW_6; }
	inline void set_RotationW_6(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___RotationW_6 = value;
		Il2CppCodeGenWriteBarrier((&___RotationW_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSECURVES_T16AE82142B99A239147D3DC79A5ECC1F3D566529_H
#ifndef INPUTANIMATIONMARKER_T8438F4B51BF0EAF16E9B1930CA7F312F82B31B15_H
#define INPUTANIMATIONMARKER_T8438F4B51BF0EAF16E9B1930CA7F312F82B31B15_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker
struct  InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15  : public RuntimeObject
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker::time
	float ___time_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTANIMATIONMARKER_T8438F4B51BF0EAF16E9B1930CA7F312F82B31B15_H
#ifndef INPUTANIMATIONSERIALIZATIONUTILS_T09CD50AF8E3DA677779B45BE562045BE6E19C3D0_H
#define INPUTANIMATIONSERIALIZATIONUTILS_T09CD50AF8E3DA677779B45BE562045BE6E19C3D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils
struct  InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0  : public RuntimeObject
{
public:

public:
};

struct InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::jointCount
	int32_t ___jointCount_0;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTANIMATIONSERIALIZATIONUTILS_T09CD50AF8E3DA677779B45BE562045BE6E19C3D0_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUECOLLECTION_T3581AC8A87D864C9D02B7C8D1B2CD52CB751696E_H
#define VALUECOLLECTION_T3581AC8A87D864C9D02B7C8D1B2CD52CB751696E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2_ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves>
struct  ValueCollection_t3581AC8A87D864C9D02B7C8D1B2CD52CB751696E  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection::dictionary
	Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t3581AC8A87D864C9D02B7C8D1B2CD52CB751696E, ___dictionary_0)); }
	inline Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T3581AC8A87D864C9D02B7C8D1B2CD52CB751696E_H
#ifndef DICTIONARY_2_T0050F7F264A497E3941DA59543FE4031C6FC5262_H
#define DICTIONARY_2_T0050F7F264A497E3941DA59543FE4031C6FC5262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves>
struct  Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD89DCD4F0DB5E44EFED76015C9C4A882F1D3CDB2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t2E3934A5E124660D5DE60088780A029A3DC69C30 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3581AC8A87D864C9D02B7C8D1B2CD52CB751696E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262, ___entries_1)); }
	inline EntryU5BU5D_tD89DCD4F0DB5E44EFED76015C9C4A882F1D3CDB2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD89DCD4F0DB5E44EFED76015C9C4A882F1D3CDB2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD89DCD4F0DB5E44EFED76015C9C4A882F1D3CDB2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262, ___keys_7)); }
	inline KeyCollection_t2E3934A5E124660D5DE60088780A029A3DC69C30 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2E3934A5E124660D5DE60088780A029A3DC69C30 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2E3934A5E124660D5DE60088780A029A3DC69C30 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262, ___values_8)); }
	inline ValueCollection_t3581AC8A87D864C9D02B7C8D1B2CD52CB751696E * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3581AC8A87D864C9D02B7C8D1B2CD52CB751696E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3581AC8A87D864C9D02B7C8D1B2CD52CB751696E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T0050F7F264A497E3941DA59543FE4031C6FC5262_H
#ifndef LIST_1_TC1DDD24202359F6F7F00E1616AE89E59569CADF1_H
#define LIST_1_TC1DDD24202359F6F7F00E1616AE89E59569CADF1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>
struct  List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputAnimationMarkerU5BU5D_tE074887607C187796A567F4B8534523A05234C60* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1, ____items_1)); }
	inline InputAnimationMarkerU5BU5D_tE074887607C187796A567F4B8534523A05234C60* get__items_1() const { return ____items_1; }
	inline InputAnimationMarkerU5BU5D_tE074887607C187796A567F4B8534523A05234C60** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputAnimationMarkerU5BU5D_tE074887607C187796A567F4B8534523A05234C60* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputAnimationMarkerU5BU5D_tE074887607C187796A567F4B8534523A05234C60* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1_StaticFields, ____emptyArray_5)); }
	inline InputAnimationMarkerU5BU5D_tE074887607C187796A567F4B8534523A05234C60* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputAnimationMarkerU5BU5D_tE074887607C187796A567F4B8534523A05234C60** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputAnimationMarkerU5BU5D_tE074887607C187796A567F4B8534523A05234C60* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TC1DDD24202359F6F7F00E1616AE89E59569CADF1_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
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
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
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
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
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
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // EXCEPTION_T_H
#ifndef BINARYREADER_T7467E057B24C42E81B1C3E5C60288BB4B1718969_H
#define BINARYREADER_T7467E057B24C42E81B1C3E5C60288BB4B1718969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryReader
struct  BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_stream_0)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stream_0), value);
	}

	inline static int32_t get_offset_of_m_buffer_1() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_buffer_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_buffer_1() const { return ___m_buffer_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_buffer_1() { return &___m_buffer_1; }
	inline void set_m_buffer_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_buffer_1), value);
	}

	inline static int32_t get_offset_of_m_decoder_2() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_decoder_2)); }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * get_m_decoder_2() const { return ___m_decoder_2; }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 ** get_address_of_m_decoder_2() { return &___m_decoder_2; }
	inline void set_m_decoder_2(Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * value)
	{
		___m_decoder_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_decoder_2), value);
	}

	inline static int32_t get_offset_of_m_charBytes_3() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_charBytes_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_charBytes_3() const { return ___m_charBytes_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_charBytes_3() { return &___m_charBytes_3; }
	inline void set_m_charBytes_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_charBytes_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_charBytes_3), value);
	}

	inline static int32_t get_offset_of_m_singleChar_4() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_singleChar_4)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_singleChar_4() const { return ___m_singleChar_4; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_singleChar_4() { return &___m_singleChar_4; }
	inline void set_m_singleChar_4(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_singleChar_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_singleChar_4), value);
	}

	inline static int32_t get_offset_of_m_charBuffer_5() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_charBuffer_5)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_charBuffer_5() const { return ___m_charBuffer_5; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_charBuffer_5() { return &___m_charBuffer_5; }
	inline void set_m_charBuffer_5(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_charBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_charBuffer_5), value);
	}

	inline static int32_t get_offset_of_m_maxCharsSize_6() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_maxCharsSize_6)); }
	inline int32_t get_m_maxCharsSize_6() const { return ___m_maxCharsSize_6; }
	inline int32_t* get_address_of_m_maxCharsSize_6() { return &___m_maxCharsSize_6; }
	inline void set_m_maxCharsSize_6(int32_t value)
	{
		___m_maxCharsSize_6 = value;
	}

	inline static int32_t get_offset_of_m_2BytesPerChar_7() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_2BytesPerChar_7)); }
	inline bool get_m_2BytesPerChar_7() const { return ___m_2BytesPerChar_7; }
	inline bool* get_address_of_m_2BytesPerChar_7() { return &___m_2BytesPerChar_7; }
	inline void set_m_2BytesPerChar_7(bool value)
	{
		___m_2BytesPerChar_7 = value;
	}

	inline static int32_t get_offset_of_m_isMemoryStream_8() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_isMemoryStream_8)); }
	inline bool get_m_isMemoryStream_8() const { return ___m_isMemoryStream_8; }
	inline bool* get_address_of_m_isMemoryStream_8() { return &___m_isMemoryStream_8; }
	inline void set_m_isMemoryStream_8(bool value)
	{
		___m_isMemoryStream_8 = value;
	}

	inline static int32_t get_offset_of_m_leaveOpen_9() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_leaveOpen_9)); }
	inline bool get_m_leaveOpen_9() const { return ___m_leaveOpen_9; }
	inline bool* get_address_of_m_leaveOpen_9() { return &___m_leaveOpen_9; }
	inline void set_m_leaveOpen_9(bool value)
	{
		___m_leaveOpen_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYREADER_T7467E057B24C42E81B1C3E5C60288BB4B1718969_H
#ifndef BINARYWRITER_T1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_H
#define BINARYWRITER_T1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryWriter
struct  BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ___OutStream_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___OutStream_1), value);
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____buffer_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_2() const { return ____buffer_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_2), value);
	}

	inline static int32_t get_offset_of__encoding_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__encoding_3() const { return ____encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__encoding_3() { return &____encoding_3; }
	inline void set__encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&____encoding_3), value);
	}

	inline static int32_t get_offset_of__encoder_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____encoder_4)); }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * get__encoder_4() const { return ____encoder_4; }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 ** get_address_of__encoder_4() { return &____encoder_4; }
	inline void set__encoder_4(Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * value)
	{
		____encoder_4 = value;
		Il2CppCodeGenWriteBarrier((&____encoder_4), value);
	}

	inline static int32_t get_offset_of__leaveOpen_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____leaveOpen_5)); }
	inline bool get__leaveOpen_5() const { return ____leaveOpen_5; }
	inline bool* get_address_of__leaveOpen_5() { return &____leaveOpen_5; }
	inline void set__leaveOpen_5(bool value)
	{
		____leaveOpen_5 = value;
	}

	inline static int32_t get_offset_of__largeByteBuffer_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____largeByteBuffer_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__largeByteBuffer_6() const { return ____largeByteBuffer_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__largeByteBuffer_6() { return &____largeByteBuffer_6; }
	inline void set__largeByteBuffer_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____largeByteBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((&____largeByteBuffer_6), value);
	}

	inline static int32_t get_offset_of__maxChars_7() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____maxChars_7)); }
	inline int32_t get__maxChars_7() const { return ____maxChars_7; }
	inline int32_t* get_address_of__maxChars_7() { return &____maxChars_7; }
	inline void set__maxChars_7(int32_t value)
	{
		____maxChars_7 = value;
	}
};

struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_StaticFields, ___Null_0)); }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYWRITER_T1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_H
#ifndef MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#define MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};
#endif // MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef BASEDATAPROVIDER_1_T8C3B933A708BE562C4BDC1FD2C156B6106747C6F_H
#define BASEDATAPROVIDER_1_T8C3B933A708BE562C4BDC1FD2C156B6106747C6F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct  BaseDataProvider_1_t8C3B933A708BE562C4BDC1FD2C156B6106747C6F  : public BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t8C3B933A708BE562C4BDC1FD2C156B6106747C6F, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRegistrarU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t8C3B933A708BE562C4BDC1FD2C156B6106747C6F, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CServiceU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEDATAPROVIDER_1_T8C3B933A708BE562C4BDC1FD2C156B6106747C6F_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUMERATOR_T380A25BE407F6F2C538F9086E9362AB3CC5C93FD_H
#define ENUMERATOR_T380A25BE407F6F2C538F9086E9362AB3CC5C93FD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves>
struct  Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::dictionary
	Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::currentValue
	PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD, ___dictionary_0)); }
	inline Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD, ___currentValue_3)); }
	inline PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * get_currentValue_3() const { return ___currentValue_3; }
	inline PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentValue_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T380A25BE407F6F2C538F9086E9362AB3CC5C93FD_H
#ifndef ENUMERATOR_T225915DBED7CDB584E014E8A5232FAB2E1B1BC54_H
#define ENUMERATOR_T225915DBED7CDB584E014E8A5232FAB2E1B1BC54_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator<System.Int32Enum,System.Object>
struct  Enumerator_t225915DBED7CDB584E014E8A5232FAB2E1B1BC54 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::dictionary
	Dictionary_2_t0D7F3A50EB302696E4E5A19D582D99A8C7F70060 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t225915DBED7CDB584E014E8A5232FAB2E1B1BC54, ___dictionary_0)); }
	inline Dictionary_2_t0D7F3A50EB302696E4E5A19D582D99A8C7F70060 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0D7F3A50EB302696E4E5A19D582D99A8C7F70060 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0D7F3A50EB302696E4E5A19D582D99A8C7F70060 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t225915DBED7CDB584E014E8A5232FAB2E1B1BC54, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t225915DBED7CDB584E014E8A5232FAB2E1B1BC54, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t225915DBED7CDB584E014E8A5232FAB2E1B1BC54, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentValue_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T225915DBED7CDB584E014E8A5232FAB2E1B1BC54_H
#ifndef ENUMERATOR_TF2983839801DC3F7E2D560177CFD12A57171E75E_H
#define ENUMERATOR_TF2983839801DC3F7E2D560177CFD12A57171E75E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>
struct  Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E, ___list_0)); }
	inline List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * get_list_0() const { return ___list_0; }
	inline List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E, ___current_3)); }
	inline InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * get_current_3() const { return ___current_3; }
	inline InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TF2983839801DC3F7E2D560177CFD12A57171E75E_H
#ifndef ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#define ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef STREAM_TFC50657DD5AAB87770987F9179D934A51D99D5E7_H
#define STREAM_TFC50657DD5AAB87770987F9179D934A51D99D5E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_2), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_3), value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_TFC50657DD5AAB87770987F9179D934A51D99D5E7_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#define NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#ifndef NULLABLE_1_T96A9DB0CC70D8F236B20E8A1F00B8FE74850F777_H
#define NULLABLE_1_T96A9DB0CC70D8F236B20E8A1F00B8FE74850F777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Single>
struct  Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T96A9DB0CC70D8F236B20E8A1F00B8FE74850F777_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef KEYFRAME_T9E945CACC5AC36E067B15A634096A223A06D2D74_H
#define KEYFRAME_T9E945CACC5AC36E067B15A634096A223A06D2D74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T9E945CACC5AC36E067B15A634096A223A06D2D74_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef DEVICEINPUTTYPE_TB50C0D744590C02BD2A1FBFB97DD0DB4E5D9052E_H
#define DEVICEINPUTTYPE_TB50C0D744590C02BD2A1FBFB97DD0DB4E5D9052E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct  DeviceInputType_tB50C0D744590C02BD2A1FBFB97DD0DB4E5D9052E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_tB50C0D744590C02BD2A1FBFB97DD0DB4E5D9052E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICEINPUTTYPE_TB50C0D744590C02BD2A1FBFB97DD0DB4E5D9052E_H
#ifndef U3CGETENUMERATORU3ED__2_TBD70CFF718B59B960FC09D77594E22B82733C429_H
#define U3CGETENUMERATORU3ED__2_TBD70CFF718B59B960FC09D77594E22B82733C429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable_<GetEnumerator>d__2
struct  U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable_<GetEnumerator>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable_<GetEnumerator>d__2::<>2__current
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable_<GetEnumerator>d__2::<>4__this
	AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * ___U3CU3E4__this_2;
	// System.Collections.Generic.Dictionary`2_ValueCollection_Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves> Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable_<GetEnumerator>d__2::<>7__wrap1
	Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD  ___U3CU3E7__wrap1_3;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable_<GetEnumerator>d__2::<curves>5__3
	PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * ___U3CcurvesU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429, ___U3CU3E2__current_1)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429, ___U3CU3E4__this_2)); }
	inline AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD  value)
	{
		___U3CU3E7__wrap1_3 = value;
	}

	inline static int32_t get_offset_of_U3CcurvesU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429, ___U3CcurvesU3E5__3_4)); }
	inline PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * get_U3CcurvesU3E5__3_4() const { return ___U3CcurvesU3E5__3_4; }
	inline PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 ** get_address_of_U3CcurvesU3E5__3_4() { return &___U3CcurvesU3E5__3_4; }
	inline void set_U3CcurvesU3E5__3_4(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * value)
	{
		___U3CcurvesU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcurvesU3E5__3_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3ED__2_TBD70CFF718B59B960FC09D77594E22B82733C429_H
#ifndef TRACKINGSTATE_TD0332F2AFF8035708A8141F7EFEF682A6F8D7B98_H
#define TRACKINGSTATE_TD0332F2AFF8035708A8141F7EFEF682A6F8D7B98_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.TrackingState
struct  TrackingState_tD0332F2AFF8035708A8141F7EFEF682A6F8D7B98 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tD0332F2AFF8035708A8141F7EFEF682A6F8D7B98, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGSTATE_TD0332F2AFF8035708A8141F7EFEF682A6F8D7B98_H
#ifndef AXISTYPE_TB81D0BD797A06C1EC90AB774C86C9B50F9787A3F_H
#define AXISTYPE_TB81D0BD797A06C1EC90AB774C86C9B50F9787A3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_tB81D0BD797A06C1EC90AB774C86C9B50F9787A3F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tB81D0BD797A06C1EC90AB774C86C9B50F9787A3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISTYPE_TB81D0BD797A06C1EC90AB774C86C9B50F9787A3F_H
#ifndef HANDEDNESS_TC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00_H
#define HANDEDNESS_TC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDEDNESS_TC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00_H
#ifndef MIXEDREALITYPOSE_T244D55491B07E2511AF67FE856B430109C716148_H
#define MIXEDREALITYPOSE_T244D55491B07E2511AF67FE856B430109C716148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct  MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148, ___position_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_1() const { return ___position_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148, ___rotation_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYPOSE_T244D55491B07E2511AF67FE856B430109C716148_H
#ifndef TRACKEDHANDJOINT_TF44A8730AA131ACE1D217F560801A72245D48648_H
#define TRACKEDHANDJOINT_TF44A8730AA131ACE1D217F560801A72245D48648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct  TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDHANDJOINT_TF44A8730AA131ACE1D217F560801A72245D48648_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // DELEGATE_T_H
#ifndef FILEACCESS_T31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6_H
#define FILEACCESS_T31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESS_T31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6_H
#ifndef FILEMODE_TD19D05B1E6CAF201F88401B04FDB25227664C419_H
#define FILEMODE_TD19D05B1E6CAF201F88401B04FDB25227664C419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileMode
struct  FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEMODE_TD19D05B1E6CAF201F88401B04FDB25227664C419_H
#ifndef IOEXCEPTION_T60E052020EDE4D3075F57A1DCC224FF8864354BA_H
#define IOEXCEPTION_T60E052020EDE4D3075F57A1DCC224FF8864354BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.IOException
struct  IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((&____maybeFullPath_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOEXCEPTION_T60E052020EDE4D3075F57A1DCC224FF8864354BA_H
#ifndef INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#define INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef PROFILERMARKER_T41096870004E8A2081E31E01BC0552F2F01F2B86_H
#define PROFILERMARKER_T41096870004E8A2081E31E01BC0552F2F01F2B86_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Profiling.ProfilerMarker
struct  ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILERMARKER_T41096870004E8A2081E31E01BC0552F2F01F2B86_H
#ifndef ANIMATIONCURVE_TD2F265379583AAF1BF8D84F1BB8DB12980FA504C_H
#define ANIMATIONCURVE_TD2F265379583AAF1BF8D84F1BB8DB12980FA504C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_TD2F265379583AAF1BF8D84F1BB8DB12980FA504C_H
#ifndef KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#define KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef WEIGHTEDMODE_T98C51B71C54B8A3026DBB95C738DFA49AC73B4BD_H
#define WEIGHTEDMODE_T98C51B71C54B8A3026DBB95C738DFA49AC73B4BD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WeightedMode
struct  WeightedMode_t98C51B71C54B8A3026DBB95C738DFA49AC73B4BD 
{
public:
	// System.Int32 UnityEngine.WeightedMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WeightedMode_t98C51B71C54B8A3026DBB95C738DFA49AC73B4BD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEIGHTEDMODE_T98C51B71C54B8A3026DBB95C738DFA49AC73B4BD_H
#ifndef WRAPMODE_T3704F0388A4F801D2F54B1EA1EE8DC014D667AFD_H
#define WRAPMODE_T3704F0388A4F801D2F54B1EA1EE8DC014D667AFD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WrapMode
struct  WrapMode_t3704F0388A4F801D2F54B1EA1EE8DC014D667AFD 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrapMode_t3704F0388A4F801D2F54B1EA1EE8DC014D667AFD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRAPMODE_T3704F0388A4F801D2F54B1EA1EE8DC014D667AFD_H
#ifndef BASEINPUTDEVICEMANAGER_T356B253FA33CF98FC7A39CEC5696B49114A67D7B_H
#define BASEINPUTDEVICEMANAGER_T356B253FA33CF98FC7A39CEC5696B49114A67D7B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct  BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B  : public BaseDataProvider_1_t8C3B933A708BE562C4BDC1FD2C156B6106747C6F
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_7;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager_PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_tEF8D01403D71D3E705766141604A6AFBE3DBFE3F* ___pointerConfigurations_8;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_tF2E1873ACFEC47880263EA85F4BE17D1832A1BAC * ___activePointersToConfig_10;

public:
	inline static int32_t get_offset_of_enablePointerCache_7() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B, ___enablePointerCache_7)); }
	inline bool get_enablePointerCache_7() const { return ___enablePointerCache_7; }
	inline bool* get_address_of_enablePointerCache_7() { return &___enablePointerCache_7; }
	inline void set_enablePointerCache_7(bool value)
	{
		___enablePointerCache_7 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_8() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B, ___pointerConfigurations_8)); }
	inline PointerConfigU5BU5D_tEF8D01403D71D3E705766141604A6AFBE3DBFE3F* get_pointerConfigurations_8() const { return ___pointerConfigurations_8; }
	inline PointerConfigU5BU5D_tEF8D01403D71D3E705766141604A6AFBE3DBFE3F** get_address_of_pointerConfigurations_8() { return &___pointerConfigurations_8; }
	inline void set_pointerConfigurations_8(PointerConfigU5BU5D_tEF8D01403D71D3E705766141604A6AFBE3DBFE3F* value)
	{
		___pointerConfigurations_8 = value;
		Il2CppCodeGenWriteBarrier((&___pointerConfigurations_8), value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_10() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B, ___activePointersToConfig_10)); }
	inline Dictionary_2_tF2E1873ACFEC47880263EA85F4BE17D1832A1BAC * get_activePointersToConfig_10() const { return ___activePointersToConfig_10; }
	inline Dictionary_2_tF2E1873ACFEC47880263EA85F4BE17D1832A1BAC ** get_address_of_activePointersToConfig_10() { return &___activePointersToConfig_10; }
	inline void set_activePointersToConfig_10(Dictionary_2_tF2E1873ACFEC47880263EA85F4BE17D1832A1BAC * value)
	{
		___activePointersToConfig_10 = value;
		Il2CppCodeGenWriteBarrier((&___activePointersToConfig_10), value);
	}
};

struct BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RequestPointersPerfMarker_9;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_9() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B_StaticFields, ___RequestPointersPerfMarker_9)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RequestPointersPerfMarker_9() const { return ___RequestPointersPerfMarker_9; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RequestPointersPerfMarker_9() { return &___RequestPointersPerfMarker_9; }
	inline void set_RequestPointersPerfMarker_9(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RequestPointersPerfMarker_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUTDEVICEMANAGER_T356B253FA33CF98FC7A39CEC5696B49114A67D7B_H
#ifndef MIXEDREALITYINPUTACTION_T6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_H
#define MIXEDREALITYINPUTACTION_T6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((&___description_2), value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};
#endif // MIXEDREALITYINPUTACTION_T6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_H
#ifndef FILESTREAM_TA770BF9AF0906644D43C81B962C7DBC3BC79A418_H
#define FILESTREAM_TA770BF9AF0906644D43C81B962C7DBC3BC79A418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((&___buf_6), value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((&___name_7), value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___safeHandle_8)); }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((&___safeHandle_8), value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((&___buf_recycle_4), value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___buf_recycle_lock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_TA770BF9AF0906644D43C81B962C7DBC3BC79A418_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
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
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#define SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifndef BASEMIXEDREALITYPROFILE_TBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23_H
#define BASEMIXEDREALITYPROFILE_TBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMIXEDREALITYPROFILE_TBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23_H
#ifndef INPUTRECORDINGSERVICE_T2A3FAB0CA3C17168D992745A3829F533256CA2B4_H
#define INPUTRECORDINGSERVICE_T2A3FAB0CA3C17168D992745A3829F533256CA2B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.InputRecordingService
struct  InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4  : public BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B
{
public:
	// System.Action Microsoft.MixedReality.Toolkit.Input.InputRecordingService::OnRecordingStarted
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnRecordingStarted_12;
	// System.Action Microsoft.MixedReality.Toolkit.Input.InputRecordingService::OnRecordingStopped
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnRecordingStopped_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::<IsEnabled>k__BackingField
	bool ___U3CIsEnabledU3Ek__BackingField_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::<IsRecording>k__BackingField
	bool ___U3CIsRecordingU3Ek__BackingField_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::useBufferTimeLimit
	bool ___useBufferTimeLimit_16;
	// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::recordingBufferTimeLimit
	float ___recordingBufferTimeLimit_17;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputRecordingService::recordingBuffer
	InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * ___recordingBuffer_18;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Input.InputRecordingService::unlimitedRecordingStartTime
	Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  ___unlimitedRecordingStartTime_19;

public:
	inline static int32_t get_offset_of_OnRecordingStarted_12() { return static_cast<int32_t>(offsetof(InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4, ___OnRecordingStarted_12)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnRecordingStarted_12() const { return ___OnRecordingStarted_12; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnRecordingStarted_12() { return &___OnRecordingStarted_12; }
	inline void set_OnRecordingStarted_12(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnRecordingStarted_12 = value;
		Il2CppCodeGenWriteBarrier((&___OnRecordingStarted_12), value);
	}

	inline static int32_t get_offset_of_OnRecordingStopped_13() { return static_cast<int32_t>(offsetof(InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4, ___OnRecordingStopped_13)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnRecordingStopped_13() const { return ___OnRecordingStopped_13; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnRecordingStopped_13() { return &___OnRecordingStopped_13; }
	inline void set_OnRecordingStopped_13(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnRecordingStopped_13 = value;
		Il2CppCodeGenWriteBarrier((&___OnRecordingStopped_13), value);
	}

	inline static int32_t get_offset_of_U3CIsEnabledU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4, ___U3CIsEnabledU3Ek__BackingField_14)); }
	inline bool get_U3CIsEnabledU3Ek__BackingField_14() const { return ___U3CIsEnabledU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsEnabledU3Ek__BackingField_14() { return &___U3CIsEnabledU3Ek__BackingField_14; }
	inline void set_U3CIsEnabledU3Ek__BackingField_14(bool value)
	{
		___U3CIsEnabledU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CIsRecordingU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4, ___U3CIsRecordingU3Ek__BackingField_15)); }
	inline bool get_U3CIsRecordingU3Ek__BackingField_15() const { return ___U3CIsRecordingU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CIsRecordingU3Ek__BackingField_15() { return &___U3CIsRecordingU3Ek__BackingField_15; }
	inline void set_U3CIsRecordingU3Ek__BackingField_15(bool value)
	{
		___U3CIsRecordingU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_useBufferTimeLimit_16() { return static_cast<int32_t>(offsetof(InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4, ___useBufferTimeLimit_16)); }
	inline bool get_useBufferTimeLimit_16() const { return ___useBufferTimeLimit_16; }
	inline bool* get_address_of_useBufferTimeLimit_16() { return &___useBufferTimeLimit_16; }
	inline void set_useBufferTimeLimit_16(bool value)
	{
		___useBufferTimeLimit_16 = value;
	}

	inline static int32_t get_offset_of_recordingBufferTimeLimit_17() { return static_cast<int32_t>(offsetof(InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4, ___recordingBufferTimeLimit_17)); }
	inline float get_recordingBufferTimeLimit_17() const { return ___recordingBufferTimeLimit_17; }
	inline float* get_address_of_recordingBufferTimeLimit_17() { return &___recordingBufferTimeLimit_17; }
	inline void set_recordingBufferTimeLimit_17(float value)
	{
		___recordingBufferTimeLimit_17 = value;
	}

	inline static int32_t get_offset_of_recordingBuffer_18() { return static_cast<int32_t>(offsetof(InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4, ___recordingBuffer_18)); }
	inline InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * get_recordingBuffer_18() const { return ___recordingBuffer_18; }
	inline InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 ** get_address_of_recordingBuffer_18() { return &___recordingBuffer_18; }
	inline void set_recordingBuffer_18(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * value)
	{
		___recordingBuffer_18 = value;
		Il2CppCodeGenWriteBarrier((&___recordingBuffer_18), value);
	}

	inline static int32_t get_offset_of_unlimitedRecordingStartTime_19() { return static_cast<int32_t>(offsetof(InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4, ___unlimitedRecordingStartTime_19)); }
	inline Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  get_unlimitedRecordingStartTime_19() const { return ___unlimitedRecordingStartTime_19; }
	inline Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * get_address_of_unlimitedRecordingStartTime_19() { return &___unlimitedRecordingStartTime_19; }
	inline void set_unlimitedRecordingStartTime_19(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  value)
	{
		___unlimitedRecordingStartTime_19 = value;
	}
};

struct InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputRecordingService::jointCount
	int32_t ___jointCount_11;

public:
	inline static int32_t get_offset_of_jointCount_11() { return static_cast<int32_t>(offsetof(InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4_StaticFields, ___jointCount_11)); }
	inline int32_t get_jointCount_11() const { return ___jointCount_11; }
	inline int32_t* get_address_of_jointCount_11() { return &___jointCount_11; }
	inline void set_jointCount_11(int32_t value)
	{
		___jointCount_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTRECORDINGSERVICE_T2A3FAB0CA3C17168D992745A3829F533256CA2B4_H
#ifndef MIXEDREALITYINTERACTIONMAPPING_TBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_H
#define MIXEDREALITYINTERACTIONMAPPING_TBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct  MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((&___description_1), value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___inputAction_4)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___inputAction_4 = value;
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((&___axisCodeX_6), value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((&___axisCodeY_7), value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((&___rawData_11), value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___vector2Data_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___positionData_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___rotationData_16)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___poseData_17)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___poseData_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYINTERACTIONMAPPING_TBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_H
#ifndef ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#define ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef MIXEDREALITYINPUTRECORDINGPROFILE_TB25C6C2FA23A4346932DEDD909390AED5BFFA938_H
#define MIXEDREALITYINPUTRECORDINGPROFILE_TB25C6C2FA23A4346932DEDD909390AED5BFFA938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile
struct  MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938  : public BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::jointPositionThreshold
	float ___jointPositionThreshold_5;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::jointRotationThreshold
	float ___jointRotationThreshold_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::cameraPositionThreshold
	float ___cameraPositionThreshold_7;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::cameraRotationThreshold
	float ___cameraRotationThreshold_8;

public:
	inline static int32_t get_offset_of_jointPositionThreshold_5() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938, ___jointPositionThreshold_5)); }
	inline float get_jointPositionThreshold_5() const { return ___jointPositionThreshold_5; }
	inline float* get_address_of_jointPositionThreshold_5() { return &___jointPositionThreshold_5; }
	inline void set_jointPositionThreshold_5(float value)
	{
		___jointPositionThreshold_5 = value;
	}

	inline static int32_t get_offset_of_jointRotationThreshold_6() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938, ___jointRotationThreshold_6)); }
	inline float get_jointRotationThreshold_6() const { return ___jointRotationThreshold_6; }
	inline float* get_address_of_jointRotationThreshold_6() { return &___jointRotationThreshold_6; }
	inline void set_jointRotationThreshold_6(float value)
	{
		___jointRotationThreshold_6 = value;
	}

	inline static int32_t get_offset_of_cameraPositionThreshold_7() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938, ___cameraPositionThreshold_7)); }
	inline float get_cameraPositionThreshold_7() const { return ___cameraPositionThreshold_7; }
	inline float* get_address_of_cameraPositionThreshold_7() { return &___cameraPositionThreshold_7; }
	inline void set_cameraPositionThreshold_7(float value)
	{
		___cameraPositionThreshold_7 = value;
	}

	inline static int32_t get_offset_of_cameraRotationThreshold_8() { return static_cast<int32_t>(offsetof(MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938, ___cameraRotationThreshold_8)); }
	inline float get_cameraRotationThreshold_8() const { return ___cameraRotationThreshold_8; }
	inline float* get_address_of_cameraRotationThreshold_8() { return &___cameraRotationThreshold_8; }
	inline void set_cameraRotationThreshold_8(float value)
	{
		___cameraRotationThreshold_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYINPUTRECORDINGPROFILE_TB25C6C2FA23A4346932DEDD909390AED5BFFA938_H
#ifndef CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#define CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  m_Items[1];

public:
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  value)
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * m_Items[1];

public:
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * m_Items[1];

public:
	inline MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m80B728B0F4A8176CF1F62C2768D31E6F7838B232_gshared (Dictionary_2_t0D7F3A50EB302696E4E5A19D582D99A8C7F70060 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3EF0DBAF5E4C36146DFEDFA38E652D8C27B7FDF3_gshared (Dictionary_2_t0D7F3A50EB302696E4E5A19D582D99A8C7F70060 * __this, int32_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB3D9D66F9CFB6CB7013F547768CAE89834974B8F_gshared (Dictionary_2_t0D7F3A50EB302696E4E5A19D582D99A8C7F70060 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Insert_m327E513FB78F72441BBF2756AFCC788F89A4FA52_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m3CAF82E0FF61CD84E251E0F7231BBB867C9755C2_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Values()
extern "C" IL2CPP_METHOD_ATTR ValueCollection_t3FD53D56DE3134B77455B3BF32328593D667229E * Dictionary_2_get_Values_m33E91C81EF8C83F36AC466DCB235F5ACC4F407BD_gshared (Dictionary_2_t0D7F3A50EB302696E4E5A19D582D99A8C7F70060 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t225915DBED7CDB584E014E8A5232FAB2E1B1BC54  ValueCollection_GetEnumerator_mF7CB18BD812665F670E89F45B87978097FB555B7_gshared (ValueCollection_t3FD53D56DE3134B77455B3BF32328593D667229E * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mF0AB2AFB065991420C7B0B50E02976D4AC664CAF_gshared (Enumerator_t225915DBED7CDB584E014E8A5232FAB2E1B1BC54 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCFA21FF8B5F4464B3BE981BC2BCCCCD2F5CF86B8_gshared (Enumerator_t225915DBED7CDB584E014E8A5232FAB2E1B1BC54 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7B17FC07F62A1CCA71871810AED4913E827D29EF_gshared (Enumerator_t225915DBED7CDB584E014E8A5232FAB2E1B1BC54 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Capacity_m5E67DE1CEC89ADB8A82937E2D0CB48A78F962FA3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
extern "C" IL2CPP_METHOD_ATTR void BaseDataProvider_1_set_Registrar_m4EA8B831F49F9267B0260831AAEE9E4F68B764C6_gshared (BaseDataProvider_1_tB988343BFD94F876141BBD8CA84993978D8E498B * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_gshared (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, float p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_gshared (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::get_Value()
extern "C" IL2CPP_METHOD_ATTR float Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_gshared (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);

// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::get_Count()
inline int32_t List_1_get_Count_m9660D9652127B41D761DBF34E5359CAEF030AFEF (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mA12B39D1FD275B9A8150227B24805C7B218CDF2C (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::.ctor()
inline void Dictionary_2__ctor_m92512E68CA898C9A2D7CD673E7C13659D91F6E26 (Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 *, const RuntimeMethod*))Dictionary_2__ctor_m80B728B0F4A8176CF1F62C2768D31E6F7838B232_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PoseCurves__ctor_m5C84AAF7123F5FEF488B2C0F85C2B89EC6301514 (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::.ctor()
inline void List_1__ctor_m59FF5E3E8F5181A3C636EFF4F7958C580B3B154A (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A (Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * __this, int32_t p0, PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 *, int32_t, PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3EF0DBAF5E4C36146DFEDFA38E652D8C27B7FDF3_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::Add(!0,!1)
inline void Dictionary_2_Add_m90B7F3B9A7E3B2556BD57EBF11AE237A9DEDA9C2 (Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * __this, int32_t p0, PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 *, int32_t, PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 *, const RuntimeMethod*))Dictionary_2_Add_mB3D9D66F9CFB6CB7013F547768CAE89834974B8F_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddHandStateKey(System.Single,System.Boolean,System.Boolean,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddHandStateKey_m92FF52B5974A27A51A8B8D476342B6490B5906D9 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, bool ___isTracked1, bool ___isPinching2, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___trackedCurve3, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___pinchCurve4, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddHandJointKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddHandJointKey_m08E825C860930CDE843203504ADF22641E8FC787 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, int32_t ___joint1, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___jointPose2, Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * ___jointCurves3, float ___positionThreshold4, float ___rotationThreshold5, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddBoolKeyFiltered(UnityEngine.AnimationCurve,System.Single,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t InputAnimation_AddBoolKeyFiltered_mF03D2B987F447EA01520980BF80C02CA48DA18EF (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve0, float ___time1, bool ___value2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float p0, float p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddPoseKeyFiltered(Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Single,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddPoseKeyFiltered_m5A4B405C7F7E108AE2E42597B2CD2F542C6FEDC0 (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * ___curves0, float ___time1, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___pose2, float ___positionThreshold3, float ___rotationThreshold4, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318 (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddFloatKey(UnityEngine.AnimationCurve,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t InputAnimation_AddFloatKey_m064050F265BFAD4A351A38FFDA5C59612110766B (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve0, float ___time1, float ___value2, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityPose_get_Rotation_mC33B3728AA49661EBD3CB4594F9D955F3B6F4723 (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddPositionKeyFiltered(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Single,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddPositionKeyFiltered_m33D6A58CD6FFA465153ACF6A208D5C6E4EF15784 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curveX0, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curveY1, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curveZ2, float ___time3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position4, float ___threshold5, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddRotationKeyFiltered(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Single,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddRotationKeyFiltered_m9916B87DEDE6AA0835FDE40EA9D582FFE1441189 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curveX0, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curveY1, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curveZ2, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curveW3, float ___time4, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation5, float ___threshold6, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::FindKeyframeInterval(UnityEngine.AnimationCurve,System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t InputAnimation_FindKeyframeInterval_m960E471BC65D916A9B0B60D88178E673804413D5 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve0, float ___time1, const RuntimeMethod* method);
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C" IL2CPP_METHOD_ATTR KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_value()
extern "C" IL2CPP_METHOD_ATTR float Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::RemoveKey(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AnimationCurve_RemoveKey_m25D7337353EE1BE94799C156BEDC8D971B1A1F13 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::ToAngleAxis(System.Single&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Quaternion_ToAngleAxis_m36E8C06D2D508B5BA5DE9CFBAD252989918D8813 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, float* p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Keyframe__ctor_m31FB31F66F8FD0D752021113588C06BBAB065CE0 (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, float p0, float p1, float p2, float p3, float p4, float p5, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_weightedMode(UnityEngine.WeightedMode)
extern "C" IL2CPP_METHOD_ATTR void Keyframe_set_weightedMode_m95923B248E6E9947136A115AF240F8C3A3CBC399 (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::AddKey(UnityEngine.Keyframe)
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationCurve_AddKey_mBF33163D92DCC0BC0A10D2308038A8D49750E961 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::MoveKey(System.Int32,UnityEngine.Keyframe)
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationCurve_MoveKey_m20405AA535659CAAC9BC1B100301C5BD76201735 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, int32_t p0, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve> Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_AnimationCurves()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* InputAnimation_get_AnimationCurves_m696C63C6C376A90CF6E1AC33F715E05370ED3E21 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::CutoffBeforeTime(UnityEngine.AnimationCurve,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_CutoffBeforeTime_mF34905951FE5E1316756302D617291EFFDF57ED4 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve0, float ___time1, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_keys(UnityEngine.Keyframe[])
extern "C" IL2CPP_METHOD_ATTR void AnimationCurve_set_keys_m3AA5ED7D9B0D9BCBCD349355160810B2DF939096 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable::.ctor(Microsoft.MixedReality.Toolkit.Input.InputAnimation)
extern "C" IL2CPP_METHOD_ATTR void AnimationCurveEnumerable__ctor_mA70D933CAA0605E4348127757AC97A04EEA27106 (AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * __this, InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * ___animation0, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_time()
extern "C" IL2CPP_METHOD_ATTR float Keyframe_get_time_m5A49381A903E63DD63EF8A381BA26C1A2DEF935D (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::FindMarkerInterval(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t InputAnimation_FindMarkerInterval_m6AE0085BB3A6F92BE9583ADBF779A7290676E859 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::Insert(System.Int32,!0)
inline void List_1_Insert_mAA1ADC7F12F17010AD1C08D4C1AE94E7A3BDD4FD (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * __this, int32_t p0, InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 *, int32_t, InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 *, const RuntimeMethod*))List_1_Insert_m327E513FB78F72441BBF2756AFCC788F89A4FA52_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m4C40F836269AC480B7C6F060BA584BAE6A561BCC (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m3CAF82E0FF61CD84E251E0F7231BBB867C9755C2_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::get_Item(System.Int32)
inline InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * List_1_get_Item_m357203A6C8DC2CEE68D51DBDA4854A987592F217 (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * (*) (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandState(System.Single,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Boolean&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_EvaluateHandState_mF48233CD68C2DC8D8CFA75500B1ECD17009186B9 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___trackedCurve1, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___pinchCurve2, bool* ___isTracked3, bool* ___isPinching4, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, float p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandJoint(System.Single,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>)
extern "C" IL2CPP_METHOD_ATTR MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  InputAnimation_EvaluateHandJoint_m0869660694B5A969767C56F811D210EDD646F2FF (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, int32_t ___joint1, Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * ___jointCurves2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
extern "C" IL2CPP_METHOD_ATTR MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluatePose(Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Single)
extern "C" IL2CPP_METHOD_ATTR MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  InputAnimation_EvaluatePose_m078E3BBD6471D6BA70C96D34B573D724BACBBFD9 (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * ___curves0, float ___time1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_mDC7B6E71466E46635F9A73B5B1D02F6EB00E7F6D (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m1CEB8B06A88D3471B078233EC7409E652604A2C6 (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::Normalize()
extern "C" IL2CPP_METHOD_ATTR void Quaternion_Normalize_mBCDF17FADBC3CB896F52D7DC9C1A83FA4890B158 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_m36B9D49BCB7D677C38A7963FF00313A2E48E7B26 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, const RuntimeMethod* method);
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void BinaryWriter__ctor_m2E92F4E5096905E2E7487E003AB7B3CC5C5EC185 (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteHeader(System.IO.BinaryWriter)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteHeader_mF99610FD654096D888E27B8878CB0A8EDB9F091E (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::PoseCurvesToStream(System.IO.BinaryWriter,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_PoseCurvesToStream_mA526F07A7A8F89FB31A2EA0CF16CDE4E3410E6BB (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * ___curves1, float ___startTime2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteBoolCurve(System.IO.BinaryWriter,UnityEngine.AnimationCurve,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteBoolCurve_mE6B858EF75394182F0CF5D006D2D7E07472D8CAA (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve1, float ___startTime2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteMarkerList(System.IO.BinaryWriter,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteMarkerList_m88C80BC53B538384BCDA521B4DD667DABA7E7343 (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * ___markers1, float ___startTime2, const RuntimeMethod* method);
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadHeader(System.IO.BinaryReader,System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadHeader_m80601186DB739CF56DA5711215A3F3AD003C4747 (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader0, int32_t* ___fileVersionMajor1, int32_t* ___fileVersionMinor2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::PoseCurvesFromStream(System.IO.BinaryReader,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_PoseCurvesFromStream_m055C729EF6356173E9E9A9A0947CC76BA51E7568 (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader0, PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * ___curves1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadBoolCurve(System.IO.BinaryReader,UnityEngine.AnimationCurve)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadBoolCurve_m50760053F50E3662368AABD7DF636173FB72E6EC (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader0, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadMarkerList(System.IO.BinaryReader,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadMarkerList_m2AE74ACACD5F7FCA66D623AA427E4EC8B2C41AD2 (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader0, List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * ___markers1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::ComputeDuration()
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_ComputeDuration_m856B555BF30D567E2D0EC87CEF344B6056232227 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteFloatCurve(System.IO.BinaryWriter,UnityEngine.AnimationCurve,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteFloatCurve_mED510F307A43B6027213F2A92B54FDF98A9F5CD4 (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve1, float ___startTime2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadFloatCurve(System.IO.BinaryReader,UnityEngine.AnimationCurve)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadFloatCurve_mA4953EB4C19CF3896F7A064DA15EF828AD25B825 (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader0, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.String[] System.Enum::GetNames(System.Type)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C (Type_t * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m08F2971492DDAC7288FF610335404E43D6E6EE8C (U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve> Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AnimationCurveEnumerable_GetEnumerator_m8F5700FFDDBBE6DE44B916CD9AC59FA539EB3AB5 (AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::<>m__Finally1()
extern "C" IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally1_m316D89FEB42609EA2FDCDE30240AB56A2AED0F6E (U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::<>m__Finally2()
extern "C" IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally2_m1DF8D07C3C90361825C9359A8550B9EA1BD3149B (U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::get_Values()
inline ValueCollection_t3581AC8A87D864C9D02B7C8D1B2CD52CB751696E * Dictionary_2_get_Values_m69FF2FC7A53C9BD649B4B884C813AA0802D2242D (Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t3581AC8A87D864C9D02B7C8D1B2CD52CB751696E * (*) (Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 *, const RuntimeMethod*))Dictionary_2_get_Values_m33E91C81EF8C83F36AC466DCB235F5ACC4F407BD_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::GetEnumerator()
inline Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD  ValueCollection_GetEnumerator_m3A4B41130EE76484F813ECC14382309AD4E73EFF (ValueCollection_t3581AC8A87D864C9D02B7C8D1B2CD52CB751696E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD  (*) (ValueCollection_t3581AC8A87D864C9D02B7C8D1B2CD52CB751696E *, const RuntimeMethod*))ValueCollection_GetEnumerator_mF7CB18BD812665F670E89F45B87978097FB555B7_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::get_Current()
inline PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * Enumerator_get_Current_mB80CD1573C11A0554AA097BD5D10534D5344C93A (Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD * __this, const RuntimeMethod* method)
{
	return ((  PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * (*) (Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD *, const RuntimeMethod*))Enumerator_get_Current_mF0AB2AFB065991420C7B0B50E02976D4AC664CAF_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::MoveNext()
inline bool Enumerator_MoveNext_m59956644717D1199FE7EA597DF14A9A6514F4AD4 (Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD *, const RuntimeMethod*))Enumerator_MoveNext_mCFA21FF8B5F4464B3BE981BC2BCCCCD2F5CF86B8_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation/AnimationCurveEnumerable/<GetEnumerator>d__2::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m91ED6D7FEFFA40E13E9C4DC516B920B808C5F5EA (U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>::Dispose()
inline void Enumerator_Dispose_mB2F7C3456A1775CA1F13D14771F5C9C656B37FAB (Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD *, const RuntimeMethod*))Enumerator_Dispose_m7B17FC07F62A1CCA71871810AED4913E827D29EF_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Int32 System.Single::CompareTo(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Single_CompareTo_mFBF2345D81E00F834E558A4ACFD4E5137582DBBC (float* __this, float p0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
extern "C" IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1 (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m203C5710CD7AB2F5F1B2D9DA1DFD45BB3774179A (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.WrapMode UnityEngine.AnimationCurve::get_preWrapMode()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_preWrapMode_m3C0DBEEB450ED8FB3FE96C7E1295B8C3562F8905 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, const RuntimeMethod* method);
// UnityEngine.WrapMode UnityEngine.AnimationCurve::get_postWrapMode()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_postWrapMode_m1D9CF9570C4054057C97CDA03773A76C0813CF64 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_inTangent()
extern "C" IL2CPP_METHOD_ATTR float Keyframe_get_inTangent_mE19351A6720331D0D01C299ED6480780B20CB8E0 (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_outTangent()
extern "C" IL2CPP_METHOD_ATTR float Keyframe_get_outTangent_mF1B82FA2B7E060906B77CEAF229516D69789BEAE (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_inWeight()
extern "C" IL2CPP_METHOD_ATTR float Keyframe_get_inWeight_mA91CF48B93838442D74A494E752BFF31D513F330 (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_outWeight()
extern "C" IL2CPP_METHOD_ATTR float Keyframe_get_outWeight_mB04C5E41E3153309BF6A758C97B92DF7D138C8FD (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, const RuntimeMethod* method);
// UnityEngine.WeightedMode UnityEngine.Keyframe::get_weightedMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Keyframe_get_weightedMode_mFF562D4B06BCF6A65135C337D6F10BF1C4F3E14D (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
extern "C" IL2CPP_METHOD_ATTR void AnimationCurve_set_preWrapMode_mFE146DFCE1E335655A079DCE6E8F046BD63A6489 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
extern "C" IL2CPP_METHOD_ATTR void AnimationCurve_set_postWrapMode_mF11FF01671DFC6E54D29111561B8C7104DCEB413 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_time(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Keyframe_set_time_mAD4CA2282CD1B7C1D330C3EE75F79AD636C7FC83 (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_value(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Keyframe_set_value_m578277371F57893D5FF121710CF016A52302652E (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_inTangent(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Keyframe_set_inTangent_mAA19EC59A3F6D360310D2F6B765359A069F8058E (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_outTangent(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Keyframe_set_outTangent_mDEEA8549F31FA0AAC090B2D6D7E15C42D3CAE90B (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_inWeight(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Keyframe_set_inWeight_mF68241AD54E4200C34274E0031E16A717ECAD65D (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::set_outWeight(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Keyframe_set_outWeight_m2C3ABDDE724970E519E48358687880FFFDE6288F (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * __this, float p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::GetEnumerator()
inline Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E  List_1_GetEnumerator_mC9034EAB7FECA8B62883FADB2B97E928A3F28571 (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E  (*) (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::get_Current()
inline InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * Enumerator_get_Current_m1716C38467B81980A598F8050EF5D5C6270C57F5 (Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E * __this, const RuntimeMethod* method)
{
	return ((  InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * (*) (Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::MoveNext()
inline bool Enumerator_MoveNext_mCF433AF8333ACAF087A9987DC238A5F47159FCD5 (Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::Dispose()
inline void Enumerator_Dispose_m7FFD43E309A2011AD1A00EADB7895454437977B2 (Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::Clear()
inline void List_1_Clear_mA255E5A83D07CFE46042354A3A430392ADDC69A7 (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m5993C6D98EC2CE4D753F72519771D5B5AAE034F8 (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m5E67DE1CEC89ADB8A82937E2D0CB48A78F962FA3_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InputAnimationMarker__ctor_mBA9692B6AACFDB9E38B103D1131562097C6A4D32 (InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>::Add(!0)
inline void List_1_Add_m206389017799A262D8D25B96003D913CA58AD59E (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * __this, InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 *, InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService__ctor_m52FA4810C35FE21A97C748B357735B040903299C (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
inline void BaseDataProvider_1_set_Registrar_m3822A19991F40A2E0F2E7D1A11C7643DCBC643AC (BaseDataProvider_1_t8C3B933A708BE562C4BDC1FD2C156B6106747C6F * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (BaseDataProvider_1_t8C3B933A708BE562C4BDC1FD2C156B6106747C6F *, RuntimeObject*, const RuntimeMethod*))BaseDataProvider_1_set_Registrar_m4EA8B831F49F9267B0260831AAEE9E4F68B764C6_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
extern "C" IL2CPP_METHOD_ATTR void BaseInputDeviceManager__ctor_mC1D32C720A7299C03AA4AC7FAECC901F8EB496C4 (BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B * __this, RuntimeObject* p0, String_t* p1, uint32_t p2, BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * p3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_StartTime()
extern "C" IL2CPP_METHOD_ATTR float InputRecordingService_get_StartTime_mEA9D822729F3AD6BAE981EA48C67FBD6BCF22CB4 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
inline void Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, float p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *, float, const RuntimeMethod*))Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::PruneBuffer()
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_PruneBuffer_mF88F3D8F547A9966E8A7F0B2DF5039D65499A1E0 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88 (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *, const RuntimeMethod*))Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_gshared)(__this, method);
}
// !0 System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9 (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *, const RuntimeMethod*))Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_IsRecording()
extern "C" IL2CPP_METHOD_ATTR bool InputRecordingService_get_IsRecording_m072930E5ED31D435F3831D00D8EE9DA2833B8420 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_IsEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_set_IsEnabled_m81E3455C41452834F454162AA598DB1818EE8A40 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InputAnimation__ctor_m3F865B984BC134035E018E424CDA97E144F0F9D1 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::ResetStartTime()
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_ResetStartTime_mB347BAD39248483F400882D199A54E7514EDB5CC (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_IsRecording(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_set_IsRecording_mB1CA677DBDEC356C118E8AFFDC0EEE436525FDD9 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_UseBufferTimeLimit()
extern "C" IL2CPP_METHOD_ATTR bool InputRecordingService_get_UseBufferTimeLimit_m52C661AF87691B4A9150B9B08D2D762D00AFF194 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_IsEnabled()
extern "C" IL2CPP_METHOD_ATTR bool InputRecordingService_get_IsEnabled_m8A182F68AE0086E4AE33DA3E88BE1FE8E041A89E (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::RecordKeyframe()
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_RecordKeyframe_mCBCAEF9D03FF64D86DBB5F8BEDE3CD67CA600B46 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::Clear()
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_Clear_m1BC29C06CDEC1CB9FDAAAAF140C4F443659C5BDF (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_InputRecordingProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * InputRecordingService_get_InputRecordingProfile_m135857BF9212B532C0BED576B65F57D57C0C34E6 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::RecordInputHandData(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR bool InputRecordingService_RecordInputHandData_m79F3873485C42DD0D3CA964B8343A813F5229530 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
extern "C" IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityPose__ctor_m88F006560E2E857FD0E8362B3CE4E4FE57AACA0B (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_CameraPositionThreshold()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraPositionThreshold_mCF9DC6994CC9D6C11B9AE5B9560F3399400E0F5F (MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_CameraRotationThreshold()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraRotationThreshold_m3E7C7770D0CB1411EE465E080CF97BBF7AABB345 (MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddCameraPoseKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddCameraPoseKey_mB15BCFBF35157EED7BEBFB5A11740BAD5BC1F51C (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___cameraPose1, float ___positionThreshold2, float ___rotationThreshold3, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand Microsoft.MixedReality.Toolkit.Input.HandJointUtils::FindHand(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* HandJointUtils_FindHand_mB95BDFAA144BFA936D0D44365BF1578C710266C3 (uint8_t p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddHandStateKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddHandStateKey_m86AF42949A107FE9666DF184B49B281E98990A05 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, uint8_t ___handedness1, bool ___isTracked2, bool ___isPinching3, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m6FB17C3592ED0C62594C5FD9664BDD3C38149411 (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m61EB4EE67167224A146BB32011E10545E5B9E814 (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method);
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
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_JointPositionThreshold()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointPositionThreshold_m3CB74ADA1317E98697E738CF88D15CE34FFAD90D (MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_JointRotationThreshold()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointRotationThreshold_m27494360E4DF7AE0A6EE8DDA2349453C60E2BE69 (MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddHandJointKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddHandJointKey_mEC5B950CA0C0454AFF75C654CCB587D2EFC2EF25 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, uint8_t ___handedness1, int32_t ___joint2, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___jointPose3, float ___positionThreshold4, float ___rotationThreshold5, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::GetOutputFilename(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* InputAnimationSerializationUtils_GetOutputFilename_mB10168E8921AAF465829FD4102258316F4A4614F (String_t* ___baseName0, bool ___appendTimestamp1, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.InputRecordingService::SaveInputAnimation(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* InputRecordingService_SaveInputAnimation_m2A7E122A27D69DEDCB2B83C49DD476833409A733 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, String_t* ___filename0, String_t* ___directory1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
extern "C" IL2CPP_METHOD_ATTR FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * File_Open_mDA5EB4A312EAEBF8543B13C572271FB5F673A501 (String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::ToStream(System.IO.Stream,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_ToStream_m30A985C695CC60F01F20F99C4199C7EA23AB72DF (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, float ___startTime1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::CutoffBeforeTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_CutoffBeforeTime_mF63F80F2119882ECC144BD8204776CDEAB0FFBDA (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_m1BFB72419034F7679C354C2AAA05A99EC8A27104 (BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * __this, const RuntimeMethod* method);
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
// System.Single Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_Duration()
extern "C" IL2CPP_METHOD_ATTR float InputAnimation_get_Duration_m4F00DDD7B278F61E2B1D5B3482AF9CDF1C5E3C9A (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, const RuntimeMethod* method)
{
	{
		// public float Duration => duration;
		float L_0 = __this->get_duration_1();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_CameraCurves()
extern "C" IL2CPP_METHOD_ATTR PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * InputAnimation_get_CameraCurves_m6A464C744BED139DF29280D3B6B86015647F4B08 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, const RuntimeMethod* method)
{
	{
		// public PoseCurves CameraCurves => cameraCurves;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_0 = __this->get_cameraCurves_8();
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_markerCount()
extern "C" IL2CPP_METHOD_ATTR int32_t InputAnimation_get_markerCount_m18F2F2FA692CEFE3899394EE5D6A65E5B07CED04 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_get_markerCount_m18F2F2FA692CEFE3899394EE5D6A65E5B07CED04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int markerCount => markers.Count;
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_0 = __this->get_markers_9();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m9660D9652127B41D761DBF34E5359CAEF030AFEF(L_0, /*hidden argument*/List_1_get_Count_m9660D9652127B41D761DBF34E5359CAEF030AFEF_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InputAnimation__ctor_m3F865B984BC134035E018E424CDA97E144F0F9D1 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation__ctor_m3F865B984BC134035E018E424CDA97E144F0F9D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InputAnimation()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// handTrackedCurveLeft = new AnimationCurve();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_0 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mA12B39D1FD275B9A8150227B24805C7B218CDF2C(L_0, /*hidden argument*/NULL);
		__this->set_handTrackedCurveLeft_2(L_0);
		// handTrackedCurveRight = new AnimationCurve();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_1 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mA12B39D1FD275B9A8150227B24805C7B218CDF2C(L_1, /*hidden argument*/NULL);
		__this->set_handTrackedCurveRight_3(L_1);
		// handPinchCurveLeft = new AnimationCurve();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_2 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mA12B39D1FD275B9A8150227B24805C7B218CDF2C(L_2, /*hidden argument*/NULL);
		__this->set_handPinchCurveLeft_4(L_2);
		// handPinchCurveRight = new AnimationCurve();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_3 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mA12B39D1FD275B9A8150227B24805C7B218CDF2C(L_3, /*hidden argument*/NULL);
		__this->set_handPinchCurveRight_5(L_3);
		// handJointCurvesLeft = new Dictionary<TrackedHandJoint, PoseCurves>();
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_4 = (Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 *)il2cpp_codegen_object_new(Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m92512E68CA898C9A2D7CD673E7C13659D91F6E26(L_4, /*hidden argument*/Dictionary_2__ctor_m92512E68CA898C9A2D7CD673E7C13659D91F6E26_RuntimeMethod_var);
		__this->set_handJointCurvesLeft_6(L_4);
		// handJointCurvesRight = new Dictionary<TrackedHandJoint, PoseCurves>();
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_5 = (Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 *)il2cpp_codegen_object_new(Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m92512E68CA898C9A2D7CD673E7C13659D91F6E26(L_5, /*hidden argument*/Dictionary_2__ctor_m92512E68CA898C9A2D7CD673E7C13659D91F6E26_RuntimeMethod_var);
		__this->set_handJointCurvesRight_7(L_5);
		// cameraCurves = new PoseCurves();
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_6 = (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 *)il2cpp_codegen_object_new(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529_il2cpp_TypeInfo_var);
		PoseCurves__ctor_m5C84AAF7123F5FEF488B2C0F85C2B89EC6301514(L_6, /*hidden argument*/NULL);
		__this->set_cameraCurves_8(L_6);
		// markers = new List<InputAnimationMarker>();
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_7 = (List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 *)il2cpp_codegen_object_new(List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1_il2cpp_TypeInfo_var);
		List_1__ctor_m59FF5E3E8F5181A3C636EFF4F7958C580B3B154A(L_7, /*hidden argument*/List_1__ctor_m59FF5E3E8F5181A3C636EFF4F7958C580B3B154A_RuntimeMethod_var);
		__this->set_markers_9(L_7);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation::TryGetHandJointCurves(Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurvesU26)
extern "C" IL2CPP_METHOD_ATTR bool InputAnimation_TryGetHandJointCurves_mCC77E460C287906321450324E4469F55CBE19531 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, uint8_t ___handedness0, int32_t ___joint1, PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 ** ___curves2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_TryGetHandJointCurves_mCC77E460C287906321450324E4469F55CBE19531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handedness == Handedness.Left)
		uint8_t L_0 = ___handedness0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		// return handJointCurvesLeft.TryGetValue(joint, out curves);
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_1 = __this->get_handJointCurvesLeft_6();
		int32_t L_2 = ___joint1;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 ** L_3 = ___curves2;
		NullCheck(L_1);
		bool L_4 = Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A(L_1, L_2, (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 **)L_3, /*hidden argument*/Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A_RuntimeMethod_var);
		return L_4;
	}

IL_0012:
	{
		// else if (handedness == Handedness.Right)
		uint8_t L_5 = ___handedness0;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		// return handJointCurvesRight.TryGetValue(joint, out curves);
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_6 = __this->get_handJointCurvesRight_7();
		int32_t L_7 = ___joint1;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 ** L_8 = ___curves2;
		NullCheck(L_6);
		bool L_9 = Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A(L_6, L_7, (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 **)L_8, /*hidden argument*/Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A_RuntimeMethod_var);
		return L_9;
	}

IL_0024:
	{
		// curves = null;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 ** L_10 = ___curves2;
		*((RuntimeObject **)L_10) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_10, (RuntimeObject *)NULL);
		// return false;
		return (bool)0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves Microsoft.MixedReality.Toolkit.Input.InputAnimation::CreateHandJointCurves(Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
extern "C" IL2CPP_METHOD_ATTR PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * InputAnimation_CreateHandJointCurves_m27A4DBD239F96E6CE676F37D643D5011A5866D43 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, uint8_t ___handedness0, int32_t ___joint1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_CreateHandJointCurves_m27A4DBD239F96E6CE676F37D643D5011A5866D43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * V_0 = NULL;
	PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * V_1 = NULL;
	{
		// if (handedness == Handedness.Left)
		uint8_t L_0 = ___handedness0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}
	{
		// if (!handJointCurvesLeft.TryGetValue(joint, out PoseCurves curves))
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_1 = __this->get_handJointCurvesLeft_6();
		int32_t L_2 = ___joint1;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A(L_1, L_2, (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		// curves = new PoseCurves();
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_4 = (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 *)il2cpp_codegen_object_new(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529_il2cpp_TypeInfo_var);
		PoseCurves__ctor_m5C84AAF7123F5FEF488B2C0F85C2B89EC6301514(L_4, /*hidden argument*/NULL);
		V_0 = L_4;
		// handJointCurvesLeft.Add(joint, curves);
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_5 = __this->get_handJointCurvesLeft_6();
		int32_t L_6 = ___joint1;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_7 = V_0;
		NullCheck(L_5);
		Dictionary_2_Add_m90B7F3B9A7E3B2556BD57EBF11AE237A9DEDA9C2(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_Add_m90B7F3B9A7E3B2556BD57EBF11AE237A9DEDA9C2_RuntimeMethod_var);
	}

IL_0027:
	{
		// return curves;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_8 = V_0;
		return L_8;
	}

IL_0029:
	{
		// else if (handedness == Handedness.Right)
		uint8_t L_9 = ___handedness0;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0052;
		}
	}
	{
		// if (!handJointCurvesRight.TryGetValue(joint, out PoseCurves curves))
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_10 = __this->get_handJointCurvesRight_7();
		int32_t L_11 = ___joint1;
		NullCheck(L_10);
		bool L_12 = Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A(L_10, L_11, (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0050;
		}
	}
	{
		// curves = new PoseCurves();
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_13 = (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 *)il2cpp_codegen_object_new(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529_il2cpp_TypeInfo_var);
		PoseCurves__ctor_m5C84AAF7123F5FEF488B2C0F85C2B89EC6301514(L_13, /*hidden argument*/NULL);
		V_1 = L_13;
		// handJointCurvesRight.Add(joint, curves);
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_14 = __this->get_handJointCurvesRight_7();
		int32_t L_15 = ___joint1;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_16 = V_1;
		NullCheck(L_14);
		Dictionary_2_Add_m90B7F3B9A7E3B2556BD57EBF11AE237A9DEDA9C2(L_14, L_15, L_16, /*hidden argument*/Dictionary_2_Add_m90B7F3B9A7E3B2556BD57EBF11AE237A9DEDA9C2_RuntimeMethod_var);
	}

IL_0050:
	{
		// return curves;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_17 = V_1;
		return L_17;
	}

IL_0052:
	{
		// return null;
		return (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 *)NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddHandStateKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddHandStateKey_m86AF42949A107FE9666DF184B49B281E98990A05 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, uint8_t ___handedness1, bool ___isTracked2, bool ___isPinching3, const RuntimeMethod* method)
{
	{
		// if (handedness == Handedness.Left)
		uint8_t L_0 = ___handedness1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001b;
		}
	}
	{
		// AddHandStateKey(time, isTracked, isPinching, handTrackedCurveLeft, handPinchCurveLeft);
		float L_1 = ___time0;
		bool L_2 = ___isTracked2;
		bool L_3 = ___isPinching3;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_4 = __this->get_handTrackedCurveLeft_2();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_5 = __this->get_handPinchCurveLeft_4();
		InputAnimation_AddHandStateKey_m92FF52B5974A27A51A8B8D476342B6490B5906D9(__this, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001b:
	{
		// else if (handedness == Handedness.Right)
		uint8_t L_6 = ___handedness1;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0035;
		}
	}
	{
		// AddHandStateKey(time, isTracked, isPinching, handTrackedCurveRight, handPinchCurveRight);
		float L_7 = ___time0;
		bool L_8 = ___isTracked2;
		bool L_9 = ___isPinching3;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_10 = __this->get_handTrackedCurveRight_3();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_11 = __this->get_handPinchCurveRight_5();
		InputAnimation_AddHandStateKey_m92FF52B5974A27A51A8B8D476342B6490B5906D9(__this, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddHandJointKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddHandJointKey_mEC5B950CA0C0454AFF75C654CCB587D2EFC2EF25 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, uint8_t ___handedness1, int32_t ___joint2, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___jointPose3, float ___positionThreshold4, float ___rotationThreshold5, const RuntimeMethod* method)
{
	{
		// if (handedness == Handedness.Left)
		uint8_t L_0 = ___handedness1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		// AddHandJointKey(time, joint, jointPose, handJointCurvesLeft, positionThreshold, rotationThreshold);
		float L_1 = ___time0;
		int32_t L_2 = ___joint2;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_3 = ___jointPose3;
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_4 = __this->get_handJointCurvesLeft_6();
		float L_5 = ___positionThreshold4;
		float L_6 = ___rotationThreshold5;
		InputAnimation_AddHandJointKey_m08E825C860930CDE843203504ADF22641E8FC787(__this, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0019:
	{
		// else if (handedness == Handedness.Right)
		uint8_t L_7 = ___handedness1;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0031;
		}
	}
	{
		// AddHandJointKey(time, joint, jointPose, handJointCurvesRight, positionThreshold, rotationThreshold);
		float L_8 = ___time0;
		int32_t L_9 = ___joint2;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_10 = ___jointPose3;
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_11 = __this->get_handJointCurvesRight_7();
		float L_12 = ___positionThreshold4;
		float L_13 = ___rotationThreshold5;
		InputAnimation_AddHandJointKey_m08E825C860930CDE843203504ADF22641E8FC787(__this, L_8, L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddHandStateKey(System.Single,System.Boolean,System.Boolean,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddHandStateKey_m92FF52B5974A27A51A8B8D476342B6490B5906D9 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, bool ___isTracked1, bool ___isPinching2, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___trackedCurve3, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___pinchCurve4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_AddHandStateKey_m92FF52B5974A27A51A8B8D476342B6490B5906D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddBoolKeyFiltered(trackedCurve, time, isTracked);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_0 = ___trackedCurve3;
		float L_1 = ___time0;
		bool L_2 = ___isTracked1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		InputAnimation_AddBoolKeyFiltered_mF03D2B987F447EA01520980BF80C02CA48DA18EF(L_0, L_1, L_2, /*hidden argument*/NULL);
		// AddBoolKeyFiltered(pinchCurve, time, isPinching);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_3 = ___pinchCurve4;
		float L_4 = ___time0;
		bool L_5 = ___isPinching2;
		InputAnimation_AddBoolKeyFiltered_mF03D2B987F447EA01520980BF80C02CA48DA18EF(L_3, L_4, L_5, /*hidden argument*/NULL);
		// duration = Mathf.Max(duration, time);
		float L_6 = __this->get_duration_1();
		float L_7 = ___time0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_8 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_6, L_7, /*hidden argument*/NULL);
		__this->set_duration_1(L_8);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddHandJointKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves>,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddHandJointKey_m08E825C860930CDE843203504ADF22641E8FC787 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, int32_t ___joint1, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___jointPose2, Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * ___jointCurves3, float ___positionThreshold4, float ___rotationThreshold5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_AddHandJointKey_m08E825C860930CDE843203504ADF22641E8FC787_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * V_0 = NULL;
	{
		// if (!jointCurves.TryGetValue(joint, out PoseCurves curves))
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_0 = ___jointCurves3;
		int32_t L_1 = ___joint1;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A(L_0, L_1, (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// curves = new PoseCurves();
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_3 = (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 *)il2cpp_codegen_object_new(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529_il2cpp_TypeInfo_var);
		PoseCurves__ctor_m5C84AAF7123F5FEF488B2C0F85C2B89EC6301514(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		// jointCurves.Add(joint, curves);
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_4 = ___jointCurves3;
		int32_t L_5 = ___joint1;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_6 = V_0;
		NullCheck(L_4);
		Dictionary_2_Add_m90B7F3B9A7E3B2556BD57EBF11AE237A9DEDA9C2(L_4, L_5, L_6, /*hidden argument*/Dictionary_2_Add_m90B7F3B9A7E3B2556BD57EBF11AE237A9DEDA9C2_RuntimeMethod_var);
	}

IL_001b:
	{
		// AddPoseKeyFiltered(curves, time, jointPose, positionThreshold, rotationThreshold);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_7 = V_0;
		float L_8 = ___time0;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_9 = ___jointPose2;
		float L_10 = ___positionThreshold4;
		float L_11 = ___rotationThreshold5;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		InputAnimation_AddPoseKeyFiltered_m5A4B405C7F7E108AE2E42597B2CD2F542C6FEDC0(L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		// duration = Mathf.Max(duration, time);
		float L_12 = __this->get_duration_1();
		float L_13 = ___time0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_14 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_12, L_13, /*hidden argument*/NULL);
		__this->set_duration_1(L_14);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddCameraPoseKey(System.Single,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddCameraPoseKey_mB15BCFBF35157EED7BEBFB5A11740BAD5BC1F51C (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___cameraPose1, float ___positionThreshold2, float ___rotationThreshold3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_AddCameraPoseKey_mB15BCFBF35157EED7BEBFB5A11740BAD5BC1F51C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddPoseKeyFiltered(cameraCurves, time, cameraPose, positionThreshold, rotationThreshold);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_0 = __this->get_cameraCurves_8();
		float L_1 = ___time0;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_2 = ___cameraPose1;
		float L_3 = ___positionThreshold2;
		float L_4 = ___rotationThreshold3;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		InputAnimation_AddPoseKeyFiltered_m5A4B405C7F7E108AE2E42597B2CD2F542C6FEDC0(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// duration = Mathf.Max(duration, time);
		float L_5 = __this->get_duration_1();
		float L_6 = ___time0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_5, L_6, /*hidden argument*/NULL);
		__this->set_duration_1(L_7);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddPoseKey(Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves,System.Single,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddPoseKey_m55716AD2A6AA29B99325643547C019103668AA41 (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * ___curves0, float ___time1, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___pose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_AddPoseKey_m55716AD2A6AA29B99325643547C019103668AA41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddFloatKey(curves.PositionX, time, pose.Position.x);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_0 = ___curves0;
		NullCheck(L_0);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_1 = L_0->get_PositionX_0();
		float L_2 = ___time1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&___pose2), /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		InputAnimation_AddFloatKey_m064050F265BFAD4A351A38FFDA5C59612110766B(L_1, L_2, L_4, /*hidden argument*/NULL);
		// AddFloatKey(curves.PositionY, time, pose.Position.y);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_5 = ___curves0;
		NullCheck(L_5);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_6 = L_5->get_PositionY_1();
		float L_7 = ___time1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&___pose2), /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		InputAnimation_AddFloatKey_m064050F265BFAD4A351A38FFDA5C59612110766B(L_6, L_7, L_9, /*hidden argument*/NULL);
		// AddFloatKey(curves.PositionZ, time, pose.Position.z);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_10 = ___curves0;
		NullCheck(L_10);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_11 = L_10->get_PositionZ_2();
		float L_12 = ___time1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&___pose2), /*hidden argument*/NULL);
		float L_14 = L_13.get_z_4();
		InputAnimation_AddFloatKey_m064050F265BFAD4A351A38FFDA5C59612110766B(L_11, L_12, L_14, /*hidden argument*/NULL);
		// AddFloatKey(curves.RotationX, time, pose.Rotation.x);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_15 = ___curves0;
		NullCheck(L_15);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_16 = L_15->get_RotationX_3();
		float L_17 = ___time1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = MixedRealityPose_get_Rotation_mC33B3728AA49661EBD3CB4594F9D955F3B6F4723((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&___pose2), /*hidden argument*/NULL);
		float L_19 = L_18.get_x_0();
		InputAnimation_AddFloatKey_m064050F265BFAD4A351A38FFDA5C59612110766B(L_16, L_17, L_19, /*hidden argument*/NULL);
		// AddFloatKey(curves.RotationY, time, pose.Rotation.y);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_20 = ___curves0;
		NullCheck(L_20);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_21 = L_20->get_RotationY_4();
		float L_22 = ___time1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = MixedRealityPose_get_Rotation_mC33B3728AA49661EBD3CB4594F9D955F3B6F4723((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&___pose2), /*hidden argument*/NULL);
		float L_24 = L_23.get_y_1();
		InputAnimation_AddFloatKey_m064050F265BFAD4A351A38FFDA5C59612110766B(L_21, L_22, L_24, /*hidden argument*/NULL);
		// AddFloatKey(curves.RotationZ, time, pose.Rotation.z);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_25 = ___curves0;
		NullCheck(L_25);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_26 = L_25->get_RotationZ_5();
		float L_27 = ___time1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = MixedRealityPose_get_Rotation_mC33B3728AA49661EBD3CB4594F9D955F3B6F4723((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&___pose2), /*hidden argument*/NULL);
		float L_29 = L_28.get_z_2();
		InputAnimation_AddFloatKey_m064050F265BFAD4A351A38FFDA5C59612110766B(L_26, L_27, L_29, /*hidden argument*/NULL);
		// AddFloatKey(curves.RotationW, time, pose.Rotation.w);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_30 = ___curves0;
		NullCheck(L_30);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_31 = L_30->get_RotationW_6();
		float L_32 = ___time1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_33 = MixedRealityPose_get_Rotation_mC33B3728AA49661EBD3CB4594F9D955F3B6F4723((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&___pose2), /*hidden argument*/NULL);
		float L_34 = L_33.get_w_3();
		InputAnimation_AddFloatKey_m064050F265BFAD4A351A38FFDA5C59612110766B(L_31, L_32, L_34, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddPoseKeyFiltered(Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves,System.Single,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddPoseKeyFiltered_m5A4B405C7F7E108AE2E42597B2CD2F542C6FEDC0 (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * ___curves0, float ___time1, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___pose2, float ___positionThreshold3, float ___rotationThreshold4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_AddPoseKeyFiltered_m5A4B405C7F7E108AE2E42597B2CD2F542C6FEDC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddPositionKeyFiltered(curves.PositionX, curves.PositionY, curves.PositionZ, time, pose.Position, positionThreshold);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_0 = ___curves0;
		NullCheck(L_0);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_1 = L_0->get_PositionX_0();
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_2 = ___curves0;
		NullCheck(L_2);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_3 = L_2->get_PositionY_1();
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_4 = ___curves0;
		NullCheck(L_4);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_5 = L_4->get_PositionZ_2();
		float L_6 = ___time1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&___pose2), /*hidden argument*/NULL);
		float L_8 = ___positionThreshold3;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		InputAnimation_AddPositionKeyFiltered_m33D6A58CD6FFA465153ACF6A208D5C6E4EF15784(L_1, L_3, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		// AddRotationKeyFiltered(curves.RotationX, curves.RotationY, curves.RotationZ, curves.RotationW, time, pose.Rotation, rotationThreshold);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_9 = ___curves0;
		NullCheck(L_9);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_10 = L_9->get_RotationX_3();
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_11 = ___curves0;
		NullCheck(L_11);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_12 = L_11->get_RotationY_4();
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_13 = ___curves0;
		NullCheck(L_13);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_14 = L_13->get_RotationZ_5();
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_15 = ___curves0;
		NullCheck(L_15);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_16 = L_15->get_RotationW_6();
		float L_17 = ___time1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = MixedRealityPose_get_Rotation_mC33B3728AA49661EBD3CB4594F9D955F3B6F4723((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&___pose2), /*hidden argument*/NULL);
		float L_19 = ___rotationThreshold4;
		InputAnimation_AddRotationKeyFiltered_m9916B87DEDE6AA0835FDE40EA9D582FFE1441189(L_10, L_12, L_14, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddPositionKeyFiltered(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Single,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddPositionKeyFiltered_m33D6A58CD6FFA465153ACF6A208D5C6E4EF15784 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curveX0, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curveY1, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curveZ2, float ___time3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position4, float ___threshold5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_AddPositionKeyFiltered_m33D6A58CD6FFA465153ACF6A208D5C6E4EF15784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		// float sqrThreshold = threshold * threshold;
		float L_0 = ___threshold5;
		float L_1 = ___threshold5;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// int iX = FindKeyframeInterval(curveX, time);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_2 = ___curveX0;
		float L_3 = ___time3;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		int32_t L_4 = InputAnimation_FindKeyframeInterval_m960E471BC65D916A9B0B60D88178E673804413D5(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// int iY = FindKeyframeInterval(curveY, time);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_5 = ___curveY1;
		float L_6 = ___time3;
		int32_t L_7 = InputAnimation_FindKeyframeInterval_m960E471BC65D916A9B0B60D88178E673804413D5(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// int iZ = FindKeyframeInterval(curveZ, time);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_8 = ___curveZ2;
		float L_9 = ___time3;
		int32_t L_10 = InputAnimation_FindKeyframeInterval_m960E471BC65D916A9B0B60D88178E673804413D5(L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// if (iX > 0 && iY > 0 && iZ > 0)
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_00ec;
		}
	}
	{
		// Vector3 v0 = new Vector3(curveX.keys[iX - 1].value, curveY.keys[iY - 1].value, curveZ.keys[iZ - 1].value);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_14 = ___curveX0;
		NullCheck(L_14);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_15 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_14, /*hidden argument*/NULL);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1))))), /*hidden argument*/NULL);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_18 = ___curveY1;
		NullCheck(L_18);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_19 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_18, /*hidden argument*/NULL);
		int32_t L_20 = V_2;
		NullCheck(L_19);
		float L_21 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1))))), /*hidden argument*/NULL);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_22 = ___curveZ2;
		NullCheck(L_22);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_23 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_22, /*hidden argument*/NULL);
		int32_t L_24 = V_3;
		NullCheck(L_23);
		float L_25 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1))))), /*hidden argument*/NULL);
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_4), L_17, L_21, L_25, /*hidden argument*/NULL);
		// Vector3 v1 = new Vector3(curveX.keys[iX].value, curveY.keys[iY].value, curveZ.keys[iZ].value);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_26 = ___curveX0;
		NullCheck(L_26);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_27 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_26, /*hidden argument*/NULL);
		int32_t L_28 = V_1;
		NullCheck(L_27);
		float L_29 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), /*hidden argument*/NULL);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_30 = ___curveY1;
		NullCheck(L_30);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_31 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_30, /*hidden argument*/NULL);
		int32_t L_32 = V_2;
		NullCheck(L_31);
		float L_33 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), /*hidden argument*/NULL);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_34 = ___curveZ2;
		NullCheck(L_34);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_35 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_34, /*hidden argument*/NULL);
		int32_t L_36 = V_3;
		NullCheck(L_35);
		float L_37 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36))), /*hidden argument*/NULL);
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_5), L_29, L_33, L_37, /*hidden argument*/NULL);
		// if ((v1 - v0).sqrMagnitude <= sqrThreshold && (position - v1).sqrMagnitude <= sqrThreshold)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_38, L_39, /*hidden argument*/NULL);
		V_6 = L_40;
		float L_41 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_6), /*hidden argument*/NULL);
		float L_42 = V_0;
		if ((!(((float)L_41) <= ((float)L_42))))
		{
			goto IL_00ec;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = ___position4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_43, L_44, /*hidden argument*/NULL);
		V_6 = L_45;
		float L_46 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_6), /*hidden argument*/NULL);
		float L_47 = V_0;
		if ((!(((float)L_46) <= ((float)L_47))))
		{
			goto IL_00ec;
		}
	}
	{
		// curveX.RemoveKey(iX);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_48 = ___curveX0;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		AnimationCurve_RemoveKey_m25D7337353EE1BE94799C156BEDC8D971B1A1F13(L_48, L_49, /*hidden argument*/NULL);
		// curveY.RemoveKey(iY);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_50 = ___curveY1;
		int32_t L_51 = V_2;
		NullCheck(L_50);
		AnimationCurve_RemoveKey_m25D7337353EE1BE94799C156BEDC8D971B1A1F13(L_50, L_51, /*hidden argument*/NULL);
		// curveZ.RemoveKey(iZ);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_52 = ___curveZ2;
		int32_t L_53 = V_3;
		NullCheck(L_52);
		AnimationCurve_RemoveKey_m25D7337353EE1BE94799C156BEDC8D971B1A1F13(L_52, L_53, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		// AddFloatKey(curveX, time, position.x);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_54 = ___curveX0;
		float L_55 = ___time3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = ___position4;
		float L_57 = L_56.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		InputAnimation_AddFloatKey_m064050F265BFAD4A351A38FFDA5C59612110766B(L_54, L_55, L_57, /*hidden argument*/NULL);
		// AddFloatKey(curveY, time, position.y);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_58 = ___curveY1;
		float L_59 = ___time3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = ___position4;
		float L_61 = L_60.get_y_3();
		InputAnimation_AddFloatKey_m064050F265BFAD4A351A38FFDA5C59612110766B(L_58, L_59, L_61, /*hidden argument*/NULL);
		// AddFloatKey(curveZ, time, position.z);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_62 = ___curveZ2;
		float L_63 = ___time3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64 = ___position4;
		float L_65 = L_64.get_z_4();
		InputAnimation_AddFloatKey_m064050F265BFAD4A351A38FFDA5C59612110766B(L_62, L_63, L_65, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddRotationKeyFiltered(UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.Single,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddRotationKeyFiltered_m9916B87DEDE6AA0835FDE40EA9D582FFE1441189 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curveX0, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curveY1, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curveZ2, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curveW3, float ___time4, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation5, float ___threshold6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_AddRotationKeyFiltered_m9916B87DEDE6AA0835FDE40EA9D582FFE1441189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_6;
	memset(&V_6, 0, sizeof(V_6));
	float V_7 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset(&V_8, 0, sizeof(V_8));
	float V_9 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_11;
	memset(&V_11, 0, sizeof(V_11));
	{
		// float sqrThreshold = threshold * threshold;
		float L_0 = ___threshold6;
		float L_1 = ___threshold6;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// int iX = FindKeyframeInterval(curveX, time);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_2 = ___curveX0;
		float L_3 = ___time4;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		int32_t L_4 = InputAnimation_FindKeyframeInterval_m960E471BC65D916A9B0B60D88178E673804413D5(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// int iY = FindKeyframeInterval(curveY, time);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_5 = ___curveY1;
		float L_6 = ___time4;
		int32_t L_7 = InputAnimation_FindKeyframeInterval_m960E471BC65D916A9B0B60D88178E673804413D5(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// int iZ = FindKeyframeInterval(curveZ, time);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_8 = ___curveZ2;
		float L_9 = ___time4;
		int32_t L_10 = InputAnimation_FindKeyframeInterval_m960E471BC65D916A9B0B60D88178E673804413D5(L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// int iW = FindKeyframeInterval(curveW, time);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_11 = ___curveW3;
		float L_12 = ___time4;
		int32_t L_13 = InputAnimation_FindKeyframeInterval_m960E471BC65D916A9B0B60D88178E673804413D5(L_11, L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		// if (iX > 0 && iY > 0 && iZ > 0 && iW > 0)
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0145;
		}
	}
	{
		// Quaternion q0 = new Quaternion(curveX.keys[iX - 1].value, curveY.keys[iY - 1].value, curveZ.keys[iZ - 1].value, curveW.keys[iW - 1].value);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_18 = ___curveX0;
		NullCheck(L_18);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_19 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_18, /*hidden argument*/NULL);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		float L_21 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1))))), /*hidden argument*/NULL);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_22 = ___curveY1;
		NullCheck(L_22);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_23 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_22, /*hidden argument*/NULL);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		float L_25 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1))))), /*hidden argument*/NULL);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_26 = ___curveZ2;
		NullCheck(L_26);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_27 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_26, /*hidden argument*/NULL);
		int32_t L_28 = V_3;
		NullCheck(L_27);
		float L_29 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1))))), /*hidden argument*/NULL);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_30 = ___curveW3;
		NullCheck(L_30);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_31 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_30, /*hidden argument*/NULL);
		int32_t L_32 = V_4;
		NullCheck(L_31);
		float L_33 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1))))), /*hidden argument*/NULL);
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_5), L_21, L_25, L_29, L_33, /*hidden argument*/NULL);
		// Quaternion q1 = new Quaternion(curveX.keys[iX].value, curveY.keys[iY].value, curveZ.keys[iZ].value, curveW.keys[iW].value);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_34 = ___curveX0;
		NullCheck(L_34);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_35 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_34, /*hidden argument*/NULL);
		int32_t L_36 = V_1;
		NullCheck(L_35);
		float L_37 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36))), /*hidden argument*/NULL);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_38 = ___curveY1;
		NullCheck(L_38);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_39 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_38, /*hidden argument*/NULL);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		float L_41 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40))), /*hidden argument*/NULL);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_42 = ___curveZ2;
		NullCheck(L_42);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_43 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_42, /*hidden argument*/NULL);
		int32_t L_44 = V_3;
		NullCheck(L_43);
		float L_45 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), /*hidden argument*/NULL);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_46 = ___curveW3;
		NullCheck(L_46);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_47 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_46, /*hidden argument*/NULL);
		int32_t L_48 = V_4;
		NullCheck(L_47);
		float L_49 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), /*hidden argument*/NULL);
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_6), L_37, L_41, L_45, L_49, /*hidden argument*/NULL);
		// (q0 * Quaternion.Inverse(q1)).ToAngleAxis(out float angle0, out Vector3 axis0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_50 = V_5;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_51 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_52 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_51, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_53 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_50, L_52, /*hidden argument*/NULL);
		V_11 = L_53;
		Quaternion_ToAngleAxis_m36E8C06D2D508B5BA5DE9CFBAD252989918D8813((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_11), (float*)(&V_7), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_8), /*hidden argument*/NULL);
		// (rotation * Quaternion.Inverse(q0)).ToAngleAxis(out float angle1, out Vector3 axis1);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_54 = ___rotation5;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_55 = V_5;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_56 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_55, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_57 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_54, L_56, /*hidden argument*/NULL);
		V_11 = L_57;
		Quaternion_ToAngleAxis_m36E8C06D2D508B5BA5DE9CFBAD252989918D8813((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_11), (float*)(&V_9), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_10), /*hidden argument*/NULL);
		// if (angle0 <= sqrThreshold && angle1 <= sqrThreshold)
		float L_58 = V_7;
		float L_59 = V_0;
		if ((!(((float)L_58) <= ((float)L_59))))
		{
			goto IL_0145;
		}
	}
	{
		float L_60 = V_9;
		float L_61 = V_0;
		if ((!(((float)L_60) <= ((float)L_61))))
		{
			goto IL_0145;
		}
	}
	{
		// curveX.RemoveKey(iX);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_62 = ___curveX0;
		int32_t L_63 = V_1;
		NullCheck(L_62);
		AnimationCurve_RemoveKey_m25D7337353EE1BE94799C156BEDC8D971B1A1F13(L_62, L_63, /*hidden argument*/NULL);
		// curveY.RemoveKey(iY);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_64 = ___curveY1;
		int32_t L_65 = V_2;
		NullCheck(L_64);
		AnimationCurve_RemoveKey_m25D7337353EE1BE94799C156BEDC8D971B1A1F13(L_64, L_65, /*hidden argument*/NULL);
		// curveZ.RemoveKey(iZ);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_66 = ___curveZ2;
		int32_t L_67 = V_3;
		NullCheck(L_66);
		AnimationCurve_RemoveKey_m25D7337353EE1BE94799C156BEDC8D971B1A1F13(L_66, L_67, /*hidden argument*/NULL);
		// curveW.RemoveKey(iW);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_68 = ___curveW3;
		int32_t L_69 = V_4;
		NullCheck(L_68);
		AnimationCurve_RemoveKey_m25D7337353EE1BE94799C156BEDC8D971B1A1F13(L_68, L_69, /*hidden argument*/NULL);
	}

IL_0145:
	{
		// AddFloatKey(curveX, time, rotation.x);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_70 = ___curveX0;
		float L_71 = ___time4;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_72 = ___rotation5;
		float L_73 = L_72.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		InputAnimation_AddFloatKey_m064050F265BFAD4A351A38FFDA5C59612110766B(L_70, L_71, L_73, /*hidden argument*/NULL);
		// AddFloatKey(curveY, time, rotation.y);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_74 = ___curveY1;
		float L_75 = ___time4;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_76 = ___rotation5;
		float L_77 = L_76.get_y_1();
		InputAnimation_AddFloatKey_m064050F265BFAD4A351A38FFDA5C59612110766B(L_74, L_75, L_77, /*hidden argument*/NULL);
		// AddFloatKey(curveZ, time, rotation.z);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_78 = ___curveZ2;
		float L_79 = ___time4;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_80 = ___rotation5;
		float L_81 = L_80.get_z_2();
		InputAnimation_AddFloatKey_m064050F265BFAD4A351A38FFDA5C59612110766B(L_78, L_79, L_81, /*hidden argument*/NULL);
		// AddFloatKey(curveW, time, rotation.w);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_82 = ___curveW3;
		float L_83 = ___time4;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_84 = ___rotation5;
		float L_85 = L_84.get_w_3();
		InputAnimation_AddFloatKey_m064050F265BFAD4A351A38FFDA5C59612110766B(L_82, L_83, L_85, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddFloatKey(UnityEngine.AnimationCurve,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t InputAnimation_AddFloatKey_m064050F265BFAD4A351A38FFDA5C59612110766B (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve0, float ___time1, float ___value2, const RuntimeMethod* method)
{
	Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// var keyframe = new Keyframe(time, value, 0.0f, 0.0f, 0.0f, 0.0f);
		float L_0 = ___time1;
		float L_1 = ___value2;
		Keyframe__ctor_m31FB31F66F8FD0D752021113588C06BBAB065CE0((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(&V_0), L_0, L_1, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// keyframe.weightedMode = WeightedMode.Both;
		Keyframe_set_weightedMode_m95923B248E6E9947136A115AF240F8C3A3CBC399((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(&V_0), 3, /*hidden argument*/NULL);
		// return curve.AddKey(keyframe);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_2 = ___curve0;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = AnimationCurve_AddKey_mBF33163D92DCC0BC0A10D2308038A8D49750E961(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddBoolKey(UnityEngine.AnimationCurve,System.Single,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t InputAnimation_AddBoolKey_m2137D7DA1128756C2B00AC061C8804BCC8060EE4 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve0, float ___time1, bool ___value2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float G_B3_0 = 0.0f;
	{
		// float fvalue = value ? 1.0f : 0.0f;
		bool L_0 = ___value2;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_000f;
	}

IL_000a:
	{
		G_B3_0 = (1.0f);
	}

IL_000f:
	{
		V_0 = G_B3_0;
		// var keyframe = new Keyframe(time, fvalue, 0.0f, 0.0f, 0.0f, boolOutWeight);
		float L_1 = ___time1;
		float L_2 = V_0;
		Keyframe__ctor_m31FB31F66F8FD0D752021113588C06BBAB065CE0((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(&V_1), L_1, L_2, (0.0f), (0.0f), (0.0f), (1000000.0f), /*hidden argument*/NULL);
		// keyframe.weightedMode = WeightedMode.Both;
		Keyframe_set_weightedMode_m95923B248E6E9947136A115AF240F8C3A3CBC399((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(&V_1), 3, /*hidden argument*/NULL);
		// return curve.AddKey(keyframe);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_3 = ___curve0;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = AnimationCurve_AddKey_mBF33163D92DCC0BC0A10D2308038A8D49750E961(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddBoolKeyFiltered(UnityEngine.AnimationCurve,System.Single,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t InputAnimation_AddBoolKeyFiltered_mF03D2B987F447EA01520980BF80C02CA48DA18EF (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve0, float ___time1, bool ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_AddBoolKeyFiltered_mF03D2B987F447EA01520980BF80C02CA48DA18EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float G_B3_0 = 0.0f;
	{
		// float fvalue = value ? 1.0f : 0.0f;
		bool L_0 = ___value2;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_000f;
	}

IL_000a:
	{
		G_B3_0 = (1.0f);
	}

IL_000f:
	{
		V_0 = G_B3_0;
		// var keyframe = new Keyframe(time, fvalue, 0.0f, 0.0f, 0.0f, boolOutWeight);
		float L_1 = ___time1;
		float L_2 = V_0;
		Keyframe__ctor_m31FB31F66F8FD0D752021113588C06BBAB065CE0((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(&V_1), L_1, L_2, (0.0f), (0.0f), (0.0f), (1000000.0f), /*hidden argument*/NULL);
		// keyframe.weightedMode = WeightedMode.Both;
		Keyframe_set_weightedMode_m95923B248E6E9947136A115AF240F8C3A3CBC399((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(&V_1), 3, /*hidden argument*/NULL);
		// int insertAfter = FindKeyframeInterval(curve, time);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_3 = ___curve0;
		float L_4 = ___time1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		int32_t L_5 = InputAnimation_FindKeyframeInterval_m960E471BC65D916A9B0B60D88178E673804413D5(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// if (insertAfter >= 0 && curve.keys[insertAfter].value == fvalue)
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_7 = ___curve0;
		NullCheck(L_7);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_8 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		NullCheck(L_8);
		float L_10 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), /*hidden argument*/NULL);
		float L_11 = V_0;
		if ((!(((float)L_10) == ((float)L_11))))
		{
			goto IL_0057;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0057:
	{
		// int insertBefore = insertAfter + 1;
		int32_t L_12 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		// if (insertBefore < curve.keys.Length && curve.keys[insertBefore].value == fvalue)
		int32_t L_13 = V_3;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_14 = ___curve0;
		NullCheck(L_14);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_15 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		if ((((int32_t)L_13) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0083;
		}
	}
	{
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_16 = ___curve0;
		NullCheck(L_16);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_17 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_3;
		NullCheck(L_17);
		float L_19 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), /*hidden argument*/NULL);
		float L_20 = V_0;
		if ((!(((float)L_19) == ((float)L_20))))
		{
			goto IL_0083;
		}
	}
	{
		// return curve.MoveKey(insertBefore, keyframe);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_21 = ___curve0;
		int32_t L_22 = V_3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_23 = V_1;
		NullCheck(L_21);
		int32_t L_24 = AnimationCurve_MoveKey_m20405AA535659CAAC9BC1B100301C5BD76201735(L_21, L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}

IL_0083:
	{
		// return curve.AddKey(keyframe);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_25 = ___curve0;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = AnimationCurve_AddKey_mBF33163D92DCC0BC0A10D2308038A8D49750E961(L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::CutoffBeforeTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_CutoffBeforeTime_mF63F80F2119882ECC144BD8204776CDEAB0FFBDA (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_CutoffBeforeTime_mF63F80F2119882ECC144BD8204776CDEAB0FFBDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var curve in AnimationCurves)
		RuntimeObject* L_0 = InputAnimation_get_AnimationCurves_m696C63C6C376A90CF6E1AC33F715E05370ED3E21(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve>::GetEnumerator() */, IEnumerable_1_tFE1CA38261E80EDA4FFE60B69E47E9337C4DEAF5_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001d;
		}

IL_000e:
		{
			// foreach (var curve in AnimationCurves)
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_3 = InterfaceFuncInvoker0< AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve>::get_Current() */, IEnumerator_1_t6F3A7452C63AED19D28A8E4A2676065FC436AC37_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			// CutoffBeforeTime(curve, time);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_4 = V_1;
			float L_5 = ___time0;
			InputAnimation_CutoffBeforeTime_mF34905951FE5E1316756302D617291EFFDF57ED4(__this, L_4, L_5, /*hidden argument*/NULL);
		}

IL_001d:
		{
			// foreach (var curve in AnimationCurves)
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_000e;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x31, FINALLY_0027);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_0;
			if (!L_8)
			{
				goto IL_0030;
			}
		}

IL_002a:
		{
			RuntimeObject* L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_9);
		}

IL_0030:
		{
			IL2CPP_END_FINALLY(39)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_JUMP_TBL(0x31, IL_0031)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::CutoffBeforeTime(UnityEngine.AnimationCurve,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_CutoffBeforeTime_mF34905951FE5E1316756302D617291EFFDF57ED4 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve0, float ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_CutoffBeforeTime_mF34905951FE5E1316756302D617291EFFDF57ED4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// int idx0 = FindKeyframeInterval(curve, time);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_0 = ___curve0;
		float L_1 = ___time1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		int32_t L_2 = InputAnimation_FindKeyframeInterval_m960E471BC65D916A9B0B60D88178E673804413D5(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (idx0 > 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// Keyframe[] newKeys = new Keyframe[curve.keys.Length - idx0];
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_4 = ___curve0;
		NullCheck(L_4);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_5 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = V_0;
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_7 = (KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)SZArrayNew(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))), (int32_t)L_6)));
		V_1 = L_7;
		// for (int i = 0; i < newKeys.Length; ++i)
		V_2 = 0;
		goto IL_0039;
	}

IL_0020:
	{
		// newKeys[i] = curve.keys[idx0 + i];
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_8 = V_1;
		int32_t L_9 = V_2;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_10 = ___curve0;
		NullCheck(L_10);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_11 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_15);
		// for (int i = 0; i < newKeys.Length; ++i)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0039:
	{
		// for (int i = 0; i < newKeys.Length; ++i)
		int32_t L_17 = V_2;
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))))))
		{
			goto IL_0020;
		}
	}
	{
		// curve.keys = newKeys;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_19 = ___curve0;
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_20 = V_1;
		NullCheck(L_19);
		AnimationCurve_set_keys_m3AA5ED7D9B0D9BCBCD349355160810B2DF939096(L_19, L_20, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::Clear()
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_Clear_m1BC29C06CDEC1CB9FDAAAAF140C4F443659C5BDF (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_Clear_m1BC29C06CDEC1CB9FDAAAAF140C4F443659C5BDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var curve in AnimationCurves)
		RuntimeObject* L_0 = InputAnimation_get_AnimationCurves_m696C63C6C376A90CF6E1AC33F715E05370ED3E21(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve>::GetEnumerator() */, IEnumerable_1_tFE1CA38261E80EDA4FFE60B69E47E9337C4DEAF5_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_000e:
		{
			// foreach (var curve in AnimationCurves)
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_3 = InterfaceFuncInvoker0< AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve>::get_Current() */, IEnumerator_1_t6F3A7452C63AED19D28A8E4A2676065FC436AC37_il2cpp_TypeInfo_var, L_2);
			// curve.keys = new Keyframe[0];
			KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_4 = (KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)SZArrayNew(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_3);
			AnimationCurve_set_keys_m3AA5ED7D9B0D9BCBCD349355160810B2DF939096(L_3, L_4, /*hidden argument*/NULL);
		}

IL_001f:
		{
			// foreach (var curve in AnimationCurves)
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_000e;
			}
		}

IL_0027:
		{
			IL2CPP_LEAVE(0x33, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
		}

IL_0032:
		{
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve> Microsoft.MixedReality.Toolkit.Input.InputAnimation::get_AnimationCurves()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* InputAnimation_get_AnimationCurves_m696C63C6C376A90CF6E1AC33F715E05370ED3E21 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_get_AnimationCurves_m696C63C6C376A90CF6E1AC33F715E05370ED3E21_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IEnumerable<AnimationCurve> AnimationCurves => new AnimationCurveEnumerable(this);
		AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * L_0 = (AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 *)il2cpp_codegen_object_new(AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199_il2cpp_TypeInfo_var);
		AnimationCurveEnumerable__ctor_mA70D933CAA0605E4348127757AC97A04EEA27106(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::FindKeyframeInterval(UnityEngine.AnimationCurve,System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t InputAnimation_FindKeyframeInterval_m960E471BC65D916A9B0B60D88178E673804413D5 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve0, float ___time1, const RuntimeMethod* method)
{
	KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// var keys = curve.keys;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_0 = ___curve0;
		NullCheck(L_0);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_1 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// int lowIdx = -1;
		V_1 = (-1);
		// int highIdx = keys.Length;
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_2 = V_0;
		NullCheck(L_2);
		V_2 = (((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))));
		goto IL_002a;
	}

IL_000f:
	{
		// int midIdx = (lowIdx + highIdx) >> 1;
		int32_t L_3 = V_1;
		int32_t L_4 = V_2;
		V_3 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))>>(int32_t)1));
		// if (time >= keys[midIdx].time)
		float L_5 = ___time1;
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_6 = V_0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		float L_8 = Keyframe_get_time_m5A49381A903E63DD63EF8A381BA26C1A2DEF935D((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), /*hidden argument*/NULL);
		if ((!(((float)L_5) >= ((float)L_8))))
		{
			goto IL_0028;
		}
	}
	{
		// lowIdx = midIdx;
		int32_t L_9 = V_3;
		V_1 = L_9;
		// }
		goto IL_002a;
	}

IL_0028:
	{
		// highIdx = midIdx;
		int32_t L_10 = V_3;
		V_2 = L_10;
	}

IL_002a:
	{
		// while (lowIdx < highIdx - 1)
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)))))
		{
			goto IL_000f;
		}
	}
	{
		// return lowIdx;
		int32_t L_13 = V_1;
		return L_13;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::AddMarker(Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_AddMarker_m0C1E5BB1400D38BDCCFBB08F7FA1AF8C0E0FBAC4 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * ___marker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_AddMarker_m0C1E5BB1400D38BDCCFBB08F7FA1AF8C0E0FBAC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = FindMarkerInterval(marker.time) + 1;
		InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * L_0 = ___marker0;
		NullCheck(L_0);
		float L_1 = L_0->get_time_0();
		int32_t L_2 = InputAnimation_FindMarkerInterval_m6AE0085BB3A6F92BE9583ADBF779A7290676E859(__this, L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		// markers.Insert(index, marker);
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_3 = __this->get_markers_9();
		int32_t L_4 = V_0;
		InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * L_5 = ___marker0;
		NullCheck(L_3);
		List_1_Insert_mAA1ADC7F12F17010AD1C08D4C1AE94E7A3BDD4FD(L_3, L_4, L_5, /*hidden argument*/List_1_Insert_mAA1ADC7F12F17010AD1C08D4C1AE94E7A3BDD4FD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::RemoveMarker(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_RemoveMarker_mFC3055DEBB5FC0715116DD6F5191093AF6C6E087 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_RemoveMarker_mFC3055DEBB5FC0715116DD6F5191093AF6C6E087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// markers.RemoveAt(index);
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_0 = __this->get_markers_9();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		List_1_RemoveAt_m4C40F836269AC480B7C6F060BA584BAE6A561BCC(L_0, L_1, /*hidden argument*/List_1_RemoveAt_m4C40F836269AC480B7C6F060BA584BAE6A561BCC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::SetMarkerTime(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_SetMarkerTime_mC40A7BAEE9076CB86ACDD737D77C0DEFCA33C5A0 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, int32_t ___index0, float ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_SetMarkerTime_mC40A7BAEE9076CB86ACDD737D77C0DEFCA33C5A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// InputAnimationMarker marker = markers[index];
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_0 = __this->get_markers_9();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * L_2 = List_1_get_Item_m357203A6C8DC2CEE68D51DBDA4854A987592F217(L_0, L_1, /*hidden argument*/List_1_get_Item_m357203A6C8DC2CEE68D51DBDA4854A987592F217_RuntimeMethod_var);
		V_0 = L_2;
		// markers.RemoveAt(index);
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_3 = __this->get_markers_9();
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		List_1_RemoveAt_m4C40F836269AC480B7C6F060BA584BAE6A561BCC(L_3, L_4, /*hidden argument*/List_1_RemoveAt_m4C40F836269AC480B7C6F060BA584BAE6A561BCC_RuntimeMethod_var);
		// int newIndex = FindMarkerInterval(time) + 1;
		float L_5 = ___time1;
		int32_t L_6 = InputAnimation_FindMarkerInterval_m6AE0085BB3A6F92BE9583ADBF779A7290676E859(__this, L_5, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		// marker.time = time;
		InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * L_7 = V_0;
		float L_8 = ___time1;
		NullCheck(L_7);
		L_7->set_time_0(L_8);
		// markers.Insert(newIndex, marker);
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_9 = __this->get_markers_9();
		int32_t L_10 = V_1;
		InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * L_11 = V_0;
		NullCheck(L_9);
		List_1_Insert_mAA1ADC7F12F17010AD1C08D4C1AE94E7A3BDD4FD(L_9, L_10, L_11, /*hidden argument*/List_1_Insert_mAA1ADC7F12F17010AD1C08D4C1AE94E7A3BDD4FD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandState(System.Single,Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.BooleanU26,System.BooleanU26)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_EvaluateHandState_mBACD30B8D3D520C2F54E387755F6494DB4B63C9C (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, uint8_t ___handedness1, bool* ___isTracked2, bool* ___isPinching3, const RuntimeMethod* method)
{
	{
		// if (handedness == Handedness.Left)
		uint8_t L_0 = ___handedness1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001b;
		}
	}
	{
		// EvaluateHandState(time, handTrackedCurveLeft, handPinchCurveLeft, out isTracked, out isPinching);
		float L_1 = ___time0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_2 = __this->get_handTrackedCurveLeft_2();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_3 = __this->get_handPinchCurveLeft_4();
		bool* L_4 = ___isTracked2;
		bool* L_5 = ___isPinching3;
		InputAnimation_EvaluateHandState_mF48233CD68C2DC8D8CFA75500B1ECD17009186B9(__this, L_1, L_2, L_3, (bool*)L_4, (bool*)L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001b:
	{
		// else if (handedness == Handedness.Right)
		uint8_t L_6 = ___handedness1;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0036;
		}
	}
	{
		// EvaluateHandState(time, handTrackedCurveRight, handPinchCurveRight, out isTracked, out isPinching);
		float L_7 = ___time0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_8 = __this->get_handTrackedCurveRight_3();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_9 = __this->get_handPinchCurveRight_5();
		bool* L_10 = ___isTracked2;
		bool* L_11 = ___isPinching3;
		InputAnimation_EvaluateHandState_mF48233CD68C2DC8D8CFA75500B1ECD17009186B9(__this, L_7, L_8, L_9, (bool*)L_10, (bool*)L_11, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0036:
	{
		// isTracked = false;
		bool* L_12 = ___isTracked2;
		*((int8_t*)L_12) = (int8_t)0;
		// isPinching = false;
		bool* L_13 = ___isPinching3;
		*((int8_t*)L_13) = (int8_t)0;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandState(System.Single,UnityEngine.AnimationCurve,UnityEngine.AnimationCurve,System.BooleanU26,System.BooleanU26)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_EvaluateHandState_mF48233CD68C2DC8D8CFA75500B1ECD17009186B9 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___trackedCurve1, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___pinchCurve2, bool* ___isTracked3, bool* ___isPinching4, const RuntimeMethod* method)
{
	{
		// isTracked = (trackedCurve.Evaluate(time) > 0.5f);
		bool* L_0 = ___isTracked3;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_1 = ___trackedCurve1;
		float L_2 = ___time0;
		NullCheck(L_1);
		float L_3 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_1, L_2, /*hidden argument*/NULL);
		*((int8_t*)L_0) = (int8_t)((((float)L_3) > ((float)(0.5f)))? 1 : 0);
		// isPinching = (pinchCurve.Evaluate(time) > 0.5f);
		bool* L_4 = ___isPinching4;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_5 = ___pinchCurve2;
		float L_6 = ___time0;
		NullCheck(L_5);
		float L_7 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_5, L_6, /*hidden argument*/NULL);
		*((int8_t*)L_4) = (int8_t)((((float)L_7) > ((float)(0.5f)))? 1 : 0);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandJoint(System.Single,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
extern "C" IL2CPP_METHOD_ATTR MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  InputAnimation_EvaluateHandJoint_mC26F99F5767B742321F8F8247F0EEA356C1977A9 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, uint8_t ___handedness1, int32_t ___joint2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_EvaluateHandJoint_mC26F99F5767B742321F8F8247F0EEA356C1977A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handedness == Handedness.Left)
		uint8_t L_0 = ___handedness1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0013;
		}
	}
	{
		// return EvaluateHandJoint(time, joint, handJointCurvesLeft);
		float L_1 = ___time0;
		int32_t L_2 = ___joint2;
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_3 = __this->get_handJointCurvesLeft_6();
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_4 = InputAnimation_EvaluateHandJoint_m0869660694B5A969767C56F811D210EDD646F2FF(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0013:
	{
		// else if (handedness == Handedness.Right)
		uint8_t L_5 = ___handedness1;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0026;
		}
	}
	{
		// return EvaluateHandJoint(time, joint, handJointCurvesRight);
		float L_6 = ___time0;
		int32_t L_7 = ___joint2;
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_8 = __this->get_handJointCurvesRight_7();
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_9 = InputAnimation_EvaluateHandJoint_m0869660694B5A969767C56F811D210EDD646F2FF(__this, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0026:
	{
		// return MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_il2cpp_TypeInfo_var);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_10 = MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD(/*hidden argument*/NULL);
		return L_10;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateHandJoint(System.Single,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves>)
extern "C" IL2CPP_METHOD_ATTR MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  InputAnimation_EvaluateHandJoint_m0869660694B5A969767C56F811D210EDD646F2FF (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, int32_t ___joint1, Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * ___jointCurves2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_EvaluateHandJoint_m0869660694B5A969767C56F811D210EDD646F2FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * V_0 = NULL;
	{
		// if (jointCurves.TryGetValue(joint, out PoseCurves curves))
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_0 = ___jointCurves2;
		int32_t L_1 = ___joint1;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A(L_0, L_1, (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return EvaluatePose(curves, time);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_3 = V_0;
		float L_4 = ___time0;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_5 = InputAnimation_EvaluatePose_m078E3BBD6471D6BA70C96D34B573D724BACBBFD9(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0013:
	{
		// return MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_il2cpp_TypeInfo_var);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_6 = MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD(/*hidden argument*/NULL);
		return L_6;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluateCameraPose(System.Single)
extern "C" IL2CPP_METHOD_ATTR MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  InputAnimation_EvaluateCameraPose_m41BBD3CD203796298A28D367A957D50B202C98C5 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_EvaluateCameraPose_m41BBD3CD203796298A28D367A957D50B202C98C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return EvaluatePose(cameraCurves, time);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_0 = __this->get_cameraCurves_8();
		float L_1 = ___time0;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_2 = InputAnimation_EvaluatePose_m078E3BBD6471D6BA70C96D34B573D724BACBBFD9(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.InputAnimation::EvaluatePose(Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves,System.Single)
extern "C" IL2CPP_METHOD_ATTR MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  InputAnimation_EvaluatePose_m078E3BBD6471D6BA70C96D34B573D724BACBBFD9 (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * ___curves0, float ___time1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_8;
	memset(&V_8, 0, sizeof(V_8));
	{
		// float px = curves.PositionX.Evaluate(time);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_0 = ___curves0;
		NullCheck(L_0);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_1 = L_0->get_PositionX_0();
		float L_2 = ___time1;
		NullCheck(L_1);
		float L_3 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// float py = curves.PositionY.Evaluate(time);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_4 = ___curves0;
		NullCheck(L_4);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_5 = L_4->get_PositionY_1();
		float L_6 = ___time1;
		NullCheck(L_5);
		float L_7 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// float pz = curves.PositionZ.Evaluate(time);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_8 = ___curves0;
		NullCheck(L_8);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_9 = L_8->get_PositionZ_2();
		float L_10 = ___time1;
		NullCheck(L_9);
		float L_11 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// float rx = curves.RotationX.Evaluate(time);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_12 = ___curves0;
		NullCheck(L_12);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_13 = L_12->get_RotationX_3();
		float L_14 = ___time1;
		NullCheck(L_13);
		float L_15 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_13, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		// float ry = curves.RotationY.Evaluate(time);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_16 = ___curves0;
		NullCheck(L_16);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_17 = L_16->get_RotationY_4();
		float L_18 = ___time1;
		NullCheck(L_17);
		float L_19 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_17, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		// float rz = curves.RotationZ.Evaluate(time);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_20 = ___curves0;
		NullCheck(L_20);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_21 = L_20->get_RotationZ_5();
		float L_22 = ___time1;
		NullCheck(L_21);
		float L_23 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_21, L_22, /*hidden argument*/NULL);
		V_5 = L_23;
		// float rw = curves.RotationW.Evaluate(time);
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_24 = ___curves0;
		NullCheck(L_24);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_25 = L_24->get_RotationW_6();
		float L_26 = ___time1;
		NullCheck(L_25);
		float L_27 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_25, L_26, /*hidden argument*/NULL);
		V_6 = L_27;
		// var pose = new MixedRealityPose();
		il2cpp_codegen_initobj((&V_7), sizeof(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 ));
		// pose.Position = new Vector3(px, py, pz);
		float L_28 = V_0;
		float L_29 = V_1;
		float L_30 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_31), L_28, L_29, L_30, /*hidden argument*/NULL);
		MixedRealityPose_set_Position_mDC7B6E71466E46635F9A73B5B1D02F6EB00E7F6D((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_7), L_31, /*hidden argument*/NULL);
		// pose.Rotation = new Quaternion(rx, ry, rz, rw);
		float L_32 = V_3;
		float L_33 = V_4;
		float L_34 = V_5;
		float L_35 = V_6;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((&L_36), L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
		MixedRealityPose_set_Rotation_m1CEB8B06A88D3471B078233EC7409E652604A2C6((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_7), L_36, /*hidden argument*/NULL);
		// pose.Rotation.Normalize();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_37 = MixedRealityPose_get_Rotation_mC33B3728AA49661EBD3CB4594F9D955F3B6F4723((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_7), /*hidden argument*/NULL);
		V_8 = L_37;
		Quaternion_Normalize_mBCDF17FADBC3CB896F52D7DC9C1A83FA4890B158((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_8), /*hidden argument*/NULL);
		// return pose;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_38 = V_7;
		return L_38;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker Microsoft.MixedReality.Toolkit.Input.InputAnimation::GetMarker(System.Int32)
extern "C" IL2CPP_METHOD_ATTR InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * InputAnimation_GetMarker_mD8409BFB0D7B103BCF5D385BFAF95E9943069891 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_GetMarker_mD8409BFB0D7B103BCF5D385BFAF95E9943069891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return markers[index];
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_0 = __this->get_markers_9();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * L_2 = List_1_get_Item_m357203A6C8DC2CEE68D51DBDA4854A987592F217(L_0, L_1, /*hidden argument*/List_1_get_Item_m357203A6C8DC2CEE68D51DBDA4854A987592F217_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation::FindMarkerInterval(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t InputAnimation_FindMarkerInterval_m6AE0085BB3A6F92BE9583ADBF779A7290676E859 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_FindMarkerInterval_m6AE0085BB3A6F92BE9583ADBF779A7290676E859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int lowIdx = -1;
		V_0 = (-1);
		// int highIdx = markers.Count;
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_0 = __this->get_markers_9();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m9660D9652127B41D761DBF34E5359CAEF030AFEF(L_0, /*hidden argument*/List_1_get_Count_m9660D9652127B41D761DBF34E5359CAEF030AFEF_RuntimeMethod_var);
		V_1 = L_1;
		goto IL_0030;
	}

IL_0010:
	{
		// int midIdx = (lowIdx + highIdx) >> 1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))>>(int32_t)1));
		// if (time >= markers[midIdx].time)
		float L_4 = ___time0;
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_5 = __this->get_markers_9();
		int32_t L_6 = V_2;
		NullCheck(L_5);
		InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * L_7 = List_1_get_Item_m357203A6C8DC2CEE68D51DBDA4854A987592F217(L_5, L_6, /*hidden argument*/List_1_get_Item_m357203A6C8DC2CEE68D51DBDA4854A987592F217_RuntimeMethod_var);
		NullCheck(L_7);
		float L_8 = L_7->get_time_0();
		if ((!(((float)L_4) >= ((float)L_8))))
		{
			goto IL_002e;
		}
	}
	{
		// lowIdx = midIdx;
		int32_t L_9 = V_2;
		V_0 = L_9;
		// }
		goto IL_0030;
	}

IL_002e:
	{
		// highIdx = midIdx;
		int32_t L_10 = V_2;
		V_1 = L_10;
	}

IL_0030:
	{
		// while (lowIdx < highIdx - 1)
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)))))
		{
			goto IL_0010;
		}
	}
	{
		// return lowIdx;
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::ComputeDuration()
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_ComputeDuration_m856B555BF30D567E2D0EC87CEF344B6056232227 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_ComputeDuration_m856B555BF30D567E2D0EC87CEF344B6056232227_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * V_1 = NULL;
	float V_2 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	float G_B5_0 = 0.0f;
	{
		// duration = 0.0f;
		__this->set_duration_1((0.0f));
		// foreach (var curve in AnimationCurves)
		RuntimeObject* L_0 = InputAnimation_get_AnimationCurves_m696C63C6C376A90CF6E1AC33F715E05370ED3E21(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationCurve>::GetEnumerator() */, IEnumerable_1_tFE1CA38261E80EDA4FFE60B69E47E9337C4DEAF5_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005b;
		}

IL_0019:
		{
			// foreach (var curve in AnimationCurves)
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_3 = InterfaceFuncInvoker0< AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve>::get_Current() */, IEnumerator_1_t6F3A7452C63AED19D28A8E4A2676065FC436AC37_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			// float curveDuration = (curve.length > 0 ? curve.keys[curve.length - 1].time : 0.0f);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = AnimationCurve_get_length_m36B9D49BCB7D677C38A7963FF00313A2E48E7B26(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_5) > ((int32_t)0)))
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			G_B5_0 = (0.0f);
			goto IL_0048;
		}

IL_0030:
		{
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_6 = V_1;
			NullCheck(L_6);
			KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_7 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_6, /*hidden argument*/NULL);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_8 = V_1;
			NullCheck(L_8);
			int32_t L_9 = AnimationCurve_get_length_m36B9D49BCB7D677C38A7963FF00313A2E48E7B26(L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			float L_10 = Keyframe_get_time_m5A49381A903E63DD63EF8A381BA26C1A2DEF935D((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1))))), /*hidden argument*/NULL);
			G_B5_0 = L_10;
		}

IL_0048:
		{
			V_2 = G_B5_0;
			// duration = Mathf.Max(duration, curveDuration);
			float L_11 = __this->get_duration_1();
			float L_12 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
			float L_13 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_11, L_12, /*hidden argument*/NULL);
			__this->set_duration_1(L_13);
		}

IL_005b:
		{
			// foreach (var curve in AnimationCurves)
			RuntimeObject* L_14 = V_0;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0019;
			}
		}

IL_0063:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_0;
			if (!L_16)
			{
				goto IL_006e;
			}
		}

IL_0068:
		{
			RuntimeObject* L_17 = V_0;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_17);
		}

IL_006e:
		{
			IL2CPP_END_FINALLY(101)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::ToStream(System.IO.Stream,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_ToStream_m30A985C695CC60F01F20F99C4199C7EA23AB72DF (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, float ___startTime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_ToStream_m30A985C695CC60F01F20F99C4199C7EA23AB72DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * V_0 = NULL;
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * V_1 = NULL;
	int32_t V_2 = 0;
	PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * V_3 = NULL;
	int32_t V_4 = 0;
	PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * V_5 = NULL;
	{
		// PoseCurves defaultCurves = new PoseCurves();
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_0 = (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 *)il2cpp_codegen_object_new(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529_il2cpp_TypeInfo_var);
		PoseCurves__ctor_m5C84AAF7123F5FEF488B2C0F85C2B89EC6301514(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// var writer = new BinaryWriter(stream);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = ___stream0;
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_2 = (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 *)il2cpp_codegen_object_new(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_m2E92F4E5096905E2E7487E003AB7B3CC5C5EC185(L_2, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// InputAnimationSerializationUtils.WriteHeader(writer);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_WriteHeader_mF99610FD654096D888E27B8878CB0A8EDB9F091E(L_3, /*hidden argument*/NULL);
		// PoseCurvesToStream(writer, cameraCurves, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_4 = V_1;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_5 = __this->get_cameraCurves_8();
		float L_6 = ___startTime1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesToStream_mA526F07A7A8F89FB31A2EA0CF16CDE4E3410E6BB(L_4, L_5, L_6, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, handTrackedCurveLeft, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_7 = V_1;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_8 = __this->get_handTrackedCurveLeft_2();
		float L_9 = ___startTime1;
		InputAnimationSerializationUtils_WriteBoolCurve_mE6B858EF75394182F0CF5D006D2D7E07472D8CAA(L_7, L_8, L_9, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, handTrackedCurveRight, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_10 = V_1;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_11 = __this->get_handTrackedCurveRight_3();
		float L_12 = ___startTime1;
		InputAnimationSerializationUtils_WriteBoolCurve_mE6B858EF75394182F0CF5D006D2D7E07472D8CAA(L_10, L_11, L_12, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, handPinchCurveLeft, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_13 = V_1;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_14 = __this->get_handPinchCurveLeft_4();
		float L_15 = ___startTime1;
		InputAnimationSerializationUtils_WriteBoolCurve_mE6B858EF75394182F0CF5D006D2D7E07472D8CAA(L_13, L_14, L_15, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, handPinchCurveRight, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_16 = V_1;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_17 = __this->get_handPinchCurveRight_5();
		float L_18 = ___startTime1;
		InputAnimationSerializationUtils_WriteBoolCurve_mE6B858EF75394182F0CF5D006D2D7E07472D8CAA(L_16, L_17, L_18, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		V_2 = 0;
		goto IL_0076;
	}

IL_0058:
	{
		// if (!handJointCurvesLeft.TryGetValue((TrackedHandJoint)i, out PoseCurves curves))
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_19 = __this->get_handJointCurvesLeft_6();
		int32_t L_20 = V_2;
		NullCheck(L_19);
		bool L_21 = Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A(L_19, L_20, (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 **)(&V_3), /*hidden argument*/Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_006a;
		}
	}
	{
		// curves = defaultCurves;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_22 = V_0;
		V_3 = L_22;
	}

IL_006a:
	{
		// PoseCurvesToStream(writer, curves, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_23 = V_1;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_24 = V_3;
		float L_25 = ___startTime1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesToStream_mA526F07A7A8F89FB31A2EA0CF16CDE4E3410E6BB(L_23, L_24, L_25, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0076:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		int32_t L_28 = ((InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var))->get_jointCount_0();
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0058;
		}
	}
	{
		// for (int i = 0; i < jointCount; ++i)
		V_4 = 0;
		goto IL_00a6;
	}

IL_0083:
	{
		// if (!handJointCurvesRight.TryGetValue((TrackedHandJoint)i, out PoseCurves curves))
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_29 = __this->get_handJointCurvesRight_7();
		int32_t L_30 = V_4;
		NullCheck(L_29);
		bool L_31 = Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A(L_29, L_30, (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 **)(&V_5), /*hidden argument*/Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A_RuntimeMethod_var);
		if (L_31)
		{
			goto IL_0097;
		}
	}
	{
		// curves = defaultCurves;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_32 = V_0;
		V_5 = L_32;
	}

IL_0097:
	{
		// PoseCurvesToStream(writer, curves, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_33 = V_1;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_34 = V_5;
		float L_35 = ___startTime1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesToStream_mA526F07A7A8F89FB31A2EA0CF16CDE4E3410E6BB(L_33, L_34, L_35, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_36 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00a6:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_37 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		int32_t L_38 = ((InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var))->get_jointCount_0();
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0083;
		}
	}
	{
		// InputAnimationSerializationUtils.WriteMarkerList(writer, markers, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_39 = V_1;
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_40 = __this->get_markers_9();
		float L_41 = ___startTime1;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_WriteMarkerList_m88C80BC53B538384BCDA521B4DD667DABA7E7343(L_39, L_40, L_41, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::FromStream(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_FromStream_m4CE3438F6040EC2E04ADFDBD03F22C85DF3025F9 (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_FromStream_m4CE3438F6040EC2E04ADFDBD03F22C85DF3025F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * V_4 = NULL;
	int32_t V_5 = 0;
	PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * V_6 = NULL;
	{
		// var reader = new BinaryReader(stream);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___stream0;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_1 = (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 *)il2cpp_codegen_object_new(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969_il2cpp_TypeInfo_var);
		BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// InputAnimationSerializationUtils.ReadHeader(reader, out int versionMajor, out int versionMinor);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadHeader_m80601186DB739CF56DA5711215A3F3AD003C4747(L_2, (int32_t*)(&V_1), (int32_t*)(&V_2), /*hidden argument*/NULL);
		// if (versionMajor != 1 || versionMinor != 0)
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		// Debug.LogError("Only version 1.0 of input animation file format is supported.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral1150C4452D5B1995C5A530A7B8F01505D190AE1C, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0023:
	{
		// PoseCurvesFromStream(reader, cameraCurves);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_5 = V_0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_6 = __this->get_cameraCurves_8();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesFromStream_m055C729EF6356173E9E9A9A0947CC76BA51E7568(L_5, L_6, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, handTrackedCurveLeft);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_7 = V_0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_8 = __this->get_handTrackedCurveLeft_2();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadBoolCurve_m50760053F50E3662368AABD7DF636173FB72E6EC(L_7, L_8, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, handTrackedCurveRight);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_9 = V_0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_10 = __this->get_handTrackedCurveRight_3();
		InputAnimationSerializationUtils_ReadBoolCurve_m50760053F50E3662368AABD7DF636173FB72E6EC(L_9, L_10, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, handPinchCurveLeft);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_11 = V_0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_12 = __this->get_handPinchCurveLeft_4();
		InputAnimationSerializationUtils_ReadBoolCurve_m50760053F50E3662368AABD7DF636173FB72E6EC(L_11, L_12, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, handPinchCurveRight);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_13 = V_0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_14 = __this->get_handPinchCurveRight_5();
		InputAnimationSerializationUtils_ReadBoolCurve_m50760053F50E3662368AABD7DF636173FB72E6EC(L_13, L_14, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		V_3 = 0;
		goto IL_0094;
	}

IL_0063:
	{
		// if (!handJointCurvesLeft.TryGetValue((TrackedHandJoint)i, out PoseCurves curves))
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_15 = __this->get_handJointCurvesLeft_6();
		int32_t L_16 = V_3;
		NullCheck(L_15);
		bool L_17 = Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A(L_15, L_16, (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 **)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A_RuntimeMethod_var);
		if (L_17)
		{
			goto IL_0088;
		}
	}
	{
		// curves = new PoseCurves();
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_18 = (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 *)il2cpp_codegen_object_new(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529_il2cpp_TypeInfo_var);
		PoseCurves__ctor_m5C84AAF7123F5FEF488B2C0F85C2B89EC6301514(L_18, /*hidden argument*/NULL);
		V_4 = L_18;
		// handJointCurvesLeft.Add((TrackedHandJoint)i, curves);
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_19 = __this->get_handJointCurvesLeft_6();
		int32_t L_20 = V_3;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_21 = V_4;
		NullCheck(L_19);
		Dictionary_2_Add_m90B7F3B9A7E3B2556BD57EBF11AE237A9DEDA9C2(L_19, L_20, L_21, /*hidden argument*/Dictionary_2_Add_m90B7F3B9A7E3B2556BD57EBF11AE237A9DEDA9C2_RuntimeMethod_var);
	}

IL_0088:
	{
		// PoseCurvesFromStream(reader, curves);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_22 = V_0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_23 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesFromStream_m055C729EF6356173E9E9A9A0947CC76BA51E7568(L_22, L_23, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0094:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		int32_t L_26 = ((InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var))->get_jointCount_0();
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0063;
		}
	}
	{
		// for (int i = 0; i < jointCount; ++i)
		V_5 = 0;
		goto IL_00d6;
	}

IL_00a1:
	{
		// if (!handJointCurvesRight.TryGetValue((TrackedHandJoint)i, out PoseCurves curves))
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_27 = __this->get_handJointCurvesRight_7();
		int32_t L_28 = V_5;
		NullCheck(L_27);
		bool L_29 = Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A(L_27, L_28, (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 **)(&V_6), /*hidden argument*/Dictionary_2_TryGetValue_mC65249E900593FD7A3B7A86CB463182F2CFEAE3A_RuntimeMethod_var);
		if (L_29)
		{
			goto IL_00c8;
		}
	}
	{
		// curves = new PoseCurves();
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_30 = (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 *)il2cpp_codegen_object_new(PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529_il2cpp_TypeInfo_var);
		PoseCurves__ctor_m5C84AAF7123F5FEF488B2C0F85C2B89EC6301514(L_30, /*hidden argument*/NULL);
		V_6 = L_30;
		// handJointCurvesRight.Add((TrackedHandJoint)i, curves);
		Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_31 = __this->get_handJointCurvesRight_7();
		int32_t L_32 = V_5;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_33 = V_6;
		NullCheck(L_31);
		Dictionary_2_Add_m90B7F3B9A7E3B2556BD57EBF11AE237A9DEDA9C2(L_31, L_32, L_33, /*hidden argument*/Dictionary_2_Add_m90B7F3B9A7E3B2556BD57EBF11AE237A9DEDA9C2_RuntimeMethod_var);
	}

IL_00c8:
	{
		// PoseCurvesFromStream(reader, curves);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_34 = V_0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_35 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		InputAnimation_PoseCurvesFromStream_m055C729EF6356173E9E9A9A0947CC76BA51E7568(L_34, L_35, /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00d6:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_37 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		int32_t L_38 = ((InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var))->get_jointCount_0();
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_00a1;
		}
	}
	{
		// InputAnimationSerializationUtils.ReadMarkerList(reader, markers);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_39 = V_0;
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_40 = __this->get_markers_9();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadMarkerList_m2AE74ACACD5F7FCA66D623AA427E4EC8B2C41AD2(L_39, L_40, /*hidden argument*/NULL);
		// ComputeDuration();
		InputAnimation_ComputeDuration_m856B555BF30D567E2D0EC87CEF344B6056232227(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::PoseCurvesToStream(System.IO.BinaryWriter,Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_PoseCurvesToStream_mA526F07A7A8F89FB31A2EA0CF16CDE4E3410E6BB (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * ___curves1, float ___startTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_PoseCurvesToStream_mA526F07A7A8F89FB31A2EA0CF16CDE4E3410E6BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputAnimationSerializationUtils.WriteFloatCurve(writer, curves.PositionX, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = ___writer0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_1 = ___curves1;
		NullCheck(L_1);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_2 = L_1->get_PositionX_0();
		float L_3 = ___startTime2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_WriteFloatCurve_mED510F307A43B6027213F2A92B54FDF98A9F5CD4(L_0, L_2, L_3, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurve(writer, curves.PositionY, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_4 = ___writer0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_5 = ___curves1;
		NullCheck(L_5);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_6 = L_5->get_PositionY_1();
		float L_7 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurve_mED510F307A43B6027213F2A92B54FDF98A9F5CD4(L_4, L_6, L_7, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurve(writer, curves.PositionZ, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_8 = ___writer0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_9 = ___curves1;
		NullCheck(L_9);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_10 = L_9->get_PositionZ_2();
		float L_11 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurve_mED510F307A43B6027213F2A92B54FDF98A9F5CD4(L_8, L_10, L_11, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurve(writer, curves.RotationX, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_12 = ___writer0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_13 = ___curves1;
		NullCheck(L_13);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_14 = L_13->get_RotationX_3();
		float L_15 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurve_mED510F307A43B6027213F2A92B54FDF98A9F5CD4(L_12, L_14, L_15, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurve(writer, curves.RotationY, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_16 = ___writer0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_17 = ___curves1;
		NullCheck(L_17);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_18 = L_17->get_RotationY_4();
		float L_19 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurve_mED510F307A43B6027213F2A92B54FDF98A9F5CD4(L_16, L_18, L_19, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurve(writer, curves.RotationZ, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_20 = ___writer0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_21 = ___curves1;
		NullCheck(L_21);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_22 = L_21->get_RotationZ_5();
		float L_23 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurve_mED510F307A43B6027213F2A92B54FDF98A9F5CD4(L_20, L_22, L_23, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.WriteFloatCurve(writer, curves.RotationW, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_24 = ___writer0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_25 = ___curves1;
		NullCheck(L_25);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_26 = L_25->get_RotationW_6();
		float L_27 = ___startTime2;
		InputAnimationSerializationUtils_WriteFloatCurve_mED510F307A43B6027213F2A92B54FDF98A9F5CD4(L_24, L_26, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::PoseCurvesFromStream(System.IO.BinaryReader,Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves)
extern "C" IL2CPP_METHOD_ATTR void InputAnimation_PoseCurvesFromStream_m055C729EF6356173E9E9A9A0947CC76BA51E7568 (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader0, PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * ___curves1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation_PoseCurvesFromStream_m055C729EF6356173E9E9A9A0947CC76BA51E7568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.PositionX);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_0 = ___reader0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_1 = ___curves1;
		NullCheck(L_1);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_2 = L_1->get_PositionX_0();
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadFloatCurve_mA4953EB4C19CF3896F7A064DA15EF828AD25B825(L_0, L_2, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.PositionY);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_3 = ___reader0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_4 = ___curves1;
		NullCheck(L_4);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_5 = L_4->get_PositionY_1();
		InputAnimationSerializationUtils_ReadFloatCurve_mA4953EB4C19CF3896F7A064DA15EF828AD25B825(L_3, L_5, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.PositionZ);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_6 = ___reader0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_7 = ___curves1;
		NullCheck(L_7);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_8 = L_7->get_PositionZ_2();
		InputAnimationSerializationUtils_ReadFloatCurve_mA4953EB4C19CF3896F7A064DA15EF828AD25B825(L_6, L_8, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.RotationX);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_9 = ___reader0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_10 = ___curves1;
		NullCheck(L_10);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_11 = L_10->get_RotationX_3();
		InputAnimationSerializationUtils_ReadFloatCurve_mA4953EB4C19CF3896F7A064DA15EF828AD25B825(L_9, L_11, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.RotationY);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_12 = ___reader0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_13 = ___curves1;
		NullCheck(L_13);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_14 = L_13->get_RotationY_4();
		InputAnimationSerializationUtils_ReadFloatCurve_mA4953EB4C19CF3896F7A064DA15EF828AD25B825(L_12, L_14, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.RotationZ);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_15 = ___reader0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_16 = ___curves1;
		NullCheck(L_16);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_17 = L_16->get_RotationZ_5();
		InputAnimationSerializationUtils_ReadFloatCurve_mA4953EB4C19CF3896F7A064DA15EF828AD25B825(L_15, L_17, /*hidden argument*/NULL);
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curves.RotationW);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_18 = ___reader0;
		PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_19 = ___curves1;
		NullCheck(L_19);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_20 = L_19->get_RotationW_6();
		InputAnimationSerializationUtils_ReadFloatCurve_mA4953EB4C19CF3896F7A064DA15EF828AD25B825(L_18, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation::.cctor()
extern "C" IL2CPP_METHOD_ATTR void InputAnimation__cctor_mF6EEE3CF10C9B6A5869B0CA351C03CABAFD62A1C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimation__cctor_mF6EEE3CF10C9B6A5869B0CA351C03CABAFD62A1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var))->set_jointCount_0((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable::.ctor(Microsoft.MixedReality.Toolkit.Input.InputAnimation)
extern "C" IL2CPP_METHOD_ATTR void AnimationCurveEnumerable__ctor_mA70D933CAA0605E4348127757AC97A04EEA27106 (AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * __this, InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * ___animation0, const RuntimeMethod* method)
{
	{
		// public AnimationCurveEnumerable(InputAnimation animation)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.animation = animation;
		InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_0 = ___animation0;
		__this->set_animation_0(L_0);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.AnimationCurve> Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AnimationCurveEnumerable_GetEnumerator_m8F5700FFDDBBE6DE44B916CD9AC59FA539EB3AB5 (AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationCurveEnumerable_GetEnumerator_m8F5700FFDDBBE6DE44B916CD9AC59FA539EB3AB5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429 * L_0 = (U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__2__ctor_m08F2971492DDAC7288FF610335404E43D6E6EE8C(L_0, 0, /*hidden argument*/NULL);
		U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AnimationCurveEnumerable_System_Collections_IEnumerable_GetEnumerator_m60E03F1064AA53E7676094BB9CD2C5F8D0D273FB (AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * __this, const RuntimeMethod* method)
{
	{
		// return this.GetEnumerator();
		RuntimeObject* L_0 = AnimationCurveEnumerable_GetEnumerator_m8F5700FFDDBBE6DE44B916CD9AC59FA539EB3AB5(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable_<GetEnumerator>d__2::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m08F2971492DDAC7288FF610335404E43D6E6EE8C (U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable_<GetEnumerator>d__2::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m91ED6D7FEFFA40E13E9C4DC516B920B808C5F5EA (U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4))))
		{
			case 0:
			{
				goto IL_0077;
			}
			case 1:
			{
				goto IL_006d;
			}
			case 2:
			{
				goto IL_0081;
			}
			case 3:
			{
				goto IL_0081;
			}
			case 4:
			{
				goto IL_0081;
			}
			case 5:
			{
				goto IL_0081;
			}
			case 6:
			{
				goto IL_0081;
			}
			case 7:
			{
				goto IL_0081;
			}
			case 8:
			{
				goto IL_0081;
			}
			case 9:
			{
				goto IL_006d;
			}
			case 10:
			{
				goto IL_006d;
			}
			case 11:
			{
				goto IL_006d;
			}
			case 12:
			{
				goto IL_006d;
			}
			case 13:
			{
				goto IL_006d;
			}
			case 14:
			{
				goto IL_006d;
			}
			case 15:
			{
				goto IL_006d;
			}
			case 16:
			{
				goto IL_0077;
			}
			case 17:
			{
				goto IL_0077;
			}
			case 18:
			{
				goto IL_0077;
			}
			case 19:
			{
				goto IL_0077;
			}
			case 20:
			{
				goto IL_0077;
			}
			case 21:
			{
				goto IL_0077;
			}
			case 22:
			{
				goto IL_0077;
			}
		}
	}
	{
		return;
	}

IL_006d:
	{
	}

IL_006e:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x81, FINALLY_0070);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally1_m316D89FEB42609EA2FDCDE30240AB56A2AED0F6E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(112)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_JUMP_TBL(0x81, IL_0081)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0077:
	{
	}

IL_0078:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x81, FINALLY_007a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007a;
	}

FINALLY_007a:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally2_m1DF8D07C3C90361825C9359A8550B9EA1BD3149B(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(122)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(122)
	{
		IL2CPP_JUMP_TBL(0x81, IL_0081)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0081:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable_<GetEnumerator>d__2::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__2_MoveNext_m48CB31720E89976775EDDFB59C987347EBBB06C6 (U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__2_MoveNext_m48CB31720E89976775EDDFB59C987347EBBB06C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 27);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0083;
				}
				case 1:
				{
					goto IL_00a9;
				}
				case 2:
				{
					goto IL_00cf;
				}
				case 3:
				{
					goto IL_00f5;
				}
				case 4:
				{
					goto IL_011b;
				}
				case 5:
				{
					goto IL_017a;
				}
				case 6:
				{
					goto IL_01a1;
				}
				case 7:
				{
					goto IL_01c8;
				}
				case 8:
				{
					goto IL_01ef;
				}
				case 9:
				{
					goto IL_0217;
				}
				case 10:
				{
					goto IL_023f;
				}
				case 11:
				{
					goto IL_0267;
				}
				case 12:
				{
					goto IL_02f1;
				}
				case 13:
				{
					goto IL_0319;
				}
				case 14:
				{
					goto IL_0341;
				}
				case 15:
				{
					goto IL_0369;
				}
				case 16:
				{
					goto IL_0391;
				}
				case 17:
				{
					goto IL_03b9;
				}
				case 18:
				{
					goto IL_03e1;
				}
				case 19:
				{
					goto IL_0437;
				}
				case 20:
				{
					goto IL_0463;
				}
				case 21:
				{
					goto IL_048f;
				}
				case 22:
				{
					goto IL_04bb;
				}
				case 23:
				{
					goto IL_04e4;
				}
				case 24:
				{
					goto IL_050d;
				}
				case 25:
				{
					goto IL_0536;
				}
			}
		}

IL_007c:
		{
			V_0 = (bool)0;
			goto IL_0548;
		}

IL_0083:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.handTrackedCurveLeft;
			AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * L_3 = V_2;
			NullCheck(L_3);
			InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_4 = L_3->get_animation_0();
			NullCheck(L_4);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_5 = L_4->get_handTrackedCurveLeft_2();
			__this->set_U3CU3E2__current_1(L_5);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_00a9:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.handTrackedCurveRight;
			AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * L_6 = V_2;
			NullCheck(L_6);
			InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_7 = L_6->get_animation_0();
			NullCheck(L_7);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_8 = L_7->get_handTrackedCurveRight_3();
			__this->set_U3CU3E2__current_1(L_8);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_00cf:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.handPinchCurveLeft;
			AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * L_9 = V_2;
			NullCheck(L_9);
			InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_10 = L_9->get_animation_0();
			NullCheck(L_10);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_11 = L_10->get_handPinchCurveLeft_4();
			__this->set_U3CU3E2__current_1(L_11);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_00f5:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.handPinchCurveRight;
			AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * L_12 = V_2;
			NullCheck(L_12);
			InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_13 = L_12->get_animation_0();
			NullCheck(L_13);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_14 = L_13->get_handPinchCurveRight_5();
			__this->set_U3CU3E2__current_1(L_14);
			__this->set_U3CU3E1__state_0(4);
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_011b:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var curves in animation.handJointCurvesLeft.Values)
			AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * L_15 = V_2;
			NullCheck(L_15);
			InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_16 = L_15->get_animation_0();
			NullCheck(L_16);
			Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_17 = L_16->get_handJointCurvesLeft_6();
			NullCheck(L_17);
			ValueCollection_t3581AC8A87D864C9D02B7C8D1B2CD52CB751696E * L_18 = Dictionary_2_get_Values_m69FF2FC7A53C9BD649B4B884C813AA0802D2242D(L_17, /*hidden argument*/Dictionary_2_get_Values_m69FF2FC7A53C9BD649B4B884C813AA0802D2242D_RuntimeMethod_var);
			NullCheck(L_18);
			Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD  L_19 = ValueCollection_GetEnumerator_m3A4B41130EE76484F813ECC14382309AD4E73EFF(L_18, /*hidden argument*/ValueCollection_GetEnumerator_m3A4B41130EE76484F813ECC14382309AD4E73EFF_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_19);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0276;
		}

IL_014a:
		{
			// foreach (var curves in animation.handJointCurvesLeft.Values)
			Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD * L_20 = __this->get_address_of_U3CU3E7__wrap1_3();
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_21 = Enumerator_get_Current_mB80CD1573C11A0554AA097BD5D10534D5344C93A((Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD *)L_20, /*hidden argument*/Enumerator_get_Current_mB80CD1573C11A0554AA097BD5D10534D5344C93A_RuntimeMethod_var);
			__this->set_U3CcurvesU3E5__3_4(L_21);
			// yield return curves.PositionX;
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_22 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_22);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_23 = L_22->get_PositionX_0();
			__this->set_U3CU3E2__current_1(L_23);
			__this->set_U3CU3E1__state_0(5);
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_017a:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.PositionY;
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_24 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_24);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_25 = L_24->get_PositionY_1();
			__this->set_U3CU3E2__current_1(L_25);
			__this->set_U3CU3E1__state_0(6);
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_01a1:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.PositionZ;
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_26 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_26);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_27 = L_26->get_PositionZ_2();
			__this->set_U3CU3E2__current_1(L_27);
			__this->set_U3CU3E1__state_0(7);
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_01c8:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.RotationX;
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_28 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_28);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_29 = L_28->get_RotationX_3();
			__this->set_U3CU3E2__current_1(L_29);
			__this->set_U3CU3E1__state_0(8);
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_01ef:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.RotationY;
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_30 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_30);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_31 = L_30->get_RotationY_4();
			__this->set_U3CU3E2__current_1(L_31);
			__this->set_U3CU3E1__state_0(((int32_t)9));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0217:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.RotationZ;
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_32 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_32);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_33 = L_32->get_RotationZ_5();
			__this->set_U3CU3E2__current_1(L_33);
			__this->set_U3CU3E1__state_0(((int32_t)10));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_023f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return curves.RotationW;
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_34 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_34);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_35 = L_34->get_RotationW_6();
			__this->set_U3CU3E2__current_1(L_35);
			__this->set_U3CU3E1__state_0(((int32_t)11));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0267:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// }
			__this->set_U3CcurvesU3E5__3_4((PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 *)NULL);
		}

IL_0276:
		{
			// foreach (var curves in animation.handJointCurvesLeft.Values)
			Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD * L_36 = __this->get_address_of_U3CU3E7__wrap1_3();
			bool L_37 = Enumerator_MoveNext_m59956644717D1199FE7EA597DF14A9A6514F4AD4((Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD *)L_36, /*hidden argument*/Enumerator_MoveNext_m59956644717D1199FE7EA597DF14A9A6514F4AD4_RuntimeMethod_var);
			if (L_37)
			{
				goto IL_014a;
			}
		}

IL_0286:
		{
			U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally1_m316D89FEB42609EA2FDCDE30240AB56A2AED0F6E(__this, /*hidden argument*/NULL);
			Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD * L_38 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_38, sizeof(Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD ));
			// foreach (var curves in animation.handJointCurvesRight.Values)
			AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * L_39 = V_2;
			NullCheck(L_39);
			InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_40 = L_39->get_animation_0();
			NullCheck(L_40);
			Dictionary_2_t0050F7F264A497E3941DA59543FE4031C6FC5262 * L_41 = L_40->get_handJointCurvesRight_7();
			NullCheck(L_41);
			ValueCollection_t3581AC8A87D864C9D02B7C8D1B2CD52CB751696E * L_42 = Dictionary_2_get_Values_m69FF2FC7A53C9BD649B4B884C813AA0802D2242D(L_41, /*hidden argument*/Dictionary_2_get_Values_m69FF2FC7A53C9BD649B4B884C813AA0802D2242D_RuntimeMethod_var);
			NullCheck(L_42);
			Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD  L_43 = ValueCollection_GetEnumerator_m3A4B41130EE76484F813ECC14382309AD4E73EFF(L_42, /*hidden argument*/ValueCollection_GetEnumerator_m3A4B41130EE76484F813ECC14382309AD4E73EFF_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_43);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_03f0;
		}

IL_02c0:
		{
			// foreach (var curves in animation.handJointCurvesRight.Values)
			Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD * L_44 = __this->get_address_of_U3CU3E7__wrap1_3();
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_45 = Enumerator_get_Current_mB80CD1573C11A0554AA097BD5D10534D5344C93A((Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD *)L_44, /*hidden argument*/Enumerator_get_Current_mB80CD1573C11A0554AA097BD5D10534D5344C93A_RuntimeMethod_var);
			__this->set_U3CcurvesU3E5__3_4(L_45);
			// yield return curves.PositionX;
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_46 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_46);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_47 = L_46->get_PositionX_0();
			__this->set_U3CU3E2__current_1(L_47);
			__this->set_U3CU3E1__state_0(((int32_t)12));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_02f1:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.PositionY;
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_48 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_48);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_49 = L_48->get_PositionY_1();
			__this->set_U3CU3E2__current_1(L_49);
			__this->set_U3CU3E1__state_0(((int32_t)13));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0319:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.PositionZ;
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_50 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_50);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_51 = L_50->get_PositionZ_2();
			__this->set_U3CU3E2__current_1(L_51);
			__this->set_U3CU3E1__state_0(((int32_t)14));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0341:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.RotationX;
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_52 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_52);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_53 = L_52->get_RotationX_3();
			__this->set_U3CU3E2__current_1(L_53);
			__this->set_U3CU3E1__state_0(((int32_t)15));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0369:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.RotationY;
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_54 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_54);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_55 = L_54->get_RotationY_4();
			__this->set_U3CU3E2__current_1(L_55);
			__this->set_U3CU3E1__state_0(((int32_t)16));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0391:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.RotationZ;
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_56 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_56);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_57 = L_56->get_RotationZ_5();
			__this->set_U3CU3E2__current_1(L_57);
			__this->set_U3CU3E1__state_0(((int32_t)17));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_03b9:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return curves.RotationW;
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_58 = __this->get_U3CcurvesU3E5__3_4();
			NullCheck(L_58);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_59 = L_58->get_RotationW_6();
			__this->set_U3CU3E2__current_1(L_59);
			__this->set_U3CU3E1__state_0(((int32_t)18));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_03e1:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// }
			__this->set_U3CcurvesU3E5__3_4((PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 *)NULL);
		}

IL_03f0:
		{
			// foreach (var curves in animation.handJointCurvesRight.Values)
			Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD * L_60 = __this->get_address_of_U3CU3E7__wrap1_3();
			bool L_61 = Enumerator_MoveNext_m59956644717D1199FE7EA597DF14A9A6514F4AD4((Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD *)L_60, /*hidden argument*/Enumerator_MoveNext_m59956644717D1199FE7EA597DF14A9A6514F4AD4_RuntimeMethod_var);
			if (L_61)
			{
				goto IL_02c0;
			}
		}

IL_0400:
		{
			U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally2_m1DF8D07C3C90361825C9359A8550B9EA1BD3149B(__this, /*hidden argument*/NULL);
			Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD * L_62 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_62, sizeof(Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD ));
			// yield return animation.cameraCurves.PositionX;
			AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * L_63 = V_2;
			NullCheck(L_63);
			InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_64 = L_63->get_animation_0();
			NullCheck(L_64);
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_65 = L_64->get_cameraCurves_8();
			NullCheck(L_65);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_66 = L_65->get_PositionX_0();
			__this->set_U3CU3E2__current_1(L_66);
			__this->set_U3CU3E1__state_0(((int32_t)19));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0437:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.cameraCurves.PositionY;
			AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * L_67 = V_2;
			NullCheck(L_67);
			InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_68 = L_67->get_animation_0();
			NullCheck(L_68);
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_69 = L_68->get_cameraCurves_8();
			NullCheck(L_69);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_70 = L_69->get_PositionY_1();
			__this->set_U3CU3E2__current_1(L_70);
			__this->set_U3CU3E1__state_0(((int32_t)20));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0463:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.cameraCurves.PositionZ;
			AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * L_71 = V_2;
			NullCheck(L_71);
			InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_72 = L_71->get_animation_0();
			NullCheck(L_72);
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_73 = L_72->get_cameraCurves_8();
			NullCheck(L_73);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_74 = L_73->get_PositionZ_2();
			__this->set_U3CU3E2__current_1(L_74);
			__this->set_U3CU3E1__state_0(((int32_t)21));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_048f:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.cameraCurves.RotationX;
			AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * L_75 = V_2;
			NullCheck(L_75);
			InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_76 = L_75->get_animation_0();
			NullCheck(L_76);
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_77 = L_76->get_cameraCurves_8();
			NullCheck(L_77);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_78 = L_77->get_RotationX_3();
			__this->set_U3CU3E2__current_1(L_78);
			__this->set_U3CU3E1__state_0(((int32_t)22));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_04bb:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.cameraCurves.RotationY;
			AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * L_79 = V_2;
			NullCheck(L_79);
			InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_80 = L_79->get_animation_0();
			NullCheck(L_80);
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_81 = L_80->get_cameraCurves_8();
			NullCheck(L_81);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_82 = L_81->get_RotationY_4();
			__this->set_U3CU3E2__current_1(L_82);
			__this->set_U3CU3E1__state_0(((int32_t)23));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_04e4:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.cameraCurves.RotationZ;
			AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * L_83 = V_2;
			NullCheck(L_83);
			InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_84 = L_83->get_animation_0();
			NullCheck(L_84);
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_85 = L_84->get_cameraCurves_8();
			NullCheck(L_85);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_86 = L_85->get_RotationZ_5();
			__this->set_U3CU3E2__current_1(L_86);
			__this->set_U3CU3E1__state_0(((int32_t)24));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_050d:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return animation.cameraCurves.RotationW;
			AnimationCurveEnumerable_t4E51181560773F4C5665842150150FF7484F4199 * L_87 = V_2;
			NullCheck(L_87);
			InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_88 = L_87->get_animation_0();
			NullCheck(L_88);
			PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * L_89 = L_88->get_cameraCurves_8();
			NullCheck(L_89);
			AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_90 = L_89->get_RotationW_6();
			__this->set_U3CU3E2__current_1(L_90);
			__this->set_U3CU3E1__state_0(((int32_t)25));
			V_0 = (bool)1;
			goto IL_0548;
		}

IL_0536:
		{
			__this->set_U3CU3E1__state_0((-1));
			// }
			V_0 = (bool)0;
			goto IL_0548;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0541;
	}

FAULT_0541:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m91ED6D7FEFFA40E13E9C4DC516B920B808C5F5EA(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(1345)
	} // end fault
	IL2CPP_CLEANUP(1345)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0548:
	{
		bool L_91 = V_0;
		return L_91;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable_<GetEnumerator>d__2::<>m__Finally1()
extern "C" IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally1_m316D89FEB42609EA2FDCDE30240AB56A2AED0F6E (U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally1_m316D89FEB42609EA2FDCDE30240AB56A2AED0F6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD * L_0 = __this->get_address_of_U3CU3E7__wrap1_3();
		Enumerator_Dispose_mB2F7C3456A1775CA1F13D14771F5C9C656B37FAB((Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD *)L_0, /*hidden argument*/Enumerator_Dispose_mB2F7C3456A1775CA1F13D14771F5C9C656B37FAB_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable_<GetEnumerator>d__2::<>m__Finally2()
extern "C" IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally2_m1DF8D07C3C90361825C9359A8550B9EA1BD3149B (U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally2_m1DF8D07C3C90361825C9359A8550B9EA1BD3149B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD * L_0 = __this->get_address_of_U3CU3E7__wrap1_3();
		Enumerator_Dispose_mB2F7C3456A1775CA1F13D14771F5C9C656B37FAB((Enumerator_t380A25BE407F6F2C538F9086E9362AB3CC5C93FD *)L_0, /*hidden argument*/Enumerator_Dispose_mB2F7C3456A1775CA1F13D14771F5C9C656B37FAB_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable_<GetEnumerator>d__2::System.Collections.Generic.IEnumerator<UnityEngine.AnimationCurve>.get_Current()
extern "C" IL2CPP_METHOD_ATTR AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CUnityEngine_AnimationCurveU3E_get_Current_m8F976F055336EF8B5F3031F0C3F6FBCB5CC44EA5 (U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429 * __this, const RuntimeMethod* method)
{
	{
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable_<GetEnumerator>d__2::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m28ACFC6782CD9C4A1D2B827EDFF552E39F9D74D7 (U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m28ACFC6782CD9C4A1D2B827EDFF552E39F9D74D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m28ACFC6782CD9C4A1D2B827EDFF552E39F9D74D7_RuntimeMethod_var);
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Input.InputAnimation_AnimationCurveEnumerable_<GetEnumerator>d__2::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_m47668BD0696F8B0BEEF6D1AE48BB6ADA123F268F (U3CGetEnumeratorU3Ed__2_tBD70CFF718B59B960FC09D77594E22B82733C429 * __this, const RuntimeMethod* method)
{
	{
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation_CompareMarkers::Compare(Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker,Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker)
extern "C" IL2CPP_METHOD_ATTR int32_t CompareMarkers_Compare_mB16DDC69CC7AB60F8A8128CFA930FD34005A30C6 (CompareMarkers_tFC03464F02C8C4CA5139EE44D7919F3469C9A522 * __this, InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * ___a0, InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * ___b1, const RuntimeMethod* method)
{
	{
		// return a.time.CompareTo(b.time);
		InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * L_0 = ___a0;
		NullCheck(L_0);
		float* L_1 = L_0->get_address_of_time_0();
		InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * L_2 = ___b1;
		NullCheck(L_2);
		float L_3 = L_2->get_time_0();
		int32_t L_4 = Single_CompareTo_mFBF2345D81E00F834E558A4ACFD4E5137582DBBC((float*)L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation_CompareMarkers::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CompareMarkers__ctor_m1037DC9E7BD30F02553821755B36F2A847462320 (CompareMarkers_tFC03464F02C8C4CA5139EE44D7919F3469C9A522 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimation_PoseCurves::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PoseCurves__ctor_m5C84AAF7123F5FEF488B2C0F85C2B89EC6301514 (PoseCurves_t16AE82142B99A239147D3DC79A5ECC1F3D566529 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseCurves__ctor_m5C84AAF7123F5FEF488B2C0F85C2B89EC6301514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly public AnimationCurve PositionX = new AnimationCurve();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_0 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mA12B39D1FD275B9A8150227B24805C7B218CDF2C(L_0, /*hidden argument*/NULL);
		__this->set_PositionX_0(L_0);
		// readonly public AnimationCurve PositionY = new AnimationCurve();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_1 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mA12B39D1FD275B9A8150227B24805C7B218CDF2C(L_1, /*hidden argument*/NULL);
		__this->set_PositionY_1(L_1);
		// readonly public AnimationCurve PositionZ = new AnimationCurve();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_2 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mA12B39D1FD275B9A8150227B24805C7B218CDF2C(L_2, /*hidden argument*/NULL);
		__this->set_PositionZ_2(L_2);
		// readonly public AnimationCurve RotationX = new AnimationCurve();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_3 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mA12B39D1FD275B9A8150227B24805C7B218CDF2C(L_3, /*hidden argument*/NULL);
		__this->set_RotationX_3(L_3);
		// readonly public AnimationCurve RotationY = new AnimationCurve();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_4 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mA12B39D1FD275B9A8150227B24805C7B218CDF2C(L_4, /*hidden argument*/NULL);
		__this->set_RotationY_4(L_4);
		// readonly public AnimationCurve RotationZ = new AnimationCurve();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_5 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mA12B39D1FD275B9A8150227B24805C7B218CDF2C(L_5, /*hidden argument*/NULL);
		__this->set_RotationZ_5(L_5);
		// readonly public AnimationCurve RotationW = new AnimationCurve();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_6 = (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *)il2cpp_codegen_object_new(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mA12B39D1FD275B9A8150227B24805C7B218CDF2C(L_6, /*hidden argument*/NULL);
		__this->set_RotationW_6(L_6);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InputAnimationMarker__ctor_mBA9692B6AACFDB9E38B103D1131562097C6A4D32 (InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimationMarker__ctor_mBA9692B6AACFDB9E38B103D1131562097C6A4D32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string name = "";
		__this->set_name_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.String Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::GetOutputFilename(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* InputAnimationSerializationUtils_GetOutputFilename_mB10168E8921AAF465829FD4102258316F4A4614F (String_t* ___baseName0, bool ___appendTimestamp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimationSerializationUtils_GetOutputFilename_mB10168E8921AAF465829FD4102258316F4A4614F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// if (appendTimestamp)
		bool L_0 = ___appendTimestamp1;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// filename = String.Format("{0}-{1}.{2}", baseName, DateTime.UtcNow.ToString("yyyyMMdd-HHmmss"), InputAnimationSerializationUtils.Extension);
		String_t* L_1 = ___baseName0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_2 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
		V_1 = L_2;
		String_t* L_3 = DateTime_ToString_m203C5710CD7AB2F5F1B2D9DA1DFD45BB3774179A((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), _stringLiteral26DFC60E6D308FD5C82010F93B8A9731F73CEA64, /*hidden argument*/NULL);
		String_t* L_4 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteralEA135DC4B20E79545AD6455D5C02EFF9058E0AFB, L_1, L_3, _stringLiteral9A5D56716D566997FA290054D161AF96305AFF9A, /*hidden argument*/NULL);
		V_0 = L_4;
		// }
		goto IL_002a;
	}

IL_0028:
	{
		// filename = baseName;
		String_t* L_5 = ___baseName0;
		V_0 = L_5;
	}

IL_002a:
	{
		// return filename;
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteHeader(System.IO.BinaryWriter)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteHeader_mF99610FD654096D888E27B8878CB0A8EDB9F091E (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, const RuntimeMethod* method)
{
	{
		// writer.Write(Magic);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = ___writer0;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int64) */, L_0, ((int64_t)7678548776933278406LL));
		// writer.Write(VersionMajor);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_1 = ___writer0;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, 1);
		// writer.Write(VersionMinor);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_2 = ___writer0;
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_2, 0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadHeader(System.IO.BinaryReader,System.Int32U26,System.Int32U26)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadHeader_m80601186DB739CF56DA5711215A3F3AD003C4747 (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader0, int32_t* ___fileVersionMajor1, int32_t* ___fileVersionMinor2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimationSerializationUtils_ReadHeader_m80601186DB739CF56DA5711215A3F3AD003C4747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// long fileMagic = reader.ReadInt64();
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_0 = ___reader0;
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_0);
		// if (fileMagic != Magic)
		if ((((int64_t)L_1) == ((int64_t)((int64_t)7678548776933278406LL))))
		{
			goto IL_001c;
		}
	}
	{
		// throw new Exception("File is not an input animation file");
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_2, _stringLiteralCD876FAE672FE7A4A5AE253CE35CD2AE86873E20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, InputAnimationSerializationUtils_ReadHeader_m80601186DB739CF56DA5711215A3F3AD003C4747_RuntimeMethod_var);
	}

IL_001c:
	{
		// fileVersionMajor = reader.ReadInt32();
		int32_t* L_3 = ___fileVersionMajor1;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_4 = ___reader0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		*((int32_t*)L_3) = (int32_t)L_5;
		// fileVersionMinor = reader.ReadInt32();
		int32_t* L_6 = ___fileVersionMinor2;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_7 = ___reader0;
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_7);
		*((int32_t*)L_6) = (int32_t)L_8;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteFloatCurve(System.IO.BinaryWriter,UnityEngine.AnimationCurve,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteFloatCurve_mED510F307A43B6027213F2A92B54FDF98A9F5CD4 (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve1, float ___startTime2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// writer.Write((int)curve.preWrapMode);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = ___writer0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_1 = ___curve1;
		NullCheck(L_1);
		int32_t L_2 = AnimationCurve_get_preWrapMode_m3C0DBEEB450ED8FB3FE96C7E1295B8C3562F8905(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_0, L_2);
		// writer.Write((int)curve.postWrapMode);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_3 = ___writer0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_4 = ___curve1;
		NullCheck(L_4);
		int32_t L_5 = AnimationCurve_get_postWrapMode_m1D9CF9570C4054057C97CDA03773A76C0813CF64(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_3, L_5);
		// writer.Write(curve.length);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_6 = ___writer0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_7 = ___curve1;
		NullCheck(L_7);
		int32_t L_8 = AnimationCurve_get_length_m36B9D49BCB7D677C38A7963FF00313A2E48E7B26(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_6, L_8);
		// for (int i = 0; i < curve.length; ++i)
		V_0 = 0;
		goto IL_0096;
	}

IL_0028:
	{
		// var keyframe = curve.keys[i];
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_9 = ___curve1;
		NullCheck(L_9);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_10 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		// writer.Write(keyframe.time - startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_14 = ___writer0;
		float L_15 = Keyframe_get_time_m5A49381A903E63DD63EF8A381BA26C1A2DEF935D((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(&V_1), /*hidden argument*/NULL);
		float L_16 = ___startTime2;
		NullCheck(L_14);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_14, ((float)il2cpp_codegen_subtract((float)L_15, (float)L_16)));
		// writer.Write(keyframe.value);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_17 = ___writer0;
		float L_18 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_17, L_18);
		// writer.Write(keyframe.inTangent);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_19 = ___writer0;
		float L_20 = Keyframe_get_inTangent_mE19351A6720331D0D01C299ED6480780B20CB8E0((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_19, L_20);
		// writer.Write(keyframe.outTangent);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_21 = ___writer0;
		float L_22 = Keyframe_get_outTangent_mF1B82FA2B7E060906B77CEAF229516D69789BEAE((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_21, L_22);
		// writer.Write(keyframe.inWeight);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_23 = ___writer0;
		float L_24 = Keyframe_get_inWeight_mA91CF48B93838442D74A494E752BFF31D513F330((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_23, L_24);
		// writer.Write(keyframe.outWeight);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_25 = ___writer0;
		float L_26 = Keyframe_get_outWeight_mB04C5E41E3153309BF6A758C97B92DF7D138C8FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_25);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_25, L_26);
		// writer.Write((int)keyframe.weightedMode);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_27 = ___writer0;
		int32_t L_28 = Keyframe_get_weightedMode_mFF562D4B06BCF6A65135C337D6F10BF1C4F3E14D((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_27, L_28);
		// for (int i = 0; i < curve.length; ++i)
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0096:
	{
		// for (int i = 0; i < curve.length; ++i)
		int32_t L_30 = V_0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_31 = ___curve1;
		NullCheck(L_31);
		int32_t L_32 = AnimationCurve_get_length_m36B9D49BCB7D677C38A7963FF00313A2E48E7B26(L_31, /*hidden argument*/NULL);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_0028;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadFloatCurve(System.IO.BinaryReader,UnityEngine.AnimationCurve)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadFloatCurve_mA4953EB4C19CF3896F7A064DA15EF828AD25B825 (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader0, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimationSerializationUtils_ReadFloatCurve_mA4953EB4C19CF3896F7A064DA15EF828AD25B825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// curve.preWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_0 = ___curve1;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_1 = ___reader0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_1);
		NullCheck(L_0);
		AnimationCurve_set_preWrapMode_mFE146DFCE1E335655A079DCE6E8F046BD63A6489(L_0, L_2, /*hidden argument*/NULL);
		// curve.postWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_3 = ___curve1;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_4 = ___reader0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		NullCheck(L_3);
		AnimationCurve_set_postWrapMode_mF11FF01671DFC6E54D29111561B8C7104DCEB413(L_3, L_5, /*hidden argument*/NULL);
		// int keyframeCount = reader.ReadInt32();
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_6 = ___reader0;
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_6);
		V_0 = L_7;
		// Keyframe[] keys = new Keyframe[keyframeCount];
		int32_t L_8 = V_0;
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_9 = (KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)SZArrayNew(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_1 = L_9;
		// for (int i = 0; i < keyframeCount; ++i)
		V_2 = 0;
		goto IL_00af;
	}

IL_002d:
	{
		// keys[i].time = reader.ReadSingle();
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_12 = ___reader0;
		NullCheck(L_12);
		float L_13 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_12);
		Keyframe_set_time_mAD4CA2282CD1B7C1D330C3EE75F79AD636C7FC83((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), L_13, /*hidden argument*/NULL);
		// keys[i].value = reader.ReadSingle();
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_16 = ___reader0;
		NullCheck(L_16);
		float L_17 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_16);
		Keyframe_set_value_m578277371F57893D5FF121710CF016A52302652E((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), L_17, /*hidden argument*/NULL);
		// keys[i].inTangent = reader.ReadSingle();
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_20 = ___reader0;
		NullCheck(L_20);
		float L_21 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_20);
		Keyframe_set_inTangent_mAA19EC59A3F6D360310D2F6B765359A069F8058E((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), L_21, /*hidden argument*/NULL);
		// keys[i].outTangent = reader.ReadSingle();
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_22 = V_1;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_24 = ___reader0;
		NullCheck(L_24);
		float L_25 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_24);
		Keyframe_set_outTangent_mDEEA8549F31FA0AAC090B2D6D7E15C42D3CAE90B((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), L_25, /*hidden argument*/NULL);
		// keys[i].inWeight = reader.ReadSingle();
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_26 = V_1;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_28 = ___reader0;
		NullCheck(L_28);
		float L_29 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_28);
		Keyframe_set_inWeight_mF68241AD54E4200C34274E0031E16A717ECAD65D((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), L_29, /*hidden argument*/NULL);
		// keys[i].outWeight = reader.ReadSingle();
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_30 = V_1;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_32 = ___reader0;
		NullCheck(L_32);
		float L_33 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_32);
		Keyframe_set_outWeight_m2C3ABDDE724970E519E48358687880FFFDE6288F((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31))), L_33, /*hidden argument*/NULL);
		// keys[i].weightedMode = (WeightedMode)reader.ReadInt32();
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_34 = V_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_36 = ___reader0;
		NullCheck(L_36);
		int32_t L_37 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_36);
		Keyframe_set_weightedMode_m95923B248E6E9947136A115AF240F8C3A3CBC399((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), L_37, /*hidden argument*/NULL);
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00af:
	{
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_39 = V_2;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_002d;
		}
	}
	{
		// curve.keys = keys;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_41 = ___curve1;
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_42 = V_1;
		NullCheck(L_41);
		AnimationCurve_set_keys_m3AA5ED7D9B0D9BCBCD349355160810B2DF939096(L_41, L_42, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteBoolCurve(System.IO.BinaryWriter,UnityEngine.AnimationCurve,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteBoolCurve_mE6B858EF75394182F0CF5D006D2D7E07472D8CAA (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve1, float ___startTime2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// writer.Write((int)curve.preWrapMode);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = ___writer0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_1 = ___curve1;
		NullCheck(L_1);
		int32_t L_2 = AnimationCurve_get_preWrapMode_m3C0DBEEB450ED8FB3FE96C7E1295B8C3562F8905(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_0, L_2);
		// writer.Write((int)curve.postWrapMode);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_3 = ___writer0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_4 = ___curve1;
		NullCheck(L_4);
		int32_t L_5 = AnimationCurve_get_postWrapMode_m1D9CF9570C4054057C97CDA03773A76C0813CF64(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_3, L_5);
		// writer.Write(curve.length);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_6 = ___writer0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_7 = ___curve1;
		NullCheck(L_7);
		int32_t L_8 = AnimationCurve_get_length_m36B9D49BCB7D677C38A7963FF00313A2E48E7B26(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_6, L_8);
		// for (int i = 0; i < curve.length; ++i)
		V_0 = 0;
		goto IL_0055;
	}

IL_0028:
	{
		// var keyframe = curve.keys[i];
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_9 = ___curve1;
		NullCheck(L_9);
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_10 = AnimationCurve_get_keys_m88E1848D255C2893F379E855A522DA9B0E0F78FB(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		// writer.Write(keyframe.time - startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_14 = ___writer0;
		float L_15 = Keyframe_get_time_m5A49381A903E63DD63EF8A381BA26C1A2DEF935D((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(&V_1), /*hidden argument*/NULL);
		float L_16 = ___startTime2;
		NullCheck(L_14);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_14, ((float)il2cpp_codegen_subtract((float)L_15, (float)L_16)));
		// writer.Write(keyframe.value);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_17 = ___writer0;
		float L_18 = Keyframe_get_value_m0DD3FAD00F43E7018FECBD011B04310E25C590FD((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_17, L_18);
		// for (int i = 0; i < curve.length; ++i)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0055:
	{
		// for (int i = 0; i < curve.length; ++i)
		int32_t L_20 = V_0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_21 = ___curve1;
		NullCheck(L_21);
		int32_t L_22 = AnimationCurve_get_length_m36B9D49BCB7D677C38A7963FF00313A2E48E7B26(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0028;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadBoolCurve(System.IO.BinaryReader,UnityEngine.AnimationCurve)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadBoolCurve_m50760053F50E3662368AABD7DF636173FB72E6EC (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader0, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimationSerializationUtils_ReadBoolCurve_m50760053F50E3662368AABD7DF636173FB72E6EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// curve.preWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_0 = ___curve1;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_1 = ___reader0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_1);
		NullCheck(L_0);
		AnimationCurve_set_preWrapMode_mFE146DFCE1E335655A079DCE6E8F046BD63A6489(L_0, L_2, /*hidden argument*/NULL);
		// curve.postWrapMode = (WrapMode)reader.ReadInt32();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_3 = ___curve1;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_4 = ___reader0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		NullCheck(L_3);
		AnimationCurve_set_postWrapMode_mF11FF01671DFC6E54D29111561B8C7104DCEB413(L_3, L_5, /*hidden argument*/NULL);
		// int keyframeCount = reader.ReadInt32();
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_6 = ___reader0;
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_6);
		V_0 = L_7;
		// Keyframe[] keys = new Keyframe[keyframeCount];
		int32_t L_8 = V_0;
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_9 = (KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D*)SZArrayNew(KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_1 = L_9;
		// for (int i = 0; i < keyframeCount; ++i)
		V_2 = 0;
		goto IL_00a3;
	}

IL_002a:
	{
		// keys[i].time = reader.ReadSingle();
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_12 = ___reader0;
		NullCheck(L_12);
		float L_13 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_12);
		Keyframe_set_time_mAD4CA2282CD1B7C1D330C3EE75F79AD636C7FC83((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), L_13, /*hidden argument*/NULL);
		// keys[i].value = reader.ReadSingle();
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_16 = ___reader0;
		NullCheck(L_16);
		float L_17 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_16);
		Keyframe_set_value_m578277371F57893D5FF121710CF016A52302652E((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), L_17, /*hidden argument*/NULL);
		// keys[i].inTangent = 0.0f;
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Keyframe_set_inTangent_mAA19EC59A3F6D360310D2F6B765359A069F8058E((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), (0.0f), /*hidden argument*/NULL);
		// keys[i].outTangent = 0.0f;
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Keyframe_set_outTangent_mDEEA8549F31FA0AAC090B2D6D7E15C42D3CAE90B((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), (0.0f), /*hidden argument*/NULL);
		// keys[i].inWeight = 0.0f;
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_22 = V_1;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		Keyframe_set_inWeight_mF68241AD54E4200C34274E0031E16A717ECAD65D((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), (0.0f), /*hidden argument*/NULL);
		// keys[i].outWeight = 1.0e6f;
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		Keyframe_set_outWeight_m2C3ABDDE724970E519E48358687880FFFDE6288F((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), (1000000.0f), /*hidden argument*/NULL);
		// keys[i].weightedMode = WeightedMode.Both;
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_26 = V_1;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		Keyframe_set_weightedMode_m95923B248E6E9947136A115AF240F8C3A3CBC399((Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), 3, /*hidden argument*/NULL);
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00a3:
	{
		// for (int i = 0; i < keyframeCount; ++i)
		int32_t L_29 = V_2;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_002a;
		}
	}
	{
		// curve.keys = keys;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_31 = ___curve1;
		KeyframeU5BU5D_tF4DC3E9BD9E6DB77FFF7BDC0B1545B5D6071513D* L_32 = V_1;
		NullCheck(L_31);
		AnimationCurve_set_keys_m3AA5ED7D9B0D9BCBCD349355160810B2DF939096(L_31, L_32, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteFloatCurveArray(System.IO.BinaryWriter,UnityEngine.AnimationCurve[],System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteFloatCurveArray_m45428C85800E394587F498ECB6ABF6A140F398B9 (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* ___curves1, float ___startTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimationSerializationUtils_WriteFloatCurveArray_m45428C85800E394587F498ECB6ABF6A140F398B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* V_0 = NULL;
	int32_t V_1 = 0;
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * V_2 = NULL;
	{
		// foreach (AnimationCurve curve in curves)
		AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* L_0 = ___curves1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0016;
	}

IL_0006:
	{
		// foreach (AnimationCurve curve in curves)
		AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// InputAnimationSerializationUtils.WriteFloatCurve(writer, curve, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_5 = ___writer0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_6 = V_2;
		float L_7 = ___startTime2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_WriteFloatCurve_mED510F307A43B6027213F2A92B54FDF98A9F5CD4(L_5, L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0016:
	{
		// foreach (AnimationCurve curve in curves)
		int32_t L_9 = V_1;
		AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadFloatCurveArray(System.IO.BinaryReader,UnityEngine.AnimationCurve[])
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadFloatCurveArray_m5E08AAB776E6FEC35630C555B3F2245C682A9D9A (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader0, AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* ___curves1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimationSerializationUtils_ReadFloatCurveArray_m5E08AAB776E6FEC35630C555B3F2245C682A9D9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* V_0 = NULL;
	int32_t V_1 = 0;
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * V_2 = NULL;
	{
		// foreach (AnimationCurve curve in curves)
		AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* L_0 = ___curves1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0015;
	}

IL_0006:
	{
		// foreach (AnimationCurve curve in curves)
		AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// InputAnimationSerializationUtils.ReadFloatCurve(reader, curve);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_5 = ___reader0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadFloatCurve_mA4953EB4C19CF3896F7A064DA15EF828AD25B825(L_5, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0015:
	{
		// foreach (AnimationCurve curve in curves)
		int32_t L_8 = V_1;
		AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteBoolCurveArray(System.IO.BinaryWriter,UnityEngine.AnimationCurve[],System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteBoolCurveArray_m2BE653B82813F9CB161FDCDE707503A2D4669D39 (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* ___curves1, float ___startTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimationSerializationUtils_WriteBoolCurveArray_m2BE653B82813F9CB161FDCDE707503A2D4669D39_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* V_0 = NULL;
	int32_t V_1 = 0;
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * V_2 = NULL;
	{
		// foreach (AnimationCurve curve in curves)
		AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* L_0 = ___curves1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0016;
	}

IL_0006:
	{
		// foreach (AnimationCurve curve in curves)
		AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// InputAnimationSerializationUtils.WriteBoolCurve(writer, curve, startTime);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_5 = ___writer0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_6 = V_2;
		float L_7 = ___startTime2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_WriteBoolCurve_mE6B858EF75394182F0CF5D006D2D7E07472D8CAA(L_5, L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0016:
	{
		// foreach (AnimationCurve curve in curves)
		int32_t L_9 = V_1;
		AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadBoolCurveArray(System.IO.BinaryReader,UnityEngine.AnimationCurve[])
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadBoolCurveArray_m296596EF06BCD00E3DA245E25791C98B3A835618 (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader0, AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* ___curves1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimationSerializationUtils_ReadBoolCurveArray_m296596EF06BCD00E3DA245E25791C98B3A835618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* V_0 = NULL;
	int32_t V_1 = 0;
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * V_2 = NULL;
	{
		// foreach (AnimationCurve curve in curves)
		AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* L_0 = ___curves1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0015;
	}

IL_0006:
	{
		// foreach (AnimationCurve curve in curves)
		AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// InputAnimationSerializationUtils.ReadBoolCurve(reader, curve);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_5 = ___reader0;
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_il2cpp_TypeInfo_var);
		InputAnimationSerializationUtils_ReadBoolCurve_m50760053F50E3662368AABD7DF636173FB72E6EC(L_5, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0015:
	{
		// foreach (AnimationCurve curve in curves)
		int32_t L_8 = V_1;
		AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::WriteMarkerList(System.IO.BinaryWriter,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>,System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_WriteMarkerList_m88C80BC53B538384BCDA521B4DD667DABA7E7343 (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * ___markers1, float ___startTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimationSerializationUtils_WriteMarkerList_m88C80BC53B538384BCDA521B4DD667DABA7E7343_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E  V_0;
	memset(&V_0, 0, sizeof(V_0));
	InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// writer.Write(markers.Count);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = ___writer0;
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_1 = ___markers1;
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m9660D9652127B41D761DBF34E5359CAEF030AFEF(L_1, /*hidden argument*/List_1_get_Count_m9660D9652127B41D761DBF34E5359CAEF030AFEF_RuntimeMethod_var);
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_0, L_2);
		// foreach (var marker in markers)
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_3 = ___markers1;
		NullCheck(L_3);
		Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E  L_4 = List_1_GetEnumerator_mC9034EAB7FECA8B62883FADB2B97E928A3F28571(L_3, /*hidden argument*/List_1_GetEnumerator_mC9034EAB7FECA8B62883FADB2B97E928A3F28571_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_0015:
		{
			// foreach (var marker in markers)
			InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * L_5 = Enumerator_get_Current_m1716C38467B81980A598F8050EF5D5C6270C57F5((Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E *)(&V_0), /*hidden argument*/Enumerator_get_Current_m1716C38467B81980A598F8050EF5D5C6270C57F5_RuntimeMethod_var);
			V_1 = L_5;
			// writer.Write(marker.time - startTime);
			BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_6 = ___writer0;
			InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * L_7 = V_1;
			NullCheck(L_7);
			float L_8 = L_7->get_time_0();
			float L_9 = ___startTime2;
			NullCheck(L_6);
			VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_6, ((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)));
			// writer.Write(marker.name);
			BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_10 = ___writer0;
			InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * L_11 = V_1;
			NullCheck(L_11);
			String_t* L_12 = L_11->get_name_1();
			NullCheck(L_10);
			VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_10, L_12);
		}

IL_0037:
		{
			// foreach (var marker in markers)
			bool L_13 = Enumerator_MoveNext_mCF433AF8333ACAF087A9987DC238A5F47159FCD5((Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mCF433AF8333ACAF087A9987DC238A5F47159FCD5_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0015;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7FFD43E309A2011AD1A00EADB7895454437977B2((Enumerator_tF2983839801DC3F7E2D560177CFD12A57171E75E *)(&V_0), /*hidden argument*/Enumerator_Dispose_m7FFD43E309A2011AD1A00EADB7895454437977B2_RuntimeMethod_var);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::ReadMarkerList(System.IO.BinaryReader,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.InputAnimationMarker>)
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils_ReadMarkerList_m2AE74ACACD5F7FCA66D623AA427E4EC8B2C41AD2 (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader0, List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * ___markers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimationSerializationUtils_ReadMarkerList_m2AE74ACACD5F7FCA66D623AA427E4EC8B2C41AD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * V_2 = NULL;
	{
		// markers.Clear();
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_0 = ___markers1;
		NullCheck(L_0);
		List_1_Clear_mA255E5A83D07CFE46042354A3A430392ADDC69A7(L_0, /*hidden argument*/List_1_Clear_mA255E5A83D07CFE46042354A3A430392ADDC69A7_RuntimeMethod_var);
		// int count = reader.ReadInt32();
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_1 = ___reader0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_1);
		V_0 = L_2;
		// markers.Capacity = count;
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_3 = ___markers1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		List_1_set_Capacity_m5993C6D98EC2CE4D753F72519771D5B5AAE034F8(L_3, L_4, /*hidden argument*/List_1_set_Capacity_m5993C6D98EC2CE4D753F72519771D5B5AAE034F8_RuntimeMethod_var);
		// for (int i = 0; i < count; ++i)
		V_1 = 0;
		goto IL_0041;
	}

IL_0018:
	{
		// var marker = new InputAnimationMarker();
		InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * L_5 = (InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 *)il2cpp_codegen_object_new(InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15_il2cpp_TypeInfo_var);
		InputAnimationMarker__ctor_mBA9692B6AACFDB9E38B103D1131562097C6A4D32(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		// marker.time = reader.ReadSingle();
		InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * L_6 = V_2;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_7 = ___reader0;
		NullCheck(L_7);
		float L_8 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_7);
		NullCheck(L_6);
		L_6->set_time_0(L_8);
		// marker.name = reader.ReadString();
		InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * L_9 = V_2;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_10 = ___reader0;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_10);
		NullCheck(L_9);
		L_9->set_name_1(L_11);
		// markers.Add(marker);
		List_1_tC1DDD24202359F6F7F00E1616AE89E59569CADF1 * L_12 = ___markers1;
		InputAnimationMarker_t8438F4B51BF0EAF16E9B1930CA7F312F82B31B15 * L_13 = V_2;
		NullCheck(L_12);
		List_1_Add_m206389017799A262D8D25B96003D913CA58AD59E(L_12, L_13, /*hidden argument*/List_1_Add_m206389017799A262D8D25B96003D913CA58AD59E_RuntimeMethod_var);
		// for (int i = 0; i < count; ++i)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < count; ++i)
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputAnimationSerializationUtils::.cctor()
extern "C" IL2CPP_METHOD_ATTR void InputAnimationSerializationUtils__cctor_m8992B5E9F632E4E186F0F98A721F36EA4B5CDE7D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAnimationSerializationUtils__cctor_m8992B5E9F632E4E186F0F98A721F36EA4B5CDE7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_StaticFields*)il2cpp_codegen_static_fields_for(InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_il2cpp_TypeInfo_var))->set_jointCount_0((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::add_OnRecordingStarted(System.Action)
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_add_OnRecordingStarted_mD5D6E9B98C08E36DF2D01C7BB3FA50C5F2F04212 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService_add_OnRecordingStarted_mD5D6E9B98C08E36DF2D01C7BB3FA50C5F2F04212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_1 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_2 = NULL;
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_OnRecordingStarted_12();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = V_0;
		V_1 = L_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)CastclassSealed((RuntimeObject*)L_4, Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var));
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** L_5 = __this->get_address_of_OnRecordingStarted_12();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = V_2;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = InterlockedCompareExchangeImpl<Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *>((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_9 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_9) == ((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::remove_OnRecordingStarted(System.Action)
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_remove_OnRecordingStarted_mBD637B1A6CADB8935C68869C4420F0FBD8264761 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService_remove_OnRecordingStarted_mBD637B1A6CADB8935C68869C4420F0FBD8264761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_1 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_2 = NULL;
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_OnRecordingStarted_12();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = V_0;
		V_1 = L_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)CastclassSealed((RuntimeObject*)L_4, Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var));
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** L_5 = __this->get_address_of_OnRecordingStarted_12();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = V_2;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = InterlockedCompareExchangeImpl<Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *>((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_9 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_9) == ((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::add_OnRecordingStopped(System.Action)
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_add_OnRecordingStopped_mC883A399729A73892E918432B82CA59104A7A1EE (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService_add_OnRecordingStopped_mC883A399729A73892E918432B82CA59104A7A1EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_1 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_2 = NULL;
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_OnRecordingStopped_13();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = V_0;
		V_1 = L_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)CastclassSealed((RuntimeObject*)L_4, Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var));
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** L_5 = __this->get_address_of_OnRecordingStopped_13();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = V_2;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = InterlockedCompareExchangeImpl<Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *>((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_9 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_9) == ((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::remove_OnRecordingStopped(System.Action)
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_remove_OnRecordingStopped_m70835D52BD908ECD41B7C9E8B66C14078A5D3011 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService_remove_OnRecordingStopped_m70835D52BD908ECD41B7C9E8B66C14078A5D3011_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_1 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_2 = NULL;
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_OnRecordingStopped_13();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = V_0;
		V_1 = L_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)CastclassSealed((RuntimeObject*)L_4, Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var));
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** L_5 = __this->get_address_of_OnRecordingStopped_13();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = V_2;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = InterlockedCompareExchangeImpl<Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *>((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_9 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_9) == ((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService__ctor_m79019FB2C78B9D3869030D84321D390BEB7A19C2 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, RuntimeObject* ___registrar0, RuntimeObject* ___inputSystem1, String_t* ___name2, uint32_t ___priority3, BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * ___profile4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService__ctor_m79019FB2C78B9D3869030D84321D390BEB7A19C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : this( inputSystem, name, priority, profile)
		RuntimeObject* L_0 = ___inputSystem1;
		String_t* L_1 = ___name2;
		uint32_t L_2 = ___priority3;
		BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * L_3 = ___profile4;
		InputRecordingService__ctor_m52FA4810C35FE21A97C748B357735B040903299C(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_4 = ___registrar0;
		BaseDataProvider_1_set_Registrar_m3822A19991F40A2E0F2E7D1A11C7643DCBC643AC(__this, L_4, /*hidden argument*/BaseDataProvider_1_set_Registrar_m3822A19991F40A2E0F2E7D1A11C7643DCBC643AC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService__ctor_m52FA4810C35FE21A97C748B357735B040903299C (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService__ctor_m52FA4810C35FE21A97C748B357735B040903299C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool useBufferTimeLimit = true;
		__this->set_useBufferTimeLimit_16((bool)1);
		// private float recordingBufferTimeLimit = 30.0f;
		__this->set_recordingBufferTimeLimit_17((30.0f));
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile)
		RuntimeObject* L_0 = ___inputSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_mC1D32C720A7299C03AA4AC7FAECC901F8EB496C4(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_InputRecordingProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * InputRecordingService_get_InputRecordingProfile_m135857BF9212B532C0BED576B65F57D57C0C34E6 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService_get_InputRecordingProfile_m135857BF9212B532C0BED576B65F57D57C0C34E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * G_B2_0 = NULL;
	MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * G_B1_0 = NULL;
	{
		// var profile = ConfigurationProfile as MixedRealityInputRecordingProfile;
		BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		// if (!profile)
		MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * L_1 = ((MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 *)IsInstClass((RuntimeObject*)L_0, MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_001d;
		}
	}
	{
		// Debug.LogError("Profile for Input Recording Service must be a MixedRealityInputRecordingProfile");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral49CB7901725A7C08D45BF819DE60B1F88586B38E, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
	}

IL_001d:
	{
		// return profile;
		return G_B2_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_IsEnabled()
extern "C" IL2CPP_METHOD_ATTR bool InputRecordingService_get_IsEnabled_m8A182F68AE0086E4AE33DA3E88BE1FE8E041A89E (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsEnabled { get; private set; } = false;
		bool L_0 = __this->get_U3CIsEnabledU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_IsEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_set_IsEnabled_m81E3455C41452834F454162AA598DB1818EE8A40 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsEnabled { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsEnabledU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_IsRecording()
extern "C" IL2CPP_METHOD_ATTR bool InputRecordingService_get_IsRecording_m072930E5ED31D435F3831D00D8EE9DA2833B8420 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRecording { get; private set; } = false;
		bool L_0 = __this->get_U3CIsRecordingU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_IsRecording(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_set_IsRecording_mB1CA677DBDEC356C118E8AFFDC0EEE436525FDD9 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRecording { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsRecordingU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_UseBufferTimeLimit()
extern "C" IL2CPP_METHOD_ATTR bool InputRecordingService_get_UseBufferTimeLimit_m52C661AF87691B4A9150B9B08D2D762D00AFF194 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method)
{
	{
		// get { return useBufferTimeLimit; }
		bool L_0 = __this->get_useBufferTimeLimit_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_UseBufferTimeLimit(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_set_UseBufferTimeLimit_m441467EEA1AFF857CC40987D715BA4DE28AABA7E (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService_set_UseBufferTimeLimit_m441467EEA1AFF857CC40987D715BA4DE28AABA7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (useBufferTimeLimit && !value)
		bool L_0 = __this->get_useBufferTimeLimit_16();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = ___value0;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// unlimitedRecordingStartTime = StartTime;
		float L_2 = InputRecordingService_get_StartTime_mEA9D822729F3AD6BAE981EA48C67FBD6BCF22CB4(__this, /*hidden argument*/NULL);
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_RuntimeMethod_var);
		__this->set_unlimitedRecordingStartTime_19(L_3);
	}

IL_001c:
	{
		// useBufferTimeLimit = value;
		bool L_4 = ___value0;
		__this->set_useBufferTimeLimit_16(L_4);
		// if (useBufferTimeLimit)
		bool L_5 = __this->get_useBufferTimeLimit_16();
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// PruneBuffer();
		InputRecordingService_PruneBuffer_mF88F3D8F547A9966E8A7F0B2DF5039D65499A1E0(__this, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_RecordingBufferTimeLimit()
extern "C" IL2CPP_METHOD_ATTR float InputRecordingService_get_RecordingBufferTimeLimit_mF73BC4574B3691B5A26BD330454D21B38470781B (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method)
{
	{
		// get { return recordingBufferTimeLimit; }
		float L_0 = __this->get_recordingBufferTimeLimit_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::set_RecordingBufferTimeLimit(System.Single)
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_set_RecordingBufferTimeLimit_m0DECBF9FD93ED8F2EF7CFD5F6C1F4269985857CB (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService_set_RecordingBufferTimeLimit_m0DECBF9FD93ED8F2EF7CFD5F6C1F4269985857CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// recordingBufferTimeLimit = Mathf.Max(value, 0.0f);
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_0, (0.0f), /*hidden argument*/NULL);
		__this->set_recordingBufferTimeLimit_17(L_1);
		// if (useBufferTimeLimit)
		bool L_2 = __this->get_useBufferTimeLimit_16();
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// PruneBuffer();
		InputRecordingService_PruneBuffer_mF88F3D8F547A9966E8A7F0B2DF5039D65499A1E0(__this, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.InputRecordingService::get_StartTime()
extern "C" IL2CPP_METHOD_ATTR float InputRecordingService_get_StartTime_mEA9D822729F3AD6BAE981EA48C67FBD6BCF22CB4 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService_get_StartTime_mEA9D822729F3AD6BAE981EA48C67FBD6BCF22CB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (unlimitedRecordingStartTime.HasValue)
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * L_0 = __this->get_address_of_unlimitedRecordingStartTime_19();
		bool L_1 = Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)L_0, /*hidden argument*/Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// if (useBufferTimeLimit)
		bool L_2 = __this->get_useBufferTimeLimit_16();
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// return Mathf.Max(unlimitedRecordingStartTime.Value, Time.time - recordingBufferTimeLimit);
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * L_3 = __this->get_address_of_unlimitedRecordingStartTime_19();
		float L_4 = Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)L_3, /*hidden argument*/Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_RuntimeMethod_var);
		float L_5 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_6 = __this->get_recordingBufferTimeLimit_17();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_4, ((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0032:
	{
		// return unlimitedRecordingStartTime.Value;
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * L_8 = __this->get_address_of_unlimitedRecordingStartTime_19();
		float L_9 = Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)L_8, /*hidden argument*/Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_RuntimeMethod_var);
		return L_9;
	}

IL_003e:
	{
		// return Time.time;
		float L_10 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::ResetStartTime()
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_ResetStartTime_mB347BAD39248483F400882D199A54E7514EDB5CC (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService_ResetStartTime_mB347BAD39248483F400882D199A54E7514EDB5CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsRecording)
		bool L_0 = InputRecordingService_get_IsRecording_m072930E5ED31D435F3831D00D8EE9DA2833B8420(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// unlimitedRecordingStartTime = Time.time;
		float L_1 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F((&L_2), L_1, /*hidden argument*/Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_RuntimeMethod_var);
		__this->set_unlimitedRecordingStartTime_19(L_2);
		// }
		return;
	}

IL_0019:
	{
		// unlimitedRecordingStartTime = null;
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * L_3 = __this->get_address_of_unlimitedRecordingStartTime_19();
		il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 ));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::Enable()
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_Enable_m2B04E38B5C80699964810730D3E0D8FA8F976842 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService_Enable_m2B04E38B5C80699964810730D3E0D8FA8F976842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IsEnabled = true;
		InputRecordingService_set_IsEnabled_m81E3455C41452834F454162AA598DB1818EE8A40(__this, (bool)1, /*hidden argument*/NULL);
		// recordingBuffer = new InputAnimation();
		InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_0 = (InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 *)il2cpp_codegen_object_new(InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485_il2cpp_TypeInfo_var);
		InputAnimation__ctor_m3F865B984BC134035E018E424CDA97E144F0F9D1(L_0, /*hidden argument*/NULL);
		__this->set_recordingBuffer_18(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::Disable()
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_Disable_mEBD111C84F734A9892CABB2872A3359114D8F489 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method)
{
	{
		// IsEnabled = false;
		InputRecordingService_set_IsEnabled_m81E3455C41452834F454162AA598DB1818EE8A40(__this, (bool)0, /*hidden argument*/NULL);
		// recordingBuffer = null;
		__this->set_recordingBuffer_18((InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 *)NULL);
		// ResetStartTime();
		InputRecordingService_ResetStartTime_mB347BAD39248483F400882D199A54E7514EDB5CC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::StartRecording()
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_StartRecording_m57C34579B1C17F274C884B772B2F2AD70814DDDC (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService_StartRecording_m57C34579B1C17F274C884B772B2F2AD70814DDDC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B6_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B5_0 = NULL;
	{
		// IsRecording = true;
		InputRecordingService_set_IsRecording_mB1CA677DBDEC356C118E8AFFDC0EEE436525FDD9(__this, (bool)1, /*hidden argument*/NULL);
		// if (UseBufferTimeLimit)
		bool L_0 = InputRecordingService_get_UseBufferTimeLimit_m52C661AF87691B4A9150B9B08D2D762D00AFF194(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// PruneBuffer();
		InputRecordingService_PruneBuffer_mF88F3D8F547A9966E8A7F0B2DF5039D65499A1E0(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// if (!unlimitedRecordingStartTime.HasValue)
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * L_1 = __this->get_address_of_unlimitedRecordingStartTime_19();
		bool L_2 = Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)L_1, /*hidden argument*/Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		// unlimitedRecordingStartTime = Time.time;
		float L_3 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_RuntimeMethod_var);
		__this->set_unlimitedRecordingStartTime_19(L_4);
	}

IL_0032:
	{
		// OnRecordingStarted?.Invoke();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_5 = __this->get_OnRecordingStarted_12();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = L_5;
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		NullCheck(G_B6_0);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(G_B6_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::StopRecording()
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_StopRecording_m4E3B35E8B97BDAAC7A054891030AB2A82E6D114F (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method)
{
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B2_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B1_0 = NULL;
	{
		// IsRecording = false;
		InputRecordingService_set_IsRecording_mB1CA677DBDEC356C118E8AFFDC0EEE436525FDD9(__this, (bool)0, /*hidden argument*/NULL);
		// OnRecordingStopped?.Invoke();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_OnRecordingStopped_13();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::LateUpdate()
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_LateUpdate_m5C4F30D1EF8A3C22355D20AE198678E3148BA453 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method)
{
	{
		// if (IsEnabled)
		bool L_0 = InputRecordingService_get_IsEnabled_m8A182F68AE0086E4AE33DA3E88BE1FE8E041A89E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (IsRecording)
		bool L_1 = InputRecordingService_get_IsRecording_m072930E5ED31D435F3831D00D8EE9DA2833B8420(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// if (UseBufferTimeLimit)
		bool L_2 = InputRecordingService_get_UseBufferTimeLimit_m52C661AF87691B4A9150B9B08D2D762D00AFF194(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// PruneBuffer();
		InputRecordingService_PruneBuffer_mF88F3D8F547A9966E8A7F0B2DF5039D65499A1E0(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// RecordKeyframe();
		InputRecordingService_RecordKeyframe_mCBCAEF9D03FF64D86DBB5F8BEDE3CD67CA600B46(__this, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::DiscardRecordedInput()
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_DiscardRecordedInput_m7EE1FF0716CD4E7C343B568E1D634E80A0AD1EE4 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method)
{
	{
		// if (IsEnabled)
		bool L_0 = InputRecordingService_get_IsEnabled_m8A182F68AE0086E4AE33DA3E88BE1FE8E041A89E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// recordingBuffer.Clear();
		InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_1 = __this->get_recordingBuffer_18();
		NullCheck(L_1);
		InputAnimation_Clear_m1BC29C06CDEC1CB9FDAAAAF140C4F443659C5BDF(L_1, /*hidden argument*/NULL);
		// ResetStartTime();
		InputRecordingService_ResetStartTime_mB347BAD39248483F400882D199A54E7514EDB5CC(__this, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::RecordKeyframe()
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_RecordKeyframe_mCBCAEF9D03FF64D86DBB5F8BEDE3CD67CA600B46 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService_RecordKeyframe_mCBCAEF9D03FF64D86DBB5F8BEDE3CD67CA600B46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * V_1 = NULL;
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		// float time = Time.time;
		float L_0 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		V_0 = L_0;
		// var profile = InputRecordingProfile;
		MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * L_1 = InputRecordingService_get_InputRecordingProfile_m135857BF9212B532C0BED576B65F57D57C0C34E6(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		// RecordInputHandData(Handedness.Left);
		InputRecordingService_RecordInputHandData_m79F3873485C42DD0D3CA964B8343A813F5229530(__this, 1, /*hidden argument*/NULL);
		// RecordInputHandData(Handedness.Right);
		InputRecordingService_RecordInputHandData_m79F3873485C42DD0D3CA964B8343A813F5229530(__this, 2, /*hidden argument*/NULL);
		// if (CameraCache.Main)
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0067;
		}
	}
	{
		// var cameraPose = new MixedRealityPose(CameraCache.Main.transform.position, CameraCache.Main.transform.rotation);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_7 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_8, /*hidden argument*/NULL);
		MixedRealityPose__ctor_m88F006560E2E857FD0E8362B3CE4E4FE57AACA0B((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_2), L_6, L_9, /*hidden argument*/NULL);
		// recordingBuffer.AddCameraPoseKey(time, cameraPose, profile.CameraPositionThreshold, profile.CameraRotationThreshold);
		InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_10 = __this->get_recordingBuffer_18();
		float L_11 = V_0;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_12 = V_2;
		MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * L_13 = V_1;
		NullCheck(L_13);
		float L_14 = MixedRealityInputRecordingProfile_get_CameraPositionThreshold_mCF9DC6994CC9D6C11B9AE5B9560F3399400E0F5F(L_13, /*hidden argument*/NULL);
		MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = MixedRealityInputRecordingProfile_get_CameraRotationThreshold_m3E7C7770D0CB1411EE465E080CF97BBF7AABB345(L_15, /*hidden argument*/NULL);
		NullCheck(L_10);
		InputAnimation_AddCameraPoseKey_mB15BCFBF35157EED7BEBFB5A11740BAD5BC1F51C(L_10, L_11, L_12, L_14, L_16, /*hidden argument*/NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRecordingService::RecordInputHandData(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR bool InputRecordingService_RecordInputHandData_m79F3873485C42DD0D3CA964B8343A813F5229530 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, uint8_t ___handedness0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService_RecordInputHandData_m79F3873485C42DD0D3CA964B8343A813F5229530_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * V_6 = NULL;
	int32_t V_7 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_9;
	memset(&V_9, 0, sizeof(V_9));
	int32_t V_10 = 0;
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  V_11;
	memset(&V_11, 0, sizeof(V_11));
	MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B9_0;
	memset(&G_B9_0, 0, sizeof(G_B9_0));
	int32_t G_B9_1 = 0;
	{
		// float time = Time.time;
		float L_0 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		V_0 = L_0;
		// var profile = InputRecordingProfile;
		MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * L_1 = InputRecordingService_get_InputRecordingProfile_m135857BF9212B532C0BED576B65F57D57C0C34E6(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		// var hand = HandJointUtils.FindHand(handedness);
		uint8_t L_2 = ___handedness0;
		RuntimeObject* L_3 = HandJointUtils_FindHand_mB95BDFAA144BFA936D0D44365BF1578C710266C3(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		// if (hand == null)
		RuntimeObject* L_4 = V_2;
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		// recordingBuffer.AddHandStateKey(time, handedness, false, false);
		InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_5 = __this->get_recordingBuffer_18();
		float L_6 = V_0;
		uint8_t L_7 = ___handedness0;
		NullCheck(L_5);
		InputAnimation_AddHandStateKey_m86AF42949A107FE9666DF184B49B281E98990A05(L_5, L_6, L_7, (bool)0, (bool)0, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0028:
	{
		// bool isTracked = (hand.TrackingState == TrackingState.Tracked);
		RuntimeObject* L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_TrackingState() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_8);
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
		// bool isPinching = false;
		V_4 = (bool)0;
		// for (int i = 0; i < hand.Interactions?.Length; i++)
		V_5 = 0;
		goto IL_0063;
	}

IL_003a:
	{
		// var interaction = hand.Interactions[i];
		RuntimeObject* L_10 = V_2;
		NullCheck(L_10);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_11 = InterfaceFuncInvoker0< MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Interactions() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_10);
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_6 = L_14;
		// switch (interaction.InputType)
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_15 = V_6;
		NullCheck(L_15);
		int32_t L_16 = MixedRealityInteractionMapping_get_InputType_m6FB17C3592ED0C62594C5FD9664BDD3C38149411(L_15, /*hidden argument*/NULL);
		V_7 = L_16;
		int32_t L_17 = V_7;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)25)))))
		{
			goto IL_005d;
		}
	}
	{
		// isPinching = interaction.BoolData;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_18 = V_6;
		NullCheck(L_18);
		bool L_19 = MixedRealityInteractionMapping_get_BoolData_m61EB4EE67167224A146BB32011E10545E5B9E814(L_18, /*hidden argument*/NULL);
		V_4 = L_19;
	}

IL_005d:
	{
		// for (int i = 0; i < hand.Interactions?.Length; i++)
		int32_t L_20 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0063:
	{
		// for (int i = 0; i < hand.Interactions?.Length; i++)
		int32_t L_21 = V_5;
		RuntimeObject* L_22 = V_2;
		NullCheck(L_22);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_23 = InterfaceFuncInvoker0< MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Interactions() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_22);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_24 = L_23;
		G_B7_0 = L_24;
		G_B7_1 = L_21;
		if (L_24)
		{
			G_B8_0 = L_24;
			G_B8_1 = L_21;
			goto IL_007b;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_25 = V_9;
		G_B9_0 = L_25;
		G_B9_1 = G_B7_1;
		goto IL_0082;
	}

IL_007b:
	{
		NullCheck(G_B8_0);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_26), (((int32_t)((int32_t)(((RuntimeArray *)G_B8_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B9_0 = L_26;
		G_B9_1 = G_B8_1;
	}

IL_0082:
	{
		V_8 = G_B9_0;
		int32_t L_27 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_8), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
		bool L_28 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_8), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B9_1) < ((int32_t)L_27))? 1 : 0)&(int32_t)L_28)))
		{
			goto IL_003a;
		}
	}
	{
		// recordingBuffer.AddHandStateKey(time, handedness, isTracked, isPinching);
		InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_29 = __this->get_recordingBuffer_18();
		float L_30 = V_0;
		uint8_t L_31 = ___handedness0;
		bool L_32 = V_3;
		bool L_33 = V_4;
		NullCheck(L_29);
		InputAnimation_AddHandStateKey_m86AF42949A107FE9666DF184B49B281E98990A05(L_29, L_30, L_31, L_32, L_33, /*hidden argument*/NULL);
		// if (isTracked)
		bool L_34 = V_3;
		if (!L_34)
		{
			goto IL_00e7;
		}
	}
	{
		// for (int i = 0; i < jointCount; ++i)
		V_10 = 0;
		goto IL_00de;
	}

IL_00af:
	{
		// if (hand.TryGetJoint((TrackedHandJoint)i, out MixedRealityPose jointPose))
		RuntimeObject* L_35 = V_2;
		int32_t L_36 = V_10;
		NullCheck(L_35);
		bool L_37 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_tB69B0DE743F5339169170CA05BF2F0CCFC208E83_il2cpp_TypeInfo_var, L_35, L_36, (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_11));
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		// recordingBuffer.AddHandJointKey(time, handedness, (TrackedHandJoint)i, jointPose, profile.JointPositionThreshold, profile.JointRotationThreshold);
		InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_38 = __this->get_recordingBuffer_18();
		float L_39 = V_0;
		uint8_t L_40 = ___handedness0;
		int32_t L_41 = V_10;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_42 = V_11;
		MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * L_43 = V_1;
		NullCheck(L_43);
		float L_44 = MixedRealityInputRecordingProfile_get_JointPositionThreshold_m3CB74ADA1317E98697E738CF88D15CE34FFAD90D(L_43, /*hidden argument*/NULL);
		MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * L_45 = V_1;
		NullCheck(L_45);
		float L_46 = MixedRealityInputRecordingProfile_get_JointRotationThreshold_m27494360E4DF7AE0A6EE8DDA2349453C60E2BE69(L_45, /*hidden argument*/NULL);
		NullCheck(L_38);
		InputAnimation_AddHandJointKey_mEC5B950CA0C0454AFF75C654CCB587D2EFC2EF25(L_38, L_39, L_40, L_41, L_42, L_44, L_46, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_47 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00de:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_48 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4_il2cpp_TypeInfo_var);
		int32_t L_49 = ((InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4_StaticFields*)il2cpp_codegen_static_fields_for(InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4_il2cpp_TypeInfo_var))->get_jointCount_11();
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_00af;
		}
	}

IL_00e7:
	{
		// return true;
		return (bool)1;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.InputRecordingService::SaveInputAnimation(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* InputRecordingService_SaveInputAnimation_m5E10C15128F94A6ACAA710235943DC860E251EF3 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, String_t* ___directory0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService_SaveInputAnimation_m5E10C15128F94A6ACAA710235943DC860E251EF3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveInputAnimation(InputAnimationSerializationUtils.GetOutputFilename(), directory);
		IL2CPP_RUNTIME_CLASS_INIT(InputAnimationSerializationUtils_t09CD50AF8E3DA677779B45BE562045BE6E19C3D0_il2cpp_TypeInfo_var);
		String_t* L_0 = InputAnimationSerializationUtils_GetOutputFilename_mB10168E8921AAF465829FD4102258316F4A4614F(_stringLiteralDA9D033C5377CFE8B6725CEA34BE3573195E0BBC, (bool)1, /*hidden argument*/NULL);
		String_t* L_1 = ___directory0;
		String_t* L_2 = InputRecordingService_SaveInputAnimation_m2A7E122A27D69DEDCB2B83C49DD476833409A733(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.InputRecordingService::SaveInputAnimation(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* InputRecordingService_SaveInputAnimation_m2A7E122A27D69DEDCB2B83C49DD476833409A733 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, String_t* ___filename0, String_t* ___directory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService_SaveInputAnimation_m2A7E122A27D69DEDCB2B83C49DD476833409A733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		// if (IsEnabled)
		bool L_0 = InputRecordingService_get_IsEnabled_m8A182F68AE0086E4AE33DA3E88BE1FE8E041A89E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0065;
		}
	}
	{
		// string path = Path.Combine(directory ?? Application.persistentDataPath, filename);
		String_t* L_1 = ___directory1;
		String_t* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0012;
		}
	}
	{
		String_t* L_3 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0012:
	{
		String_t* L_4 = ___filename0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_5 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(G_B3_0, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			// using (Stream fileStream = File.Open(path, FileMode.Create))
			String_t* L_6 = V_0;
			FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_7 = File_Open_mDA5EB4A312EAEBF8543B13C572271FB5F673A501(L_6, 2, /*hidden argument*/NULL);
			V_1 = L_7;
		}

IL_0021:
		try
		{ // begin try (depth: 2)
			// PruneBuffer();
			InputRecordingService_PruneBuffer_mF88F3D8F547A9966E8A7F0B2DF5039D65499A1E0(__this, /*hidden argument*/NULL);
			// recordingBuffer.ToStream(fileStream, StartTime);
			InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_8 = __this->get_recordingBuffer_18();
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_9 = V_1;
			float L_10 = InputRecordingService_get_StartTime_mEA9D822729F3AD6BAE981EA48C67FBD6BCF22CB4(__this, /*hidden argument*/NULL);
			NullCheck(L_8);
			InputAnimation_ToStream_m30A985C695CC60F01F20F99C4199C7EA23AB72DF(L_8, L_9, L_10, /*hidden argument*/NULL);
			// Debug.Log($"Recorded input animation exported to {path}");
			String_t* L_11 = V_0;
			String_t* L_12 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral04CF528CA8E847143DC7CEEF7A4A0DFE3BE72DCF, L_11, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x55, FINALLY_004b);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004b;
		}

FINALLY_004b:
		{ // begin finally (depth: 2)
			{
				Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_13 = V_1;
				if (!L_13)
				{
					goto IL_0054;
				}
			}

IL_004e:
			{
				Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_14 = V_1;
				NullCheck(L_14);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_14);
			}

IL_0054:
			{
				IL2CPP_END_FINALLY(75)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(75)
		{
			IL2CPP_JUMP_TBL(0x55, IL_0055)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0055:
		{
			// return path;
			String_t* L_15 = V_0;
			V_2 = L_15;
			goto IL_006b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0059;
		throw e;
	}

CATCH_0059:
	{ // begin catch(System.IO.IOException)
		// Debug.LogWarning(ex.Message);
		NullCheck(((IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)__exception_local));
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)__exception_local));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_16, /*hidden argument*/NULL);
		// }
		goto IL_0065;
	} // end catch (depth: 1)

IL_0065:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_006b:
	{
		// }
		String_t* L_17 = V_2;
		return L_17;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::PruneBuffer()
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService_PruneBuffer_mF88F3D8F547A9966E8A7F0B2DF5039D65499A1E0 (InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4 * __this, const RuntimeMethod* method)
{
	{
		// recordingBuffer.CutoffBeforeTime(StartTime);
		InputAnimation_t412CB1EDC2CB08ECD60F13F0CBCDE1A70737D485 * L_0 = __this->get_recordingBuffer_18();
		float L_1 = InputRecordingService_get_StartTime_mEA9D822729F3AD6BAE981EA48C67FBD6BCF22CB4(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InputAnimation_CutoffBeforeTime_mF63F80F2119882ECC144BD8204776CDEAB0FFBDA(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputRecordingService::.cctor()
extern "C" IL2CPP_METHOD_ATTR void InputRecordingService__cctor_mCB1E34AE425DC2DC64F50B9141B4F85EBEAA58C5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputRecordingService__cctor_mCB1E34AE425DC2DC64F50B9141B4F85EBEAA58C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4_StaticFields*)il2cpp_codegen_static_fields_for(InputRecordingService_t2A3FAB0CA3C17168D992745A3829F533256CA2B4_il2cpp_TypeInfo_var))->set_jointCount_11((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
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
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_JointPositionThreshold()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointPositionThreshold_m3CB74ADA1317E98697E738CF88D15CE34FFAD90D (MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * __this, const RuntimeMethod* method)
{
	{
		// public float JointPositionThreshold => jointPositionThreshold;
		float L_0 = __this->get_jointPositionThreshold_5();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_JointRotationThreshold()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_JointRotationThreshold_m27494360E4DF7AE0A6EE8DDA2349453C60E2BE69 (MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * __this, const RuntimeMethod* method)
{
	{
		// public float JointRotationThreshold => jointRotationThreshold;
		float L_0 = __this->get_jointRotationThreshold_6();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_CameraPositionThreshold()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraPositionThreshold_mCF9DC6994CC9D6C11B9AE5B9560F3399400E0F5F (MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * __this, const RuntimeMethod* method)
{
	{
		// public float CameraPositionThreshold => cameraPositionThreshold;
		float L_0 = __this->get_cameraPositionThreshold_7();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::get_CameraRotationThreshold()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputRecordingProfile_get_CameraRotationThreshold_m3E7C7770D0CB1411EE465E080CF97BBF7AABB345 (MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * __this, const RuntimeMethod* method)
{
	{
		// public float CameraRotationThreshold => cameraRotationThreshold;
		float L_0 = __this->get_cameraRotationThreshold_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputRecordingProfile::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityInputRecordingProfile__ctor_mBB973E2BCDEC6C7700811F76C127BA49546E3805 (MixedRealityInputRecordingProfile_tB25C6C2FA23A4346932DEDD909390AED5BFFA938 * __this, const RuntimeMethod* method)
{
	{
		// private float jointPositionThreshold = 0.001f;
		__this->set_jointPositionThreshold_5((0.001f));
		// private float jointRotationThreshold = 0.02f;
		__this->set_jointRotationThreshold_6((0.02f));
		// private float cameraPositionThreshold = 0.002f;
		__this->set_cameraPositionThreshold_7((0.002f));
		// private float cameraRotationThreshold = 0.02f;
		__this->set_cameraRotationThreshold_8((0.02f));
		BaseMixedRealityProfile__ctor_m1BFB72419034F7679C354C2AAA05A99EC8A27104(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
