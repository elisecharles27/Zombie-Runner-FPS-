#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct KeyCollection_t5139D729B43788C8618F24D1F6B76B894363E655;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct KeyCollection_t0E9A2C72E46C1A4FE7861BB40E8035E7D4F67174;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct ValueCollection_tC4E52A001D3CCFFBDFC279A1458CEC1C823D9F91;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct ValueCollection_t5C470EAF9AA6787C72B36CCEE35F46DBB4C9FCCA;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>[]
struct EntryU5BU5D_t1C870790D27AB51836CCACB01C95C83D56DB8DDF;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>[]
struct EntryU5BU5D_tDF03C6AF2EFF2661D3B821514E06D6DF189BAAA7;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityStandardAssets.Characters.ThirdPerson.AICharacterControl
struct AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B;
// UnityStandardAssets.Cameras.AbstractTargetFollower
struct AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityStandardAssets.Cameras.AutoCam
struct AutoCam_t6611768AA933DB8058D35624A5E833E2B400AF0E;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938;
// UnityStandardAssets.Vehicles.Ball.Ball
struct Ball_tA56A8F4D3F334AF2E4E1AB6E09D67141277531AE;
// UnityStandardAssets.Vehicles.Ball.BallUserControl
struct BallUserControl_tC4FF60630D8C24B65A48D9B5E8ED7035F5F37CA2;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// UnityStandardAssets.Utility.FOVKick
struct FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82;
// UnityStandardAssets.Characters.FirstPerson.FirstPersonController
struct FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D;
// UnityStandardAssets.Cameras.FreeLookCam
struct FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityStandardAssets.Cameras.HandHeldCam
struct HandHeldCam_t23DE8280297F0ACC05548933329B256AEE82FBA0;
// UnityStandardAssets.Characters.FirstPerson.HeadBob
struct HeadBob_tFA4377CB8CACAE1F5C5EB360CFE29589FC0236BA;
// System.Collections.IComparer
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct InputAxisScrollbar_t20252601C5FA8B26065A610E5FA4E473916609FA;
// UnityStandardAssets.CrossPlatformInput.Joystick
struct Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2;
// UnityStandardAssets.Utility.LerpControlledBob
struct LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF;
// UnityStandardAssets.Cameras.LookatTarget
struct LookatTarget_t859A683B0EE2CEEC8F3B1233D340F50EAA7E2B11;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityStandardAssets.Cameras.PivotBasedCameraRig
struct PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityStandardAssets.Cameras.ProtectCameraFromWallClip
struct ProtectCameraFromWallClip_t52F6771775B0D2601663DA0C5DEC8A6F3650438C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController
struct RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530;
// System.String
struct String_t;
// UnityStandardAssets.Cameras.TargetFieldOfView
struct TargetFieldOfView_t4B014C83655EF397B0868A6C7E071521C8F33F75;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D;
// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl
struct ThirdPersonUserControl_t4366E3186AA053741323540A1290BAB7CA92AA85;
// UnityStandardAssets.CrossPlatformInput.TiltInput
struct TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3;
// UnityStandardAssets.CrossPlatformInput.TouchPad
struct TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09;
// UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer
struct RayHitComparer_t48174939C23091FD1B46B709FF44BD43167116CD;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings
struct AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings
struct MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF;
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75;

IL2CPP_EXTERN_C RuntimeClass* AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RayHitComparer_t48174939C23091FD1B46B709FF44BD43167116CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral073636784DA1EA12164998BEE384713657E4BE14;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral288B53F014E2C53296CBC94785B0521CC621D509;
IL2CPP_EXTERN_C String_t* _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9;
IL2CPP_EXTERN_C String_t* _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD;
IL2CPP_EXTERN_C String_t* _stringLiteral93C21CAED16D9E840DD58D3736DFEC667D1E7957;
IL2CPP_EXTERN_C String_t* _stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralE1921D3070489B1532E810684C2992B44215A052;
IL2CPP_EXTERN_C String_t* _stringLiteralEADE91E573B3BBA4B0C2F14237A82BADF354A2D6;
IL2CPP_EXTERN_C String_t* _stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4;
IL2CPP_EXTERN_C String_t* _stringLiteralF0BFFDA088BD1CDAA41AB72838F89353A454A0CD;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_mF258B768A3AFAFEAA9D44CC0357ECACCC058E7FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBall_tA56A8F4D3F334AF2E4E1AB6E09D67141277531AE_m2D4B7560748D2015976C2699A0E7B2CD7C591EB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D_m0A20749E08463EA4E8911DD6578ED1ECFD0946BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7D80F5E2747A1D8480D32F6A7DADF9FF612497D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA61F8CE1734A37C2059099185058B68DA3D3890A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m22C8CE308A22BF5C640788A660B9B5D510C75276_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m2BFFA59327E0CEC0AF2E64E1CC7242404F170005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6E4E3A55B7CBE6817B2FC293EDBC1EFE90120BDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD3D57777C943F7E088E9DE8405EBA492A7A5BB2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisNegative_mBC96B9BA1AB5B6930274F468BD67379200E38444_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisPositive_mBF613552270FC457DDD76AF9A61936B19C0480F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisZero_m84AD625B039B82E3D5F8317E21FE0CC129C11FCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxis_mB8C42BB400B7C8DAEE07BE035620E3CE1A15D7F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetButtonDown_m9E543F46E3DC44B51F40600AE83BAE2D681888CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetButtonUp_m972DDCD2ED6C2531A9CC6E4098EAD5C4545FAA08_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1C870790D27AB51836CCACB01C95C83D56DB8DDF* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5139D729B43788C8618F24D1F6B76B894363E655* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC4E52A001D3CCFFBDFC279A1458CEC1C823D9F91* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDF03C6AF2EFF2661D3B821514E06D6DF189BAAA7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t0E9A2C72E46C1A4FE7861BB40E8035E7D4F67174* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5C470EAF9AA6787C72B36CCEE35F46DBB4C9FCCA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// UnityStandardAssets.Utility.FOVKick
struct FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82  : public RuntimeObject
{
	// UnityEngine.Camera UnityStandardAssets.Utility.FOVKick::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_0;
	// System.Single UnityStandardAssets.Utility.FOVKick::originalFov
	float ___originalFov_1;
	// System.Single UnityStandardAssets.Utility.FOVKick::FOVIncrease
	float ___FOVIncrease_2;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToIncrease
	float ___TimeToIncrease_3;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToDecrease
	float ___TimeToDecrease_4;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.FOVKick::IncreaseCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___IncreaseCurve_5;
};

// UnityStandardAssets.Utility.LerpControlledBob
struct LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::BobDuration
	float ___BobDuration_0;
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::BobAmount
	float ___BobAmount_1;
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::m_Offset
	float ___m_Offset_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221  : public RuntimeObject
{
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::m_Value
	float ___m_Value_1;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_2;
};

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460  : public RuntimeObject
{
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_1;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_LastPressedFrame
	int32_t ___m_LastPressedFrame_2;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_ReleasedFrame
	int32_t ___m_ReleasedFrame_3;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_Pressed
	bool ___m_Pressed_4;
};

// UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer
struct RayHitComparer_t48174939C23091FD1B46B709FF44BD43167116CD  : public RuntimeObject
{
};

// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings
struct AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::groundCheckDistance
	float ___groundCheckDistance_0;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::stickToGroundHelperDistance
	float ___stickToGroundHelperDistance_1;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::slowDownRate
	float ___slowDownRate_2;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::airControl
	bool ___airControl_3;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::shellOffset
	float ___shellOffset_4;
};

// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings
struct MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::ForwardSpeed
	float ___ForwardSpeed_0;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::BackwardSpeed
	float ___BackwardSpeed_1;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::StrafeSpeed
	float ___StrafeSpeed_2;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::RunMultiplier
	float ___RunMultiplier_3;
	// UnityEngine.KeyCode UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::RunKey
	int32_t ___RunKey_4;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::JumpForce
	float ___JumpForce_5;
	// UnityEngine.AnimationCurve UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::SlopeCurveModifier
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___SlopeCurveModifier_6;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::CurrentTargetSpeed
	float ___CurrentTargetSpeed_7;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::m_Running
	bool ___m_Running_8;
};

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75  : public RuntimeObject
{
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::type
	int32_t ___type_0;
	// System.String UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::axisName
	String_t* ___axisName_1;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
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
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92  : public RuntimeObject
{
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_pinvoke
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_com
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::HorizontalBobRange
	float ___HorizontalBobRange_0;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::VerticalBobRange
	float ___VerticalBobRange_1;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.CurveControlledBob::Bobcurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___Bobcurve_2;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::VerticaltoHorizontalRatio
	float ___VerticaltoHorizontalRatio_3;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_CyclePositionX
	float ___m_CyclePositionX_4;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_CyclePositionY
	float ___m_CyclePositionY_5;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_BobBaseInterval
	float ___m_BobBaseInterval_6;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::m_OriginalCameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OriginalCameraPosition_7;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_Time
	float ___m_Time_8;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894  : public RuntimeObject
{
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::XSensitivity
	float ___XSensitivity_0;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::YSensitivity
	float ___YSensitivity_1;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::clampVerticalRotation
	bool ___clampVerticalRotation_2;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::MinimumX
	float ___MinimumX_3;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::MaximumX
	float ___MaximumX_4;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::smooth
	bool ___smooth_5;
	// System.Single UnityStandardAssets.Characters.FirstPerson.MouseLook::smoothTime
	float ___smoothTime_6;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::lockCursor
	bool ___lockCursor_7;
	// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::m_CharacterTargetRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CharacterTargetRot_8;
	// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::m_CameraTargetRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CameraTargetRot_9;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.MouseLook::m_cursorIsLocked
	bool ___m_cursorIsLocked_10;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
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
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CvirtualMousePositionU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualAxes
	Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* ___m_VirtualAxes_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualButtons
	Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* ___m_VirtualButtons_2;
	// System.Collections.Generic.List`1<System.String> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_AlwaysUseVirtual
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_AlwaysUseVirtual_3;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C  : public VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1
{
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<tilt>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CtiltU3Ek__BackingField_29;
	// UnityEngine.PenStatus UnityEngine.EventSystems.PointerEventData::<penStatus>k__BackingField
	int32_t ___U3CpenStatusU3Ek__BackingField_30;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_31;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_32;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_33;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_34;
};

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100  : public VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.TrailRenderer
struct TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityStandardAssets.Characters.ThirdPerson.AICharacterControl
struct AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AI.NavMeshAgent UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::<agent>k__BackingField
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___U3CagentU3Ek__BackingField_4;
	// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::<character>k__BackingField
	ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* ___U3CcharacterU3Ek__BackingField_5;
	// UnityEngine.Transform UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_6;
};

// UnityStandardAssets.Cameras.AbstractTargetFollower
struct AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform UnityStandardAssets.Cameras.AbstractTargetFollower::m_Target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Target_4;
	// System.Boolean UnityStandardAssets.Cameras.AbstractTargetFollower::m_AutoTargetPlayer
	bool ___m_AutoTargetPlayer_5;
	// UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType UnityStandardAssets.Cameras.AbstractTargetFollower::m_UpdateType
	int32_t ___m_UpdateType_6;
	// UnityEngine.Rigidbody UnityStandardAssets.Cameras.AbstractTargetFollower::targetRigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___targetRigidbody_7;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// UnityStandardAssets.Vehicles.Ball.Ball
struct Ball_tA56A8F4D3F334AF2E4E1AB6E09D67141277531AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityStandardAssets.Vehicles.Ball.Ball::m_MovePower
	float ___m_MovePower_4;
	// System.Boolean UnityStandardAssets.Vehicles.Ball.Ball::m_UseTorque
	bool ___m_UseTorque_5;
	// System.Single UnityStandardAssets.Vehicles.Ball.Ball::m_MaxAngularVelocity
	float ___m_MaxAngularVelocity_6;
	// System.Single UnityStandardAssets.Vehicles.Ball.Ball::m_JumpPower
	float ___m_JumpPower_7;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Ball.Ball::m_Rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_Rigidbody_9;
};

// UnityStandardAssets.Vehicles.Ball.BallUserControl
struct BallUserControl_tC4FF60630D8C24B65A48D9B5E8ED7035F5F37CA2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityStandardAssets.Vehicles.Ball.Ball UnityStandardAssets.Vehicles.Ball.BallUserControl::ball
	Ball_tA56A8F4D3F334AF2E4E1AB6E09D67141277531AE* ___ball_4;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Ball.BallUserControl::move
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___move_5;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Ball.BallUserControl::cam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cam_6;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Ball.BallUserControl::camForward
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___camForward_7;
	// System.Boolean UnityStandardAssets.Vehicles.Ball.BallUserControl::jump
	bool ___jump_8;
};

// UnityStandardAssets.Characters.FirstPerson.FirstPersonController
struct FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_IsWalking
	bool ___m_IsWalking_4;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_WalkSpeed
	float ___m_WalkSpeed_5;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_RunSpeed
	float ___m_RunSpeed_6;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_RunstepLenghten
	float ___m_RunstepLenghten_7;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_JumpSpeed
	float ___m_JumpSpeed_8;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_StickToGroundForce
	float ___m_StickToGroundForce_9;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_GravityMultiplier
	float ___m_GravityMultiplier_10;
	// UnityStandardAssets.Characters.FirstPerson.MouseLook UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_MouseLook
	MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* ___m_MouseLook_11;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_UseFovKick
	bool ___m_UseFovKick_12;
	// UnityStandardAssets.Utility.FOVKick UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_FovKick
	FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* ___m_FovKick_13;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_UseHeadBob
	bool ___m_UseHeadBob_14;
	// UnityStandardAssets.Utility.CurveControlledBob UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_HeadBob
	CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* ___m_HeadBob_15;
	// UnityStandardAssets.Utility.LerpControlledBob UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_JumpBob
	LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* ___m_JumpBob_16;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_StepInterval
	float ___m_StepInterval_17;
	// UnityEngine.AudioClip[] UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_FootstepSounds
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___m_FootstepSounds_18;
	// UnityEngine.AudioClip UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_JumpSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_JumpSound_19;
	// UnityEngine.AudioClip UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_LandSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_LandSound_20;
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_21;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Jump
	bool ___m_Jump_22;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_YRotation
	float ___m_YRotation_23;
	// UnityEngine.Vector2 UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Input_24;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_MoveDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDir_25;
	// UnityEngine.CharacterController UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_CharacterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_CharacterController_26;
	// UnityEngine.CollisionFlags UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_CollisionFlags
	int32_t ___m_CollisionFlags_27;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_PreviouslyGrounded
	bool ___m_PreviouslyGrounded_28;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_OriginalCameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OriginalCameraPosition_29;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_StepCycle
	float ___m_StepCycle_30;
	// System.Single UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_NextStep
	float ___m_NextStep_31;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_Jumping
	bool ___m_Jumping_32;
	// UnityEngine.AudioSource UnityStandardAssets.Characters.FirstPerson.FirstPersonController::m_AudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_AudioSource_33;
};

// UnityStandardAssets.Characters.FirstPerson.HeadBob
struct HeadBob_tFA4377CB8CACAE1F5C5EB360CFE29589FC0236BA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.HeadBob::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_4;
	// UnityStandardAssets.Utility.CurveControlledBob UnityStandardAssets.Characters.FirstPerson.HeadBob::motionBob
	CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* ___motionBob_5;
	// UnityStandardAssets.Utility.LerpControlledBob UnityStandardAssets.Characters.FirstPerson.HeadBob::jumpAndLandingBob
	LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* ___jumpAndLandingBob_6;
	// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController UnityStandardAssets.Characters.FirstPerson.HeadBob::rigidbodyFirstPersonController
	RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* ___rigidbodyFirstPersonController_7;
	// System.Single UnityStandardAssets.Characters.FirstPerson.HeadBob::StrideInterval
	float ___StrideInterval_8;
	// System.Single UnityStandardAssets.Characters.FirstPerson.HeadBob::RunningStrideLengthen
	float ___RunningStrideLengthen_9;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.HeadBob::m_PreviouslyGrounded
	bool ___m_PreviouslyGrounded_10;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.HeadBob::m_OriginalCameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OriginalCameraPosition_11;
};

// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct InputAxisScrollbar_t20252601C5FA8B26065A610E5FA4E473916609FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::axis
	String_t* ___axis_4;
};

// UnityStandardAssets.CrossPlatformInput.Joystick
struct Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick::MovementRange
	int32_t ___MovementRange_4;
	// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption UnityStandardAssets.CrossPlatformInput.Joystick::axesToUse
	int32_t ___axesToUse_5;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::horizontalAxisName
	String_t* ___horizontalAxisName_6;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::verticalAxisName
	String_t* ___verticalAxisName_7;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.Joystick::m_StartPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartPos_8;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseX
	bool ___m_UseX_9;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseY
	bool ___m_UseY_10;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_HorizontalVirtualAxis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_HorizontalVirtualAxis_11;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_VerticalVirtualAxis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_VerticalVirtualAxis_12;
};

// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityStandardAssets.Cameras.ProtectCameraFromWallClip
struct ProtectCameraFromWallClip_t52F6771775B0D2601663DA0C5DEC8A6F3650438C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::clipMoveTime
	float ___clipMoveTime_4;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::returnTime
	float ___returnTime_5;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::sphereCastRadius
	float ___sphereCastRadius_6;
	// System.Boolean UnityStandardAssets.Cameras.ProtectCameraFromWallClip::visualiseInEditor
	bool ___visualiseInEditor_7;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::closestDistance
	float ___closestDistance_8;
	// System.Boolean UnityStandardAssets.Cameras.ProtectCameraFromWallClip::<protecting>k__BackingField
	bool ___U3CprotectingU3Ek__BackingField_9;
	// System.String UnityStandardAssets.Cameras.ProtectCameraFromWallClip::dontClipTag
	String_t* ___dontClipTag_10;
	// UnityEngine.Transform UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Cam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Cam_11;
	// UnityEngine.Transform UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Pivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Pivot_12;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_OriginalDist
	float ___m_OriginalDist_13;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_MoveVelocity
	float ___m_MoveVelocity_14;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_CurrentDist
	float ___m_CurrentDist_15;
	// UnityEngine.Ray UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Ray
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___m_Ray_16;
	// UnityEngine.RaycastHit[] UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Hits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_Hits_17;
	// UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_RayHitComparer
	RayHitComparer_t48174939C23091FD1B46B709FF44BD43167116CD* ___m_RayHitComparer_18;
};

// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController
struct RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_4;
	// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::movementSettings
	MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* ___movementSettings_5;
	// UnityStandardAssets.Characters.FirstPerson.MouseLook UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::mouseLook
	MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* ___mouseLook_6;
	// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::advancedSettings
	AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* ___advancedSettings_7;
	// UnityEngine.Rigidbody UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_RigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_RigidBody_8;
	// UnityEngine.CapsuleCollider UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_Capsule
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___m_Capsule_9;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_YRotation
	float ___m_YRotation_10;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_GroundContactNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_GroundContactNormal_11;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_Jump
	bool ___m_Jump_12;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_PreviouslyGrounded
	bool ___m_PreviouslyGrounded_13;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_Jumping
	bool ___m_Jumping_14;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_IsGrounded
	bool ___m_IsGrounded_15;
};

// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_MovingTurnSpeed
	float ___m_MovingTurnSpeed_4;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_StationaryTurnSpeed
	float ___m_StationaryTurnSpeed_5;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_JumpPower
	float ___m_JumpPower_6;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_GravityMultiplier
	float ___m_GravityMultiplier_7;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_RunCycleLegOffset
	float ___m_RunCycleLegOffset_8;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_MoveSpeedMultiplier
	float ___m_MoveSpeedMultiplier_9;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_AnimSpeedMultiplier
	float ___m_AnimSpeedMultiplier_10;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_GroundCheckDistance
	float ___m_GroundCheckDistance_11;
	// UnityEngine.Rigidbody UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_Rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_Rigidbody_12;
	// UnityEngine.Animator UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_Animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_Animator_13;
	// System.Boolean UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_IsGrounded
	bool ___m_IsGrounded_14;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_OrigGroundCheckDistance
	float ___m_OrigGroundCheckDistance_15;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_TurnAmount
	float ___m_TurnAmount_17;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_ForwardAmount
	float ___m_ForwardAmount_18;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_GroundNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_GroundNormal_19;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_CapsuleHeight
	float ___m_CapsuleHeight_20;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_CapsuleCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CapsuleCenter_21;
	// UnityEngine.CapsuleCollider UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_Capsule
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___m_Capsule_22;
	// System.Boolean UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_Crouching
	bool ___m_Crouching_23;
};

// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl
struct ThirdPersonUserControl_t4366E3186AA053741323540A1290BAB7CA92AA85  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_Character
	ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* ___m_Character_4;
	// UnityEngine.Transform UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_Cam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Cam_5;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_CamForward
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CamForward_6;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_Move
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Move_7;
	// System.Boolean UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_Jump
	bool ___m_Jump_8;
};

// UnityStandardAssets.CrossPlatformInput.TiltInput
struct TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping UnityStandardAssets.CrossPlatformInput.TiltInput::mapping
	AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75* ___mapping_4;
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions UnityStandardAssets.CrossPlatformInput.TiltInput::tiltAroundAxis
	int32_t ___tiltAroundAxis_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::fullTiltAngle
	float ___fullTiltAngle_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::centreAngleOffset
	float ___centreAngleOffset_7;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TiltInput::m_SteerAxis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_SteerAxis_8;
};

// UnityStandardAssets.CrossPlatformInput.TouchPad
struct TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption UnityStandardAssets.CrossPlatformInput.TouchPad::axesToUse
	int32_t ___axesToUse_4;
	// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle UnityStandardAssets.CrossPlatformInput.TouchPad::controlStyle
	int32_t ___controlStyle_5;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::horizontalAxisName
	String_t* ___horizontalAxisName_6;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::verticalAxisName
	String_t* ___verticalAxisName_7;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Xsensitivity
	float ___Xsensitivity_8;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Ysensitivity
	float ___Ysensitivity_9;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_StartPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartPos_10;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousDelta_11;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_JoytickOutput
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_JoytickOutput_12;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseX
	bool ___m_UseX_13;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseY
	bool ___m_UseY_14;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_HorizontalVirtualAxis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_HorizontalVirtualAxis_15;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_VerticalVirtualAxis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_VerticalVirtualAxis_16;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_Dragging
	bool ___m_Dragging_17;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Id
	int32_t ___m_Id_18;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousTouchPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousTouchPos_19;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_20;
	// UnityEngine.UI.Image UnityStandardAssets.CrossPlatformInput.TouchPad::m_Image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_Image_21;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_DefaultInput_9;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_Started
	bool ___m_Started_16;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_IsTrackingUIToolkitPanels
	bool ___m_IsTrackingUIToolkitPanels_17;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityStandardAssets.Cameras.LookatTarget
struct LookatTarget_t859A683B0EE2CEEC8F3B1233D340F50EAA7E2B11  : public AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17
{
	// UnityEngine.Vector2 UnityStandardAssets.Cameras.LookatTarget::m_RotationRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RotationRange_8;
	// System.Single UnityStandardAssets.Cameras.LookatTarget::m_FollowSpeed
	float ___m_FollowSpeed_9;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.LookatTarget::m_FollowAngles
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FollowAngles_10;
	// UnityEngine.Quaternion UnityStandardAssets.Cameras.LookatTarget::m_OriginalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_OriginalRotation_11;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.LookatTarget::m_FollowVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FollowVelocity_12;
};

// UnityStandardAssets.Cameras.PivotBasedCameraRig
struct PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13  : public AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17
{
	// UnityEngine.Transform UnityStandardAssets.Cameras.PivotBasedCameraRig::m_Cam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Cam_8;
	// UnityEngine.Transform UnityStandardAssets.Cameras.PivotBasedCameraRig::m_Pivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Pivot_9;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.PivotBasedCameraRig::m_LastTargetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LastTargetPosition_10;
};

// UnityStandardAssets.Cameras.TargetFieldOfView
struct TargetFieldOfView_t4B014C83655EF397B0868A6C7E071521C8F33F75  : public AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17
{
	// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::m_FovAdjustTime
	float ___m_FovAdjustTime_8;
	// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::m_ZoomAmountMultiplier
	float ___m_ZoomAmountMultiplier_9;
	// System.Boolean UnityStandardAssets.Cameras.TargetFieldOfView::m_IncludeEffectsInSize
	bool ___m_IncludeEffectsInSize_10;
	// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::m_BoundSize
	float ___m_BoundSize_11;
	// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::m_FovAdjustVelocity
	float ___m_FovAdjustVelocity_12;
	// UnityEngine.Camera UnityStandardAssets.Cameras.TargetFieldOfView::m_Cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Cam_13;
	// UnityEngine.Transform UnityStandardAssets.Cameras.TargetFieldOfView::m_LastTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LastTarget_14;
};

// UnityStandardAssets.Cameras.AutoCam
struct AutoCam_t6611768AA933DB8058D35624A5E833E2B400AF0E  : public PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13
{
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_MoveSpeed
	float ___m_MoveSpeed_11;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_TurnSpeed
	float ___m_TurnSpeed_12;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_RollSpeed
	float ___m_RollSpeed_13;
	// System.Boolean UnityStandardAssets.Cameras.AutoCam::m_FollowVelocity
	bool ___m_FollowVelocity_14;
	// System.Boolean UnityStandardAssets.Cameras.AutoCam::m_FollowTilt
	bool ___m_FollowTilt_15;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_SpinTurnLimit
	float ___m_SpinTurnLimit_16;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_TargetVelocityLowerLimit
	float ___m_TargetVelocityLowerLimit_17;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_SmoothTurnTime
	float ___m_SmoothTurnTime_18;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_LastFlatAngle
	float ___m_LastFlatAngle_19;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_CurrentTurnAmount
	float ___m_CurrentTurnAmount_20;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_TurnSpeedVelocityChange
	float ___m_TurnSpeedVelocityChange_21;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.AutoCam::m_RollUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RollUp_22;
};

// UnityStandardAssets.Cameras.FreeLookCam
struct FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E  : public PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13
{
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_MoveSpeed
	float ___m_MoveSpeed_11;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TurnSpeed
	float ___m_TurnSpeed_12;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TurnSmoothing
	float ___m_TurnSmoothing_13;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TiltMax
	float ___m_TiltMax_14;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TiltMin
	float ___m_TiltMin_15;
	// System.Boolean UnityStandardAssets.Cameras.FreeLookCam::m_LockCursor
	bool ___m_LockCursor_16;
	// System.Boolean UnityStandardAssets.Cameras.FreeLookCam::m_VerticalAutoReturn
	bool ___m_VerticalAutoReturn_17;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_LookAngle
	float ___m_LookAngle_18;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TiltAngle
	float ___m_TiltAngle_19;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.FreeLookCam::m_PivotEulers
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PivotEulers_21;
	// UnityEngine.Quaternion UnityStandardAssets.Cameras.FreeLookCam::m_PivotTargetRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_PivotTargetRot_22;
	// UnityEngine.Quaternion UnityStandardAssets.Cameras.FreeLookCam::m_TransformTargetRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_TransformTargetRot_23;
};

// UnityStandardAssets.Cameras.HandHeldCam
struct HandHeldCam_t23DE8280297F0ACC05548933329B256AEE82FBA0  : public LookatTarget_t859A683B0EE2CEEC8F3B1233D340F50EAA7E2B11
{
	// System.Single UnityStandardAssets.Cameras.HandHeldCam::m_SwaySpeed
	float ___m_SwaySpeed_13;
	// System.Single UnityStandardAssets.Cameras.HandHeldCam::m_BaseSwayAmount
	float ___m_BaseSwayAmount_14;
	// System.Single UnityStandardAssets.Cameras.HandHeldCam::m_TrackingSwayAmount
	float ___m_TrackingSwayAmount_15;
	// System.Single UnityStandardAssets.Cameras.HandHeldCam::m_TrackingBias
	float ___m_TrackingBias_16;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556  : public BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___m_MouseState_15;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530  : public PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556
{
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 m_Items[1];

	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m7359FD51DC02CA167EAAC0E41B6B1C6EC9C096A8 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_name_m672BCFC7FD75869D777DC65A762C4993086232DD_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m2AD35C6B0B3DCC41272C113E4FAC7A0ED0D398D7_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8 (const RuntimeMethod* method) ;
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m288B9ABB942698F878BD337EBD8BEBE2F3CA16A7 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxis_m1193F47B0A28FBCAE35AA58CBA136B63DFB429B6 (String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_CreateVirtualAxes_mB47F60447928BEE192EB932EC2CE56EA25B8BF24 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_mD1206DAAFD87B6D167733DB57AA4CAFB189CC731 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___axis0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_UpdateVirtualAxes_m05A6D75FD6BF572D836387EF3294C1B863D10F16 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_CheckEnableControlRig_mB5E0CC07EA9C1C4F79643C157EF40098B0C3C3CD (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B (const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
inline StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_EnableControlRig_m8F580E507450B7D0B3DA1CAD74A7672C0B63CF9E (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, bool ___enabled0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_acceleration_mF33877F82B497F1B4B7D32BD9CD8388D0B3696FD (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m4E1DA076090EC56955724109B3EE12AA07548016_inline (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionX_mC0940A0AB4BD469C499CABB66A1CCE0A55D395CF (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionY_mF727CF27A64CBD197DA8571708EC413420080C81 (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionZ_m7083BC6E6142D46E15926B8A8A70A92D72ACE736 (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_CreateVirtualAxes_mD0033097BA1162C2F427B69E1C90283B2B50FB48 (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_UpdateVirtualAxes_m69FB974FF35D943BB88A012F130A88330E39699B (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_AxisExists_m667F1922B6BF625BD63AE848637DAE39F4F5E214 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m7187BC4A5E716FEE79CE80C3A2CB7F9BA3463034 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2 (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Add(TKey,TValue)
inline void Dictionary_2_Add_m7D80F5E2747A1D8480D32F6A7DADF9FF612497D3 (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* __this, String_t* ___key0, VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*, String_t*, VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_mF9AF15616F8F2FA90B757F63121F4D6455A9864C_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA61F8CE1734A37C2059099185058B68DA3D3890A (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* __this, String_t* ___key0, VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*, String_t*, VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m6E62059EDF0830800C3D6FD345919FFD30B1632F_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Remove(TKey)
inline bool Dictionary_2_Remove_m2BFFA59327E0CEC0AF2E64E1CC7242404F170005 (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Remove(TKey)
inline bool Dictionary_2_Remove_m22C8CE308A22BF5C640788A660B9B5D510C75276 (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(TKey)
inline VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716 (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* (*) (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E_inline (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::.ctor()
inline void Dictionary_2__ctor_m6E4E3A55B7CBE6817B2FC293EDBC1EFE90120BDD (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::.ctor()
inline void Dictionary_2__ctor_mD3D57777C943F7E088E9DE8405EBA492A7A5BB2F (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_mD7918096435EE674CA7FF71AECFCA1A8B6280322 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualButton_m898766F16D97BAF3200BE557825A2D6E215B1D2C (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* ___button0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(TKey)
inline VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6 (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* (*) (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Pressed_mB3842B229270709B86AB688CC0BBF808F2A43CFB (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Released_m995C21EF89CBC80C7DF4419CA04A645A1CBE4E02 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_m01E1A95C31ED59392D3500F120286EE344DCDAAE (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_m64EC91C14AA944E545C93CF6EF9824848BBDA7C6 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mF940484D441F184D1DB91B58CE9A17A48D8B3F02_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput__ctor_m7784BB0760D71F401B9D81E4F645A30049AB941B (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_mD0363B5F1771A7C7A97ABB0D07863217D229A9C0 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m65D9F89AC7456225E812704283D5EF84C852F724 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_maxAngularVelocity_m26E48B1DC6B9F8DBB81EE0681ABEB3AB255FC3F6 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m39C767D6CD12B2D12D575E2B469CB5565BFA30B6 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___torque0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m5B3761B4176FD520AAB3532612D8716C0ACC57F2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, float ___maxDistance2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityStandardAssets.Vehicles.Ball.Ball>()
inline Ball_tA56A8F4D3F334AF2E4E1AB6E09D67141277531AE* Component_GetComponent_TisBall_tA56A8F4D3F334AF2E4E1AB6E09D67141277531AE_m2D4B7560748D2015976C2699A0E7B2CD7C591EB2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Ball_tA56A8F4D3F334AF2E4E1AB6E09D67141277531AE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m1BA0A7839BDA75A556A9C3C3CA7F932C191BF066 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButton_m6D3BD2F44D775C86379DD5039AF77A593060EA24 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Move(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_Move_m2449A9EBD859AA9D918655DE31FD8BB679ED6326 (Ball_tA56A8F4D3F334AF2E4E1AB6E09D67141277531AE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDirection0, bool ___jump1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* Component_GetComponentInChildren_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_mF258B768A3AFAFEAA9D44CC0357ECACCC058E7FD (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::set_agent(UnityEngine.AI.NavMeshAgent)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AICharacterControl_set_agent_mCFB80AF5991DDD29C9E5B1BFF6D42AD0E7E03D62_inline (AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B* __this, NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter>()
inline ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* Component_GetComponent_TisThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D_m0A20749E08463EA4E8911DD6578ED1ECFD0946BA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::set_character(UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AICharacterControl_set_character_m88D24A0392EDD64986771E1DACDC50189BFFB5F4_inline (AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B* __this, ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* ___value0, const RuntimeMethod* method) ;
// UnityEngine.AI.NavMeshAgent UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::get_agent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* AICharacterControl_get_agent_mF2D6FCCF78101649AC2DC630732565488BD6431A_inline (AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_updateRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_updateRotation_mBF6EDBC9BBAF32490229D7DD6BC821A420C3399D (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_updatePosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_updatePosition_m25CA3F441A2EEC82096B4BCFAD4E5FDC10867372 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AI.NavMeshAgent::get_remainingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AI.NavMeshAgent::get_stoppingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::get_character()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* AICharacterControl_get_character_m25851FC063EE4414838554CA7FCD618D03B4315A_inline (AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_desiredVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavMeshAgent_get_desiredVelocity_m8CF3F6E3FA8EE86397DD02146AA6048949B74F52 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::Move(UnityEngine.Vector3,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_Move_m2AED450F12D3ED860E20A023B8B4205DEB4CCD0A (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___move0, bool ___crouch1, bool ___jump2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::CheckGroundStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_CheckGroundStatus_m47FD5ABF5455A5543C9FE7D011364EBEDB11A264 (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::ApplyExtraTurnRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_ApplyExtraTurnRotation_m5BC18C78017286A8935BCA1A210B8722471E1788 (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::HandleGroundedMovement(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_HandleGroundedMovement_mB7D0DE8053F750D278CCC0DB8A9B2B77A6BFE4E8 (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, bool ___crouch0, bool ___jump1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::HandleAirborneMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_HandleAirborneMovement_mE9CD324361D21E9F050C8EB35D8F2D7D0B756949 (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::ScaleCapsuleForCrouching(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_ScaleCapsuleForCrouching_m6983E3727F27D0C9D6EEE6E183D00D958B37C356 (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, bool ___crouch0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::PreventStandingInLowHeadroom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_PreventStandingInLowHeadroom_m6B738D57AADF8C82D3E6770E59070892600C8E5B (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::UpdateAnimator(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_UpdateAnimator_m987C04CB96BBE9C0B9F55388E18BE717B662D934 (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___move0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_SphereCast_m2CE6BCAF0D0587AE29B6103280B337CDC3B5D5A8 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float ___radius1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m018FC1B8BBA989887545ABEF5FB611087F23A4C0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animator::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_deltaPosition_m1759DB2D343FDAFAA7FE85ED66451D5210B0A606 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5 (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonDown_mB034544AE57B544921BE5ADCAA18D2EAC83DB4B9 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.FOVKick::Setup(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FOVKick_Setup_m7E73F218F4B74B175FC9BD1DD32B0711E048916F (FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveControlledBob_Setup_mDB98D5F434FDEBD472856B9686AF5DCE77056AF4 (CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, float ___bobBaseInterval1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::Init(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Init_m7086DCA60BBC6F28FD3DCBFB78828D578656D9E6 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___character0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camera1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::RotateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_RotateView_mCEC44D346646100CACE88516D162A32640E332CD (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityStandardAssets.Utility.LerpControlledBob::DoBobCycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LerpControlledBob_DoBobCycle_m6C115FF5CB0A8C3A08F93F72A841B494325814CC (LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayLandingSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayLandingSound_m336EF9D77C24FB1ABBB047C0146971E853079191 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::GetInput(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_GetInput_mE08B63FC27C0B3DA024FEF6057CF8284286B3B26 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float* ___speed0, const RuntimeMethod* method) ;
// System.Single UnityEngine.CharacterController::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterController_get_radius_mA7095C2FFBA77AE532CD9B219D506D871E86BFC5 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CharacterController::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterController_get_height_m18EC4D93673A225648DCB302BAB4F8A5FE4A20AF (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_SphereCast_m5FB43F0C507F917CD9FCA1B16CF37285FC581066 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, float ___radius1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction2, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo3, float ___maxDistance4, int32_t ___layerMask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayJumpSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayJumpSound_m2F36534A8289E953A6FAE5B8780EC7677D9AE162 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088 (const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::ProgressStepCycle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_ProgressStepCycle_mE9A440300EA6D9AA22C7BB62B32366E504EC13C7 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float ___speed0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::UpdateCameraPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_UpdateCameraPosition_mBAAF114B16C737591BA1C99F08679024F594944E (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float ___speed0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::UpdateCursorLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_UpdateCursorLock_m36C18218E85D87D3F321ACD94AA10872C1C7A72E (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayFootStepAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayFootStepAudio_mAC65BEA3377CECC48C166FBEABE21A616E07C770 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurveControlledBob_DoHeadBob_m9AC57FF9121912E844CE19359AC72857115DC4C5 (CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* __this, float ___speed0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.Utility.LerpControlledBob::Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LerpControlledBob_Offset_mF45148E4AA91DF2F5469362833D1A3B5B86AB689_inline (LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FOVKick_FOVKickDown_m9176B1195AEA7C88568D27F2860B13C98ECA188F (FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityStandardAssets.Utility.FOVKick::FOVKickUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FOVKick_FOVKickUp_m81F318FFA44E3CC3739EAB65EA8ACBD31882483B (FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_LookRotation_m30505FB14CA539242F82CB54F2D5030BBFB43374 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___character0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camera1, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.ControllerColliderHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerColliderHit_get_point_mCE74937BAC07AD84F6B255471177974A5C12E915 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForceAtPosition_m61575E676B16690BEC0FD29841EAD35CC40B642C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, int32_t ___mode2, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.FOVKick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FOVKick__ctor_mB6A54D8492E90A1E07B02E1EC06EEC67100DC22F (FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveControlledBob__ctor_mBB05CB56470904C61063A0D32F021E7FD1285D22 (CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Utility.LerpControlledBob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LerpControlledBob__ctor_m2B5B7BE2359268DC4B0D49651AF01123D447793B (LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RigidbodyFirstPersonController_get_Velocity_mAA3C04ADAF8605944CD1106E640BDC04AE43CDA5 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Grounded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Grounded_mB84272DE91A38F0973356C611393D7870218B183_inline (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Running_m0EBBCDB4242F5EB06FD2F2978D633627D33656F1 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::ClampRotationAroundXAxis(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MouseLook_ClampRotationAroundXAxis_m2CD48D555D35103665BEF748C94DD917AF45CD0F (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::InternalLockUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_InternalLockUpdate_m67D6C07F2654DA49F6D67896F769C15400D583A8 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::get_Running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MovementSettings_get_Running_mFAB0A32A5A48C7010AB670736E7E3291425C1AAA_inline (MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::RotateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_RotateView_m8F1F1DF95E421B650439F3072F6A098CCD9EBB5A (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::GroundCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_GroundCheck_m4563E2DD265145404C48F3F84DA9EC186A2C582D (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::GetInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RigidbodyFirstPersonController_GetInput_m5181604692C394DDF22EB6A407A16DC8AD05AC15 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::SlopeMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RigidbodyFirstPersonController_SlopeMultiplier_m4BF1547C34EDCF635B6AF53527D56617C6DA09EE (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::Sleep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_Sleep_m9826BDFCF078DF00223011B3F0FA7F4894F8F4CA (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::StickToGroundHelper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_StickToGroundHelper_mF84D44E8C84AD99D12081320554807925EC8B9B0 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::UpdateDesiredTargetSpeed(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementSettings_UpdateDesiredTargetSpeed_m77EE1A183E7E42771E991CC7DBF2BB8BDDE19539 (MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementSettings__ctor_mBBCE5EDEACBB5990A3B4275AAAD4EA248BE8BBE8 (MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_m8EF7E4171402C13B7F9B772C748CB51382578363 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancedSettings__ctor_m83DEA81F1A8887C5ED586139FD359FDD3717F93B (AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___time0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___keys0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FindAndTargetPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m4B8C5AACFEBF58E93FF2A33832C27EF1E5AF7AFD_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline (float ___current0, float ___target1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Slerp_mBA32C7EAC64C56C7D68480549FA9A892FA5C1728 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PivotBasedCameraRig__ctor_m176687FB94C7FF07D4ED8B38A0529F370F9D51BA (PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PivotBasedCameraRig_Awake_m3477C8EE2F83D51CCF81ADC1F8BEEDCB0A2F95B2 (PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.FreeLookCam::HandleRotationMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_HandleRotationMovement_m0E9A0819AA068EFA603FB0CC3318FBE71827A97F (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.LookatTarget::FollowTarget(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookatTarget_FollowTarget_m7420FC18FCBE781CEEBE8D8B7D6429F3EFD234EE (LookatTarget_t859A683B0EE2CEEC8F3B1233D340F50EAA7E2B11* __this, float ___deltaTime0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4 (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.LookatTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookatTarget__ctor_m47B00F2D7DC9CA39F53ADDD892B595C4CFA2567A (LookatTarget_t859A683B0EE2CEEC8F3B1233D340F50EAA7E2B11* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_Start_m900ACFC81D342429D83E274C92B69467E443763D (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower__ctor_m7BA92F6CC37CDA403608738E4F6CB8EB43889A98 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayHitComparer__ctor_m06AEF5F3B142F395C5E703BCB8513050A33E289C (RayHitComparer_t48174939C23091FD1B46B709FF44BD43167116CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::set_origin(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray_set_origin_m9B19A7BE86636111E3B16BCE08EAE030F37FE64D (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::set_direction(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray_set_direction_m8A8FF8101045BAE51BE5D5C1B6C21D0D5592DA98 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapSphere_m91C80EEBDE4096D5648F78E48772E44474CD62F2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::get_isTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_isTrigger_mFF457F6AA71D173F9A11BAF00C35E5AE12952F87 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Physics_RaycastAll_m59829631929F9509748FDCEE147C67A8F85A134A (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float ___maxDistance1, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Ray,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Physics_SphereCastAll_mD42E5A9ADB813397F5BC04CD22951BA64E832D9E (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float ___radius1, float ___maxDistance2, const RuntimeMethod* method) ;
// System.Void System.Array::Sort(System.Array,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_m341AEFD15CDBA888C07C8B91543B228F9FB52FFD (RuntimeArray* ___array0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.ProtectCameraFromWallClip::set_protecting(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProtectCameraFromWallClip_set_protecting_m2BF39BD7E67B187ACC669C8505BF55686D79235E_inline (ProtectCameraFromWallClip_t52F6771775B0D2601663DA0C5DEC8A6F3650438C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::MaxBoundsExtent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TargetFieldOfView_MaxBoundsExtent_m4481BD0F7BA4628D33EF36F4B515CB061018190E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___obj0, bool ___includeEffects1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::SetTarget(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AbstractTargetFollower_SetTarget_m28BD1FECB5D3F99925BCA617888401258BD8A28C_inline (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___newTransform0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m00E482452BCED3FE0F16B4033B2B5323C7E30829 (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mA20AB2E3DFAE680D742E9A17D969AF8A3E849711 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_name_m672BCFC7FD75869D777DC65A762C4993086232DD (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m6E62059EDF0830800C3D6FD345919FFD30B1632F (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->___U3CmatchWithInputManagerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m2AD35C6B0B3DCC41272C113E4FAC7A0ED0D398D7 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_mD7918096435EE674CA7FF71AECFCA1A8B6280322 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// : this(name, true)
		String_t* L_0 = ___name0;
		VirtualButton__ctor_m7359FD51DC02CA167EAAC0E41B6B1C6EC9C096A8(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m7359FD51DC02CA167EAAC0E41B6B1C6EC9C096A8 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) 
{
	{
		// private int m_LastPressedFrame = -5;
		__this->___m_LastPressedFrame_2 = ((int32_t)-5);
		// private int m_ReleasedFrame = -5;
		__this->___m_ReleasedFrame_3 = ((int32_t)-5);
		// public VirtualButton(string name, bool matchToInputSettings)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		VirtualButton_set_name_m672BCFC7FD75869D777DC65A762C4993086232DD_inline(__this, L_0, NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___matchToInputSettings1;
		VirtualButton_set_matchWithInputManager_m2AD35C6B0B3DCC41272C113E4FAC7A0ED0D398D7_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Pressed_mB3842B229270709B86AB688CC0BBF808F2A43CFB (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// if (m_Pressed)
		bool L_0 = __this->___m_Pressed_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Pressed = true;
		__this->___m_Pressed_4 = (bool)1;
		// m_LastPressedFrame = Time.frameCount;
		int32_t L_1;
		L_1 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		__this->___m_LastPressedFrame_2 = L_1;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Released_m995C21EF89CBC80C7DF4419CA04A645A1CBE4E02 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// m_Pressed = false;
		__this->___m_Pressed_4 = (bool)0;
		// m_ReleasedFrame = Time.frameCount;
		int32_t L_0;
		L_0 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		__this->___m_ReleasedFrame_3 = L_0;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Remove_m6A4CB0975158B909842CF00389034652DF8AD7A6 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualButton(name);
		String_t* L_0;
		L_0 = VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualButton_m288B9ABB942698F878BD337EBD8BEBE2F3CA16A7(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mF940484D441F184D1DB91B58CE9A17A48D8B3F02 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Pressed; }
		bool L_0 = __this->___m_Pressed_4;
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_m01E1A95C31ED59392D3500F120286EE344DCDAAE (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// return m_LastPressedFrame - Time.frameCount == -1;
		int32_t L_0 = __this->___m_LastPressedFrame_2;
		int32_t L_1;
		L_1 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1))) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_m64EC91C14AA944E545C93CF6EF9824848BBDA7C6 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// return (m_ReleasedFrame == Time.frameCount - 1);
		int32_t L_0 = __this->___m_ReleasedFrame_3;
		int32_t L_1;
		L_1 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, 1))))? 1 : 0);
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
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar_Update_m8CCBB44BABB19D73FAE53FFD156A9D255BF23D1E (InputAxisScrollbar_t20252601C5FA8B26065A610E5FA4E473916609FA* __this, const RuntimeMethod* method) 
{
	{
		// void Update() { }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::HandleInput(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar_HandleInput_mE8DC6032B7922720E3A38AA79C079BDC3E3C8FDD (InputAxisScrollbar_t20252601C5FA8B26065A610E5FA4E473916609FA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxis(axis, (value*2f) - 1f);
		String_t* L_0 = __this->___axis_4;
		float L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxis_m1193F47B0A28FBCAE35AA58CBA136B63DFB429B6(L_0, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, (2.0f))), (1.0f))), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar__ctor_m08089402416DD6BF7DA04774F504B2051AB8B1F1 (InputAxisScrollbar_t20252601C5FA8B26065A610E5FA4E473916609FA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnEnable_m01755C6055086498BC9A53A7EF7E086642A96658 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) 
{
	{
		// CreateVirtualAxes();
		Joystick_CreateVirtualAxes_mB47F60447928BEE192EB932EC2CE56EA25B8BF24(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_mAA898386E4DDBE88E5CBC3287983D48CDBEEC6C8 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) 
{
	{
		// m_StartPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___m_StartPos_8 = L_1;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_UpdateVirtualAxes_m05A6D75FD6BF572D836387EF3294C1B863D10F16 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var delta = m_StartPos - value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_StartPos_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___value0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// delta.y = -delta.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___y_3;
		(&V_0)->___y_3 = ((-L_4));
		// delta /= MovementRange;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		int32_t L_6 = __this->___MovementRange_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_5, ((float)L_6), NULL);
		V_0 = L_7;
		// if (m_UseX)
		bool L_8 = __this->___m_UseX_9;
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// m_HorizontalVirtualAxis.Update(-delta.x);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_9 = __this->___m_HorizontalVirtualAxis_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___x_2;
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_9, ((-L_11)), NULL);
	}

IL_0043:
	{
		// if (m_UseY)
		bool L_12 = __this->___m_UseY_10;
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// m_VerticalVirtualAxis.Update(delta.y);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_13 = __this->___m_VerticalVirtualAxis_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		float L_15 = L_14.___y_3;
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_13, L_15, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_CreateVirtualAxes_mB47F60447928BEE192EB932EC2CE56EA25B8BF24 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B2_0 = NULL;
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B3_1 = NULL;
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B5_0 = NULL;
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B6_1 = NULL;
	{
		// m_UseX = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyHorizontal);
		int32_t L_0 = __this->___axesToUse_5;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->___axesToUse_5;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		G_B3_1->___m_UseX_9 = (bool)G_B3_0;
		// m_UseY = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyVertical);
		int32_t L_2 = __this->___axesToUse_5;
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->___axesToUse_5;
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		G_B6_1->___m_UseY_10 = (bool)G_B6_0;
		// if (m_UseX)
		bool L_4 = __this->___m_UseX_9;
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// m_HorizontalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(horizontalAxisName);
		String_t* L_5 = __this->___horizontalAxisName_6;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_6, L_5, NULL);
		__this->___m_HorizontalVirtualAxis_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HorizontalVirtualAxis_11), (void*)L_6);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_HorizontalVirtualAxis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_7 = __this->___m_HorizontalVirtualAxis_11;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mD1206DAAFD87B6D167733DB57AA4CAFB189CC731(L_7, NULL);
	}

IL_0058:
	{
		// if (m_UseY)
		bool L_8 = __this->___m_UseY_10;
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// m_VerticalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(verticalAxisName);
		String_t* L_9 = __this->___verticalAxisName_7;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_10 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_10, L_9, NULL);
		__this->___m_VerticalVirtualAxis_12 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VerticalVirtualAxis_12), (void*)L_10);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_VerticalVirtualAxis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_11 = __this->___m_VerticalVirtualAxis_12;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mD1206DAAFD87B6D167733DB57AA4CAFB189CC731(L_11, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m57BB8D9C2A3A95FF403A37053B2C7A49453A8D0A (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Vector3 newPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_0 = L_0;
		// if (m_UseX)
		bool L_1 = __this->___m_UseX_9;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// int delta = (int)(data.position.x - m_StartPos.x);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___data0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		float L_4 = L_3.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___m_StartPos_8);
		float L_6 = L_5->___x_2;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(L_4, L_6)));
		// delta = Mathf.Clamp(delta, - MovementRange, MovementRange);
		int32_t L_7 = V_1;
		int32_t L_8 = __this->___MovementRange_4;
		int32_t L_9 = __this->___MovementRange_4;
		int32_t L_10;
		L_10 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_7, ((-L_8)), L_9, NULL);
		V_1 = L_10;
		// newPos.x = delta;
		int32_t L_11 = V_1;
		(&V_0)->___x_2 = ((float)L_11);
	}

IL_0044:
	{
		// if (m_UseY)
		bool L_12 = __this->___m_UseY_10;
		if (!L_12)
		{
			goto IL_0082;
		}
	}
	{
		// int delta = (int)(data.position.y - m_StartPos.y);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_13 = ___data0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_13, NULL);
		float L_15 = L_14.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___m_StartPos_8);
		float L_17 = L_16->___y_3;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(L_15, L_17)));
		// delta = Mathf.Clamp(delta, -MovementRange, MovementRange);
		int32_t L_18 = V_2;
		int32_t L_19 = __this->___MovementRange_4;
		int32_t L_20 = __this->___MovementRange_4;
		int32_t L_21;
		L_21 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_18, ((-L_19)), L_20, NULL);
		V_2 = L_21;
		// newPos.y = delta;
		int32_t L_22 = V_2;
		(&V_0)->___y_3 = ((float)L_22);
	}

IL_0082:
	{
		// transform.position = new Vector3(m_StartPos.x + newPos.x, m_StartPos.y + newPos.y, m_StartPos.z + newPos.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&__this->___m_StartPos_8);
		float L_25 = L_24->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		float L_27 = L_26.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___m_StartPos_8);
		float L_29 = L_28->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		float L_31 = L_30.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&__this->___m_StartPos_8);
		float L_33 = L_32->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_0;
		float L_35 = L_34.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), ((float)il2cpp_codegen_add(L_25, L_27)), ((float)il2cpp_codegen_add(L_29, L_31)), ((float)il2cpp_codegen_add(L_33, L_35)), /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_36, NULL);
		// UpdateVirtualAxes(transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Joystick_UpdateVirtualAxes_m05A6D75FD6BF572D836387EF3294C1B863D10F16(__this, L_38, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mF173240831B95C9D6383EC1DDD9ADB5BEE449CC3 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	{
		// transform.position = m_StartPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_StartPos_8;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// UpdateVirtualAxes(m_StartPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_StartPos_8;
		Joystick_UpdateVirtualAxes_m05A6D75FD6BF572D836387EF3294C1B863D10F16(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF45E97F4E4424DB3A00653B04F1D3276A7BDAC72 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	{
		// public void OnPointerDown(PointerEventData data) { }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDisable_m40ED45E6DE2625D6B0581C0D2873946DC44062CB (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) 
{
	{
		// if (m_UseX)
		bool L_0 = __this->___m_UseX_9;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_HorizontalVirtualAxis.Remove();
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_1 = __this->___m_HorizontalVirtualAxis_11;
		VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F(L_1, NULL);
	}

IL_0013:
	{
		// if (m_UseY)
		bool L_2 = __this->___m_UseY_10;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// m_VerticalVirtualAxis.Remove();
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_3 = __this->___m_VerticalVirtualAxis_12;
		VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F(L_3, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m39C3347FCD4D7CC89994A5D9F9974AF2D05E8C60 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int MovementRange = 100;
		__this->___MovementRange_4 = ((int32_t)100);
		// public string horizontalAxisName = "Horizontal"; // The name given to the horizontal axis for the cross platform input
		__this->___horizontalAxisName_6 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___horizontalAxisName_6), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public string verticalAxisName = "Vertical"; // The name given to the vertical axis for the cross platform input
		__this->___verticalAxisName_7 = _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalAxisName_7), (void*)_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_OnEnable_mE74181228AA1673A5CBD68A8516F9A25473630B1 (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, const RuntimeMethod* method) 
{
	{
		// CheckEnableControlRig();
		MobileControlRig_CheckEnableControlRig_mB5E0CC07EA9C1C4F79643C157EF40098B0C3C3CD(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_Start_m83F603D565C73AA5C5E04697611EF764799EFBC9 (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.EventSystems.EventSystem system = GameObject.FindObjectOfType<UnityEngine.EventSystems.EventSystem>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B(Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m60F8B739B5BA0140A146BCDB0A2B899A33E22C6B_RuntimeMethod_var);
		// if (system == null)
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// GameObject o = new GameObject("EventSystem");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F, NULL);
		// o.AddComponent<UnityEngine.EventSystems.EventSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8(L_3, GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		// o.AddComponent<UnityEngine.EventSystems.StandaloneInputModule>();
		StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* L_5;
		L_5 = GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D(L_3, GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_CheckEnableControlRig_mB5E0CC07EA9C1C4F79643C157EF40098B0C3C3CD (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, const RuntimeMethod* method) 
{
	{
		// EnableControlRig(false);
		MobileControlRig_EnableControlRig_m8F580E507450B7D0B3DA1CAD74A7672C0B63CF9E(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_EnableControlRig_m8F580E507450B7D0B3DA1CAD74A7672C0B63CF9E (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, bool ___enabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// foreach (Transform t in transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_003e;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0024_1;
			}

IL_000e_1:
			{
				// foreach (Transform t in transform)
				RuntimeObject* L_5 = V_0;
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// t.gameObject.SetActive(enabled);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				bool L_8 = ___enabled0;
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, L_8, NULL);
			}

IL_0024_1:
			{
				// foreach (Transform t in transform)
				RuntimeObject* L_9 = V_0;
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig__ctor_m516AE4C523FCAA62F202B54607B88C2F39CF949D (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_OnEnable_mCD2D3134FC211D2D6F9D815273EC358AD49693A4 (TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mapping.type == AxisMapping.MappingType.NamedAxis)
		AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75* L_0 = __this->___mapping_4;
		int32_t L_1 = L_0->___type_0;
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		// m_SteerAxis = new CrossPlatformInputManager.VirtualAxis(mapping.axisName);
		AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75* L_2 = __this->___mapping_4;
		String_t* L_3 = L_2->___axisName_1;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_4 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_4, L_3, NULL);
		__this->___m_SteerAxis_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SteerAxis_8), (void*)L_4);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_SteerAxis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_5 = __this->___m_SteerAxis_8;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mD1206DAAFD87B6D167733DB57AA4CAFB189CC731(L_5, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_Update_m4E1268EABA144462DFBE1788E127E508A1B15A06 (TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// float angle = 0;
		V_0 = (0.0f);
		// if (Input.acceleration != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_acceleration_mF33877F82B497F1B4B7D32BD9CD8388D0B3696FD(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_2;
		L_2 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0079;
		}
	}
	{
		// switch (tiltAroundAxis)
		int32_t L_3 = __this->___tiltAroundAxis_5;
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0079;
	}

IL_0027:
	{
		// angle = Mathf.Atan2(Input.acceleration.x, -Input.acceleration.y)*Mathf.Rad2Deg +
		//         centreAngleOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_acceleration_mF33877F82B497F1B4B7D32BD9CD8388D0B3696FD(NULL);
		float L_7 = L_6.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Input_get_acceleration_mF33877F82B497F1B4B7D32BD9CD8388D0B3696FD(NULL);
		float L_9 = L_8.___y_3;
		float L_10;
		L_10 = atan2f(L_7, ((-L_9)));
		float L_11 = __this->___centreAngleOffset_7;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_10, (57.2957802f))), L_11));
		// break;
		goto IL_0079;
	}

IL_0051:
	{
		// angle = Mathf.Atan2(Input.acceleration.z, -Input.acceleration.y)*Mathf.Rad2Deg +
		//         centreAngleOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Input_get_acceleration_mF33877F82B497F1B4B7D32BD9CD8388D0B3696FD(NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Input_get_acceleration_mF33877F82B497F1B4B7D32BD9CD8388D0B3696FD(NULL);
		float L_15 = L_14.___y_3;
		float L_16;
		L_16 = atan2f(L_13, ((-L_15)));
		float L_17 = __this->___centreAngleOffset_7;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, (57.2957802f))), L_17));
	}

IL_0079:
	{
		// float axisValue = Mathf.InverseLerp(-fullTiltAngle, fullTiltAngle, angle)*2 - 1;
		float L_18 = __this->___fullTiltAngle_6;
		float L_19 = __this->___fullTiltAngle_6;
		float L_20 = V_0;
		float L_21;
		L_21 = Mathf_InverseLerp_m4E1DA076090EC56955724109B3EE12AA07548016_inline(((-L_18)), L_19, L_20, NULL);
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_21, (2.0f))), (1.0f)));
		// switch (mapping.type)
		AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75* L_22 = __this->___mapping_4;
		int32_t L_23 = L_22->___type_0;
		V_3 = L_23;
		int32_t L_24 = V_3;
		switch (L_24)
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_00d7;
			}
			case 3:
			{
				goto IL_00e5;
			}
		}
	}
	{
		return;
	}

IL_00bc:
	{
		// m_SteerAxis.Update(axisValue);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_25 = __this->___m_SteerAxis_8;
		float L_26 = V_1;
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_25, L_26, NULL);
		// break;
		return;
	}

IL_00c9:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionX(axisValue*Screen.width);
		float L_27 = V_1;
		int32_t L_28;
		L_28 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionX_mC0940A0AB4BD469C499CABB66A1CCE0A55D395CF(((float)il2cpp_codegen_multiply(L_27, ((float)L_28))), NULL);
		// break;
		return;
	}

IL_00d7:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionY(axisValue*Screen.width);
		float L_29 = V_1;
		int32_t L_30;
		L_30 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionY_mF727CF27A64CBD197DA8571708EC413420080C81(((float)il2cpp_codegen_multiply(L_29, ((float)L_30))), NULL);
		// break;
		return;
	}

IL_00e5:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionZ(axisValue*Screen.width);
		float L_31 = V_1;
		int32_t L_32;
		L_32 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionZ_m7083BC6E6142D46E15926B8A8A70A92D72ACE736(((float)il2cpp_codegen_multiply(L_31, ((float)L_32))), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_OnDisable_mB91574F611389145239CA77BB7C9742DD2F32D4E (TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3* __this, const RuntimeMethod* method) 
{
	{
		// m_SteerAxis.Remove();
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_0 = __this->___m_SteerAxis_8;
		VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput__ctor_mC0FEEAAA6072137009894B79BB86BB7763246B5B (TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3* __this, const RuntimeMethod* method) 
{
	{
		// public float fullTiltAngle = 25;
		__this->___fullTiltAngle_6 = (25.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisMapping__ctor_m49E917651DFC426AB917F75ABAB55169B121AA0A (AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnEnable_m8EA8CC115883619758EF3093E98C6FD85C6AC9EC (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	{
		// CreateVirtualAxes();
		TouchPad_CreateVirtualAxes_mD0033097BA1162C2F427B69E1C90283B2B50FB48(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_Start_mB8FEBAF0B2A06B12312707D6669B1A67AA8D581D (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Image = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___m_Image_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image_21), (void*)L_0);
		// m_Center = m_Image.transform.position;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___m_Image_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___m_Center_20 = L_3;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_CreateVirtualAxes_mD0033097BA1162C2F427B69E1C90283B2B50FB48 (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B2_0 = NULL;
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B3_1 = NULL;
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B5_0 = NULL;
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B6_1 = NULL;
	{
		// m_UseX = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyHorizontal);
		int32_t L_0 = __this->___axesToUse_4;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->___axesToUse_4;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		G_B3_1->___m_UseX_13 = (bool)G_B3_0;
		// m_UseY = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyVertical);
		int32_t L_2 = __this->___axesToUse_4;
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->___axesToUse_4;
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		G_B6_1->___m_UseY_14 = (bool)G_B6_0;
		// if (m_UseX)
		bool L_4 = __this->___m_UseX_13;
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// m_HorizontalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(horizontalAxisName);
		String_t* L_5 = __this->___horizontalAxisName_6;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_6, L_5, NULL);
		__this->___m_HorizontalVirtualAxis_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HorizontalVirtualAxis_15), (void*)L_6);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_HorizontalVirtualAxis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_7 = __this->___m_HorizontalVirtualAxis_15;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mD1206DAAFD87B6D167733DB57AA4CAFB189CC731(L_7, NULL);
	}

IL_0058:
	{
		// if (m_UseY)
		bool L_8 = __this->___m_UseY_14;
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// m_VerticalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(verticalAxisName);
		String_t* L_9 = __this->___verticalAxisName_7;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_10 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_10, L_9, NULL);
		__this->___m_VerticalVirtualAxis_16 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VerticalVirtualAxis_16), (void*)L_10);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_VerticalVirtualAxis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_11 = __this->___m_VerticalVirtualAxis_16;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mD1206DAAFD87B6D167733DB57AA4CAFB189CC731(L_11, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_UpdateVirtualAxes_m69FB974FF35D943BB88A012F130A88330E39699B (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// value = value.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___value0), NULL);
		___value0 = L_0;
		// if (m_UseX)
		bool L_1 = __this->___m_UseX_13;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// m_HorizontalVirtualAxis.Update(value.x);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_2 = __this->___m_HorizontalVirtualAxis_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___value0;
		float L_4 = L_3.___x_2;
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_2, L_4, NULL);
	}

IL_0022:
	{
		// if (m_UseY)
		bool L_5 = __this->___m_UseY_14;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// m_VerticalVirtualAxis.Update(value.y);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6 = __this->___m_VerticalVirtualAxis_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___value0;
		float L_8 = L_7.___y_3;
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_6, L_8, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnPointerDown_m5F30C88782254C4577BB65883B6518F5D081E7F8 (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	{
		// m_Dragging = true;
		__this->___m_Dragging_17 = (bool)1;
		// m_Id = data.pointerId;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___data0;
		int32_t L_1;
		L_1 = PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline(L_0, NULL);
		__this->___m_Id_18 = L_1;
		// if (controlStyle != ControlStyle.Absolute )
		int32_t L_2 = __this->___controlStyle_5;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// m_Center = data.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___data0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		__this->___m_Center_20 = L_5;
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_Update_m4BFDEA6F27C9C7BB91B0E160DEA45C64D6D4294F (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!m_Dragging)
		bool L_0 = __this->___m_Dragging_17;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (Input.touchCount >= m_Id + 1 && m_Id != -1)
		int32_t L_1;
		L_1 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		int32_t L_2 = __this->___m_Id_18;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_add(L_2, 1)))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_3 = __this->___m_Id_18;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_00f4;
		}
	}
	{
		// if (controlStyle == ControlStyle.Swipe)
		int32_t L_4 = __this->___controlStyle_5;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_005c;
		}
	}
	{
		// m_Center = m_PreviousTouchPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___m_PreviousTouchPos_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_5, NULL);
		__this->___m_Center_20 = L_6;
		// m_PreviousTouchPos = Input.touches[m_Id].position;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_7;
		L_7 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		int32_t L_8 = __this->___m_Id_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8))), NULL);
		__this->___m_PreviousTouchPos_19 = L_9;
	}

IL_005c:
	{
		// Vector2 pointerDelta = new Vector2(Input.touches[m_Id].position.x - m_Center.x , Input.touches[m_Id].position.y - m_Center.y).normalized;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_10;
		L_10 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		int32_t L_11 = __this->___m_Id_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11))), NULL);
		float L_13 = L_12.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___m_Center_20);
		float L_15 = L_14->___x_2;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_16;
		L_16 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		int32_t L_17 = __this->___m_Id_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17))), NULL);
		float L_19 = L_18.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&__this->___m_Center_20);
		float L_21 = L_20->___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), ((float)il2cpp_codegen_subtract(L_13, L_15)), ((float)il2cpp_codegen_subtract(L_19, L_21)), /*hidden argument*/NULL);
		V_1 = L_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_1), NULL);
		V_0 = L_23;
		// pointerDelta.x *= Xsensitivity;
		float* L_24 = (&(&V_0)->___x_0);
		float* L_25 = L_24;
		float L_26 = *((float*)L_25);
		float L_27 = __this->___Xsensitivity_8;
		*((float*)L_25) = (float)((float)il2cpp_codegen_multiply(L_26, L_27));
		// pointerDelta.y *= Ysensitivity;
		float* L_28 = (&(&V_0)->___y_1);
		float* L_29 = L_28;
		float L_30 = *((float*)L_29);
		float L_31 = __this->___Ysensitivity_9;
		*((float*)L_29) = (float)((float)il2cpp_codegen_multiply(L_30, L_31));
		// UpdateVirtualAxes(new Vector3(pointerDelta.x, pointerDelta.y, 0));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_0;
		float L_33 = L_32.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_0;
		float L_35 = L_34.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), L_33, L_35, (0.0f), /*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_m69FB974FF35D943BB88A012F130A88330E39699B(__this, L_36, NULL);
	}

IL_00f4:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnPointerUp_m6F1AF8EE5932677BDC2B85144579FD5595329824 (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	{
		// m_Dragging = false;
		__this->___m_Dragging_17 = (bool)0;
		// m_Id = -1;
		__this->___m_Id_18 = (-1);
		// UpdateVirtualAxes(Vector3.zero);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		TouchPad_UpdateVirtualAxes_m69FB974FF35D943BB88A012F130A88330E39699B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnDisable_m3D10A5340AC1035A16D811E93938D58066772A30 (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CrossPlatformInputManager.AxisExists(horizontalAxisName))
		String_t* L_0 = __this->___horizontalAxisName_6;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CrossPlatformInputManager_AxisExists_m667F1922B6BF625BD63AE848637DAE39F4F5E214(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// CrossPlatformInputManager.UnRegisterVirtualAxis(horizontalAxisName);
		String_t* L_2 = __this->___horizontalAxisName_6;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m7187BC4A5E716FEE79CE80C3A2CB7F9BA3463034(L_2, NULL);
	}

IL_0018:
	{
		// if (CrossPlatformInputManager.AxisExists(verticalAxisName))
		String_t* L_3 = __this->___verticalAxisName_7;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = CrossPlatformInputManager_AxisExists_m667F1922B6BF625BD63AE848637DAE39F4F5E214(L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// CrossPlatformInputManager.UnRegisterVirtualAxis(verticalAxisName);
		String_t* L_5 = __this->___verticalAxisName_7;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m7187BC4A5E716FEE79CE80C3A2CB7F9BA3463034(L_5, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad__ctor_mF557EEA00F689FCEEA4EB975E1AFDEA44D85D12D (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string horizontalAxisName = "Horizontal"; // The name given to the horizontal axis for the cross platform input
		__this->___horizontalAxisName_6 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___horizontalAxisName_6), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public string verticalAxisName = "Vertical"; // The name given to the vertical axis for the cross platform input
		__this->___verticalAxisName_7 = _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalAxisName_7), (void*)_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		// public float Xsensitivity = 1f;
		__this->___Xsensitivity_8 = (1.0f);
		// public float Ysensitivity = 1f;
		__this->___Ysensitivity_9 = (1.0f);
		// int m_Id = -1;
		__this->___m_Id_18 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CvirtualMousePositionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CvirtualMousePositionU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_mA1027423CCBE2BA83B7C4AF45AC01D099F1E6C69 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualAxes.ContainsKey(name);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = __this->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_mFA1287BD13673C81B5DCA6EF66AD4B0D56C4792A (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualButtons.ContainsKey(name);
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = __this->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_m6D3A4726D0DE1BA3B25AEDA9477493997A4D7CA2 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___axis0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m7D80F5E2747A1D8480D32F6A7DADF9FF612497D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1921D3070489B1532E810684C2992B44215A052);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualAxes.ContainsKey(axis.name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = __this->___m_VirtualAxes_1;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_1 = ___axis0;
		String_t* L_2;
		L_2 = VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline(L_1, NULL);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_2, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("There is already a virtual axis named " + axis.name + " registered.");
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_4 = ___axis0;
		String_t* L_5;
		L_5 = VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralE1921D3070489B1532E810684C2992B44215A052, L_5, _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_6, NULL);
		return;
	}

IL_002e:
	{
		// m_VirtualAxes.Add(axis.name, axis);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_7 = __this->___m_VirtualAxes_1;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_8 = ___axis0;
		String_t* L_9;
		L_9 = VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline(L_8, NULL);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_10 = ___axis0;
		Dictionary_2_Add_m7D80F5E2747A1D8480D32F6A7DADF9FF612497D3(L_7, L_9, L_10, Dictionary_2_Add_m7D80F5E2747A1D8480D32F6A7DADF9FF612497D3_RuntimeMethod_var);
		// if (!axis.matchWithInputManager)
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_11 = ___axis0;
		bool L_12;
		L_12 = VirtualAxis_get_matchWithInputManager_mF9AF15616F8F2FA90B757F63121F4D6455A9864C_inline(L_11, NULL);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// m_AlwaysUseVirtual.Add(axis.name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = __this->___m_AlwaysUseVirtual_3;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_14 = ___axis0;
		String_t* L_15;
		L_15 = VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline(L_14, NULL);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_m682A28CC3E2D3D5819BA34B94C4AA51E4CFCF14B (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* ___button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA61F8CE1734A37C2059099185058B68DA3D3890A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(button.name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = __this->___m_VirtualButtons_2;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_1 = ___button0;
		String_t* L_2;
		L_2 = VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline(L_1, NULL);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_2, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("There is already a virtual button named " + button.name + " registered.");
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_4 = ___button0;
		String_t* L_5;
		L_5 = VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9, L_5, _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_6, NULL);
		return;
	}

IL_002e:
	{
		// m_VirtualButtons.Add(button.name, button);
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_7 = __this->___m_VirtualButtons_2;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_8 = ___button0;
		String_t* L_9;
		L_9 = VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline(L_8, NULL);
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_10 = ___button0;
		Dictionary_2_Add_mA61F8CE1734A37C2059099185058B68DA3D3890A(L_7, L_9, L_10, Dictionary_2_Add_mA61F8CE1734A37C2059099185058B68DA3D3890A_RuntimeMethod_var);
		// if (!button.matchWithInputManager)
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_11 = ___button0;
		bool L_12;
		L_12 = VirtualButton_get_matchWithInputManager_m6E62059EDF0830800C3D6FD345919FFD30B1632F_inline(L_11, NULL);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// m_AlwaysUseVirtual.Add(button.name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = __this->___m_AlwaysUseVirtual_3;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_14 = ___button0;
		String_t* L_15;
		L_15 = VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline(L_14, NULL);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_m602AAC884C40E0B3C17F31A4085A1AFBA83D33A0 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m2BFFA59327E0CEC0AF2E64E1CC7242404F170005_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = __this->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_VirtualAxes.Remove(name);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_3 = __this->___m_VirtualAxes_1;
		String_t* L_4 = ___name0;
		bool L_5;
		L_5 = Dictionary_2_Remove_m2BFFA59327E0CEC0AF2E64E1CC7242404F170005(L_3, L_4, Dictionary_2_Remove_m2BFFA59327E0CEC0AF2E64E1CC7242404F170005_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_mD092FEE055651BE99D54ED63A5C506780F743B85 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m22C8CE308A22BF5C640788A660B9B5D510C75276_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = __this->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_VirtualButtons.Remove(name);
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_3 = __this->___m_VirtualButtons_2;
		String_t* L_4 = ___name0;
		bool L_5;
		L_5 = Dictionary_2_Remove_m22C8CE308A22BF5C640788A660B9B5D510C75276(L_3, L_4, Dictionary_2_Remove_m22C8CE308A22BF5C640788A660B9B5D510C75276_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* VirtualInput_VirtualAxisReference_m2B99B51B36EF570C2F7EBF04FD5CF30FE4AAAFFE (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualAxes.ContainsKey(name) ? m_VirtualAxes[name] : null;
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = __this->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)NULL;
	}

IL_0010:
	{
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_3 = __this->___m_VirtualAxes_1;
		String_t* L_4 = ___name0;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_5;
		L_5 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_3, L_4, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_m5F76D777C4EC90E8834C0793B5E366CDF9E5D9AB (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___f0, const RuntimeMethod* method) 
{
	{
		// virtualMousePosition = new Vector3(f, virtualMousePosition.y, virtualMousePosition.z);
		float L_0 = ___f0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_2 = L_1.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_m2C2B5FFA05DF8E0EC5E4E4586CD28FEA06618A76 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___f0, const RuntimeMethod* method) 
{
	{
		// virtualMousePosition = new Vector3(virtualMousePosition.x, f, virtualMousePosition.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_1 = L_0.___x_2;
		float L_2 = ___f0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_m68EF86F3AB06DCE129448E11371AAD617D55751C (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___f0, const RuntimeMethod* method) 
{
	{
		// virtualMousePosition = new Vector3(virtualMousePosition.x, virtualMousePosition.y, f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_3 = L_2.___y_3;
		float L_4 = ___f0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput__ctor_m7784BB0760D71F401B9D81E4F645A30049AB941B (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6E4E3A55B7CBE6817B2FC293EDBC1EFE90120BDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD3D57777C943F7E088E9DE8405EBA492A7A5BB2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, CrossPlatformInputManager.VirtualAxis> m_VirtualAxes =
		//     new Dictionary<string, CrossPlatformInputManager.VirtualAxis>();
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*)il2cpp_codegen_object_new(Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6E4E3A55B7CBE6817B2FC293EDBC1EFE90120BDD(L_0, Dictionary_2__ctor_m6E4E3A55B7CBE6817B2FC293EDBC1EFE90120BDD_RuntimeMethod_var);
		__this->___m_VirtualAxes_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VirtualAxes_1), (void*)L_0);
		// protected Dictionary<string, CrossPlatformInputManager.VirtualButton> m_VirtualButtons =
		//     new Dictionary<string, CrossPlatformInputManager.VirtualButton>();
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_1 = (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*)il2cpp_codegen_object_new(Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD3D57777C943F7E088E9DE8405EBA492A7A5BB2F(L_1, Dictionary_2__ctor_mD3D57777C943F7E088E9DE8405EBA492A7A5BB2F_RuntimeMethod_var);
		__this->___m_VirtualButtons_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VirtualButtons_2), (void*)L_1);
		// protected List<string> m_AlwaysUseVirtual = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___m_AlwaysUseVirtual_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AlwaysUseVirtual_3), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.RegisterVirtualButton(new CrossPlatformInputManager.VirtualButton(name));
		String_t* L_0 = ___name0;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_1 = (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460*)il2cpp_codegen_object_new(VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460_il2cpp_TypeInfo_var);
		VirtualButton__ctor_mD7918096435EE674CA7FF71AECFCA1A8B6280322(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualButton_m898766F16D97BAF3200BE557825A2D6E215B1D2C(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.RegisterVirtualAxis(new CrossPlatformInputManager.VirtualAxis(name));
		String_t* L_0 = ___name0;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_1 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mD1206DAAFD87B6D167733DB57AA4CAFB189CC731(L_1, NULL);
		// }
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MobileInput_GetAxis_m6D73746928887AFAFC3F788C16B705D72EC562A4 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31(__this, L_3, NULL);
	}

IL_0015:
	{
		// return m_VirtualAxes[name].GetValue;
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___name0;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_4, L_5, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		float L_7;
		L_7 = VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline(L_6, NULL);
		return L_7;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetButtonDown_m7A4BA4292DB7CC7360CE3AE6FF72FCFA4A4E34AC (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddButton(name);
		String_t* L_3 = ___name0;
		MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualButtons[name].Pressed();
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_5 = ___name0;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_6;
		L_6 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_4, L_5, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		VirtualButton_Pressed_mB3842B229270709B86AB688CC0BBF808F2A43CFB(L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetButtonUp_m40E01EEA1B15E563D12372B1C14BDFE4DA8307FC (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddButton(name);
		String_t* L_3 = ___name0;
		MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualButtons[name].Released();
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_5 = ___name0;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_6;
		L_6 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_4, L_5, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		VirtualButton_Released_m995C21EF89CBC80C7DF4419CA04A645A1CBE4E02(L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisPositive_mAAE978384C1CCD201A2BE881FEC0B1C8465C729A (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(1f);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___name0;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_4, L_5, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_6, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisNegative_m5B8280854DB9F6045D32C86B4345FD62878DA2AC (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(-1f);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___name0;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_4, L_5, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_6, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisZero_m7D83495E99BD17EE9D4A37C75BDA63BA2BD60240 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(0f);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___name0;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_4, L_5, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_6, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxis_m88422C12DA1C2A1024F45C85EC0CE380939C9D2F (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(value);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___name0;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_4, L_5, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		float L_7 = ___value1;
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButtonDown_mB305873D769F101DEFDE7A8C92049374857525B2 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButtonDown;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_3 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_4 = ___name0;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_5;
		L_5 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_3, L_4, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		bool L_6;
		L_6 = VirtualButton_get_GetButtonDown_m01E1A95C31ED59392D3500F120286EE344DCDAAE(L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6(__this, L_7, NULL);
		// return m_VirtualButtons[name].GetButtonDown;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_8 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_9 = ___name0;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_10;
		L_10 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_8, L_9, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		bool L_11;
		L_11 = VirtualButton_get_GetButtonDown_m01E1A95C31ED59392D3500F120286EE344DCDAAE(L_10, NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButtonUp_m75ED55DE2FAA5ECE32EF1ABA1FF2571D9E0153A8 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButtonUp;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_3 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_4 = ___name0;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_5;
		L_5 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_3, L_4, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		bool L_6;
		L_6 = VirtualButton_get_GetButtonUp_m64EC91C14AA944E545C93CF6EF9824848BBDA7C6(L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6(__this, L_7, NULL);
		// return m_VirtualButtons[name].GetButtonUp;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_8 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_9 = ___name0;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_10;
		L_10 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_8, L_9, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		bool L_11;
		L_11 = VirtualButton_get_GetButtonUp_m64EC91C14AA944E545C93CF6EF9824848BBDA7C6(L_10, NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButton_m1B3C5915BEF15B1169CD9872B9C04E19167980EC (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButton;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_3 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_4 = ___name0;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_5;
		L_5 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_3, L_4, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		bool L_6;
		L_6 = VirtualButton_get_GetButton_mF940484D441F184D1DB91B58CE9A17A48D8B3F02_inline(L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6(__this, L_7, NULL);
		// return m_VirtualButtons[name].GetButton;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_8 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_9 = ___name0;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_10;
		L_10 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_8, L_9, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		bool L_11;
		L_11 = VirtualButton_get_GetButton_mF940484D441F184D1DB91B58CE9A17A48D8B3F02_inline(L_10, NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MobileInput_MousePosition_mD554E5C1A85B0033F5DAFA823F5BB39A5ED35797 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, const RuntimeMethod* method) 
{
	{
		// return virtualMousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput__ctor_m939ADD1B67B274076F05A2C1F563A6242C5AF2F4 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, const RuntimeMethod* method) 
{
	{
		VirtualInput__ctor_m7784BB0760D71F401B9D81E4F645A30049AB941B(__this, NULL);
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
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StandaloneInput_GetAxis_m02DC4AC6E56EA7AF95E2A73AF4BC6962C95ADFCB (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method) 
{
	{
		// return raw ? Input.GetAxisRaw(name) : Input.GetAxis(name);
		bool L_0 = ___raw1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___name0;
		float L_2;
		L_2 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(L_1, NULL);
		return L_2;
	}

IL_000a:
	{
		String_t* L_3 = ___name0;
		float L_4;
		L_4 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(L_3, NULL);
		return L_4;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButton_m3BA6C26D8DB2B4BC6CD060CE26FAEE693D7BED57 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// return Input.GetButton(name);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Input_GetButton_mD0363B5F1771A7C7A97ABB0D07863217D229A9C0(L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButtonDown_mFE8024BBC93D07B8287A821DEA048ADC70EFD506 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// return Input.GetButtonDown(name);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButtonUp_m481FD69EC3F9A475406EFB49E3BCA55505E1444D (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// return Input.GetButtonUp(name);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Input_GetButtonUp_m65D9F89AC7456225E812704283D5EF84C852F724(L_0, NULL);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetButtonDown_m9E543F46E3DC44B51F40600AE83BAE2D681888CC (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetButtonDown_m9E543F46E3DC44B51F40600AE83BAE2D681888CC_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetButtonUp_m972DDCD2ED6C2531A9CC6E4098EAD5C4545FAA08 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetButtonUp_m972DDCD2ED6C2531A9CC6E4098EAD5C4545FAA08_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisPositive_mBF613552270FC457DDD76AF9A61936B19C0480F5 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisPositive_mBF613552270FC457DDD76AF9A61936B19C0480F5_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisNegative_mBC96B9BA1AB5B6930274F468BD67379200E38444 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisNegative_mBC96B9BA1AB5B6930274F468BD67379200E38444_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisZero_m84AD625B039B82E3D5F8317E21FE0CC129C11FCB (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisZero_m84AD625B039B82E3D5F8317E21FE0CC129C11FCB_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxis_mB8C42BB400B7C8DAEE07BE035620E3CE1A15D7F6 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxis_mB8C42BB400B7C8DAEE07BE035620E3CE1A15D7F6_RuntimeMethod_var)));
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StandaloneInput_MousePosition_m753E2104FF5C3408E697A1776CF2CECAEFDC3205 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, const RuntimeMethod* method) 
{
	{
		// return Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput__ctor_m31147DB7461D1CF9B054E61D7C17B77C715E7FDB (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, const RuntimeMethod* method) 
{
	{
		VirtualInput__ctor_m7784BB0760D71F401B9D81E4F645A30049AB941B(__this, NULL);
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
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_Start_m35BD6FB7CCCB019A1D2C185EE4999179FA6574CB (Ball_tA56A8F4D3F334AF2E4E1AB6E09D67141277531AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___m_Rigidbody_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Rigidbody_9), (void*)L_0);
		// GetComponent<Rigidbody>().maxAngularVelocity = m_MaxAngularVelocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		float L_2 = __this->___m_MaxAngularVelocity_6;
		Rigidbody_set_maxAngularVelocity_m26E48B1DC6B9F8DBB81EE0681ABEB3AB255FC3F6(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Move(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_Move_m2449A9EBD859AA9D918655DE31FD8BB679ED6326 (Ball_tA56A8F4D3F334AF2E4E1AB6E09D67141277531AE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDirection0, bool ___jump1, const RuntimeMethod* method) 
{
	{
		// if (m_UseTorque)
		bool L_0 = __this->___m_UseTorque_5;
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		// m_Rigidbody.AddTorque(new Vector3(moveDirection.z, 0, -moveDirection.x)*m_MovePower);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___m_Rigidbody_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___moveDirection0;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___moveDirection0;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_3, (0.0f), ((-L_5)), /*hidden argument*/NULL);
		float L_7 = __this->___m_MovePower_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, L_7, NULL);
		Rigidbody_AddTorque_m39C767D6CD12B2D12D575E2B469CB5565BFA30B6(L_1, L_8, NULL);
		goto IL_004e;
	}

IL_0037:
	{
		// m_Rigidbody.AddForce(moveDirection*m_MovePower);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___m_Rigidbody_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___moveDirection0;
		float L_11 = __this->___m_MovePower_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_9, L_12, NULL);
	}

IL_004e:
	{
		// if (Physics.Raycast(transform.position, -Vector3.up, k_GroundRayLength) && jump)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_15, NULL);
		bool L_17;
		L_17 = Physics_Raycast_m5B3761B4176FD520AAB3532612D8716C0ACC57F2(L_14, L_16, (1.0f), NULL);
		bool L_18 = ___jump1;
		if (!((int32_t)((int32_t)L_17&(int32_t)L_18)))
		{
			goto IL_008d;
		}
	}
	{
		// m_Rigidbody.AddForce(Vector3.up*m_JumpPower, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_19 = __this->___m_Rigidbody_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_21 = __this->___m_JumpPower_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_20, L_21, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_19, L_22, 1, NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball__ctor_m2E289A8315B237F82CED1850E08586203514EEC0 (Ball_tA56A8F4D3F334AF2E4E1AB6E09D67141277531AE* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float m_MovePower = 5; // The force added to the ball to move it.
		__this->___m_MovePower_4 = (5.0f);
		// [SerializeField] private bool m_UseTorque = true; // Whether or not to use torque to move the ball.
		__this->___m_UseTorque_5 = (bool)1;
		// [SerializeField] private float m_MaxAngularVelocity = 25; // The maximum velocity the ball can rotate at.
		__this->___m_MaxAngularVelocity_6 = (25.0f);
		// [SerializeField] private float m_JumpPower = 2; // The force added to the ball when it jumps.
		__this->___m_JumpPower_7 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallUserControl_Awake_mE236ADA1D251A064CFCDCC97C43C5BD1EDDA5808 (BallUserControl_tC4FF60630D8C24B65A48D9B5E8ED7035F5F37CA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBall_tA56A8F4D3F334AF2E4E1AB6E09D67141277531AE_m2D4B7560748D2015976C2699A0E7B2CD7C591EB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C21CAED16D9E840DD58D3736DFEC667D1E7957);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ball = GetComponent<Ball>();
		Ball_tA56A8F4D3F334AF2E4E1AB6E09D67141277531AE* L_0;
		L_0 = Component_GetComponent_TisBall_tA56A8F4D3F334AF2E4E1AB6E09D67141277531AE_m2D4B7560748D2015976C2699A0E7B2CD7C591EB2(__this, Component_GetComponent_TisBall_tA56A8F4D3F334AF2E4E1AB6E09D67141277531AE_m2D4B7560748D2015976C2699A0E7B2CD7C591EB2_RuntimeMethod_var);
		__this->___ball_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ball_4), (void*)L_0);
		// if (Camera.main != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// cam = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		__this->___cam_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_6), (void*)L_4);
		return;
	}

IL_002a:
	{
		// Debug.LogWarning(
		//     "Warning: no main camera found. Ball needs a Camera tagged \"MainCamera\", for camera-relative controls.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral93C21CAED16D9E840DD58D3736DFEC667D1E7957, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallUserControl_Update_m6704AC1CA5D6CE9B5014E775A75990C0BCAA31A7 (BallUserControl_tC4FF60630D8C24B65A48D9B5E8ED7035F5F37CA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float h = CrossPlatformInputManager.GetAxis("Horizontal");
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CrossPlatformInputManager_GetAxis_m1BA0A7839BDA75A556A9C3C3CA7F932C191BF066(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// float v = CrossPlatformInputManager.GetAxis("Vertical");
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_m1BA0A7839BDA75A556A9C3C3CA7F932C191BF066(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_1;
		// jump = CrossPlatformInputManager.GetButton("Jump");
		bool L_2;
		L_2 = CrossPlatformInputManager_GetButton_m6D3BD2F44D775C86379DD5039AF77A593060EA24(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		__this->___jump_8 = L_2;
		// if (cam != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___cam_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0097;
		}
	}
	{
		// camForward = Vector3.Scale(cam.forward, new Vector3(1, 0, 1)).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___cam_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline(L_6, L_7, NULL);
		V_2 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		__this->___camForward_7 = L_9;
		// move = (v*camForward + h*cam.right).normalized;
		float L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___camForward_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_10, L_11, NULL);
		float L_13 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___cam_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_13, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_12, L_16, NULL);
		V_2 = L_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		__this->___move_5 = L_18;
		return;
	}

IL_0097:
	{
		// move = (v*Vector3.forward + h*Vector3.right).normalized;
		float L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_19, L_20, NULL);
		float L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_22, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_21, L_24, NULL);
		V_2 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		__this->___move_5 = L_26;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallUserControl_FixedUpdate_mFD610A20372793DF16F298F14970C22A7ED24CFB (BallUserControl_tC4FF60630D8C24B65A48D9B5E8ED7035F5F37CA2* __this, const RuntimeMethod* method) 
{
	{
		// ball.Move(move, jump);
		Ball_tA56A8F4D3F334AF2E4E1AB6E09D67141277531AE* L_0 = __this->___ball_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___move_5;
		bool L_2 = __this->___jump_8;
		Ball_Move_m2449A9EBD859AA9D918655DE31FD8BB679ED6326(L_0, L_1, L_2, NULL);
		// jump = false;
		__this->___jump_8 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallUserControl__ctor_m6039D1550C746986A82B521D5DF7D07FFDE16260 (BallUserControl_tC4FF60630D8C24B65A48D9B5E8ED7035F5F37CA2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.AI.NavMeshAgent UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::get_agent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* AICharacterControl_get_agent_mF2D6FCCF78101649AC2DC630732565488BD6431A (AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEngine.AI.NavMeshAgent agent { get; private set; }             // the navmesh agent required for the path finding
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->___U3CagentU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::set_agent(UnityEngine.AI.NavMeshAgent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AICharacterControl_set_agent_mCFB80AF5991DDD29C9E5B1BFF6D42AD0E7E03D62 (AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B* __this, NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___value0, const RuntimeMethod* method) 
{
	{
		// public UnityEngine.AI.NavMeshAgent agent { get; private set; }             // the navmesh agent required for the path finding
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = ___value0;
		__this->___U3CagentU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CagentU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::get_character()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* AICharacterControl_get_character_m25851FC063EE4414838554CA7FCD618D03B4315A (AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B* __this, const RuntimeMethod* method) 
{
	{
		// public ThirdPersonCharacter character { get; private set; } // the character we are controlling
		ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* L_0 = __this->___U3CcharacterU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::set_character(UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AICharacterControl_set_character_m88D24A0392EDD64986771E1DACDC50189BFFB5F4 (AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B* __this, ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* ___value0, const RuntimeMethod* method) 
{
	{
		// public ThirdPersonCharacter character { get; private set; } // the character we are controlling
		ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* L_0 = ___value0;
		__this->___U3CcharacterU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcharacterU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AICharacterControl_Start_m4169AD89E9D2B06E922EBB2463A66C33BFCD29B7 (AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_mF258B768A3AFAFEAA9D44CC0357ECACCC058E7FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D_m0A20749E08463EA4E8911DD6578ED1ECFD0946BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent = GetComponentInChildren<UnityEngine.AI.NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0;
		L_0 = Component_GetComponentInChildren_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_mF258B768A3AFAFEAA9D44CC0357ECACCC058E7FD(__this, Component_GetComponentInChildren_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_mF258B768A3AFAFEAA9D44CC0357ECACCC058E7FD_RuntimeMethod_var);
		AICharacterControl_set_agent_mCFB80AF5991DDD29C9E5B1BFF6D42AD0E7E03D62_inline(__this, L_0, NULL);
		// character = GetComponent<ThirdPersonCharacter>();
		ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* L_1;
		L_1 = Component_GetComponent_TisThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D_m0A20749E08463EA4E8911DD6578ED1ECFD0946BA(__this, Component_GetComponent_TisThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D_m0A20749E08463EA4E8911DD6578ED1ECFD0946BA_RuntimeMethod_var);
		AICharacterControl_set_character_m88D24A0392EDD64986771E1DACDC50189BFFB5F4_inline(__this, L_1, NULL);
		// agent.updateRotation = false;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2;
		L_2 = AICharacterControl_get_agent_mF2D6FCCF78101649AC2DC630732565488BD6431A_inline(__this, NULL);
		NavMeshAgent_set_updateRotation_mBF6EDBC9BBAF32490229D7DD6BC821A420C3399D(L_2, (bool)0, NULL);
		// agent.updatePosition = true;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_3;
		L_3 = AICharacterControl_get_agent_mF2D6FCCF78101649AC2DC630732565488BD6431A_inline(__this, NULL);
		NavMeshAgent_set_updatePosition_m25CA3F441A2EEC82096B4BCFAD4E5FDC10867372(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AICharacterControl_Update_m1E758ACF51E76DAAFE628E840F218DF584567E58 (AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// agent.SetDestination(target.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2;
		L_2 = AICharacterControl_get_agent_mF2D6FCCF78101649AC2DC630732565488BD6431A_inline(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___target_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		bool L_5;
		L_5 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_2, L_4, NULL);
	}

IL_0025:
	{
		// if (agent.remainingDistance > agent.stoppingDistance)
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_6;
		L_6 = AICharacterControl_get_agent_mF2D6FCCF78101649AC2DC630732565488BD6431A_inline(__this, NULL);
		float L_7;
		L_7 = NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A(L_6, NULL);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_8;
		L_8 = AICharacterControl_get_agent_mF2D6FCCF78101649AC2DC630732565488BD6431A_inline(__this, NULL);
		float L_9;
		L_9 = NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4(L_8, NULL);
		if ((!(((float)L_7) > ((float)L_9))))
		{
			goto IL_0056;
		}
	}
	{
		// character.Move(agent.desiredVelocity, false, false);
		ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* L_10;
		L_10 = AICharacterControl_get_character_m25851FC063EE4414838554CA7FCD618D03B4315A_inline(__this, NULL);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_11;
		L_11 = AICharacterControl_get_agent_mF2D6FCCF78101649AC2DC630732565488BD6431A_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = NavMeshAgent_get_desiredVelocity_m8CF3F6E3FA8EE86397DD02146AA6048949B74F52(L_11, NULL);
		ThirdPersonCharacter_Move_m2AED450F12D3ED860E20A023B8B4205DEB4CCD0A(L_10, L_12, (bool)0, (bool)0, NULL);
		return;
	}

IL_0056:
	{
		// character.Move(Vector3.zero, false, false);
		ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* L_13;
		L_13 = AICharacterControl_get_character_m25851FC063EE4414838554CA7FCD618D03B4315A_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		ThirdPersonCharacter_Move_m2AED450F12D3ED860E20A023B8B4205DEB4CCD0A(L_13, L_14, (bool)0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::SetTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AICharacterControl_SetTarget_m747B106CDB8AABD458D32948DEEB4C3399AE0EFC (AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) 
{
	{
		// this.target = target;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___target0;
		__this->___target_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AICharacterControl__ctor_m78927EC28F2D3F359CB528C6AABAA39E99719587 (AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_Start_m70127BF1FDCD0CB65859CC46F2E60631050DF4C7 (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___m_Animator_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Animator_13), (void*)L_0);
		// m_Rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___m_Rigidbody_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Rigidbody_12), (void*)L_1);
		// m_Capsule = GetComponent<CapsuleCollider>();
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_2;
		L_2 = Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E(__this, Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		__this->___m_Capsule_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Capsule_22), (void*)L_2);
		// m_CapsuleHeight = m_Capsule.height;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_3 = __this->___m_Capsule_22;
		float L_4;
		L_4 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_3, NULL);
		__this->___m_CapsuleHeight_20 = L_4;
		// m_CapsuleCenter = m_Capsule.center;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_5 = __this->___m_Capsule_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2(L_5, NULL);
		__this->___m_CapsuleCenter_21 = L_6;
		// m_Rigidbody.constraints = RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationY | RigidbodyConstraints.FreezeRotationZ;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___m_Rigidbody_12;
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_7, ((int32_t)112), NULL);
		// m_OrigGroundCheckDistance = m_GroundCheckDistance;
		float L_8 = __this->___m_GroundCheckDistance_11;
		__this->___m_OrigGroundCheckDistance_15 = L_8;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::Move(UnityEngine.Vector3,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_Move_m2AED450F12D3ED860E20A023B8B4205DEB4CCD0A (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___move0, bool ___crouch1, bool ___jump2, const RuntimeMethod* method) 
{
	{
		// if (move.magnitude > 1f) move.Normalize();
		float L_0;
		L_0 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___move0), NULL);
		if ((!(((float)L_0) > ((float)(1.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		// if (move.magnitude > 1f) move.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&___move0), NULL);
	}

IL_0015:
	{
		// move = transform.InverseTransformDirection(move);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___move0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_1, L_2, NULL);
		___move0 = L_3;
		// CheckGroundStatus();
		ThirdPersonCharacter_CheckGroundStatus_m47FD5ABF5455A5543C9FE7D011364EBEDB11A264(__this, NULL);
		// move = Vector3.ProjectOnPlane(move, m_GroundNormal);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___move0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___m_GroundNormal_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_4, L_5, NULL);
		___move0 = L_6;
		// m_TurnAmount = Mathf.Atan2(move.x, move.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___move0;
		float L_8 = L_7.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___move0;
		float L_10 = L_9.___z_4;
		float L_11;
		L_11 = atan2f(L_8, L_10);
		__this->___m_TurnAmount_17 = L_11;
		// m_ForwardAmount = move.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___move0;
		float L_13 = L_12.___z_4;
		__this->___m_ForwardAmount_18 = L_13;
		// ApplyExtraTurnRotation();
		ThirdPersonCharacter_ApplyExtraTurnRotation_m5BC18C78017286A8935BCA1A210B8722471E1788(__this, NULL);
		// if (m_IsGrounded)
		bool L_14 = __this->___m_IsGrounded_14;
		if (!L_14)
		{
			goto IL_0072;
		}
	}
	{
		// HandleGroundedMovement(crouch, jump);
		bool L_15 = ___crouch1;
		bool L_16 = ___jump2;
		ThirdPersonCharacter_HandleGroundedMovement_mB7D0DE8053F750D278CCC0DB8A9B2B77A6BFE4E8(__this, L_15, L_16, NULL);
		goto IL_0078;
	}

IL_0072:
	{
		// HandleAirborneMovement();
		ThirdPersonCharacter_HandleAirborneMovement_mE9CD324361D21E9F050C8EB35D8F2D7D0B756949(__this, NULL);
	}

IL_0078:
	{
		// ScaleCapsuleForCrouching(crouch);
		bool L_17 = ___crouch1;
		ThirdPersonCharacter_ScaleCapsuleForCrouching_m6983E3727F27D0C9D6EEE6E183D00D958B37C356(__this, L_17, NULL);
		// PreventStandingInLowHeadroom();
		ThirdPersonCharacter_PreventStandingInLowHeadroom_m6B738D57AADF8C82D3E6770E59070892600C8E5B(__this, NULL);
		// UpdateAnimator(move);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___move0;
		ThirdPersonCharacter_UpdateAnimator_m987C04CB96BBE9C0B9F55388E18BE717B662D934(__this, L_18, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::ScaleCapsuleForCrouching(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_ScaleCapsuleForCrouching_m6983E3727F27D0C9D6EEE6E183D00D958B37C356 (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, bool ___crouch0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (m_IsGrounded && crouch)
		bool L_0 = __this->___m_IsGrounded_14;
		bool L_1 = ___crouch0;
		if (!((int32_t)((int32_t)L_0&(int32_t)L_1)))
		{
			goto IL_0057;
		}
	}
	{
		// if (m_Crouching) return;
		bool L_2 = __this->___m_Crouching_23;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (m_Crouching) return;
		return;
	}

IL_0013:
	{
		// m_Capsule.height = m_Capsule.height / 2f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_3 = __this->___m_Capsule_22;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_4 = __this->___m_Capsule_22;
		float L_5;
		L_5 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_4, NULL);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_3, ((float)(L_5/(2.0f))), NULL);
		// m_Capsule.center = m_Capsule.center / 2f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_6 = __this->___m_Capsule_22;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_7 = __this->___m_Capsule_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_8, (2.0f), NULL);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_6, L_9, NULL);
		// m_Crouching = true;
		__this->___m_Crouching_23 = (bool)1;
		return;
	}

IL_0057:
	{
		// Ray crouchRay = new Ray(m_Rigidbody.position + Vector3.up * m_Capsule.radius * k_Half, Vector3.up);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___m_Rigidbody_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_13 = __this->___m_Capsule_22;
		float L_14;
		L_14 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_15, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_11, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_19), L_17, L_18, /*hidden argument*/NULL);
		// float crouchRayLength = m_CapsuleHeight - m_Capsule.radius * k_Half;
		float L_20 = __this->___m_CapsuleHeight_20;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_21 = __this->___m_Capsule_22;
		float L_22;
		L_22 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_21, NULL);
		V_0 = ((float)il2cpp_codegen_subtract(L_20, ((float)il2cpp_codegen_multiply(L_22, (0.5f)))));
		// if (Physics.SphereCast(crouchRay, m_Capsule.radius * k_Half, crouchRayLength, Physics.AllLayers, QueryTriggerInteraction.Ignore))
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_23 = __this->___m_Capsule_22;
		float L_24;
		L_24 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_23, NULL);
		float L_25 = V_0;
		bool L_26;
		L_26 = Physics_SphereCast_m2CE6BCAF0D0587AE29B6103280B337CDC3B5D5A8(L_19, ((float)il2cpp_codegen_multiply(L_24, (0.5f))), L_25, (-1), 1, NULL);
		if (!L_26)
		{
			goto IL_00cc;
		}
	}
	{
		// m_Crouching = true;
		__this->___m_Crouching_23 = (bool)1;
		// return;
		return;
	}

IL_00cc:
	{
		// m_Capsule.height = m_CapsuleHeight;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_27 = __this->___m_Capsule_22;
		float L_28 = __this->___m_CapsuleHeight_20;
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_27, L_28, NULL);
		// m_Capsule.center = m_CapsuleCenter;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_29 = __this->___m_Capsule_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___m_CapsuleCenter_21;
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_29, L_30, NULL);
		// m_Crouching = false;
		__this->___m_Crouching_23 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::PreventStandingInLowHeadroom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_PreventStandingInLowHeadroom_m6B738D57AADF8C82D3E6770E59070892600C8E5B (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (!m_Crouching)
		bool L_0 = __this->___m_Crouching_23;
		if (L_0)
		{
			goto IL_007c;
		}
	}
	{
		// Ray crouchRay = new Ray(m_Rigidbody.position + Vector3.up * m_Capsule.radius * k_Half, Vector3.up);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___m_Rigidbody_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_4 = __this->___m_Capsule_22;
		float L_5;
		L_5 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_2, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_10), L_8, L_9, /*hidden argument*/NULL);
		// float crouchRayLength = m_CapsuleHeight - m_Capsule.radius * k_Half;
		float L_11 = __this->___m_CapsuleHeight_20;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_12 = __this->___m_Capsule_22;
		float L_13;
		L_13 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_12, NULL);
		V_0 = ((float)il2cpp_codegen_subtract(L_11, ((float)il2cpp_codegen_multiply(L_13, (0.5f)))));
		// if (Physics.SphereCast(crouchRay, m_Capsule.radius * k_Half, crouchRayLength, Physics.AllLayers, QueryTriggerInteraction.Ignore))
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_14 = __this->___m_Capsule_22;
		float L_15;
		L_15 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_14, NULL);
		float L_16 = V_0;
		bool L_17;
		L_17 = Physics_SphereCast_m2CE6BCAF0D0587AE29B6103280B337CDC3B5D5A8(L_10, ((float)il2cpp_codegen_multiply(L_15, (0.5f))), L_16, (-1), 1, NULL);
		if (!L_17)
		{
			goto IL_007c;
		}
	}
	{
		// m_Crouching = true;
		__this->___m_Crouching_23 = (bool)1;
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::UpdateAnimator(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_UpdateAnimator_m987C04CB96BBE9C0B9F55388E18BE717B662D934 (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___move0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral073636784DA1EA12164998BEE384713657E4BE14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral288B53F014E2C53296CBC94785B0521CC621D509);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEADE91E573B3BBA4B0C2F14237A82BADF354A2D6);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B5_0 = 0;
	{
		// m_Animator.SetFloat("Forward", m_ForwardAmount, 0.1f, Time.deltaTime);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___m_Animator_13;
		float L_1 = __this->___m_ForwardAmount_18;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Animator_SetFloat_m018FC1B8BBA989887545ABEF5FB611087F23A4C0(L_0, _stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1, L_1, (0.100000001f), L_2, NULL);
		// m_Animator.SetFloat("Turn", m_TurnAmount, 0.1f, Time.deltaTime);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___m_Animator_13;
		float L_4 = __this->___m_TurnAmount_17;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Animator_SetFloat_m018FC1B8BBA989887545ABEF5FB611087F23A4C0(L_3, _stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8, L_4, (0.100000001f), L_5, NULL);
		// m_Animator.SetBool("Crouch", m_Crouching);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___m_Animator_13;
		bool L_7 = __this->___m_Crouching_23;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteral288B53F014E2C53296CBC94785B0521CC621D509, L_7, NULL);
		// m_Animator.SetBool("OnGround", m_IsGrounded);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___m_Animator_13;
		bool L_9 = __this->___m_IsGrounded_14;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralEADE91E573B3BBA4B0C2F14237A82BADF354A2D6, L_9, NULL);
		// if (!m_IsGrounded)
		bool L_10 = __this->___m_IsGrounded_14;
		if (L_10)
		{
			goto IL_0094;
		}
	}
	{
		// m_Animator.SetFloat("Jump", m_Rigidbody.velocity.y);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___m_Animator_13;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = __this->___m_Rigidbody_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_12, NULL);
		float L_14 = L_13.___y_3;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_11, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, L_14, NULL);
	}

IL_0094:
	{
		// float runCycle =
		//     Mathf.Repeat(
		//         m_Animator.GetCurrentAnimatorStateInfo(0).normalizedTime + m_RunCycleLegOffset, 1);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->___m_Animator_13;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_16;
		L_16 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_15, 0, NULL);
		V_1 = L_16;
		float L_17;
		L_17 = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6((&V_1), NULL);
		float L_18 = __this->___m_RunCycleLegOffset_8;
		float L_19;
		L_19 = Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline(((float)il2cpp_codegen_add(L_17, L_18)), (1.0f), NULL);
		// float jumpLeg = (runCycle < k_Half ? 1 : -1) * m_ForwardAmount;
		if ((((float)L_19) < ((float)(0.5f))))
		{
			goto IL_00c3;
		}
	}
	{
		G_B5_0 = (-1);
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B5_0 = 1;
	}

IL_00c4:
	{
		float L_20 = __this->___m_ForwardAmount_18;
		V_0 = ((float)il2cpp_codegen_multiply(((float)G_B5_0), L_20));
		// if (m_IsGrounded)
		bool L_21 = __this->___m_IsGrounded_14;
		if (!L_21)
		{
			goto IL_00e6;
		}
	}
	{
		// m_Animator.SetFloat("JumpLeg", jumpLeg);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_22 = __this->___m_Animator_13;
		float L_23 = V_0;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_22, _stringLiteral073636784DA1EA12164998BEE384713657E4BE14, L_23, NULL);
	}

IL_00e6:
	{
		// if (m_IsGrounded && move.magnitude > 0)
		bool L_24 = __this->___m_IsGrounded_14;
		if (!L_24)
		{
			goto IL_010e;
		}
	}
	{
		float L_25;
		L_25 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___move0), NULL);
		if ((!(((float)L_25) > ((float)(0.0f)))))
		{
			goto IL_010e;
		}
	}
	{
		// m_Animator.speed = m_AnimSpeedMultiplier;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26 = __this->___m_Animator_13;
		float L_27 = __this->___m_AnimSpeedMultiplier_10;
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_26, L_27, NULL);
		return;
	}

IL_010e:
	{
		// m_Animator.speed = 1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_28 = __this->___m_Animator_13;
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_28, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::HandleAirborneMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_HandleAirborneMovement_mE9CD324361D21E9F050C8EB35D8F2D7D0B756949 (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* G_B2_0 = NULL;
	ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* G_B3_1 = NULL;
	{
		// Vector3 extraGravityForce = (Physics.gravity * m_GravityMultiplier) - Physics.gravity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81(NULL);
		float L_1 = __this->___m_GravityMultiplier_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// m_Rigidbody.AddForce(extraGravityForce);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___m_Rigidbody_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_5, L_6, NULL);
		// m_GroundCheckDistance = m_Rigidbody.velocity.y < 0 ? m_OrigGroundCheckDistance : 0.01f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___m_Rigidbody_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_7, NULL);
		float L_9 = L_8.___y_3;
		G_B1_0 = __this;
		if ((((float)L_9) < ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_0046;
		}
	}
	{
		G_B3_0 = (0.00999999978f);
		G_B3_1 = G_B1_0;
		goto IL_004c;
	}

IL_0046:
	{
		float L_10 = __this->___m_OrigGroundCheckDistance_15;
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
	}

IL_004c:
	{
		G_B3_1->___m_GroundCheckDistance_11 = G_B3_0;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::HandleGroundedMovement(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_HandleGroundedMovement_mB7D0DE8053F750D278CCC0DB8A9B2B77A6BFE4E8 (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, bool ___crouch0, bool ___jump1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (jump && !crouch && m_Animator.GetCurrentAnimatorStateInfo(0).IsName("Grounded"))
		bool L_0 = ___jump1;
		if (!L_0)
		{
			goto IL_0075;
		}
	}
	{
		bool L_1 = ___crouch0;
		if (L_1)
		{
			goto IL_0075;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___m_Animator_13;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_3;
		L_3 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_2, 0, NULL);
		V_0 = L_3;
		bool L_4;
		L_4 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4, NULL);
		if (!L_4)
		{
			goto IL_0075;
		}
	}
	{
		// m_Rigidbody.velocity = new Vector3(m_Rigidbody.velocity.x, m_JumpPower, m_Rigidbody.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___m_Rigidbody_12;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___m_Rigidbody_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_6, NULL);
		float L_8 = L_7.___x_2;
		float L_9 = __this->___m_JumpPower_6;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___m_Rigidbody_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_10, NULL);
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_8, L_9, L_12, /*hidden argument*/NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_5, L_13, NULL);
		// m_IsGrounded = false;
		__this->___m_IsGrounded_14 = (bool)0;
		// m_Animator.applyRootMotion = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___m_Animator_13;
		Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98(L_14, (bool)0, NULL);
		// m_GroundCheckDistance = 0.1f;
		__this->___m_GroundCheckDistance_11 = (0.100000001f);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::ApplyExtraTurnRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_ApplyExtraTurnRotation_m5BC18C78017286A8935BCA1A210B8722471E1788 (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float turnSpeed = Mathf.Lerp(m_StationaryTurnSpeed, m_MovingTurnSpeed, m_ForwardAmount);
		float L_0 = __this->___m_StationaryTurnSpeed_5;
		float L_1 = __this->___m_MovingTurnSpeed_4;
		float L_2 = __this->___m_ForwardAmount_18;
		float L_3;
		L_3 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// transform.Rotate(0, m_TurnAmount * turnSpeed * Time.deltaTime, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_5 = __this->___m_TurnAmount_17;
		float L_6 = V_0;
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_4, (0.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, L_6)), L_7)), (0.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::OnAnimatorMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_OnAnimatorMove_m5922B77CD36A2DA0F41EEBE2CF1013DB00CCFD8A (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_IsGrounded && Time.deltaTime > 0)
		bool L_0 = __this->___m_IsGrounded_14;
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0058;
		}
	}
	{
		// Vector3 v = (m_Animator.deltaPosition * m_MoveSpeedMultiplier) / Time.deltaTime;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___m_Animator_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Animator_get_deltaPosition_m1759DB2D343FDAFAA7FE85ED66451D5210B0A606(L_2, NULL);
		float L_4 = __this->___m_MoveSpeedMultiplier_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_5, L_6, NULL);
		V_0 = L_7;
		// v.y = m_Rigidbody.velocity.y;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___m_Rigidbody_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_8, NULL);
		float L_10 = L_9.___y_3;
		(&V_0)->___y_3 = L_10;
		// m_Rigidbody.velocity = v;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = __this->___m_Rigidbody_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_11, L_12, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::CheckGroundStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter_CheckGroundStatus_m47FD5ABF5455A5543C9FE7D011364EBEDB11A264 (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Physics.Raycast(transform.position + (Vector3.up * 0.1f), Vector3.down, out hitInfo, m_GroundCheckDistance))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_1, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		float L_6 = __this->___m_GroundCheckDistance_11;
		bool L_7;
		L_7 = Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10(L_4, L_5, (&V_0), L_6, NULL);
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		// m_GroundNormal = hitInfo.normal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		__this->___m_GroundNormal_19 = L_8;
		// m_IsGrounded = true;
		__this->___m_IsGrounded_14 = (bool)1;
		// m_Animator.applyRootMotion = true;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->___m_Animator_13;
		Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98(L_9, (bool)1, NULL);
		return;
	}

IL_0054:
	{
		// m_IsGrounded = false;
		__this->___m_IsGrounded_14 = (bool)0;
		// m_GroundNormal = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		__this->___m_GroundNormal_19 = L_10;
		// m_Animator.applyRootMotion = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___m_Animator_13;
		Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98(L_11, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonCharacter__ctor_mBA2006158C9F8FD8247B9437D1E9ECFFEFB09E15 (ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float m_MovingTurnSpeed = 360;
		__this->___m_MovingTurnSpeed_4 = (360.0f);
		// [SerializeField] float m_StationaryTurnSpeed = 180;
		__this->___m_StationaryTurnSpeed_5 = (180.0f);
		// [SerializeField] float m_JumpPower = 12f;
		__this->___m_JumpPower_6 = (12.0f);
		// [Range(1f, 4f)][SerializeField] float m_GravityMultiplier = 2f;
		__this->___m_GravityMultiplier_7 = (2.0f);
		// [SerializeField] float m_RunCycleLegOffset = 0.2f; //specific to the character in sample assets, will need to be modified to work with others
		__this->___m_RunCycleLegOffset_8 = (0.200000003f);
		// [SerializeField] float m_MoveSpeedMultiplier = 1f;
		__this->___m_MoveSpeedMultiplier_9 = (1.0f);
		// [SerializeField] float m_AnimSpeedMultiplier = 1f;
		__this->___m_AnimSpeedMultiplier_10 = (1.0f);
		// [SerializeField] float m_GroundCheckDistance = 0.1f;
		__this->___m_GroundCheckDistance_11 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonUserControl_Start_m5704FEECF87EA160778E9C52E6C0E689950BD270 (ThirdPersonUserControl_t4366E3186AA053741323540A1290BAB7CA92AA85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D_m0A20749E08463EA4E8911DD6578ED1ECFD0946BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0BFFDA088BD1CDAA41AB72838F89353A454A0CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Camera.main != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// m_Cam = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		__this->___m_Cam_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Cam_5), (void*)L_3);
		goto IL_002f;
	}

IL_001f:
	{
		// Debug.LogWarning(
		//     "Warning: no main camera found. Third person character needs a Camera tagged \"MainCamera\", for camera-relative controls.", gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(_stringLiteralF0BFFDA088BD1CDAA41AB72838F89353A454A0CD, L_4, NULL);
	}

IL_002f:
	{
		// m_Character = GetComponent<ThirdPersonCharacter>();
		ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* L_5;
		L_5 = Component_GetComponent_TisThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D_m0A20749E08463EA4E8911DD6578ED1ECFD0946BA(__this, Component_GetComponent_TisThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D_m0A20749E08463EA4E8911DD6578ED1ECFD0946BA_RuntimeMethod_var);
		__this->___m_Character_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Character_4), (void*)L_5);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonUserControl_Update_mA68D495BB98D9AE133C39F0D1646E11BBE1CE33B (ThirdPersonUserControl_t4366E3186AA053741323540A1290BAB7CA92AA85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_Jump)
		bool L_0 = __this->___m_Jump_8;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// m_Jump = CrossPlatformInputManager.GetButtonDown("Jump");
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CrossPlatformInputManager_GetButtonDown_mB034544AE57B544921BE5ADCAA18D2EAC83DB4B9(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		__this->___m_Jump_8 = L_1;
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonUserControl_FixedUpdate_m1BB082F04A8A74816ED7F29D5B275AF1647B5C38 (ThirdPersonUserControl_t4366E3186AA053741323540A1290BAB7CA92AA85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float h = CrossPlatformInputManager.GetAxis("Horizontal");
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CrossPlatformInputManager_GetAxis_m1BA0A7839BDA75A556A9C3C3CA7F932C191BF066(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// float v = CrossPlatformInputManager.GetAxis("Vertical");
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_m1BA0A7839BDA75A556A9C3C3CA7F932C191BF066(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_1;
		// bool crouch = Input.GetKey(KeyCode.C);
		bool L_2;
		L_2 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)99), NULL);
		V_2 = L_2;
		// if (m_Cam != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Cam_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0088;
		}
	}
	{
		// m_CamForward = Vector3.Scale(m_Cam.forward, new Vector3(1, 0, 1)).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___m_Cam_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline(L_6, L_7, NULL);
		V_3 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		__this->___m_CamForward_6 = L_9;
		// m_Move = v*m_CamForward + h*m_Cam.right;
		float L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___m_CamForward_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_10, L_11, NULL);
		float L_13 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___m_Cam_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_13, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_12, L_16, NULL);
		__this->___m_Move_7 = L_17;
		goto IL_00a9;
	}

IL_0088:
	{
		// m_Move = v*Vector3.forward + h*Vector3.right;
		float L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_18, L_19, NULL);
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_20, L_23, NULL);
		__this->___m_Move_7 = L_24;
	}

IL_00a9:
	{
		// if (Input.GetKey(KeyCode.LeftShift)) m_Move *= 0.5f;
		bool L_25;
		L_25 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)304), NULL);
		if (!L_25)
		{
			goto IL_00cb;
		}
	}
	{
		// if (Input.GetKey(KeyCode.LeftShift)) m_Move *= 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = __this->___m_Move_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_26, (0.5f), NULL);
		__this->___m_Move_7 = L_27;
	}

IL_00cb:
	{
		// m_Character.Move(m_Move, crouch, m_Jump);
		ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* L_28 = __this->___m_Character_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = __this->___m_Move_7;
		bool L_30 = V_2;
		bool L_31 = __this->___m_Jump_8;
		ThirdPersonCharacter_Move_m2AED450F12D3ED860E20A023B8B4205DEB4CCD0A(L_28, L_29, L_30, L_31, NULL);
		// m_Jump = false;
		__this->___m_Jump_8 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonUserControl__ctor_mE4194A47BC7CB544D25FE295FF8E580E7F0D750E (ThirdPersonUserControl_t4366E3186AA053741323540A1290BAB7CA92AA85* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Start_m4F55349288CAEA1EE6BC9809DEE275A02451589F (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CharacterController = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___m_CharacterController_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CharacterController_26), (void*)L_0);
		// m_Camera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		__this->___m_Camera_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Camera_21), (void*)L_1);
		// m_OriginalCameraPosition = m_Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		__this->___m_OriginalCameraPosition_29 = L_4;
		// m_FovKick.Setup(m_Camera);
		FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* L_5 = __this->___m_FovKick_13;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___m_Camera_21;
		FOVKick_Setup_m7E73F218F4B74B175FC9BD1DD32B0711E048916F(L_5, L_6, NULL);
		// m_HeadBob.Setup(m_Camera, m_StepInterval);
		CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* L_7 = __this->___m_HeadBob_15;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = __this->___m_Camera_21;
		float L_9 = __this->___m_StepInterval_17;
		CurveControlledBob_Setup_mDB98D5F434FDEBD472856B9686AF5DCE77056AF4(L_7, L_8, L_9, NULL);
		// m_StepCycle = 0f;
		__this->___m_StepCycle_30 = (0.0f);
		// m_NextStep = m_StepCycle/2f;
		float L_10 = __this->___m_StepCycle_30;
		__this->___m_NextStep_31 = ((float)(L_10/(2.0f)));
		// m_Jumping = false;
		__this->___m_Jumping_32 = (bool)0;
		// m_AudioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11;
		L_11 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___m_AudioSource_33 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AudioSource_33), (void*)L_11);
		// m_MouseLook.Init(transform , m_Camera.transform);
		MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* L_12 = __this->___m_MouseLook_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		MouseLook_Init_m7086DCA60BBC6F28FD3DCBFB78828D578656D9E6(L_12, L_13, L_15, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Update_m91E31D9AFC61FB6B5F66FC10E8F15B660725013D (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RotateView();
		FirstPersonController_RotateView_mCEC44D346646100CACE88516D162A32640E332CD(__this, NULL);
		// if (!m_Jump)
		bool L_0 = __this->___m_Jump_22;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// m_Jump = CrossPlatformInputManager.GetButtonDown("Jump");
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CrossPlatformInputManager_GetButtonDown_mB034544AE57B544921BE5ADCAA18D2EAC83DB4B9(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		__this->___m_Jump_22 = L_1;
	}

IL_001e:
	{
		// if (!m_PreviouslyGrounded && m_CharacterController.isGrounded)
		bool L_2 = __this->___m_PreviouslyGrounded_28;
		if (L_2)
		{
			goto IL_0062;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_3 = __this->___m_CharacterController_26;
		bool L_4;
		L_4 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_3, NULL);
		if (!L_4)
		{
			goto IL_0062;
		}
	}
	{
		// StartCoroutine(m_JumpBob.DoBobCycle());
		LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* L_5 = __this->___m_JumpBob_16;
		RuntimeObject* L_6;
		L_6 = LerpControlledBob_DoBobCycle_m6C115FF5CB0A8C3A08F93F72A841B494325814CC(L_5, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// PlayLandingSound();
		FirstPersonController_PlayLandingSound_m336EF9D77C24FB1ABBB047C0146971E853079191(__this, NULL);
		// m_MoveDir.y = 0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___m_MoveDir_25);
		L_8->___y_3 = (0.0f);
		// m_Jumping = false;
		__this->___m_Jumping_32 = (bool)0;
	}

IL_0062:
	{
		// if (!m_CharacterController.isGrounded && !m_Jumping && m_PreviouslyGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_9 = __this->___m_CharacterController_26;
		bool L_10;
		L_10 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_9, NULL);
		if (L_10)
		{
			goto IL_008f;
		}
	}
	{
		bool L_11 = __this->___m_Jumping_32;
		if (L_11)
		{
			goto IL_008f;
		}
	}
	{
		bool L_12 = __this->___m_PreviouslyGrounded_28;
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		// m_MoveDir.y = 0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___m_MoveDir_25);
		L_13->___y_3 = (0.0f);
	}

IL_008f:
	{
		// m_PreviouslyGrounded = m_CharacterController.isGrounded;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_14 = __this->___m_CharacterController_26;
		bool L_15;
		L_15 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_14, NULL);
		__this->___m_PreviouslyGrounded_28 = L_15;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayLandingSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayLandingSound_m336EF9D77C24FB1ABBB047C0146971E853079191 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	{
		// m_AudioSource.clip = m_LandSound;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___m_AudioSource_33;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___m_LandSound_20;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_1, NULL);
		// m_AudioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___m_AudioSource_33;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// m_NextStep = m_StepCycle + .5f;
		float L_3 = __this->___m_StepCycle_30;
		__this->___m_NextStep_31 = ((float)il2cpp_codegen_add(L_3, (0.5f)));
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_FixedUpdate_m9AA7D2F59F8416796AACB7F4AC5270CA20B55CA5 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// GetInput(out speed);
		FirstPersonController_GetInput_mE08B63FC27C0B3DA024FEF6057CF8284286B3B26(__this, (&V_0), NULL);
		// Vector3 desiredMove = transform.forward*m_Input.y + transform.right*m_Input.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___m_Input_24);
		float L_3 = L_2->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___m_Input_24);
		float L_8 = L_7->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_4, L_9, NULL);
		V_1 = L_10;
		// Physics.SphereCast(transform.position, m_CharacterController.radius, Vector3.down, out hitInfo,
		//                    m_CharacterController.height/2f, Physics.AllLayers, QueryTriggerInteraction.Ignore);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_13 = __this->___m_CharacterController_26;
		float L_14;
		L_14 = CharacterController_get_radius_mA7095C2FFBA77AE532CD9B219D506D871E86BFC5(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_16 = __this->___m_CharacterController_26;
		float L_17;
		L_17 = CharacterController_get_height_m18EC4D93673A225648DCB302BAB4F8A5FE4A20AF(L_16, NULL);
		bool L_18;
		L_18 = Physics_SphereCast_m5FB43F0C507F917CD9FCA1B16CF37285FC581066(L_12, L_14, L_15, (&V_2), ((float)(L_17/(2.0f))), (-1), 1, NULL);
		// desiredMove = Vector3.ProjectOnPlane(desiredMove, hitInfo.normal).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_19, L_20, NULL);
		V_3 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_1 = L_22;
		// m_MoveDir.x = desiredMove.x*speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___m_MoveDir_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		float L_25 = L_24.___x_2;
		float L_26 = V_0;
		L_23->___x_2 = ((float)il2cpp_codegen_multiply(L_25, L_26));
		// m_MoveDir.z = desiredMove.z*speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = (&__this->___m_MoveDir_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_1;
		float L_29 = L_28.___z_4;
		float L_30 = V_0;
		L_27->___z_4 = ((float)il2cpp_codegen_multiply(L_29, L_30));
		// if (m_CharacterController.isGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_31 = __this->___m_CharacterController_26;
		bool L_32;
		L_32 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_31, NULL);
		if (!L_32)
		{
			goto IL_0104;
		}
	}
	{
		// m_MoveDir.y = -m_StickToGroundForce;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = (&__this->___m_MoveDir_25);
		float L_34 = __this->___m_StickToGroundForce_9;
		L_33->___y_3 = ((-L_34));
		// if (m_Jump)
		bool L_35 = __this->___m_Jump_22;
		if (!L_35)
		{
			goto IL_012f;
		}
	}
	{
		// m_MoveDir.y = m_JumpSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = (&__this->___m_MoveDir_25);
		float L_37 = __this->___m_JumpSpeed_8;
		L_36->___y_3 = L_37;
		// PlayJumpSound();
		FirstPersonController_PlayJumpSound_m2F36534A8289E953A6FAE5B8780EC7677D9AE162(__this, NULL);
		// m_Jump = false;
		__this->___m_Jump_22 = (bool)0;
		// m_Jumping = true;
		__this->___m_Jumping_32 = (bool)1;
		goto IL_012f;
	}

IL_0104:
	{
		// m_MoveDir += Physics.gravity*m_GravityMultiplier*Time.fixedDeltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = __this->___m_MoveDir_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81(NULL);
		float L_40 = __this->___m_GravityMultiplier_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_39, L_40, NULL);
		float L_42;
		L_42 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_41, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_38, L_43, NULL);
		__this->___m_MoveDir_25 = L_44;
	}

IL_012f:
	{
		// m_CollisionFlags = m_CharacterController.Move(m_MoveDir*Time.fixedDeltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_45 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = __this->___m_MoveDir_25;
		float L_47;
		L_47 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_46, L_47, NULL);
		int32_t L_49;
		L_49 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_45, L_48, NULL);
		__this->___m_CollisionFlags_27 = L_49;
		// ProgressStepCycle(speed);
		float L_50 = V_0;
		FirstPersonController_ProgressStepCycle_mE9A440300EA6D9AA22C7BB62B32366E504EC13C7(__this, L_50, NULL);
		// UpdateCameraPosition(speed);
		float L_51 = V_0;
		FirstPersonController_UpdateCameraPosition_mBAAF114B16C737591BA1C99F08679024F594944E(__this, L_51, NULL);
		// m_MouseLook.UpdateCursorLock();
		MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* L_52 = __this->___m_MouseLook_11;
		MouseLook_UpdateCursorLock_m36C18218E85D87D3F321ACD94AA10872C1C7A72E(L_52, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayJumpSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayJumpSound_m2F36534A8289E953A6FAE5B8780EC7677D9AE162 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	{
		// m_AudioSource.clip = m_JumpSound;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___m_AudioSource_33;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___m_JumpSound_19;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_1, NULL);
		// m_AudioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___m_AudioSource_33;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::ProgressStepCycle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_ProgressStepCycle_mE9A440300EA6D9AA22C7BB62B32366E504EC13C7 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float ___speed0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	float G_B5_2 = 0.0f;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B5_3 = NULL;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	float G_B4_2 = 0.0f;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B4_3 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B6_2 = 0.0f;
	float G_B6_3 = 0.0f;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B6_4 = NULL;
	{
		// if (m_CharacterController.velocity.sqrMagnitude > 0 && (m_Input.x != 0 || m_Input.y != 0))
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___m_Input_24);
		float L_4 = L_3->___x_0;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___m_Input_24);
		float L_6 = L_5->___y_1;
		if ((((float)L_6) == ((float)(0.0f))))
		{
			goto IL_007c;
		}
	}

IL_003e:
	{
		// m_StepCycle += (m_CharacterController.velocity.magnitude + (speed*(m_IsWalking ? 1f : m_RunstepLenghten)))*
		//              Time.fixedDeltaTime;
		float L_7 = __this->___m_StepCycle_30;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_8 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_8, NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_11 = ___speed0;
		bool L_12 = __this->___m_IsWalking_4;
		G_B4_0 = L_11;
		G_B4_1 = L_10;
		G_B4_2 = L_7;
		G_B4_3 = __this;
		if (L_12)
		{
			G_B5_0 = L_11;
			G_B5_1 = L_10;
			G_B5_2 = L_7;
			G_B5_3 = __this;
			goto IL_0069;
		}
	}
	{
		float L_13 = __this->___m_RunstepLenghten_7;
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_006e;
	}

IL_0069:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_006e:
	{
		float L_14;
		L_14 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		G_B6_4->___m_StepCycle_30 = ((float)il2cpp_codegen_add(G_B6_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(G_B6_2, ((float)il2cpp_codegen_multiply(G_B6_1, G_B6_0)))), L_14))));
	}

IL_007c:
	{
		// if (!(m_StepCycle > m_NextStep))
		float L_15 = __this->___m_StepCycle_30;
		float L_16 = __this->___m_NextStep_31;
		if ((((float)L_15) > ((float)L_16)))
		{
			goto IL_008b;
		}
	}
	{
		// return;
		return;
	}

IL_008b:
	{
		// m_NextStep = m_StepCycle + m_StepInterval;
		float L_17 = __this->___m_StepCycle_30;
		float L_18 = __this->___m_StepInterval_17;
		__this->___m_NextStep_31 = ((float)il2cpp_codegen_add(L_17, L_18));
		// PlayFootStepAudio();
		FirstPersonController_PlayFootStepAudio_mAC65BEA3377CECC48C166FBEABE21A616E07C770(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::PlayFootStepAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_PlayFootStepAudio_mAC65BEA3377CECC48C166FBEABE21A616E07C770 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!m_CharacterController.isGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0 = __this->___m_CharacterController_26;
		bool L_1;
		L_1 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// int n = Random.Range(1, m_FootstepSounds.Length);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_2 = __this->___m_FootstepSounds_18;
		int32_t L_3;
		L_3 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		V_0 = L_3;
		// m_AudioSource.clip = m_FootstepSounds[n];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___m_AudioSource_33;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_5 = __this->___m_FootstepSounds_18;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_4, L_8, NULL);
		// m_AudioSource.PlayOneShot(m_AudioSource.clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___m_AudioSource_33;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___m_AudioSource_33;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11;
		L_11 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_10, NULL);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_9, L_11, NULL);
		// m_FootstepSounds[n] = m_FootstepSounds[0];
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_12 = __this->___m_FootstepSounds_18;
		int32_t L_13 = V_0;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_14 = __this->___m_FootstepSounds_18;
		int32_t L_15 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_16);
		// m_FootstepSounds[0] = m_AudioSource.clip;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_17 = __this->___m_FootstepSounds_18;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_18 = __this->___m_AudioSource_33;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19;
		L_19 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_18, NULL);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_19);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::UpdateCameraPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_UpdateCameraPosition_mBAAF114B16C737591BA1C99F08679024F594944E (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float ___speed0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* G_B6_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_3 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* G_B5_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_3 = NULL;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	float G_B7_2 = 0.0f;
	CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* G_B7_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_4 = NULL;
	{
		// if (!m_UseHeadBob)
		bool L_0 = __this->___m_UseHeadBob_14;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (m_CharacterController.velocity.magnitude > 0 && m_CharacterController.isGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_1 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_1, NULL);
		V_1 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_00b7;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_4 = __this->___m_CharacterController_26;
		bool L_5;
		L_5 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_4, NULL);
		if (!L_5)
		{
			goto IL_00b7;
		}
	}
	{
		// m_Camera.transform.localPosition =
		//     m_HeadBob.DoHeadBob(m_CharacterController.velocity.magnitude +
		//                       (speed*(m_IsWalking ? 1f : m_RunstepLenghten)));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* L_8 = __this->___m_HeadBob_15;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_9 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_9, NULL);
		V_1 = L_10;
		float L_11;
		L_11 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_12 = ___speed0;
		bool L_13 = __this->___m_IsWalking_4;
		G_B5_0 = L_12;
		G_B5_1 = L_11;
		G_B5_2 = L_8;
		G_B5_3 = L_7;
		if (L_13)
		{
			G_B6_0 = L_12;
			G_B6_1 = L_11;
			G_B6_2 = L_8;
			G_B6_3 = L_7;
			goto IL_006b;
		}
	}
	{
		float L_14 = __this->___m_RunstepLenghten_7;
		G_B7_0 = L_14;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		goto IL_0070;
	}

IL_006b:
	{
		G_B7_0 = (1.0f);
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
	}

IL_0070:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = CurveControlledBob_DoHeadBob_m9AC57FF9121912E844CE19359AC72857115DC4C5(G_B7_3, ((float)il2cpp_codegen_add(G_B7_2, ((float)il2cpp_codegen_multiply(G_B7_1, G_B7_0)))), NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(G_B7_4, L_15, NULL);
		// newCameraPosition = m_Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		V_0 = L_18;
		// newCameraPosition.y = m_Camera.transform.localPosition.y - m_JumpBob.Offset();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_20, NULL);
		float L_22 = L_21.___y_3;
		LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* L_23 = __this->___m_JumpBob_16;
		float L_24;
		L_24 = LerpControlledBob_Offset_mF45148E4AA91DF2F5469362833D1A3B5B86AB689_inline(L_23, NULL);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_subtract(L_22, L_24));
		goto IL_00e6;
	}

IL_00b7:
	{
		// newCameraPosition = m_Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_26, NULL);
		V_0 = L_27;
		// newCameraPosition.y = m_OriginalCameraPosition.y - m_JumpBob.Offset();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___m_OriginalCameraPosition_29);
		float L_29 = L_28->___y_3;
		LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* L_30 = __this->___m_JumpBob_16;
		float L_31;
		L_31 = LerpControlledBob_Offset_mF45148E4AA91DF2F5469362833D1A3B5B86AB689_inline(L_30, NULL);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_subtract(L_29, L_31));
	}

IL_00e6:
	{
		// m_Camera.transform.localPosition = newCameraPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_0;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_33, L_34, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::GetInput(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_GetInput_mE08B63FC27C0B3DA024FEF6057CF8284286B3B26 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, float* ___speed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float* G_B2_0 = NULL;
	float* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	float* G_B3_1 = NULL;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B10_0 = NULL;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B9_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* G_B11_1 = NULL;
	{
		// float horizontal = CrossPlatformInputManager.GetAxis("Horizontal");
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CrossPlatformInputManager_GetAxis_m1BA0A7839BDA75A556A9C3C3CA7F932C191BF066(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// float vertical = CrossPlatformInputManager.GetAxis("Vertical");
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_m1BA0A7839BDA75A556A9C3C3CA7F932C191BF066(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_1;
		// bool waswalking = m_IsWalking;
		bool L_2 = __this->___m_IsWalking_4;
		V_2 = L_2;
		// m_IsWalking = !Input.GetKey(KeyCode.LeftShift);
		bool L_3;
		L_3 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)304), NULL);
		__this->___m_IsWalking_4 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		// speed = m_IsWalking ? m_WalkSpeed : m_RunSpeed;
		float* L_4 = ___speed0;
		bool L_5 = __this->___m_IsWalking_4;
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_0041;
		}
	}
	{
		float L_6 = __this->___m_RunSpeed_6;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0047;
	}

IL_0041:
	{
		float L_7 = __this->___m_WalkSpeed_5;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0047:
	{
		*((float*)G_B3_1) = (float)G_B3_0;
		// m_Input = new Vector2(horizontal, vertical);
		float L_8 = V_0;
		float L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		__this->___m_Input_24 = L_10;
		// if (m_Input.sqrMagnitude > 1)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___m_Input_24);
		float L_12;
		L_12 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline(L_11, NULL);
		if ((!(((float)L_12) > ((float)(1.0f)))))
		{
			goto IL_0072;
		}
	}
	{
		// m_Input.Normalize();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___m_Input_24);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline(L_13, NULL);
	}

IL_0072:
	{
		// if (m_IsWalking != waswalking && m_UseFovKick && m_CharacterController.velocity.sqrMagnitude > 0)
		bool L_14 = __this->___m_IsWalking_4;
		bool L_15 = V_2;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_00ca;
		}
	}
	{
		bool L_16 = __this->___m_UseFovKick_12;
		if (!L_16)
		{
			goto IL_00ca;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_17 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_17, NULL);
		V_3 = L_18;
		float L_19;
		L_19 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_3), NULL);
		if ((!(((float)L_19) > ((float)(0.0f)))))
		{
			goto IL_00ca;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(!m_IsWalking ? m_FovKick.FOVKickUp() : m_FovKick.FOVKickDown());
		bool L_20 = __this->___m_IsWalking_4;
		G_B9_0 = __this;
		if (!L_20)
		{
			G_B10_0 = __this;
			goto IL_00b9;
		}
	}
	{
		FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* L_21 = __this->___m_FovKick_13;
		RuntimeObject* L_22;
		L_22 = FOVKick_FOVKickDown_m9176B1195AEA7C88568D27F2860B13C98ECA188F(L_21, NULL);
		G_B11_0 = L_22;
		G_B11_1 = G_B9_0;
		goto IL_00c4;
	}

IL_00b9:
	{
		FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* L_23 = __this->___m_FovKick_13;
		RuntimeObject* L_24;
		L_24 = FOVKick_FOVKickUp_m81F318FFA44E3CC3739EAB65EA8ACBD31882483B(L_23, NULL);
		G_B11_0 = L_24;
		G_B11_1 = G_B10_0;
	}

IL_00c4:
	{
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_25;
		L_25 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(G_B11_1, G_B11_0, NULL);
	}

IL_00ca:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::RotateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_RotateView_mCEC44D346646100CACE88516D162A32640E332CD (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	{
		// m_MouseLook.LookRotation (transform, m_Camera.transform);
		MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* L_0 = __this->___m_MouseLook_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___m_Camera_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		MouseLook_LookRotation_m30505FB14CA539242F82CB54F2D5030BBFB43374(L_0, L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_OnControllerColliderHit_m55E1A25E5BE9BF1B3C3A3553BB5FF5531B0E88C0 (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	{
		// Rigidbody body = hit.collider.attachedRigidbody;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_0 = ___hit0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6(L_0, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_1, NULL);
		V_0 = L_2;
		// if (m_CollisionFlags == CollisionFlags.Below)
		int32_t L_3 = __this->___m_CollisionFlags_27;
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// if (body == null || body.isKinematic)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = V_0;
		bool L_7;
		L_7 = Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1(L_6, NULL);
		if (!L_7)
		{
			goto IL_0028;
		}
	}

IL_0027:
	{
		// return;
		return;
	}

IL_0028:
	{
		// body.AddForceAtPosition(m_CharacterController.velocity*0.1f, hit.point, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = V_0;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_9 = __this->___m_CharacterController_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, (0.100000001f), NULL);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_12 = ___hit0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = ControllerColliderHit_get_point_mCE74937BAC07AD84F6B255471177974A5C12E915(L_12, NULL);
		Rigidbody_AddForceAtPosition_m61575E676B16690BEC0FD29841EAD35CC40B642C(L_8, L_11, L_13, 1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.FirstPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController__ctor_mA7F22D3CB33C824C402A75A023030DD0A12B022A (FirstPersonController_t401750B3FF66376716EB94B8F5A9DA4097F9918D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private FOVKick m_FovKick = new FOVKick();
		FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82* L_0 = (FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82*)il2cpp_codegen_object_new(FOVKick_tE6BD56EE8953176A2A5A2B1AC15267BB050ABE82_il2cpp_TypeInfo_var);
		FOVKick__ctor_mB6A54D8492E90A1E07B02E1EC06EEC67100DC22F(L_0, NULL);
		__this->___m_FovKick_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FovKick_13), (void*)L_0);
		// [SerializeField] private CurveControlledBob m_HeadBob = new CurveControlledBob();
		CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* L_1 = (CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8*)il2cpp_codegen_object_new(CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8_il2cpp_TypeInfo_var);
		CurveControlledBob__ctor_mBB05CB56470904C61063A0D32F021E7FD1285D22(L_1, NULL);
		__this->___m_HeadBob_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HeadBob_15), (void*)L_1);
		// [SerializeField] private LerpControlledBob m_JumpBob = new LerpControlledBob();
		LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* L_2 = (LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF*)il2cpp_codegen_object_new(LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF_il2cpp_TypeInfo_var);
		LerpControlledBob__ctor_m2B5B7BE2359268DC4B0D49651AF01123D447793B(L_2, NULL);
		__this->___m_JumpBob_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_JumpBob_16), (void*)L_2);
		// private Vector3 m_MoveDir = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___m_MoveDir_25 = L_3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityStandardAssets.Characters.FirstPerson.HeadBob::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadBob_Start_mBDE27B6B8606C0BF3830C9B849BDEE22381B589F (HeadBob_tFA4377CB8CACAE1F5C5EB360CFE29589FC0236BA* __this, const RuntimeMethod* method) 
{
	{
		// motionBob.Setup(Camera, StrideInterval);
		CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* L_0 = __this->___motionBob_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___Camera_4;
		float L_2 = __this->___StrideInterval_8;
		CurveControlledBob_Setup_mDB98D5F434FDEBD472856B9686AF5DCE77056AF4(L_0, L_1, L_2, NULL);
		// m_OriginalCameraPosition = Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		__this->___m_OriginalCameraPosition_11 = L_5;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.HeadBob::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadBob_Update_m3490200F7D82145E059C2081C033CF4B0C025D8D (HeadBob_tFA4377CB8CACAE1F5C5EB360CFE29589FC0236BA* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B4_0 = 0.0f;
	CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* G_B4_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_2 = NULL;
	float G_B3_0 = 0.0f;
	CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* G_B3_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_2 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* G_B5_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_3 = NULL;
	{
		// if (rigidbodyFirstPersonController.Velocity.magnitude > 0 && rigidbodyFirstPersonController.Grounded)
		RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* L_0 = __this->___rigidbodyFirstPersonController_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = RigidbodyFirstPersonController_get_Velocity_mAA3C04ADAF8605944CD1106E640BDC04AE43CDA5(L_0, NULL);
		V_1 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_00b1;
		}
	}
	{
		RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* L_3 = __this->___rigidbodyFirstPersonController_7;
		bool L_4;
		L_4 = RigidbodyFirstPersonController_get_Grounded_mB84272DE91A38F0973356C611393D7870218B183_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_00b1;
		}
	}
	{
		// Camera.transform.localPosition = motionBob.DoHeadBob(rigidbodyFirstPersonController.Velocity.magnitude*(rigidbodyFirstPersonController.Running ? RunningStrideLengthen : 1f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* L_7 = __this->___motionBob_5;
		RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* L_8 = __this->___rigidbodyFirstPersonController_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = RigidbodyFirstPersonController_get_Velocity_mAA3C04ADAF8605944CD1106E640BDC04AE43CDA5(L_8, NULL);
		V_1 = L_9;
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* L_11 = __this->___rigidbodyFirstPersonController_7;
		bool L_12;
		L_12 = RigidbodyFirstPersonController_get_Running_m0EBBCDB4242F5EB06FD2F2978D633627D33656F1(L_11, NULL);
		G_B3_0 = L_10;
		G_B3_1 = L_7;
		G_B3_2 = L_6;
		if (L_12)
		{
			G_B4_0 = L_10;
			G_B4_1 = L_7;
			G_B4_2 = L_6;
			goto IL_0065;
		}
	}
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_006b;
	}

IL_0065:
	{
		float L_13 = __this->___RunningStrideLengthen_9;
		G_B5_0 = L_13;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_006b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = CurveControlledBob_DoHeadBob_m9AC57FF9121912E844CE19359AC72857115DC4C5(G_B5_2, ((float)il2cpp_codegen_multiply(G_B5_1, G_B5_0)), NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(G_B5_3, L_14, NULL);
		// newCameraPosition = Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_16, NULL);
		V_0 = L_17;
		// newCameraPosition.y = Camera.transform.localPosition.y - jumpAndLandingBob.Offset();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_19, NULL);
		float L_21 = L_20.___y_3;
		LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* L_22 = __this->___jumpAndLandingBob_6;
		float L_23;
		L_23 = LerpControlledBob_Offset_mF45148E4AA91DF2F5469362833D1A3B5B86AB689_inline(L_22, NULL);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_subtract(L_21, L_23));
		goto IL_00e0;
	}

IL_00b1:
	{
		// newCameraPosition = Camera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_25, NULL);
		V_0 = L_26;
		// newCameraPosition.y = m_OriginalCameraPosition.y - jumpAndLandingBob.Offset();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = (&__this->___m_OriginalCameraPosition_11);
		float L_28 = L_27->___y_3;
		LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* L_29 = __this->___jumpAndLandingBob_6;
		float L_30;
		L_30 = LerpControlledBob_Offset_mF45148E4AA91DF2F5469362833D1A3B5B86AB689_inline(L_29, NULL);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_subtract(L_28, L_30));
	}

IL_00e0:
	{
		// Camera.transform.localPosition = newCameraPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31 = __this->___Camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_0;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_32, L_33, NULL);
		// if (!m_PreviouslyGrounded && rigidbodyFirstPersonController.Grounded)
		bool L_34 = __this->___m_PreviouslyGrounded_10;
		if (L_34)
		{
			goto IL_0118;
		}
	}
	{
		RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* L_35 = __this->___rigidbodyFirstPersonController_7;
		bool L_36;
		L_36 = RigidbodyFirstPersonController_get_Grounded_mB84272DE91A38F0973356C611393D7870218B183_inline(L_35, NULL);
		if (!L_36)
		{
			goto IL_0118;
		}
	}
	{
		// StartCoroutine(jumpAndLandingBob.DoBobCycle());
		LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* L_37 = __this->___jumpAndLandingBob_6;
		RuntimeObject* L_38;
		L_38 = LerpControlledBob_DoBobCycle_m6C115FF5CB0A8C3A08F93F72A841B494325814CC(L_37, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_39;
		L_39 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_38, NULL);
	}

IL_0118:
	{
		// m_PreviouslyGrounded = rigidbodyFirstPersonController.Grounded;
		RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* L_40 = __this->___rigidbodyFirstPersonController_7;
		bool L_41;
		L_41 = RigidbodyFirstPersonController_get_Grounded_mB84272DE91A38F0973356C611393D7870218B183_inline(L_40, NULL);
		__this->___m_PreviouslyGrounded_10 = L_41;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.HeadBob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadBob__ctor_m662E8262E25B4868C8BE7D458C281DF9EB23FE8E (HeadBob_tFA4377CB8CACAE1F5C5EB360CFE29589FC0236BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CurveControlledBob motionBob = new CurveControlledBob();
		CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8* L_0 = (CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8*)il2cpp_codegen_object_new(CurveControlledBob_t84FE8B55A90E3765CAF997E611574F347CA9FDF8_il2cpp_TypeInfo_var);
		CurveControlledBob__ctor_mBB05CB56470904C61063A0D32F021E7FD1285D22(L_0, NULL);
		__this->___motionBob_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___motionBob_5), (void*)L_0);
		// public LerpControlledBob jumpAndLandingBob = new LerpControlledBob();
		LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* L_1 = (LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF*)il2cpp_codegen_object_new(LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF_il2cpp_TypeInfo_var);
		LerpControlledBob__ctor_m2B5B7BE2359268DC4B0D49651AF01123D447793B(L_1, NULL);
		__this->___jumpAndLandingBob_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jumpAndLandingBob_6), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::Init(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Init_m7086DCA60BBC6F28FD3DCBFB78828D578656D9E6 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___character0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camera1, const RuntimeMethod* method) 
{
	{
		// m_CharacterTargetRot = character.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___character0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		__this->___m_CharacterTargetRot_8 = L_1;
		// m_CameraTargetRot = camera.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___camera1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		__this->___m_CameraTargetRot_9 = L_3;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_LookRotation_m30505FB14CA539242F82CB54F2D5030BBFB43374 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___character0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camera1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float yRot = CrossPlatformInputManager.GetAxis("Mouse X") * XSensitivity;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CrossPlatformInputManager_GetAxis_m1BA0A7839BDA75A556A9C3C3CA7F932C191BF066(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_1 = __this->___XSensitivity_0;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// float xRot = CrossPlatformInputManager.GetAxis("Mouse Y") * YSensitivity;
		float L_2;
		L_2 = CrossPlatformInputManager_GetAxis_m1BA0A7839BDA75A556A9C3C3CA7F932C191BF066(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_3 = __this->___YSensitivity_1;
		V_1 = ((float)il2cpp_codegen_multiply(L_2, L_3));
		// m_CharacterTargetRot *= Quaternion.Euler (0f, yRot, 0f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = __this->___m_CharacterTargetRot_8;
		float L_5 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_5, (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_4, L_6, NULL);
		__this->___m_CharacterTargetRot_8 = L_7;
		// m_CameraTargetRot *= Quaternion.Euler (-xRot, 0f, 0f);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = __this->___m_CameraTargetRot_9;
		float L_9 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(((-L_9)), (0.0f), (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_8, L_10, NULL);
		__this->___m_CameraTargetRot_9 = L_11;
		// if(clampVerticalRotation)
		bool L_12 = __this->___clampVerticalRotation_2;
		if (!L_12)
		{
			goto IL_0081;
		}
	}
	{
		// m_CameraTargetRot = ClampRotationAroundXAxis (m_CameraTargetRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = __this->___m_CameraTargetRot_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = MouseLook_ClampRotationAroundXAxis_m2CD48D555D35103665BEF748C94DD917AF45CD0F(__this, L_13, NULL);
		__this->___m_CameraTargetRot_9 = L_14;
	}

IL_0081:
	{
		// if(smooth)
		bool L_15 = __this->___smooth_5;
		if (!L_15)
		{
			goto IL_00d1;
		}
	}
	{
		// character.localRotation = Quaternion.Slerp (character.localRotation, m_CharacterTargetRot,
		//     smoothTime * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ___character0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = ___character0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = __this->___m_CharacterTargetRot_8;
		float L_20 = __this->___smoothTime_6;
		float L_21;
		L_21 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_18, L_19, ((float)il2cpp_codegen_multiply(L_20, L_21)), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_16, L_22, NULL);
		// camera.localRotation = Quaternion.Slerp (camera.localRotation, m_CameraTargetRot,
		//     smoothTime * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = ___camera1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = ___camera1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_24, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = __this->___m_CameraTargetRot_9;
		float L_27 = __this->___smoothTime_6;
		float L_28;
		L_28 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_25, L_26, ((float)il2cpp_codegen_multiply(L_27, L_28)), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_23, L_29, NULL);
		goto IL_00e9;
	}

IL_00d1:
	{
		// character.localRotation = m_CharacterTargetRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = ___character0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = __this->___m_CharacterTargetRot_8;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_30, L_31, NULL);
		// camera.localRotation = m_CameraTargetRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = ___camera1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = __this->___m_CameraTargetRot_9;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_32, L_33, NULL);
	}

IL_00e9:
	{
		// UpdateCursorLock();
		MouseLook_UpdateCursorLock_m36C18218E85D87D3F321ACD94AA10872C1C7A72E(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::SetCursorLock(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_SetCursorLock_m22DD708E0CE7BD5BD6E517EF199C6A24309F985A (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// lockCursor = value;
		bool L_0 = ___value0;
		__this->___lockCursor_7 = L_0;
		// if(!lockCursor)
		bool L_1 = __this->___lockCursor_7;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)1, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::UpdateCursorLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_UpdateCursorLock_m36C18218E85D87D3F321ACD94AA10872C1C7A72E (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) 
{
	{
		// if (lockCursor)
		bool L_0 = __this->___lockCursor_7;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// InternalLockUpdate();
		MouseLook_InternalLockUpdate_m67D6C07F2654DA49F6D67896F769C15400D583A8(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::InternalLockUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_InternalLockUpdate_m67D6C07F2654DA49F6D67896F769C15400D583A8 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) 
{
	{
		// if(Input.GetKeyUp(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// m_cursorIsLocked = false;
		__this->___m_cursorIsLocked_10 = (bool)0;
		goto IL_0021;
	}

IL_0012:
	{
		// else if(Input.GetMouseButtonUp(0))
		bool L_1;
		L_1 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// m_cursorIsLocked = true;
		__this->___m_cursorIsLocked_10 = (bool)1;
	}

IL_0021:
	{
		// if (m_cursorIsLocked)
		bool L_2 = __this->___m_cursorIsLocked_10;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(1, NULL);
		// Cursor.visible = false;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)0, NULL);
		return;
	}

IL_0036:
	{
		// else if (!m_cursorIsLocked)
		bool L_3 = __this->___m_cursorIsLocked_10;
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)1, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::ClampRotationAroundXAxis(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MouseLook_ClampRotationAroundXAxis_m2CD48D555D35103665BEF748C94DD917AF45CD0F (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// q.x /= q.w;
		float* L_0 = (&(&___q0)->___x_0);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___q0;
		float L_4 = L_3.___w_3;
		*((float*)L_1) = (float)((float)(L_2/L_4));
		// q.y /= q.w;
		float* L_5 = (&(&___q0)->___y_1);
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___q0;
		float L_9 = L_8.___w_3;
		*((float*)L_6) = (float)((float)(L_7/L_9));
		// q.z /= q.w;
		float* L_10 = (&(&___q0)->___z_2);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = ___q0;
		float L_14 = L_13.___w_3;
		*((float*)L_11) = (float)((float)(L_12/L_14));
		// q.w = 1.0f;
		(&___q0)->___w_3 = (1.0f);
		// float angleX = 2.0f * Mathf.Rad2Deg * Mathf.Atan (q.x);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = ___q0;
		float L_16 = L_15.___x_0;
		float L_17;
		L_17 = atanf(L_16);
		V_0 = ((float)il2cpp_codegen_multiply((114.59156f), L_17));
		// angleX = Mathf.Clamp (angleX, MinimumX, MaximumX);
		float L_18 = V_0;
		float L_19 = __this->___MinimumX_3;
		float L_20 = __this->___MaximumX_4;
		float L_21;
		L_21 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_18, L_19, L_20, NULL);
		V_0 = L_21;
		// q.x = Mathf.Tan (0.5f * Mathf.Deg2Rad * angleX);
		float L_22 = V_0;
		float L_23;
		L_23 = tanf(((float)il2cpp_codegen_multiply((0.00872664619f), L_22)));
		(&___q0)->___x_0 = L_23;
		// return q;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___q0;
		return L_24;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_m8EF7E4171402C13B7F9B772C748CB51382578363 (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* __this, const RuntimeMethod* method) 
{
	{
		// public float XSensitivity = 2f;
		__this->___XSensitivity_0 = (2.0f);
		// public float YSensitivity = 2f;
		__this->___YSensitivity_1 = (2.0f);
		// public bool clampVerticalRotation = true;
		__this->___clampVerticalRotation_2 = (bool)1;
		// public float MinimumX = -90F;
		__this->___MinimumX_3 = (-90.0f);
		// public float MaximumX = 90F;
		__this->___MaximumX_4 = (90.0f);
		// public float smoothTime = 5f;
		__this->___smoothTime_6 = (5.0f);
		// public bool lockCursor = true;
		__this->___lockCursor_7 = (bool)1;
		// private bool m_cursorIsLocked = true;
		__this->___m_cursorIsLocked_10 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RigidbodyFirstPersonController_get_Velocity_mAA3C04ADAF8605944CD1106E640BDC04AE43CDA5 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_RigidBody.velocity; }
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Grounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Grounded_mB84272DE91A38F0973356C611393D7870218B183 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsGrounded; }
		bool L_0 = __this->___m_IsGrounded_15;
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Jumping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Jumping_m877A9B503E7EF9FF6C61EEC3C254F31BC81BF2BF (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Jumping; }
		bool L_0 = __this->___m_Jumping_14;
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::get_Running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Running_m0EBBCDB4242F5EB06FD2F2978D633627D33656F1 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	{
		// return movementSettings.Running;
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_0 = __this->___movementSettings_5;
		bool L_1;
		L_1 = MovementSettings_get_Running_mFAB0A32A5A48C7010AB670736E7E3291425C1AAA_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_Start_m5D965CC389E4574C533F144138C9AEB348B640C0 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RigidBody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___m_RigidBody_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RigidBody_8), (void*)L_0);
		// m_Capsule = GetComponent<CapsuleCollider>();
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_1;
		L_1 = Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E(__this, Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		__this->___m_Capsule_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Capsule_9), (void*)L_1);
		// mouseLook.Init (transform, cam.transform);
		MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* L_2 = __this->___mouseLook_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cam_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		MouseLook_Init_m7086DCA60BBC6F28FD3DCBFB78828D578656D9E6(L_2, L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_Update_m81D80C47EB3FA8FC15601281EFF535855D906402 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RotateView();
		RigidbodyFirstPersonController_RotateView_m8F1F1DF95E421B650439F3072F6A098CCD9EBB5A(__this, NULL);
		// if (CrossPlatformInputManager.GetButtonDown("Jump") && !m_Jump)
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CrossPlatformInputManager_GetButtonDown_mB034544AE57B544921BE5ADCAA18D2EAC83DB4B9(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		bool L_1 = __this->___m_Jump_12;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		// m_Jump = true;
		__this->___m_Jump_12 = (bool)1;
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_FixedUpdate_m1EED682C035DA5B150A864920BE4FED6ACF78F70 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// GroundCheck();
		RigidbodyFirstPersonController_GroundCheck_m4563E2DD265145404C48F3F84DA9EC186A2C582D(__this, NULL);
		// Vector2 input = GetInput();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = RigidbodyFirstPersonController_GetInput_m5181604692C394DDF22EB6A407A16DC8AD05AC15(__this, NULL);
		V_0 = L_0;
		// if ((Mathf.Abs(input.x) > float.Epsilon || Mathf.Abs(input.y) > float.Epsilon) && (advancedSettings.airControl || m_IsGrounded))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = fabsf(L_2);
		if ((((float)L_3) > ((float)(1.40129846E-45f))))
		{
			goto IL_0034;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___y_1;
		float L_6;
		L_6 = fabsf(L_5);
		if ((!(((float)L_6) > ((float)(1.40129846E-45f)))))
		{
			goto IL_012c;
		}
	}

IL_0034:
	{
		AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* L_7 = __this->___advancedSettings_7;
		bool L_8 = L_7->___airControl_3;
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		bool L_9 = __this->___m_IsGrounded_15;
		if (!L_9)
		{
			goto IL_012c;
		}
	}

IL_004c:
	{
		// Vector3 desiredMove = cam.transform.forward*input.y + cam.transform.right*input.x;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___cam_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, L_14, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___cam_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_0;
		float L_20 = L_19.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_21, NULL);
		V_1 = L_22;
		// desiredMove = Vector3.ProjectOnPlane(desiredMove, m_GroundContactNormal).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___m_GroundContactNormal_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_23, L_24, NULL);
		V_2 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		V_1 = L_26;
		// desiredMove.x = desiredMove.x*movementSettings.CurrentTargetSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		float L_28 = L_27.___x_2;
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_29 = __this->___movementSettings_5;
		float L_30 = L_29->___CurrentTargetSpeed_7;
		(&V_1)->___x_2 = ((float)il2cpp_codegen_multiply(L_28, L_30));
		// desiredMove.z = desiredMove.z*movementSettings.CurrentTargetSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_1;
		float L_32 = L_31.___z_4;
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_33 = __this->___movementSettings_5;
		float L_34 = L_33->___CurrentTargetSpeed_7;
		(&V_1)->___z_4 = ((float)il2cpp_codegen_multiply(L_32, L_34));
		// desiredMove.y = desiredMove.y*movementSettings.CurrentTargetSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_1;
		float L_36 = L_35.___y_3;
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_37 = __this->___movementSettings_5;
		float L_38 = L_37->___CurrentTargetSpeed_7;
		(&V_1)->___y_3 = ((float)il2cpp_codegen_multiply(L_36, L_38));
		// if (m_RigidBody.velocity.sqrMagnitude <
		//     (movementSettings.CurrentTargetSpeed*movementSettings.CurrentTargetSpeed))
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_39 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_39, NULL);
		V_2 = L_40;
		float L_41;
		L_41 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_2), NULL);
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_42 = __this->___movementSettings_5;
		float L_43 = L_42->___CurrentTargetSpeed_7;
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_44 = __this->___movementSettings_5;
		float L_45 = L_44->___CurrentTargetSpeed_7;
		if ((!(((float)L_41) < ((float)((float)il2cpp_codegen_multiply(L_43, L_45))))))
		{
			goto IL_012c;
		}
	}
	{
		// m_RigidBody.AddForce(desiredMove*SlopeMultiplier(), ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_46 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_1;
		float L_48;
		L_48 = RigidbodyFirstPersonController_SlopeMultiplier_m4BF1547C34EDCF635B6AF53527D56617C6DA09EE(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_47, L_48, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_46, L_49, 1, NULL);
	}

IL_012c:
	{
		// if (m_IsGrounded)
		bool L_50 = __this->___m_IsGrounded_15;
		if (!L_50)
		{
			goto IL_0214;
		}
	}
	{
		// m_RigidBody.drag = 5f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_51 = __this->___m_RigidBody_8;
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_51, (5.0f), NULL);
		// if (m_Jump)
		bool L_52 = __this->___m_Jump_12;
		if (!L_52)
		{
			goto IL_01c1;
		}
	}
	{
		// m_RigidBody.drag = 0f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_53 = __this->___m_RigidBody_8;
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_53, (0.0f), NULL);
		// m_RigidBody.velocity = new Vector3(m_RigidBody.velocity.x, 0f, m_RigidBody.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_54 = __this->___m_RigidBody_8;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_55 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_55, NULL);
		float L_57 = L_56.___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_58 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_58, NULL);
		float L_60 = L_59.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_61), L_57, (0.0f), L_60, /*hidden argument*/NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_54, L_61, NULL);
		// m_RigidBody.AddForce(new Vector3(0f, movementSettings.JumpForce, 0f), ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_62 = __this->___m_RigidBody_8;
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_63 = __this->___movementSettings_5;
		float L_64 = L_63->___JumpForce_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_65), (0.0f), L_64, (0.0f), /*hidden argument*/NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_62, L_65, 1, NULL);
		// m_Jumping = true;
		__this->___m_Jumping_14 = (bool)1;
	}

IL_01c1:
	{
		// if (!m_Jumping && Mathf.Abs(input.x) < float.Epsilon && Mathf.Abs(input.y) < float.Epsilon && m_RigidBody.velocity.magnitude < 1f)
		bool L_66 = __this->___m_Jumping_14;
		if (L_66)
		{
			goto IL_023a;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = V_0;
		float L_68 = L_67.___x_0;
		float L_69;
		L_69 = fabsf(L_68);
		if ((!(((float)L_69) < ((float)(1.40129846E-45f)))))
		{
			goto IL_023a;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = V_0;
		float L_71 = L_70.___y_1;
		float L_72;
		L_72 = fabsf(L_71);
		if ((!(((float)L_72) < ((float)(1.40129846E-45f)))))
		{
			goto IL_023a;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_73 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_73, NULL);
		V_2 = L_74;
		float L_75;
		L_75 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		if ((!(((float)L_75) < ((float)(1.0f)))))
		{
			goto IL_023a;
		}
	}
	{
		// m_RigidBody.Sleep();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_76 = __this->___m_RigidBody_8;
		Rigidbody_Sleep_m9826BDFCF078DF00223011B3F0FA7F4894F8F4CA(L_76, NULL);
		goto IL_023a;
	}

IL_0214:
	{
		// m_RigidBody.drag = 0f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_77 = __this->___m_RigidBody_8;
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_77, (0.0f), NULL);
		// if (m_PreviouslyGrounded && !m_Jumping)
		bool L_78 = __this->___m_PreviouslyGrounded_13;
		if (!L_78)
		{
			goto IL_023a;
		}
	}
	{
		bool L_79 = __this->___m_Jumping_14;
		if (L_79)
		{
			goto IL_023a;
		}
	}
	{
		// StickToGroundHelper();
		RigidbodyFirstPersonController_StickToGroundHelper_mF84D44E8C84AD99D12081320554807925EC8B9B0(__this, NULL);
	}

IL_023a:
	{
		// m_Jump = false;
		__this->___m_Jump_12 = (bool)0;
		// }
		return;
	}
}
// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::SlopeMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RigidbodyFirstPersonController_SlopeMultiplier_m4BF1547C34EDCF635B6AF53527D56617C6DA09EE (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float angle = Vector3.Angle(m_GroundContactNormal, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_GroundContactNormal_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_2;
		L_2 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// return movementSettings.SlopeCurveModifier.Evaluate(angle);
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_3 = __this->___movementSettings_5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = L_3->___SlopeCurveModifier_6;
		float L_5 = V_0;
		float L_6;
		L_6 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::StickToGroundHelper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_StickToGroundHelper_mF84D44E8C84AD99D12081320554807925EC8B9B0 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Physics.SphereCast(transform.position, m_Capsule.radius * (1.0f - advancedSettings.shellOffset), Vector3.down, out hitInfo,
		//                        ((m_Capsule.height/2f) - m_Capsule.radius) +
		//                        advancedSettings.stickToGroundHelperDistance, Physics.AllLayers, QueryTriggerInteraction.Ignore))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_2 = __this->___m_Capsule_9;
		float L_3;
		L_3 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_2, NULL);
		AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* L_4 = __this->___advancedSettings_7;
		float L_5 = L_4->___shellOffset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_7 = __this->___m_Capsule_9;
		float L_8;
		L_8 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_7, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_9 = __this->___m_Capsule_9;
		float L_10;
		L_10 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_9, NULL);
		AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* L_11 = __this->___advancedSettings_7;
		float L_12 = L_11->___stickToGroundHelperDistance_1;
		bool L_13;
		L_13 = Physics_SphereCast_m5FB43F0C507F917CD9FCA1B16CF37285FC581066(L_1, ((float)il2cpp_codegen_multiply(L_3, ((float)il2cpp_codegen_subtract((1.0f), L_5)))), L_6, (&V_0), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)(L_8/(2.0f))), L_10)), L_12)), (-1), 1, NULL);
		if (!L_13)
		{
			goto IL_00a0;
		}
	}
	{
		// if (Mathf.Abs(Vector3.Angle(hitInfo.normal, Vector3.up)) < 85f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_16;
		L_16 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_14, L_15, NULL);
		float L_17;
		L_17 = fabsf(L_16);
		if ((!(((float)L_17) < ((float)(85.0f)))))
		{
			goto IL_00a0;
		}
	}
	{
		// m_RigidBody.velocity = Vector3.ProjectOnPlane(m_RigidBody.velocity, hitInfo.normal);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = __this->___m_RigidBody_8;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_19 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_20, L_21, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_18, L_22, NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::GetInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RigidbodyFirstPersonController_GetInput_m5181604692C394DDF22EB6A407A16DC8AD05AC15 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 input = new Vector2
		//     {
		//         x = CrossPlatformInputManager.GetAxis("Horizontal"),
		//         y = CrossPlatformInputManager.GetAxis("Vertical")
		//     };
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CrossPlatformInputManager_GetAxis_m1BA0A7839BDA75A556A9C3C3CA7F932C191BF066(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		(&V_1)->___x_0 = L_0;
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_m1BA0A7839BDA75A556A9C3C3CA7F932C191BF066(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		(&V_1)->___y_1 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_1;
		V_0 = L_2;
		// movementSettings.UpdateDesiredTargetSpeed(input);
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_3 = __this->___movementSettings_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		MovementSettings_UpdateDesiredTargetSpeed_m77EE1A183E7E42771E991CC7DBF2BB8BDDE19539(L_3, L_4, NULL);
		// return input;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::RotateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_RotateView_m8F1F1DF95E421B650439F3072F6A098CCD9EBB5A (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Mathf.Abs(Time.timeScale) < float.Epsilon) return;
		float L_0;
		L_0 = Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413(NULL);
		float L_1;
		L_1 = fabsf(L_0);
		if ((!(((float)L_1) < ((float)(1.40129846E-45f)))))
		{
			goto IL_0012;
		}
	}
	{
		// if (Mathf.Abs(Time.timeScale) < float.Epsilon) return;
		return;
	}

IL_0012:
	{
		// float oldYRotation = transform.eulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_2, NULL);
		float L_4 = L_3.___y_3;
		V_0 = L_4;
		// mouseLook.LookRotation (transform, cam.transform);
		MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* L_5 = __this->___mouseLook_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___cam_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		MouseLook_LookRotation_m30505FB14CA539242F82CB54F2D5030BBFB43374(L_5, L_6, L_8, NULL);
		// if (m_IsGrounded || advancedSettings.airControl)
		bool L_9 = __this->___m_IsGrounded_15;
		if (L_9)
		{
			goto IL_0054;
		}
	}
	{
		AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* L_10 = __this->___advancedSettings_7;
		bool L_11 = L_10->___airControl_3;
		if (!L_11)
		{
			goto IL_008d;
		}
	}

IL_0054:
	{
		// Quaternion velRotation = Quaternion.AngleAxis(transform.eulerAngles.y - oldYRotation, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_12, NULL);
		float L_14 = L_13.___y_3;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(((float)il2cpp_codegen_subtract(L_14, L_15)), L_16, NULL);
		V_1 = L_17;
		// m_RigidBody.velocity = velRotation*m_RigidBody.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = __this->___m_RigidBody_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20 = __this->___m_RigidBody_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_19, L_21, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_18, L_22, NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::GroundCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController_GroundCheck_m4563E2DD265145404C48F3F84DA9EC186A2C582D (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_PreviouslyGrounded = m_IsGrounded;
		bool L_0 = __this->___m_IsGrounded_15;
		__this->___m_PreviouslyGrounded_13 = L_0;
		// if (Physics.SphereCast(transform.position, m_Capsule.radius * (1.0f - advancedSettings.shellOffset), Vector3.down, out hitInfo,
		//                        ((m_Capsule.height/2f) - m_Capsule.radius) + advancedSettings.groundCheckDistance, Physics.AllLayers, QueryTriggerInteraction.Ignore))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_3 = __this->___m_Capsule_9;
		float L_4;
		L_4 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_3, NULL);
		AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* L_5 = __this->___advancedSettings_7;
		float L_6 = L_5->___shellOffset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_8 = __this->___m_Capsule_9;
		float L_9;
		L_9 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_8, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_10 = __this->___m_Capsule_9;
		float L_11;
		L_11 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_10, NULL);
		AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* L_12 = __this->___advancedSettings_7;
		float L_13 = L_12->___groundCheckDistance_0;
		bool L_14;
		L_14 = Physics_SphereCast_m5FB43F0C507F917CD9FCA1B16CF37285FC581066(L_2, ((float)il2cpp_codegen_multiply(L_4, ((float)il2cpp_codegen_subtract((1.0f), L_6)))), L_7, (&V_0), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)(L_9/(2.0f))), L_11)), L_13)), (-1), 1, NULL);
		if (!L_14)
		{
			goto IL_0083;
		}
	}
	{
		// m_IsGrounded = true;
		__this->___m_IsGrounded_15 = (bool)1;
		// m_GroundContactNormal = hitInfo.normal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		__this->___m_GroundContactNormal_11 = L_15;
		goto IL_0095;
	}

IL_0083:
	{
		// m_IsGrounded = false;
		__this->___m_IsGrounded_15 = (bool)0;
		// m_GroundContactNormal = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		__this->___m_GroundContactNormal_11 = L_16;
	}

IL_0095:
	{
		// if (!m_PreviouslyGrounded && m_IsGrounded && m_Jumping)
		bool L_17 = __this->___m_PreviouslyGrounded_13;
		if (L_17)
		{
			goto IL_00b4;
		}
	}
	{
		bool L_18 = __this->___m_IsGrounded_15;
		if (!L_18)
		{
			goto IL_00b4;
		}
	}
	{
		bool L_19 = __this->___m_Jumping_14;
		if (!L_19)
		{
			goto IL_00b4;
		}
	}
	{
		// m_Jumping = false;
		__this->___m_Jumping_14 = (bool)0;
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidbodyFirstPersonController__ctor_m697B9281793A7098177F741CBF47EA18A69B6561 (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MovementSettings movementSettings = new MovementSettings();
		MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* L_0 = (MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF*)il2cpp_codegen_object_new(MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF_il2cpp_TypeInfo_var);
		MovementSettings__ctor_mBBCE5EDEACBB5990A3B4275AAAD4EA248BE8BBE8(L_0, NULL);
		__this->___movementSettings_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___movementSettings_5), (void*)L_0);
		// public MouseLook mouseLook = new MouseLook();
		MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894* L_1 = (MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894*)il2cpp_codegen_object_new(MouseLook_t1EF72459BE77FC81E6D3AD87B1020A50800F5894_il2cpp_TypeInfo_var);
		MouseLook__ctor_m8EF7E4171402C13B7F9B772C748CB51382578363(L_1, NULL);
		__this->___mouseLook_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mouseLook_6), (void*)L_1);
		// public AdvancedSettings advancedSettings = new AdvancedSettings();
		AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* L_2 = (AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9*)il2cpp_codegen_object_new(AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9_il2cpp_TypeInfo_var);
		AdvancedSettings__ctor_m83DEA81F1A8887C5ED586139FD359FDD3717F93B(L_2, NULL);
		__this->___advancedSettings_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___advancedSettings_7), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::UpdateDesiredTargetSpeed(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementSettings_UpdateDesiredTargetSpeed_m77EE1A183E7E42771E991CC7DBF2BB8BDDE19539 (MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input0, const RuntimeMethod* method) 
{
	{
		// if (input == Vector2.zero) return;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___input0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		bool L_2;
		L_2 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// if (input == Vector2.zero) return;
		return;
	}

IL_000e:
	{
		// if (input.x > 0 || input.x < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___input0;
		float L_4 = L_3.___x_0;
		if ((((float)L_4) > ((float)(0.0f))))
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___input0;
		float L_6 = L_5.___x_0;
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_0034;
		}
	}

IL_0028:
	{
		// CurrentTargetSpeed = StrafeSpeed;
		float L_7 = __this->___StrafeSpeed_2;
		__this->___CurrentTargetSpeed_7 = L_7;
	}

IL_0034:
	{
		// if (input.y < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___input0;
		float L_9 = L_8.___y_1;
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		// CurrentTargetSpeed = BackwardSpeed;
		float L_10 = __this->___BackwardSpeed_1;
		__this->___CurrentTargetSpeed_7 = L_10;
	}

IL_004d:
	{
		// if (input.y > 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___input0;
		float L_12 = L_11.___y_1;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0066;
		}
	}
	{
		// CurrentTargetSpeed = ForwardSpeed;
		float L_13 = __this->___ForwardSpeed_0;
		__this->___CurrentTargetSpeed_7 = L_13;
	}

IL_0066:
	{
		// if (Input.GetKey(RunKey))
		int32_t L_14 = __this->___RunKey_4;
		bool L_15;
		L_15 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(L_14, NULL);
		if (!L_15)
		{
			goto IL_008e;
		}
	}
	{
		// CurrentTargetSpeed *= RunMultiplier;
		float L_16 = __this->___CurrentTargetSpeed_7;
		float L_17 = __this->___RunMultiplier_3;
		__this->___CurrentTargetSpeed_7 = ((float)il2cpp_codegen_multiply(L_16, L_17));
		// m_Running = true;
		__this->___m_Running_8 = (bool)1;
		return;
	}

IL_008e:
	{
		// m_Running = false;
		__this->___m_Running_8 = (bool)0;
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::get_Running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MovementSettings_get_Running_mFAB0A32A5A48C7010AB670736E7E3291425C1AAA (MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Running; }
		bool L_0 = __this->___m_Running_8;
		return L_0;
	}
}
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementSettings__ctor_mBBCE5EDEACBB5990A3B4275AAAD4EA248BE8BBE8 (MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float ForwardSpeed = 8.0f;   // Speed when walking forward
		__this->___ForwardSpeed_0 = (8.0f);
		// public float BackwardSpeed = 4.0f;  // Speed when walking backwards
		__this->___BackwardSpeed_1 = (4.0f);
		// public float StrafeSpeed = 4.0f;    // Speed when walking sideways
		__this->___StrafeSpeed_2 = (4.0f);
		// public float RunMultiplier = 2.0f;   // Speed when sprinting
		__this->___RunMultiplier_3 = (2.0f);
		// public KeyCode RunKey = KeyCode.LeftShift;
		__this->___RunKey_4 = ((int32_t)304);
		// public float JumpForce = 30f;
		__this->___JumpForce_5 = (30.0f);
		// public AnimationCurve SlopeCurveModifier = new AnimationCurve(new Keyframe(-90.0f, 1.0f), new Keyframe(0.0f, 1.0f), new Keyframe(90.0f, 0.0f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (-90.0f), (1.0f), /*hidden argument*/NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (0.0f), (1.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_6), (90.0f), (0.0f), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_6);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_7, L_5, NULL);
		__this->___SlopeCurveModifier_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SlopeCurveModifier_6), (void*)L_7);
		// [HideInInspector] public float CurrentTargetSpeed = 8f;
		__this->___CurrentTargetSpeed_7 = (8.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancedSettings__ctor_m83DEA81F1A8887C5ED586139FD359FDD3717F93B (AdvancedSettings_tDD6FC5D713FDCC5EF640986BC778EF09A1B5D1E9* __this, const RuntimeMethod* method) 
{
	{
		// public float groundCheckDistance = 0.01f; // distance for checking if the controller is grounded ( 0.01f seems to work best for this )
		__this->___groundCheckDistance_0 = (0.00999999978f);
		// public float stickToGroundHelperDistance = 0.5f; // stops the character
		__this->___stickToGroundHelperDistance_1 = (0.5f);
		// public float slowDownRate = 20f; // rate at which the controller comes to a stop when there is no input
		__this->___slowDownRate_2 = (20.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_Start_m900ACFC81D342429D83E274C92B69467E443763D (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AutoTargetPlayer)
		bool L_0 = __this->___m_AutoTargetPlayer_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// FindAndTargetPlayer();
		AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D(__this, NULL);
	}

IL_000e:
	{
		// if (m_Target == null) return;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// if (m_Target == null) return;
		return;
	}

IL_001d:
	{
		// targetRigidbody = m_Target.GetComponent<Rigidbody>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Target_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4;
		L_4 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_3, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___targetRigidbody_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetRigidbody_7), (void*)L_4);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_FixedUpdate_mB21B34361FB6322B028B8087893942F3E9A11A22 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AutoTargetPlayer && (m_Target == null || !m_Target.gameObject.activeSelf))
		bool L_0 = __this->___m_AutoTargetPlayer_5;
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Target_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}

IL_0028:
	{
		// FindAndTargetPlayer();
		AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D(__this, NULL);
	}

IL_002e:
	{
		// if (m_UpdateType == UpdateType.FixedUpdate)
		int32_t L_6 = __this->___m_UpdateType_6;
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		// FollowTarget(Time.deltaTime);
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		VirtualActionInvoker1< float >::Invoke(5 /* System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FollowTarget(System.Single) */, __this, L_7);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_LateUpdate_m15329BC030A27BD5C92BCF0B9A2E7DC27C4ED202 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AutoTargetPlayer && (m_Target == null || !m_Target.gameObject.activeSelf))
		bool L_0 = __this->___m_AutoTargetPlayer_5;
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Target_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}

IL_0028:
	{
		// FindAndTargetPlayer();
		AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D(__this, NULL);
	}

IL_002e:
	{
		// if (m_UpdateType == UpdateType.LateUpdate)
		int32_t L_6 = __this->___m_UpdateType_6;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		// FollowTarget(Time.deltaTime);
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		VirtualActionInvoker1< float >::Invoke(5 /* System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FollowTarget(System.Single) */, __this, L_7);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::ManualUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_ManualUpdate_mC0EDA156049123462E7E0507191183A112209C58 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AutoTargetPlayer && (m_Target == null || !m_Target.gameObject.activeSelf))
		bool L_0 = __this->___m_AutoTargetPlayer_5;
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Target_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}

IL_0028:
	{
		// FindAndTargetPlayer();
		AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D(__this, NULL);
	}

IL_002e:
	{
		// if (m_UpdateType == UpdateType.ManualUpdate)
		int32_t L_6 = __this->___m_UpdateType_6;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0042;
		}
	}
	{
		// FollowTarget(Time.deltaTime);
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		VirtualActionInvoker1< float >::Invoke(5 /* System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FollowTarget(System.Single) */, __this, L_7);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FindAndTargetPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// var targetObj = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		V_0 = L_0;
		// if (targetObj)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// SetTarget(targetObj.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(6 /* System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::SetTarget(UnityEngine.Transform) */, __this, L_4);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::SetTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_SetTarget_m28BD1FECB5D3F99925BCA617888401258BD8A28C (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___newTransform0, const RuntimeMethod* method) 
{
	{
		// m_Target = newTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___newTransform0;
		__this->___m_Target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Target_4), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Transform UnityStandardAssets.Cameras.AbstractTargetFollower::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* AbstractTargetFollower_get_Target_m0A358E204FE5247E0702B24B3D2047E89815A3D0 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Target; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Target_4;
		return L_0;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower__ctor_m7BA92F6CC37CDA403608738E4F6CB8EB43889A98 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private bool m_AutoTargetPlayer = true;  // Whether the rig should automatically target the player.
		__this->___m_AutoTargetPlayer_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityStandardAssets.Cameras.AutoCam::FollowTarget(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoCam_FollowTarget_mADA755400ADAA06A6456BCA262CC7E96BC9EB96A (AutoCam_t6611768AA933DB8058D35624A5E833E2B400AF0E* __this, float ___deltaTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float G_B13_0 = 0.0f;
	AutoCam_t6611768AA933DB8058D35624A5E833E2B400AF0E* G_B23_0 = NULL;
	AutoCam_t6611768AA933DB8058D35624A5E833E2B400AF0E* G_B22_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B24_0;
	memset((&G_B24_0), 0, sizeof(G_B24_0));
	AutoCam_t6611768AA933DB8058D35624A5E833E2B400AF0E* G_B24_1 = NULL;
	{
		// if (!(deltaTime > 0) || m_Target == null)
		float L_0 = ___deltaTime0;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0016;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ((AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17*)__this)->___m_Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// return;
		return;
	}

IL_0017:
	{
		// var targetForward = m_Target.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ((AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17*)__this)->___m_Target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		V_0 = L_4;
		// var targetUp = m_Target.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17*)__this)->___m_Target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_5, NULL);
		V_1 = L_6;
		// if (m_FollowVelocity && Application.isPlaying)
		bool L_7 = __this->___m_FollowVelocity_14;
		if (!L_7)
		{
			goto IL_00a2;
		}
	}
	{
		bool L_8;
		L_8 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_8)
		{
			goto IL_00a2;
		}
	}
	{
		// if (targetRigidbody.velocity.magnitude > m_TargetVelocityLowerLimit)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = ((AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17*)__this)->___targetRigidbody_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_9, NULL);
		V_3 = L_10;
		float L_11;
		L_11 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
		float L_12 = __this->___m_TargetVelocityLowerLimit_17;
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_0075;
		}
	}
	{
		// targetForward = targetRigidbody.velocity.normalized;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = ((AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17*)__this)->___targetRigidbody_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_13, NULL);
		V_3 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_0 = L_15;
		// targetUp = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		V_1 = L_16;
		goto IL_007b;
	}

IL_0075:
	{
		// targetUp = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		V_1 = L_17;
	}

IL_007b:
	{
		// m_CurrentTurnAmount = Mathf.SmoothDamp(m_CurrentTurnAmount, 1, ref m_TurnSpeedVelocityChange, m_SmoothTurnTime);
		float L_18 = __this->___m_CurrentTurnAmount_20;
		float* L_19 = (&__this->___m_TurnSpeedVelocityChange_21);
		float L_20 = __this->___m_SmoothTurnTime_18;
		float L_21;
		L_21 = Mathf_SmoothDamp_m4B8C5AACFEBF58E93FF2A33832C27EF1E5AF7AFD_inline(L_18, (1.0f), L_19, L_20, NULL);
		__this->___m_CurrentTurnAmount_20 = L_21;
		goto IL_0152;
	}

IL_00a2:
	{
		// var currentFlatAngle = Mathf.Atan2(targetForward.x, targetForward.z)*Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		float L_25 = L_24.___z_4;
		float L_26;
		L_26 = atan2f(L_23, L_25);
		V_4 = ((float)il2cpp_codegen_multiply(L_26, (57.2957802f)));
		// if (m_SpinTurnLimit > 0)
		float L_27 = __this->___m_SpinTurnLimit_16;
		if ((!(((float)L_27) > ((float)(0.0f)))))
		{
			goto IL_013f;
		}
	}
	{
		// var targetSpinSpeed = Mathf.Abs(Mathf.DeltaAngle(m_LastFlatAngle, currentFlatAngle))/deltaTime;
		float L_28 = __this->___m_LastFlatAngle_19;
		float L_29 = V_4;
		float L_30;
		L_30 = Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline(L_28, L_29, NULL);
		float L_31;
		L_31 = fabsf(L_30);
		float L_32 = ___deltaTime0;
		V_5 = ((float)(L_31/L_32));
		// var desiredTurnAmount = Mathf.InverseLerp(m_SpinTurnLimit, m_SpinTurnLimit*0.75f, targetSpinSpeed);
		float L_33 = __this->___m_SpinTurnLimit_16;
		float L_34 = __this->___m_SpinTurnLimit_16;
		float L_35 = V_5;
		float L_36;
		L_36 = Mathf_InverseLerp_m4E1DA076090EC56955724109B3EE12AA07548016_inline(L_33, ((float)il2cpp_codegen_multiply(L_34, (0.75f))), L_35, NULL);
		V_6 = L_36;
		// var turnReactSpeed = (m_CurrentTurnAmount > desiredTurnAmount ? .1f : 1f);
		float L_37 = __this->___m_CurrentTurnAmount_20;
		float L_38 = V_6;
		if ((((float)L_37) > ((float)L_38)))
		{
			goto IL_010a;
		}
	}
	{
		G_B13_0 = (1.0f);
		goto IL_010f;
	}

IL_010a:
	{
		G_B13_0 = (0.100000001f);
	}

IL_010f:
	{
		V_7 = G_B13_0;
		// if (Application.isPlaying)
		bool L_39;
		L_39 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_39)
		{
			goto IL_0135;
		}
	}
	{
		// m_CurrentTurnAmount = Mathf.SmoothDamp(m_CurrentTurnAmount, desiredTurnAmount,
		//                                      ref m_TurnSpeedVelocityChange, turnReactSpeed);
		float L_40 = __this->___m_CurrentTurnAmount_20;
		float L_41 = V_6;
		float* L_42 = (&__this->___m_TurnSpeedVelocityChange_21);
		float L_43 = V_7;
		float L_44;
		L_44 = Mathf_SmoothDamp_m4B8C5AACFEBF58E93FF2A33832C27EF1E5AF7AFD_inline(L_40, L_41, L_42, L_43, NULL);
		__this->___m_CurrentTurnAmount_20 = L_44;
		goto IL_014a;
	}

IL_0135:
	{
		// m_CurrentTurnAmount = desiredTurnAmount;
		float L_45 = V_6;
		__this->___m_CurrentTurnAmount_20 = L_45;
		goto IL_014a;
	}

IL_013f:
	{
		// m_CurrentTurnAmount = 1;
		__this->___m_CurrentTurnAmount_20 = (1.0f);
	}

IL_014a:
	{
		// m_LastFlatAngle = currentFlatAngle;
		float L_46 = V_4;
		__this->___m_LastFlatAngle_19 = L_46;
	}

IL_0152:
	{
		// transform.position = Vector3.Lerp(transform.position, m_Target.position, deltaTime*m_MoveSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_48, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50 = ((AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17*)__this)->___m_Target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_50, NULL);
		float L_52 = ___deltaTime0;
		float L_53 = __this->___m_MoveSpeed_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_49, L_51, ((float)il2cpp_codegen_multiply(L_52, L_53)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_47, L_54, NULL);
		// if (!m_FollowTilt)
		bool L_55 = __this->___m_FollowTilt_15;
		if (L_55)
		{
			goto IL_01ae;
		}
	}
	{
		// targetForward.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// if (targetForward.sqrMagnitude < float.Epsilon)
		float L_56;
		L_56 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		if ((!(((float)L_56) < ((float)(1.40129846E-45f)))))
		{
			goto IL_01ae;
		}
	}
	{
		// targetForward = transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_57, NULL);
		V_0 = L_58;
	}

IL_01ae:
	{
		// var rollRotation = Quaternion.LookRotation(targetForward, m_RollUp);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = __this->___m_RollUp_22;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_61;
		L_61 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_59, L_60, NULL);
		V_2 = L_61;
		// m_RollUp = m_RollSpeed > 0 ? Vector3.Slerp(m_RollUp, targetUp, m_RollSpeed*deltaTime) : Vector3.up;
		float L_62 = __this->___m_RollSpeed_13;
		G_B22_0 = __this;
		if ((((float)L_62) > ((float)(0.0f))))
		{
			G_B23_0 = __this;
			goto IL_01d0;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		G_B24_0 = L_63;
		G_B24_1 = G_B22_0;
		goto IL_01e4;
	}

IL_01d0:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = __this->___m_RollUp_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_1;
		float L_66 = __this->___m_RollSpeed_13;
		float L_67 = ___deltaTime0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_Slerp_mBA32C7EAC64C56C7D68480549FA9A892FA5C1728(L_64, L_65, ((float)il2cpp_codegen_multiply(L_66, L_67)), NULL);
		G_B24_0 = L_68;
		G_B24_1 = G_B23_0;
	}

IL_01e4:
	{
		G_B24_1->___m_RollUp_22 = G_B24_0;
		// transform.rotation = Quaternion.Lerp(transform.rotation, rollRotation, m_TurnSpeed*m_CurrentTurnAmount*deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69;
		L_69 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_71;
		L_71 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_70, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_72 = V_2;
		float L_73 = __this->___m_TurnSpeed_12;
		float L_74 = __this->___m_CurrentTurnAmount_20;
		float L_75 = ___deltaTime0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_76;
		L_76 = Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792(L_71, L_72, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_73, L_74)), L_75)), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_69, L_76, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AutoCam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoCam__ctor_mD3BDF5DFC219FE162D24246AE4911DE15B8B4DFB (AutoCam_t6611768AA933DB8058D35624A5E833E2B400AF0E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float m_MoveSpeed = 3; // How fast the rig will move to keep up with target's position
		__this->___m_MoveSpeed_11 = (3.0f);
		// [SerializeField] private float m_TurnSpeed = 1; // How fast the rig will turn to keep up with target's rotation
		__this->___m_TurnSpeed_12 = (1.0f);
		// [SerializeField] private float m_RollSpeed = 0.2f;// How fast the rig will roll (around Z axis) to match target's roll.
		__this->___m_RollSpeed_13 = (0.200000003f);
		// [SerializeField] private bool m_FollowTilt = true; // Whether the rig will tilt (around X axis) with the target.
		__this->___m_FollowTilt_15 = (bool)1;
		// [SerializeField] private float m_SpinTurnLimit = 90;// The threshold beyond which the camera stops following the target's rotation. (used in situations where a car spins out, for example)
		__this->___m_SpinTurnLimit_16 = (90.0f);
		// [SerializeField] private float m_TargetVelocityLowerLimit = 4f;// the minimum velocity above which the camera turns towards the object's velocity. Below this we use the object's forward direction.
		__this->___m_TargetVelocityLowerLimit_17 = (4.0f);
		// [SerializeField] private float m_SmoothTurnTime = 0.2f; // the smoothing for the camera's rotation
		__this->___m_SmoothTurnTime_18 = (0.200000003f);
		// private Vector3 m_RollUp = Vector3.up;// The roll of the camera around the z axis ( generally this will always just be up )
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		__this->___m_RollUp_22 = L_0;
		PivotBasedCameraRig__ctor_m176687FB94C7FF07D4ED8B38A0529F370F9D51BA(__this, NULL);
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
// System.Void UnityStandardAssets.Cameras.FreeLookCam::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_Awake_m6DF1C77903C277F5D7111A267F9B71B708A50867 (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B3_0 = 0;
	{
		// base.Awake();
		PivotBasedCameraRig_Awake_m3477C8EE2F83D51CCF81ADC1F8BEEDCB0A2F95B2(__this, NULL);
		// Cursor.lockState = m_LockCursor ? CursorLockMode.Locked : CursorLockMode.None;
		bool L_0 = __this->___m_LockCursor_16;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(G_B3_0, NULL);
		// Cursor.visible = !m_LockCursor;
		bool L_1 = __this->___m_LockCursor_16;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), NULL);
		// m_PivotEulers = m_Pivot.rotation.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13*)__this)->___m_Pivot_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		__this->___m_PivotEulers_21 = L_4;
		// m_PivotTargetRot = m_Pivot.transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13*)__this)->___m_Pivot_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_6, NULL);
		__this->___m_PivotTargetRot_22 = L_7;
		// m_TransformTargetRot = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_8, NULL);
		__this->___m_TransformTargetRot_23 = L_9;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_Update_m1158A615C803765D6375B456ADB1DDF93D8E7FB8 (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) 
{
	int32_t G_B5_0 = 0;
	{
		// HandleRotationMovement();
		FreeLookCam_HandleRotationMovement_m0E9A0819AA068EFA603FB0CC3318FBE71827A97F(__this, NULL);
		// if (m_LockCursor && Input.GetMouseButtonUp(0))
		bool L_0 = __this->___m_LockCursor_16;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(0, NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// Cursor.lockState = m_LockCursor ? CursorLockMode.Locked : CursorLockMode.None;
		bool L_2 = __this->___m_LockCursor_16;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 1;
	}

IL_0022:
	{
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(G_B5_0, NULL);
		// Cursor.visible = !m_LockCursor;
		bool L_3 = __this->___m_LockCursor_16;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_OnDisable_mCD044A476BAF96C34A06162121D3D21664AD438E (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::FollowTarget(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_FollowTarget_m807D7425DA3AC99BCFC995FC3F53B3139F50FE7E (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, float ___deltaTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Target == null) return;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17*)__this)->___m_Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (m_Target == null) return;
		return;
	}

IL_000f:
	{
		// transform.position = Vector3.Lerp(transform.position, m_Target.position, deltaTime*m_MoveSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17*)__this)->___m_Target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = ___deltaTime0;
		float L_8 = __this->___m_MoveSpeed_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_4, L_6, ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_9, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::HandleRotationMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_HandleRotationMovement_m0E9A0819AA068EFA603FB0CC3318FBE71827A97F (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* G_B5_0 = NULL;
	FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* G_B6_1 = NULL;
	{
		// if(Time.timeScale < float.Epsilon)
		float L_0;
		L_0 = Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413(NULL);
		if ((!(((float)L_0) < ((float)(1.40129846E-45f)))))
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// var x = CrossPlatformInputManager.GetAxis("Mouse X");
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_m1BA0A7839BDA75A556A9C3C3CA7F932C191BF066(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		V_0 = L_1;
		// var y = CrossPlatformInputManager.GetAxis("Mouse Y");
		float L_2;
		L_2 = CrossPlatformInputManager_GetAxis_m1BA0A7839BDA75A556A9C3C3CA7F932C191BF066(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		V_1 = L_2;
		// m_LookAngle += x*m_TurnSpeed;
		float L_3 = __this->___m_LookAngle_18;
		float L_4 = V_0;
		float L_5 = __this->___m_TurnSpeed_12;
		__this->___m_LookAngle_18 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5))));
		// m_TransformTargetRot = Quaternion.Euler(0f, m_LookAngle, 0f);
		float L_6 = __this->___m_LookAngle_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_6, (0.0f), NULL);
		__this->___m_TransformTargetRot_23 = L_7;
		// if (m_VerticalAutoReturn)
		bool L_8 = __this->___m_VerticalAutoReturn_17;
		if (!L_8)
		{
			goto IL_0091;
		}
	}
	{
		// m_TiltAngle = y > 0 ? Mathf.Lerp(0, -m_TiltMin, y) : Mathf.Lerp(0, m_TiltMax, -y);
		float L_9 = V_1;
		G_B4_0 = __this;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			G_B5_0 = __this;
			goto IL_0078;
		}
	}
	{
		float L_10 = __this->___m_TiltMax_14;
		float L_11 = V_1;
		float L_12;
		L_12 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((0.0f), L_10, ((-L_11)), NULL);
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		goto IL_008a;
	}

IL_0078:
	{
		float L_13 = __this->___m_TiltMin_15;
		float L_14 = V_1;
		float L_15;
		L_15 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((0.0f), ((-L_13)), L_14, NULL);
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
	}

IL_008a:
	{
		G_B6_1->___m_TiltAngle_19 = G_B6_0;
		goto IL_00c4;
	}

IL_0091:
	{
		// m_TiltAngle -= y*m_TurnSpeed;
		float L_16 = __this->___m_TiltAngle_19;
		float L_17 = V_1;
		float L_18 = __this->___m_TurnSpeed_12;
		__this->___m_TiltAngle_19 = ((float)il2cpp_codegen_subtract(L_16, ((float)il2cpp_codegen_multiply(L_17, L_18))));
		// m_TiltAngle = Mathf.Clamp(m_TiltAngle, -m_TiltMin, m_TiltMax);
		float L_19 = __this->___m_TiltAngle_19;
		float L_20 = __this->___m_TiltMin_15;
		float L_21 = __this->___m_TiltMax_14;
		float L_22;
		L_22 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_19, ((-L_20)), L_21, NULL);
		__this->___m_TiltAngle_19 = L_22;
	}

IL_00c4:
	{
		// m_PivotTargetRot = Quaternion.Euler(m_TiltAngle, m_PivotEulers.y , m_PivotEulers.z);
		float L_23 = __this->___m_TiltAngle_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&__this->___m_PivotEulers_21);
		float L_25 = L_24->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&__this->___m_PivotEulers_21);
		float L_27 = L_26->___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_23, L_25, L_27, NULL);
		__this->___m_PivotTargetRot_22 = L_28;
		// if (m_TurnSmoothing > 0)
		float L_29 = __this->___m_TurnSmoothing_13;
		if ((!(((float)L_29) > ((float)(0.0f)))))
		{
			goto IL_0153;
		}
	}
	{
		// m_Pivot.localRotation = Quaternion.Slerp(m_Pivot.localRotation, m_PivotTargetRot, m_TurnSmoothing * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = ((PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13*)__this)->___m_Pivot_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = ((PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13*)__this)->___m_Pivot_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = __this->___m_PivotTargetRot_22;
		float L_34 = __this->___m_TurnSmoothing_13;
		float L_35;
		L_35 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_32, L_33, ((float)il2cpp_codegen_multiply(L_34, L_35)), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_30, L_36, NULL);
		// transform.localRotation = Quaternion.Slerp(transform.localRotation, m_TransformTargetRot, m_TurnSmoothing * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_38, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = __this->___m_TransformTargetRot_23;
		float L_41 = __this->___m_TurnSmoothing_13;
		float L_42;
		L_42 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_39, L_40, ((float)il2cpp_codegen_multiply(L_41, L_42)), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_37, L_43, NULL);
		return;
	}

IL_0153:
	{
		// m_Pivot.localRotation = m_PivotTargetRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = ((PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13*)__this)->___m_Pivot_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45 = __this->___m_PivotTargetRot_22;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_44, L_45, NULL);
		// transform.localRotation = m_TransformTargetRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47 = __this->___m_TransformTargetRot_23;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_46, L_47, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam__ctor_m0B5161AC16134D026A74E23EDE3011F252B9C28B (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float m_MoveSpeed = 1f;                      // How fast the rig will move to keep up with the target's position.
		__this->___m_MoveSpeed_11 = (1.0f);
		// [Range(0f, 10f)] [SerializeField] private float m_TurnSpeed = 1.5f;   // How fast the rig will rotate from user input.
		__this->___m_TurnSpeed_12 = (1.5f);
		// [SerializeField] private float m_TiltMax = 75f;                       // The maximum value of the x axis rotation of the pivot.
		__this->___m_TiltMax_14 = (75.0f);
		// [SerializeField] private float m_TiltMin = 45f;                       // The minimum value of the x axis rotation of the pivot.
		__this->___m_TiltMin_15 = (45.0f);
		PivotBasedCameraRig__ctor_m176687FB94C7FF07D4ED8B38A0529F370F9D51BA(__this, NULL);
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
// System.Void UnityStandardAssets.Cameras.HandHeldCam::FollowTarget(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandHeldCam_FollowTarget_m410C47954D8221DF5921D7A6A27ABB3837959958 (HandHeldCam_t23DE8280297F0ACC05548933329B256AEE82FBA0* __this, float ___deltaTime0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// base.FollowTarget(deltaTime);
		float L_0 = ___deltaTime0;
		LookatTarget_FollowTarget_m7420FC18FCBE781CEEBE8D8B7D6429F3EFD234EE(__this, L_0, NULL);
		// float bx = (Mathf.PerlinNoise(0, Time.time*m_SwaySpeed) - 0.5f);
		float L_1;
		L_1 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_2 = __this->___m_SwaySpeed_13;
		float L_3;
		L_3 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4((0.0f), ((float)il2cpp_codegen_multiply(L_1, L_2)), NULL);
		V_0 = ((float)il2cpp_codegen_subtract(L_3, (0.5f)));
		// float by = (Mathf.PerlinNoise(0, (Time.time*m_SwaySpeed) + 100)) - 0.5f;
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_5 = __this->___m_SwaySpeed_13;
		float L_6;
		L_6 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4((0.0f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_4, L_5)), (100.0f))), NULL);
		V_1 = ((float)il2cpp_codegen_subtract(L_6, (0.5f)));
		// bx *= m_BaseSwayAmount;
		float L_7 = V_0;
		float L_8 = __this->___m_BaseSwayAmount_14;
		V_0 = ((float)il2cpp_codegen_multiply(L_7, L_8));
		// by *= m_BaseSwayAmount;
		float L_9 = V_1;
		float L_10 = __this->___m_BaseSwayAmount_14;
		V_1 = ((float)il2cpp_codegen_multiply(L_9, L_10));
		// float tx = (Mathf.PerlinNoise(0, Time.time*m_SwaySpeed) - 0.5f) + m_TrackingBias;
		float L_11;
		L_11 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_12 = __this->___m_SwaySpeed_13;
		float L_13;
		L_13 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4((0.0f), ((float)il2cpp_codegen_multiply(L_11, L_12)), NULL);
		float L_14 = __this->___m_TrackingBias_16;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_13, (0.5f))), L_14));
		// float ty = ((Mathf.PerlinNoise(0, (Time.time*m_SwaySpeed) + 100)) - 0.5f) + m_TrackingBias;
		float L_15;
		L_15 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_16 = __this->___m_SwaySpeed_13;
		float L_17;
		L_17 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4((0.0f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_15, L_16)), (100.0f))), NULL);
		float L_18 = __this->___m_TrackingBias_16;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_17, (0.5f))), L_18));
		// tx *= -m_TrackingSwayAmount*m_FollowVelocity.x;
		float L_19 = V_2;
		float L_20 = __this->___m_TrackingSwayAmount_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&((LookatTarget_t859A683B0EE2CEEC8F3B1233D340F50EAA7E2B11*)__this)->___m_FollowVelocity_12);
		float L_22 = L_21->___x_2;
		V_2 = ((float)il2cpp_codegen_multiply(L_19, ((float)il2cpp_codegen_multiply(((-L_20)), L_22))));
		// ty *= m_TrackingSwayAmount*m_FollowVelocity.y;
		float L_23 = V_3;
		float L_24 = __this->___m_TrackingSwayAmount_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (&((LookatTarget_t859A683B0EE2CEEC8F3B1233D340F50EAA7E2B11*)__this)->___m_FollowVelocity_12);
		float L_26 = L_25->___y_3;
		V_3 = ((float)il2cpp_codegen_multiply(L_23, ((float)il2cpp_codegen_multiply(L_24, L_26))));
		// transform.Rotate(bx + tx, by + ty, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_28 = V_0;
		float L_29 = V_2;
		float L_30 = V_1;
		float L_31 = V_3;
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_27, ((float)il2cpp_codegen_add(L_28, L_29)), ((float)il2cpp_codegen_add(L_30, L_31)), (0.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.HandHeldCam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandHeldCam__ctor_mA7A8824B7261E0C0A99B92333C672B5231B119AC (HandHeldCam_t23DE8280297F0ACC05548933329B256AEE82FBA0* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float m_SwaySpeed = .5f;
		__this->___m_SwaySpeed_13 = (0.5f);
		// [SerializeField] private float m_BaseSwayAmount = .5f;
		__this->___m_BaseSwayAmount_14 = (0.5f);
		// [SerializeField] private float m_TrackingSwayAmount = .5f;
		__this->___m_TrackingSwayAmount_15 = (0.5f);
		LookatTarget__ctor_m47B00F2D7DC9CA39F53ADDD892B595C4CFA2567A(__this, NULL);
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
// System.Void UnityStandardAssets.Cameras.LookatTarget::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookatTarget_Start_m425EC61E87C48D6B05F37772F9E128B716437520 (LookatTarget_t859A683B0EE2CEEC8F3B1233D340F50EAA7E2B11* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		AbstractTargetFollower_Start_m900ACFC81D342429D83E274C92B69467E443763D(__this, NULL);
		// m_OriginalRotation = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		__this->___m_OriginalRotation_11 = L_1;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.LookatTarget::FollowTarget(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookatTarget_FollowTarget_m7420FC18FCBE781CEEBE8D8B7D6429F3EFD234EE (LookatTarget_t859A683B0EE2CEEC8F3B1233D340F50EAA7E2B11* __this, float ___deltaTime0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// transform.localRotation = m_OriginalRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = __this->___m_OriginalRotation_11;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_0, L_1, NULL);
		// Vector3 localTarget = transform.InverseTransformPoint(m_Target.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ((AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17*)__this)->___m_Target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_2, L_4, NULL);
		V_0 = L_5;
		// float yAngle = Mathf.Atan2(localTarget.x, localTarget.z)*Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = L_6.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = L_8.___z_4;
		float L_10;
		L_10 = atan2f(L_7, L_9);
		V_1 = ((float)il2cpp_codegen_multiply(L_10, (57.2957802f)));
		// yAngle = Mathf.Clamp(yAngle, -m_RotationRange.y*0.5f, m_RotationRange.y*0.5f);
		float L_11 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&__this->___m_RotationRange_8);
		float L_13 = L_12->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___m_RotationRange_8);
		float L_15 = L_14->___y_1;
		float L_16;
		L_16 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_11, ((float)il2cpp_codegen_multiply(((-L_13)), (0.5f))), ((float)il2cpp_codegen_multiply(L_15, (0.5f))), NULL);
		V_1 = L_16;
		// transform.localRotation = m_OriginalRotation*Quaternion.Euler(0, yAngle, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = __this->___m_OriginalRotation_11;
		float L_19 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_19, (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_18, L_20, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_17, L_21, NULL);
		// localTarget = transform.InverseTransformPoint(m_Target.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = ((AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17*)__this)->___m_Target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_22, L_24, NULL);
		V_0 = L_25;
		// float xAngle = Mathf.Atan2(localTarget.y, localTarget.z)*Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		float L_27 = L_26.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_0;
		float L_29 = L_28.___z_4;
		float L_30;
		L_30 = atan2f(L_27, L_29);
		V_2 = ((float)il2cpp_codegen_multiply(L_30, (57.2957802f)));
		// xAngle = Mathf.Clamp(xAngle, -m_RotationRange.x*0.5f, m_RotationRange.x*0.5f);
		float L_31 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_32 = (&__this->___m_RotationRange_8);
		float L_33 = L_32->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_34 = (&__this->___m_RotationRange_8);
		float L_35 = L_34->___x_0;
		float L_36;
		L_36 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_31, ((float)il2cpp_codegen_multiply(((-L_33)), (0.5f))), ((float)il2cpp_codegen_multiply(L_35, (0.5f))), NULL);
		V_2 = L_36;
		// var targetAngles = new Vector3(m_FollowAngles.x + Mathf.DeltaAngle(m_FollowAngles.x, xAngle),
		//                                m_FollowAngles.y + Mathf.DeltaAngle(m_FollowAngles.y, yAngle));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_37 = (&__this->___m_FollowAngles_10);
		float L_38 = L_37->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_39 = (&__this->___m_FollowAngles_10);
		float L_40 = L_39->___x_2;
		float L_41 = V_2;
		float L_42;
		L_42 = Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline(L_40, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_43 = (&__this->___m_FollowAngles_10);
		float L_44 = L_43->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_45 = (&__this->___m_FollowAngles_10);
		float L_46 = L_45->___y_3;
		float L_47 = V_1;
		float L_48;
		L_48 = Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline(L_46, L_47, NULL);
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&V_3), ((float)il2cpp_codegen_add(L_38, L_42)), ((float)il2cpp_codegen_add(L_44, L_48)), NULL);
		// m_FollowAngles = Vector3.SmoothDamp(m_FollowAngles, targetAngles, ref m_FollowVelocity, m_FollowSpeed);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = __this->___m_FollowAngles_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_51 = (&__this->___m_FollowVelocity_12);
		float L_52 = __this->___m_FollowSpeed_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline(L_49, L_50, L_51, L_52, NULL);
		__this->___m_FollowAngles_10 = L_53;
		// transform.localRotation = m_OriginalRotation*Quaternion.Euler(-m_FollowAngles.x, m_FollowAngles.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55 = __this->___m_OriginalRotation_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_56 = (&__this->___m_FollowAngles_10);
		float L_57 = L_56->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_58 = (&__this->___m_FollowAngles_10);
		float L_59 = L_58->___y_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60;
		L_60 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(((-L_57)), L_59, (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_61;
		L_61 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_55, L_60, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_54, L_61, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.LookatTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookatTarget__ctor_m47B00F2D7DC9CA39F53ADDD892B595C4CFA2567A (LookatTarget_t859A683B0EE2CEEC8F3B1233D340F50EAA7E2B11* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float m_FollowSpeed = 1;
		__this->___m_FollowSpeed_9 = (1.0f);
		AbstractTargetFollower__ctor_m7BA92F6CC37CDA403608738E4F6CB8EB43889A98(__this, NULL);
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
// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PivotBasedCameraRig_Awake_m3477C8EE2F83D51CCF81ADC1F8BEEDCB0A2F95B2 (PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Cam = GetComponentInChildren<Camera>().transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0(__this, Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___m_Cam_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Cam_8), (void*)L_1);
		// m_Pivot = m_Cam.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_Cam_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		__this->___m_Pivot_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Pivot_9), (void*)L_3);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PivotBasedCameraRig__ctor_m176687FB94C7FF07D4ED8B38A0529F370F9D51BA (PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13* __this, const RuntimeMethod* method) 
{
	{
		AbstractTargetFollower__ctor_m7BA92F6CC37CDA403608738E4F6CB8EB43889A98(__this, NULL);
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
// System.Boolean UnityStandardAssets.Cameras.ProtectCameraFromWallClip::get_protecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProtectCameraFromWallClip_get_protecting_m572A24C7165902C25E7F12D38D1110967D017CB3 (ProtectCameraFromWallClip_t52F6771775B0D2601663DA0C5DEC8A6F3650438C* __this, const RuntimeMethod* method) 
{
	{
		// public bool protecting { get; private set; }    // used for determining if there is an object between the target and the camera
		bool L_0 = __this->___U3CprotectingU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void UnityStandardAssets.Cameras.ProtectCameraFromWallClip::set_protecting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtectCameraFromWallClip_set_protecting_m2BF39BD7E67B187ACC669C8505BF55686D79235E (ProtectCameraFromWallClip_t52F6771775B0D2601663DA0C5DEC8A6F3650438C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool protecting { get; private set; }    // used for determining if there is an object between the target and the camera
		bool L_0 = ___value0;
		__this->___U3CprotectingU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.ProtectCameraFromWallClip::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtectCameraFromWallClip_Start_mD87294C6D7A4F5F75F276E0C6BE027F5C353D876 (ProtectCameraFromWallClip_t52F6771775B0D2601663DA0C5DEC8A6F3650438C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RayHitComparer_t48174939C23091FD1B46B709FF44BD43167116CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Cam = GetComponentInChildren<Camera>().transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0(__this, Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___m_Cam_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Cam_11), (void*)L_1);
		// m_Pivot = m_Cam.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_Cam_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		__this->___m_Pivot_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Pivot_12), (void*)L_3);
		// m_OriginalDist = m_Cam.localPosition.magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_Cam_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		V_0 = L_5;
		float L_6;
		L_6 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		__this->___m_OriginalDist_13 = L_6;
		// m_CurrentDist = m_OriginalDist;
		float L_7 = __this->___m_OriginalDist_13;
		__this->___m_CurrentDist_15 = L_7;
		// m_RayHitComparer = new RayHitComparer();
		RayHitComparer_t48174939C23091FD1B46B709FF44BD43167116CD* L_8 = (RayHitComparer_t48174939C23091FD1B46B709FF44BD43167116CD*)il2cpp_codegen_object_new(RayHitComparer_t48174939C23091FD1B46B709FF44BD43167116CD_il2cpp_TypeInfo_var);
		RayHitComparer__ctor_m06AEF5F3B142F395C5E703BCB8513050A33E289C(L_8, NULL);
		__this->___m_RayHitComparer_18 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RayHitComparer_18), (void*)L_8);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.ProtectCameraFromWallClip::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtectCameraFromWallClip_LateUpdate_m7F80B0FE6C35178CE5DAAC1BB0DB4E93C75550AA (ProtectCameraFromWallClip_t52F6771775B0D2601663DA0C5DEC8A6F3650438C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float* G_B22_0 = NULL;
	float G_B22_1 = 0.0f;
	float G_B22_2 = 0.0f;
	ProtectCameraFromWallClip_t52F6771775B0D2601663DA0C5DEC8A6F3650438C* G_B22_3 = NULL;
	float* G_B21_0 = NULL;
	float G_B21_1 = 0.0f;
	float G_B21_2 = 0.0f;
	ProtectCameraFromWallClip_t52F6771775B0D2601663DA0C5DEC8A6F3650438C* G_B21_3 = NULL;
	float G_B23_0 = 0.0f;
	float* G_B23_1 = NULL;
	float G_B23_2 = 0.0f;
	float G_B23_3 = 0.0f;
	ProtectCameraFromWallClip_t52F6771775B0D2601663DA0C5DEC8A6F3650438C* G_B23_4 = NULL;
	{
		// float targetDist = m_OriginalDist;
		float L_0 = __this->___m_OriginalDist_13;
		V_0 = L_0;
		// m_Ray.origin = m_Pivot.position + m_Pivot.forward*sphereCastRadius;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_1 = (&__this->___m_Ray_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_Pivot_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_Pivot_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		float L_6 = __this->___sphereCastRadius_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_7, NULL);
		Ray_set_origin_m9B19A7BE86636111E3B16BCE08EAE030F37FE64D(L_1, L_8, NULL);
		// m_Ray.direction = -m_Pivot.forward;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_9 = (&__this->___m_Ray_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___m_Pivot_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_11, NULL);
		Ray_set_direction_m8A8FF8101045BAE51BE5D5C1B6C21D0D5592DA98(L_9, L_12, NULL);
		// var cols = Physics.OverlapSphere(m_Ray.origin, sphereCastRadius);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_13 = (&__this->___m_Ray_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6(L_13, NULL);
		float L_15 = __this->___sphereCastRadius_6;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_16;
		L_16 = Physics_OverlapSphere_m91C80EEBDE4096D5648F78E48772E44474CD62F2(L_14, L_15, NULL);
		V_1 = L_16;
		// bool initialIntersect = false;
		V_2 = (bool)0;
		// bool hitSomething = false;
		V_3 = (bool)0;
		// for (int i = 0; i < cols.Length; i++)
		V_5 = 0;
		goto IL_00af;
	}

IL_0073:
	{
		// if ((!cols[i].isTrigger) &&
		//     !(cols[i].attachedRigidbody != null && cols[i].attachedRigidbody.CompareTag(dontClipTag)))
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_17 = V_1;
		int32_t L_18 = V_5;
		int32_t L_19 = L_18;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Collider_get_isTrigger_mFF457F6AA71D173F9A11BAF00C35E5AE12952F87(L_20, NULL);
		if (L_21)
		{
			goto IL_00a9;
		}
	}
	{
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = L_23;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_26;
		L_26 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00a5;
		}
	}
	{
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_28 = V_1;
		int32_t L_29 = V_5;
		int32_t L_30 = L_29;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_32;
		L_32 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_31, NULL);
		String_t* L_33 = __this->___dontClipTag_10;
		bool L_34;
		L_34 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_32, L_33, NULL);
		if (L_34)
		{
			goto IL_00a9;
		}
	}

IL_00a5:
	{
		// initialIntersect = true;
		V_2 = (bool)1;
		// break;
		goto IL_00b6;
	}

IL_00a9:
	{
		// for (int i = 0; i < cols.Length; i++)
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00af:
	{
		// for (int i = 0; i < cols.Length; i++)
		int32_t L_36 = V_5;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_37 = V_1;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_0073;
		}
	}

IL_00b6:
	{
		// if (initialIntersect)
		bool L_38 = V_2;
		if (!L_38)
		{
			goto IL_0105;
		}
	}
	{
		// m_Ray.origin += m_Pivot.forward*sphereCastRadius;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_39 = (&__this->___m_Ray_16);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_40 = L_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6(L_40, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___m_Pivot_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_42, NULL);
		float L_44 = __this->___sphereCastRadius_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_43, L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_41, L_45, NULL);
		Ray_set_origin_m9B19A7BE86636111E3B16BCE08EAE030F37FE64D(L_40, L_46, NULL);
		// m_Hits = Physics.RaycastAll(m_Ray, m_OriginalDist - sphereCastRadius);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_47 = __this->___m_Ray_16;
		float L_48 = __this->___m_OriginalDist_13;
		float L_49 = __this->___sphereCastRadius_6;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_50;
		L_50 = Physics_RaycastAll_m59829631929F9509748FDCEE147C67A8F85A134A(L_47, ((float)il2cpp_codegen_subtract(L_48, L_49)), NULL);
		__this->___m_Hits_17 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Hits_17), (void*)L_50);
		goto IL_0129;
	}

IL_0105:
	{
		// m_Hits = Physics.SphereCastAll(m_Ray, sphereCastRadius, m_OriginalDist + sphereCastRadius);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_51 = __this->___m_Ray_16;
		float L_52 = __this->___sphereCastRadius_6;
		float L_53 = __this->___m_OriginalDist_13;
		float L_54 = __this->___sphereCastRadius_6;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_55;
		L_55 = Physics_SphereCastAll_mD42E5A9ADB813397F5BC04CD22951BA64E832D9E(L_51, L_52, ((float)il2cpp_codegen_add(L_53, L_54)), NULL);
		__this->___m_Hits_17 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Hits_17), (void*)L_55);
	}

IL_0129:
	{
		// Array.Sort(m_Hits, m_RayHitComparer);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_56 = __this->___m_Hits_17;
		RayHitComparer_t48174939C23091FD1B46B709FF44BD43167116CD* L_57 = __this->___m_RayHitComparer_18;
		Array_Sort_m341AEFD15CDBA888C07C8B91543B228F9FB52FFD((RuntimeArray*)L_56, L_57, NULL);
		// float nearest = Mathf.Infinity;
		V_4 = (std::numeric_limits<float>::infinity());
		// for (int i = 0; i < m_Hits.Length; i++)
		V_6 = 0;
		goto IL_01fe;
	}

IL_0149:
	{
		// if (m_Hits[i].distance < nearest && (!m_Hits[i].collider.isTrigger) &&
		//     !(m_Hits[i].collider.attachedRigidbody != null &&
		//       m_Hits[i].collider.attachedRigidbody.CompareTag(dontClipTag)))
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_58 = __this->___m_Hits_17;
		int32_t L_59 = V_6;
		float L_60;
		L_60 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78(((L_58)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_59))), NULL);
		float L_61 = V_4;
		if ((!(((float)L_60) < ((float)L_61))))
		{
			goto IL_01f8;
		}
	}
	{
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_62 = __this->___m_Hits_17;
		int32_t L_63 = V_6;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_64;
		L_64 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(((L_62)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_63))), NULL);
		bool L_65;
		L_65 = Collider_get_isTrigger_mFF457F6AA71D173F9A11BAF00C35E5AE12952F87(L_64, NULL);
		if (L_65)
		{
			goto IL_01f8;
		}
	}
	{
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_66 = __this->___m_Hits_17;
		int32_t L_67 = V_6;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_68;
		L_68 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(((L_66)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_67))), NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_69;
		L_69 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_68, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_69, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_70)
		{
			goto IL_01be;
		}
	}
	{
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_71 = __this->___m_Hits_17;
		int32_t L_72 = V_6;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_73;
		L_73 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(((L_71)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_72))), NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_74;
		L_74 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_73, NULL);
		String_t* L_75 = __this->___dontClipTag_10;
		bool L_76;
		L_76 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_74, L_75, NULL);
		if (L_76)
		{
			goto IL_01f8;
		}
	}

IL_01be:
	{
		// nearest = m_Hits[i].distance;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_77 = __this->___m_Hits_17;
		int32_t L_78 = V_6;
		float L_79;
		L_79 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78(((L_77)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_78))), NULL);
		V_4 = L_79;
		// targetDist = -m_Pivot.InverseTransformPoint(m_Hits[i].point).z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80 = __this->___m_Pivot_12;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_81 = __this->___m_Hits_17;
		int32_t L_82 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_82))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_80, L_83, NULL);
		float L_85 = L_84.___z_4;
		V_0 = ((-L_85));
		// hitSomething = true;
		V_3 = (bool)1;
	}

IL_01f8:
	{
		// for (int i = 0; i < m_Hits.Length; i++)
		int32_t L_86 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_01fe:
	{
		// for (int i = 0; i < m_Hits.Length; i++)
		int32_t L_87 = V_6;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_88 = __this->___m_Hits_17;
		if ((((int32_t)L_87) < ((int32_t)((int32_t)(((RuntimeArray*)L_88)->max_length)))))
		{
			goto IL_0149;
		}
	}
	{
		// if (hitSomething)
		bool L_89 = V_3;
		if (!L_89)
		{
			goto IL_0242;
		}
	}
	{
		// Debug.DrawRay(m_Ray.origin, -m_Pivot.forward*(targetDist + sphereCastRadius), Color.red);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_90 = (&__this->___m_Ray_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6(L_90, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92 = __this->___m_Pivot_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_92, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_93, NULL);
		float L_95 = V_0;
		float L_96 = __this->___sphereCastRadius_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_94, ((float)il2cpp_codegen_add(L_95, L_96)), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_98;
		L_98 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92(L_91, L_97, L_98, NULL);
	}

IL_0242:
	{
		// protecting = hitSomething;
		bool L_99 = V_3;
		ProtectCameraFromWallClip_set_protecting_m2BF39BD7E67B187ACC669C8505BF55686D79235E_inline(__this, L_99, NULL);
		// m_CurrentDist = Mathf.SmoothDamp(m_CurrentDist, targetDist, ref m_MoveVelocity,
		//                                m_CurrentDist > targetDist ? clipMoveTime : returnTime);
		float L_100 = __this->___m_CurrentDist_15;
		float L_101 = V_0;
		float* L_102 = (&__this->___m_MoveVelocity_14);
		float L_103 = __this->___m_CurrentDist_15;
		float L_104 = V_0;
		G_B21_0 = L_102;
		G_B21_1 = L_101;
		G_B21_2 = L_100;
		G_B21_3 = __this;
		if ((((float)L_103) > ((float)L_104)))
		{
			G_B22_0 = L_102;
			G_B22_1 = L_101;
			G_B22_2 = L_100;
			G_B22_3 = __this;
			goto IL_0268;
		}
	}
	{
		float L_105 = __this->___returnTime_5;
		G_B23_0 = L_105;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		G_B23_4 = G_B21_3;
		goto IL_026e;
	}

IL_0268:
	{
		float L_106 = __this->___clipMoveTime_4;
		G_B23_0 = L_106;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
		G_B23_4 = G_B22_3;
	}

IL_026e:
	{
		float L_107;
		L_107 = Mathf_SmoothDamp_m4B8C5AACFEBF58E93FF2A33832C27EF1E5AF7AFD_inline(G_B23_3, G_B23_2, G_B23_1, G_B23_0, NULL);
		G_B23_4->___m_CurrentDist_15 = L_107;
		// m_CurrentDist = Mathf.Clamp(m_CurrentDist, closestDistance, m_OriginalDist);
		float L_108 = __this->___m_CurrentDist_15;
		float L_109 = __this->___closestDistance_8;
		float L_110 = __this->___m_OriginalDist_13;
		float L_111;
		L_111 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_108, L_109, L_110, NULL);
		__this->___m_CurrentDist_15 = L_111;
		// m_Cam.localPosition = -Vector3.forward*m_CurrentDist;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112 = __this->___m_Cam_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_113, NULL);
		float L_115 = __this->___m_CurrentDist_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
		L_116 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_114, L_115, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_112, L_116, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.ProtectCameraFromWallClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtectCameraFromWallClip__ctor_m99169FE140EAE4848884F5DD4C6E991E3ED69080 (ProtectCameraFromWallClip_t52F6771775B0D2601663DA0C5DEC8A6F3650438C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float clipMoveTime = 0.05f;              // time taken to move when avoiding cliping (low value = fast, which it should be)
		__this->___clipMoveTime_4 = (0.0500000007f);
		// public float returnTime = 0.4f;                 // time taken to move back towards desired position, when not clipping (typically should be a higher value than clipMoveTime)
		__this->___returnTime_5 = (0.400000006f);
		// public float sphereCastRadius = 0.1f;           // the radius of the sphere used to test for object between camera and target
		__this->___sphereCastRadius_6 = (0.100000001f);
		// public float closestDistance = 0.5f;            // the closest distance the camera can be from the target
		__this->___closestDistance_8 = (0.5f);
		// public string dontClipTag = "Player";           // don't clip against objects with this tag (useful for not clipping against the targeted object)
		__this->___dontClipTag_10 = _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dontClipTag_10), (void*)_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Int32 UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer::Compare(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RayHitComparer_Compare_m9DAE577AD6B48F4AFF4FAB0438C960EF587BE2DA (RayHitComparer_t48174939C23091FD1B46B709FF44BD43167116CD* __this, RuntimeObject* ___x0, RuntimeObject* ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// return ((RaycastHit) x).distance.CompareTo(((RaycastHit) y).distance);
		RuntimeObject* L_0 = ___x0;
		V_0 = ((*(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)((RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)UnBox(L_0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_il2cpp_TypeInfo_var))));
		float L_1;
		L_1 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_0), NULL);
		V_1 = L_1;
		RuntimeObject* L_2 = ___y1;
		V_0 = ((*(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)((RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)UnBox(L_2, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_il2cpp_TypeInfo_var))));
		float L_3;
		L_3 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_0), NULL);
		int32_t L_4;
		L_4 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&V_1), L_3, NULL);
		return L_4;
	}
}
// System.Void UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayHitComparer__ctor_m06AEF5F3B142F395C5E703BCB8513050A33E289C (RayHitComparer_t48174939C23091FD1B46B709FF44BD43167116CD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFieldOfView_Start_m84E51C34BB3A14A9485559AA85BC2F2EDE3EB79D (TargetFieldOfView_t4B014C83655EF397B0868A6C7E071521C8F33F75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		AbstractTargetFollower_Start_m900ACFC81D342429D83E274C92B69467E443763D(__this, NULL);
		// m_BoundSize = MaxBoundsExtent(m_Target, m_IncludeEffectsInSize);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17*)__this)->___m_Target_4;
		bool L_1 = __this->___m_IncludeEffectsInSize_10;
		float L_2;
		L_2 = TargetFieldOfView_MaxBoundsExtent_m4481BD0F7BA4628D33EF36F4B515CB061018190E(L_0, L_1, NULL);
		__this->___m_BoundSize_11 = L_2;
		// m_Cam = GetComponentInChildren<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0(__this, Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		__this->___m_Cam_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Cam_13), (void*)L_3);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::FollowTarget(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFieldOfView_FollowTarget_mD00A53C6081BB5B4A5AD719AD08EFC9D37A17772 (TargetFieldOfView_t4B014C83655EF397B0868A6C7E071521C8F33F75* __this, float ___deltaTime0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float dist = (m_Target.position - transform.position).magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17*)__this)->___m_Target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_3, NULL);
		V_2 = L_4;
		float L_5;
		L_5 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		V_0 = L_5;
		// float requiredFOV = Mathf.Atan2(m_BoundSize, dist)*Mathf.Rad2Deg*m_ZoomAmountMultiplier;
		float L_6 = __this->___m_BoundSize_11;
		float L_7 = V_0;
		float L_8;
		L_8 = atan2f(L_6, L_7);
		float L_9 = __this->___m_ZoomAmountMultiplier_9;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (57.2957802f))), L_9));
		// m_Cam.fieldOfView = Mathf.SmoothDamp(m_Cam.fieldOfView, requiredFOV, ref m_FovAdjustVelocity, m_FovAdjustTime);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___m_Cam_13;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = __this->___m_Cam_13;
		float L_12;
		L_12 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_11, NULL);
		float L_13 = V_1;
		float* L_14 = (&__this->___m_FovAdjustVelocity_12);
		float L_15 = __this->___m_FovAdjustTime_8;
		float L_16;
		L_16 = Mathf_SmoothDamp_m4B8C5AACFEBF58E93FF2A33832C27EF1E5AF7AFD_inline(L_12, L_13, L_14, L_15, NULL);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_10, L_16, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::SetTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFieldOfView_SetTarget_mD8F8B74B849BBF54ECE82C3605BB239C4DBB85C7 (TargetFieldOfView_t4B014C83655EF397B0868A6C7E071521C8F33F75* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___newTransform0, const RuntimeMethod* method) 
{
	{
		// base.SetTarget(newTransform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___newTransform0;
		AbstractTargetFollower_SetTarget_m28BD1FECB5D3F99925BCA617888401258BD8A28C_inline(__this, L_0, NULL);
		// m_BoundSize = MaxBoundsExtent(newTransform, m_IncludeEffectsInSize);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___newTransform0;
		bool L_2 = __this->___m_IncludeEffectsInSize_10;
		float L_3;
		L_3 = TargetFieldOfView_MaxBoundsExtent_m4481BD0F7BA4628D33EF36F4B515CB061018190E(L_1, L_2, NULL);
		__this->___m_BoundSize_11 = L_3;
		// }
		return;
	}
}
// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::MaxBoundsExtent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TargetFieldOfView_MaxBoundsExtent_m4481BD0F7BA4628D33EF36F4B515CB061018190E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___obj0, bool ___includeEffects1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_2 = NULL;
	int32_t V_3 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_4 = NULL;
	{
		// var renderers = obj.GetComponentsInChildren<Renderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___obj0;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_1;
		L_1 = Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7(L_0, Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		// Bounds bounds = new Bounds();
		il2cpp_codegen_initobj((&V_0), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		// bool initBounds = false;
		V_1 = (bool)0;
		// foreach (Renderer r in renderers)
		V_2 = L_1;
		V_3 = 0;
		goto IL_004d;
	}

IL_0015:
	{
		// foreach (Renderer r in renderers)
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_2 = V_2;
		int32_t L_3 = V_3;
		int32_t L_4 = L_3;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_4 = L_5;
		// if (!((r is TrailRenderer) || (r is ParticleSystemRenderer)))
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6 = V_4;
		if (((TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39*)IsInstSealed((RuntimeObject*)L_6, TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_il2cpp_TypeInfo_var)))
		{
			goto IL_0049;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = V_4;
		if (((ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4*)IsInstSealed((RuntimeObject*)L_7, ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_il2cpp_TypeInfo_var)))
		{
			goto IL_0049;
		}
	}
	{
		// if (!initBounds)
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		// initBounds = true;
		V_1 = (bool)1;
		// bounds = r.bounds;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9 = V_4;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_10;
		L_10 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_9, NULL);
		V_0 = L_10;
		goto IL_0049;
	}

IL_003b:
	{
		// bounds.Encapsulate(r.bounds);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_11 = V_4;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_12;
		L_12 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_11, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_0), L_12, NULL);
	}

IL_0049:
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004d:
	{
		// foreach (Renderer r in renderers)
		int32_t L_14 = V_3;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_15 = V_2;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// float max = Mathf.Max(bounds.extents.x, bounds.extents.y, bounds.extents.z);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_0), NULL);
		float L_19 = L_18.___x_2;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (float)L_19);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = L_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_0), NULL);
		float L_22 = L_21.___y_3;
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (float)L_22);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_0), NULL);
		float L_25 = L_24.___z_4;
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (float)L_25);
		float L_26;
		L_26 = Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline(L_23, NULL);
		// return max;
		return L_26;
	}
}
// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFieldOfView__ctor_m0A99A3320C64F01337AB1F077D36A28046148F12 (TargetFieldOfView_t4B014C83655EF397B0868A6C7E071521C8F33F75* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float m_FovAdjustTime = 1;             // the time taken to adjust the current FOV to the desired target FOV amount.
		__this->___m_FovAdjustTime_8 = (1.0f);
		// [SerializeField] private float m_ZoomAmountMultiplier = 2;      // a multiplier for the FOV amount. The default of 2 makes the field of view twice as wide as required to fit the target.
		__this->___m_ZoomAmountMultiplier_9 = (2.0f);
		AbstractTargetFollower__ctor_m7BA92F6CC37CDA403608738E4F6CB8EB43889A98(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_name_m672BCFC7FD75869D777DC65A762C4993086232DD_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m2AD35C6B0B3DCC41272C113E4FAC7A0ED0D398D7_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// m_Value = value;
		float L_0 = ___value0;
		__this->___m_Value_1 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m4E1DA076090EC56955724109B3EE12AA07548016_inline (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		float L_3 = ___value2;
		float L_4 = ___a0;
		float L_5 = ___b1;
		float L_6 = ___a0;
		float L_7;
		L_7 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/((float)il2cpp_codegen_subtract(L_5, L_6)))), NULL);
		V_1 = L_7;
		goto IL_0023;
	}

IL_001b:
	{
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		float L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public int pointerId { get; set; }
		int32_t L_0 = __this->___U3CpointerIdU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_mF9AF15616F8F2FA90B757F63121F4D6455A9864C_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->___U3CmatchWithInputManagerU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m6E62059EDF0830800C3D6FD345919FFD30B1632F_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->___U3CmatchWithInputManagerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CvirtualMousePositionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E_inline (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CvirtualMousePositionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Value; }
		float L_0 = __this->___m_Value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mF940484D441F184D1DB91B58CE9A17A48D8B3F02_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Pressed; }
		bool L_0 = __this->___m_Pressed_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AICharacterControl_set_agent_mCFB80AF5991DDD29C9E5B1BFF6D42AD0E7E03D62_inline (AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B* __this, NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___value0, const RuntimeMethod* method) 
{
	{
		// public UnityEngine.AI.NavMeshAgent agent { get; private set; }             // the navmesh agent required for the path finding
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = ___value0;
		__this->___U3CagentU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CagentU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AICharacterControl_set_character_m88D24A0392EDD64986771E1DACDC50189BFFB5F4_inline (AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B* __this, ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* ___value0, const RuntimeMethod* method) 
{
	{
		// public ThirdPersonCharacter character { get; private set; } // the character we are controlling
		ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* L_0 = ___value0;
		__this->___U3CcharacterU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcharacterU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* AICharacterControl_get_agent_mF2D6FCCF78101649AC2DC630732565488BD6431A_inline (AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEngine.AI.NavMeshAgent agent { get; private set; }             // the navmesh agent required for the path finding
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->___U3CagentU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* AICharacterControl_get_character_m25851FC063EE4414838554CA7FCD618D03B4315A_inline (AICharacterControl_t8660B4B6A93015BD98A46EEA6E5CD1484043D36B* __this, const RuntimeMethod* method) 
{
	{
		// public ThirdPersonCharacter character { get; private set; } // the character we are controlling
		ThirdPersonCharacter_t9A1305E4F6D03897A4A33A73F2D7E9665218F41D* L_0 = __this->___U3CcharacterU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___planeNormal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___planeNormal1;
		float L_2;
		L_2 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		V_2 = L_6;
		goto IL_005d;
	}

IL_0019:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___planeNormal1;
		float L_9;
		L_9 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_7, L_8, NULL);
		V_3 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___planeNormal1;
		float L_13 = L_12.___x_2;
		float L_14 = V_3;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___vector0;
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___planeNormal1;
		float L_19 = L_18.___y_3;
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___vector0;
		float L_23 = L_22.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___planeNormal1;
		float L_25 = L_24.___z_4;
		float L_26 = V_3;
		float L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), ((float)il2cpp_codegen_subtract(L_11, ((float)(((float)il2cpp_codegen_multiply(L_13, L_14))/L_15)))), ((float)il2cpp_codegen_subtract(L_17, ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/L_21)))), ((float)il2cpp_codegen_subtract(L_23, ((float)(((float)il2cpp_codegen_multiply(L_25, L_26))/L_27)))), /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_005d;
	}

IL_005d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		return L_29;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LerpControlledBob_Offset_mF45148E4AA91DF2F5469362833D1A3B5B86AB689_inline (LerpControlledBob_t90DBCF1C05400816AC47DEDA372063005779AEBF* __this, const RuntimeMethod* method) 
{
	{
		// return m_Offset;
		float L_0 = __this->___m_Offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RigidbodyFirstPersonController_get_Grounded_mB84272DE91A38F0973356C611393D7870218B183_inline (RigidbodyFirstPersonController_t1B09C25866CABD817DDF4FD061D79CB02C96AD4D* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsGrounded; }
		bool L_0 = __this->___m_IsGrounded_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MovementSettings_get_Running_mFAB0A32A5A48C7010AB670736E7E3291425C1AAA_inline (MovementSettings_t2A2603584B4EDBFF934981D8FE39DD13722048DF* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Running; }
		bool L_0 = __this->___m_Running_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m4B8C5AACFEBF58E93FF2A33832C27EF1E5AF7AFD_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = ___current0;
		float L_2 = ___target1;
		float* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDamp_m00E482452BCED3FE0F16B4033B2B5323C7E30829(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline (float ___current0, float ___target1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = V_0;
		V_2 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___current0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___target1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mA20AB2E3DFAE680D742E9A17D969AF8A3E849711(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProtectCameraFromWallClip_set_protecting_m2BF39BD7E67B187ACC669C8505BF55686D79235E_inline (ProtectCameraFromWallClip_t52F6771775B0D2601663DA0C5DEC8A6F3650438C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool protecting { get; private set; }    // used for determining if there is an object between the target and the camera
		bool L_0 = ___value0;
		__this->___U3CprotectingU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AbstractTargetFollower_SetTarget_m28BD1FECB5D3F99925BCA617888401258BD8A28C_inline (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___newTransform0, const RuntimeMethod* method) 
{
	{
		// m_Target = newTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___newTransform0;
		__this->___m_Target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Target_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___values0;
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___values0;
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___values0;
		int32_t L_7 = V_4;
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) > ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___values0;
		int32_t L_13 = V_4;
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
