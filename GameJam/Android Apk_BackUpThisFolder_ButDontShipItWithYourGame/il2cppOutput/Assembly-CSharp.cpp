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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<Chunk>
struct List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Predicate`1<Chunk>
struct Predicate_1_t423A1CF921F241C3EA1C98E4944C4ECE91797DEB;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Collections.Generic.Queue`1<Chunk>
struct Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Chunk[]
struct ChunkU5BU5D_t3DC2D112C743EDBADB6F98F2F8D357999DFEB2FB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraStop
struct CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// Chunk
struct Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// BrokenVector.LowPolyFencePack.DoorController
struct DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607;
// BrokenVector.LowPolyFencePack.DoorToggle
struct DoorToggle_t637CE7CD5986F59649EBE877E7446F77E595279D;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// FeatherRotate
struct FeatherRotate_t2BDB602C0B3AB1733DEF7677DC04AFEE3478DF6B;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MouseLook
struct MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4;
// Movement
struct Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Pickup
struct Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8;
// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351;
// Points
struct Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8;
// PracticeMovement
struct PracticeMovement_t589868FEBB017B36EF94E472EF37BC154C58DB9E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// Test
struct Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ThiefMovement
struct ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WorldGeneration
struct WorldGeneration_t28002E89B20EBD9DE09419AA6BC46B6E48BBE883;
// fsound
struct fsound_tCEA99A909ADAD477FE4DFAB2E512C2718B503E15;
// peacocksound
struct peacocksound_tFA4F9DCEBAE98A0979BF162820033BEBB76740B3;
// thiefhurdles
struct thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// CameraStop/<StartCounter>d__9
struct U3CStartCounterU3Ed__9_tFE67EB76304B6B738B2178234317143C42C3E1F0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Movement/<StartCounter>d__24
struct U3CStartCounterU3Ed__24_tA1B2BF8985CE33F85821F135F5A5EAE061B26151;
// PracticeMovement/<StartCounter>d__11
struct U3CStartCounterU3Ed__11_t671C889661B37D3F3644C480B3408D7E374559DC;
// Test/<StartCounter>d__7
struct U3CStartCounterU3Ed__7_t9D6AA2F70F71C305F2E6C25E8584327862AC4F50;
// WorldGeneration/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tD0C4448D99B23B077376EDF2365AF240B17A68E0;
// thiefhurdles/<StartCounter>d__8
struct U3CStartCounterU3Ed__8_t622EA1C78CA0BFEC2FFFC408DEFC114E6BFB3395;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoorState_tB65DA677E161529FF9A9DF0DFFFE5F2EFAFCE67F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t423A1CF921F241C3EA1C98E4944C4ECE91797DEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartCounterU3Ed__11_t671C889661B37D3F3644C480B3408D7E374559DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartCounterU3Ed__24_tA1B2BF8985CE33F85821F135F5A5EAE061B26151_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartCounterU3Ed__7_t9D6AA2F70F71C305F2E6C25E8584327862AC4F50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartCounterU3Ed__8_t622EA1C78CA0BFEC2FFFC408DEFC114E6BFB3395_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartCounterU3Ed__9_tFE67EB76304B6B738B2178234317143C42C3E1F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_tD0C4448D99B23B077376EDF2365AF240B17A68E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral092F767D1737D0F2FE7F997B865FCA98D64AF9F2;
IL2CPP_EXTERN_C String_t* _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A;
IL2CPP_EXTERN_C String_t* _stringLiteral0F10C8F01816F23DEE001DE0E3A831AAB792D49C;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1E5D337A129DB732D8854886BC9FED657DAF3083;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral23B4237CD57C98463074F50A9168192F28DC9F95;
IL2CPP_EXTERN_C String_t* _stringLiteral25A1451C7BCC7FBE9AF710A8211A11E79F51AB1D;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28;
IL2CPP_EXTERN_C String_t* _stringLiteral3849E3193D7B963F2106FF02694FC3989D46E373;
IL2CPP_EXTERN_C String_t* _stringLiteral3DB39EDEC2EDFD929BEDD954CA23656E072385C5;
IL2CPP_EXTERN_C String_t* _stringLiteral4E320281B34C5351DD426E6D028E4C903AD77887;
IL2CPP_EXTERN_C String_t* _stringLiteral6BCBEAFFC2969EB94D44226C09BB3187F28C5CC0;
IL2CPP_EXTERN_C String_t* _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral812B8B9C8CDEB9CDFD3BEA80925AE9C09D7B187C;
IL2CPP_EXTERN_C String_t* _stringLiteral868C14486CE381CE50BB45602F8FDA59E5A2CD29;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral8871F82DA08C9029B3CB5BAEC197673B3D77DD91;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral959DE0B85DCF036EB7C121B3C52E31A6769A7975;
IL2CPP_EXTERN_C String_t* _stringLiteral9ACE48B98024B3AB3A1E0F2729BB672A3D313E21;
IL2CPP_EXTERN_C String_t* _stringLiteral9B1CF05486392B109EE5E1C6F8F3769A8C65518F;
IL2CPP_EXTERN_C String_t* _stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2;
IL2CPP_EXTERN_C String_t* _stringLiteral9F1A25FA63CB4637BD115DB082C2037A3705D754;
IL2CPP_EXTERN_C String_t* _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B;
IL2CPP_EXTERN_C String_t* _stringLiteralAAF6653D53BF80AD7987AA17C0764CF3B1797FD4;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF50CFB09F5152A98877EEC4435908A899EA45E;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralBB3F795AD10CDB181A2D20BB90B9D6B2E1E5A4F7;
IL2CPP_EXTERN_C String_t* _stringLiteralC25210E7FCBA74C0F373D81EBA94B9782D32D05B;
IL2CPP_EXTERN_C String_t* _stringLiteralD2CDF032B5B27C8A0079D889B168525579BA30AE;
IL2CPP_EXTERN_C String_t* _stringLiteralD2ED775A4F7E82062A0C8050479640FEC049A97A;
IL2CPP_EXTERN_C String_t* _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F;
IL2CPP_EXTERN_C String_t* _stringLiteralD6831801479D0DE0C14710FFC8F34F0A895D00DD;
IL2CPP_EXTERN_C String_t* _stringLiteralDBF394BFD43F20CA2D96FFA5FB3FFBA9D0EC58E5;
IL2CPP_EXTERN_C String_t* _stringLiteralF4F9925936E0E3F6DFDEB59F5F6C228A9FF1A1E3;
IL2CPP_EXTERN_C String_t* _stringLiteralF5653402EEBA3CF8877DFAF1E895C2A0478DA01D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7FB7A38EFE58FF6514B976E1F21EE4D80176370;
IL2CPP_EXTERN_C String_t* _stringLiteralFBA56742EA9B24F90D9401B0A33A583AF1C5CB3A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607_mA09EE932A000C0F2F0A2B9BD90A1952CE4E41D50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPoints_tF10CC61A9E818CA28C573D89F911610BFDB894F8_mD56439A2EC629C0D92FF9B896D9384C2CE4322AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisChunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060_mD6C9C746C2686E4AD5C82E179B336F6C6AC1E05A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_mDC661C12914A5AAA816F06BA8E61E8EF1CD9A9EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757_m839F9D6E425D030F66BA5CD7932654C2A260986F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m40E5A66F960153686935BD4FF642E19D4D36BA1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m2B2E04A3752853ED494FC90212428ADA20628B95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAEBFD74C6C8CF3E70E6E414A7349E8EC3C476605_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mC0B346D7350B815D69F2EFD41040192EFA1B881B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mA0EDC6D6C7BC37213598C7C1E20B09D70CE6B60E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_m81722792FCF279A9949BC5756A69F6AB1F7BF487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m473EABB76EE736DF1E6ABD4DA8051B16F4A3557E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m6FC054CCCB216A116527B3839B6A0FB1BB7A5EA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartCounterU3Ed__11_System_Collections_IEnumerator_Reset_m8CD462EB20D51A24E4C3EFA95D96C20C29ED41C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartCounterU3Ed__24_System_Collections_IEnumerator_Reset_m73851DDE715628F001D45C430B9F6272BEA10069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartCounterU3Ed__7_System_Collections_IEnumerator_Reset_m22EF52331D4F9DC943F8AFA46879EFAD2BD5CE2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartCounterU3Ed__8_System_Collections_IEnumerator_Reset_m9DB1471EB8D08F8904D06D4604E6DEDC84804BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartCounterU3Ed__9_System_Collections_IEnumerator_Reset_m37DC563F1E9DDA997A029459AFFDFEE4D6123707_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CSpawnNewChunkU3Eb__0_m8BC3793561AF1B26562A040F05394A0E1DB4A99D_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<Chunk>
struct List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ChunkU5BU5D_t3DC2D112C743EDBADB6F98F2F8D357999DFEB2FB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ChunkU5BU5D_t3DC2D112C743EDBADB6F98F2F8D357999DFEB2FB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
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

// System.Collections.Generic.Queue`1<Chunk>
struct Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ChunkU5BU5D_t3DC2D112C743EDBADB6F98F2F8D357999DFEB2FB* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

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

// CameraStop/<StartCounter>d__9
struct U3CStartCounterU3Ed__9_tFE67EB76304B6B738B2178234317143C42C3E1F0  : public RuntimeObject
{
	// System.Int32 CameraStop/<StartCounter>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CameraStop/<StartCounter>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CameraStop CameraStop/<StartCounter>d__9::<>4__this
	CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F* ___U3CU3E4__this_2;
	// System.Int32 CameraStop/<StartCounter>d__9::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// Movement/<StartCounter>d__24
struct U3CStartCounterU3Ed__24_tA1B2BF8985CE33F85821F135F5A5EAE061B26151  : public RuntimeObject
{
	// System.Int32 Movement/<StartCounter>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Movement/<StartCounter>d__24::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Movement Movement/<StartCounter>d__24::<>4__this
	Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* ___U3CU3E4__this_2;
	// System.Int32 Movement/<StartCounter>d__24::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// PracticeMovement/<StartCounter>d__11
struct U3CStartCounterU3Ed__11_t671C889661B37D3F3644C480B3408D7E374559DC  : public RuntimeObject
{
	// System.Int32 PracticeMovement/<StartCounter>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PracticeMovement/<StartCounter>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PracticeMovement PracticeMovement/<StartCounter>d__11::<>4__this
	PracticeMovement_t589868FEBB017B36EF94E472EF37BC154C58DB9E* ___U3CU3E4__this_2;
	// System.Int32 PracticeMovement/<StartCounter>d__11::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// Test/<StartCounter>d__7
struct U3CStartCounterU3Ed__7_t9D6AA2F70F71C305F2E6C25E8584327862AC4F50  : public RuntimeObject
{
	// System.Int32 Test/<StartCounter>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Test/<StartCounter>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Test Test/<StartCounter>d__7::<>4__this
	Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* ___U3CU3E4__this_2;
	// System.Int32 Test/<StartCounter>d__7::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// WorldGeneration/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tD0C4448D99B23B077376EDF2365AF240B17A68E0  : public RuntimeObject
{
	// WorldGeneration WorldGeneration/<>c__DisplayClass12_0::<>4__this
	WorldGeneration_t28002E89B20EBD9DE09419AA6BC46B6E48BBE883* ___U3CU3E4__this_0;
	// System.Int32 WorldGeneration/<>c__DisplayClass12_0::randomIndex
	int32_t ___randomIndex_1;
};

// thiefhurdles/<StartCounter>d__8
struct U3CStartCounterU3Ed__8_t622EA1C78CA0BFEC2FFFC408DEFC114E6BFB3395  : public RuntimeObject
{
	// System.Int32 thiefhurdles/<StartCounter>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object thiefhurdles/<StartCounter>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// thiefhurdles thiefhurdles/<StartCounter>d__8::<>4__this
	thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E* ___U3CU3E4__this_2;
	// System.Int32 thiefhurdles/<StartCounter>d__8::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
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

// UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2  : public RuntimeObject
{
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE  : public TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Predicate`1<Chunk>
struct Predicate_1_t423A1CF921F241C3EA1C98E4944C4ECE91797DEB  : public MulticastDelegate_t
{
};

// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712  : public Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC
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

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
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

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CameraStop
struct CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Movement CameraStop::ms
	Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* ___ms_4;
	// UnityEngine.GameObject CameraStop::Player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Player_5;
	// System.Single CameraStop::cameraSpeed
	float ___cameraSpeed_6;
	// System.Single CameraStop::countDown
	float ___countDown_7;
	// UnityEngine.GameObject CameraStop::StopScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___StopScreen_8;
};

// Chunk
struct Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Chunk::chunkLength
	float ___chunkLength_4;
};

// BrokenVector.LowPolyFencePack.DoorController
struct DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BrokenVector.LowPolyFencePack.DoorController/DoorState BrokenVector.LowPolyFencePack.DoorController::InitialState
	int32_t ___InitialState_4;
	// System.Single BrokenVector.LowPolyFencePack.DoorController::AnimationSpeed
	float ___AnimationSpeed_5;
	// UnityEngine.AnimationClip BrokenVector.LowPolyFencePack.DoorController::openAnimation
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___openAnimation_6;
	// UnityEngine.AnimationClip BrokenVector.LowPolyFencePack.DoorController::closeAnimation
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___closeAnimation_7;
	// UnityEngine.Animation BrokenVector.LowPolyFencePack.DoorController::animator
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___animator_8;
	// BrokenVector.LowPolyFencePack.DoorController/DoorState BrokenVector.LowPolyFencePack.DoorController::currentState
	int32_t ___currentState_9;
};

// BrokenVector.LowPolyFencePack.DoorToggle
struct DoorToggle_t637CE7CD5986F59649EBE877E7446F77E595279D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BrokenVector.LowPolyFencePack.DoorController BrokenVector.LowPolyFencePack.DoorToggle::doorController
	DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* ___doorController_4;
};

// FeatherRotate
struct FeatherRotate_t2BDB602C0B3AB1733DEF7677DC04AFEE3478DF6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single FeatherRotate::rotateSpeed
	float ___rotateSpeed_4;
};

// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Menu::playSound
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playSound_4;
	// UnityEngine.GameObject Menu::pauseSound
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseSound_5;
	// UnityEngine.AudioSource Menu::melody
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___melody_6;
};

// MouseLook
struct MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MouseLook::mouseSensitivity
	float ___mouseSensitivity_4;
	// UnityEngine.Transform MouseLook::playerBody
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerBody_5;
	// System.Single MouseLook::xRotation
	float ___xRotation_6;
};

// Movement
struct Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Movement::speed
	float ___speed_4;
	// System.Single Movement::force
	float ___force_5;
	// System.Single Movement::turnSpeed
	float ___turnSpeed_6;
	// System.Single Movement::downForce
	float ___downForce_7;
	// System.Boolean Movement::isGround
	bool ___isGround_8;
	// System.Boolean Movement::isPlatform
	bool ___isPlatform_9;
	// System.Boolean Movement::jump
	bool ___jump_10;
	// System.Boolean Movement::hit
	bool ___hit_11;
	// System.Boolean Movement::stand
	bool ___stand_12;
	// System.Boolean Movement::under
	bool ___under_13;
	// System.Single Movement::countDown
	float ___countDown_14;
	// UnityEngine.Vector3 Movement::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_15;
	// System.Int32 Movement::pixelDistToDetect
	int32_t ___pixelDistToDetect_16;
	// System.Boolean Movement::fingerDown
	bool ___fingerDown_17;
	// UnityEngine.GameObject Movement::standCollider
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___standCollider_18;
	// UnityEngine.GameObject Movement::rollCollider
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rollCollider_19;
	// System.Boolean Movement::slide
	bool ___slide_20;
	// UnityEngine.Animator Movement::playerAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___playerAnim_21;
	// UnityEngine.Rigidbody Movement::playerRb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___playerRb_22;
};

// Pickup
struct Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ThiefMovement Pickup::tm
	ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757* ___tm_4;
	// UnityEngine.GameObject Pickup::script
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___script_5;
};

// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CharacterController PlayerMovement::controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___controller_4;
	// System.Single PlayerMovement::speed
	float ___speed_5;
	// System.Single PlayerMovement::gravity
	float ___gravity_6;
	// System.Single PlayerMovement::jumpHeight
	float ___jumpHeight_7;
	// UnityEngine.Transform PlayerMovement::groundCheck
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___groundCheck_8;
	// System.Single PlayerMovement::groundDistance
	float ___groundDistance_9;
	// UnityEngine.LayerMask PlayerMovement::groundMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundMask_10;
	// UnityEngine.Vector3 PlayerMovement::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_11;
	// System.Boolean PlayerMovement::isGrounded
	bool ___isGrounded_12;
};

// Points
struct Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI Points::score
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___score_4;
	// System.Int32 Points::points
	int32_t ___points_5;
};

// PracticeMovement
struct PracticeMovement_t589868FEBB017B36EF94E472EF37BC154C58DB9E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PracticeMovement::speed
	float ___speed_4;
	// System.Boolean PracticeMovement::right
	bool ___right_5;
	// System.Boolean PracticeMovement::left
	bool ___left_6;
	// UnityEngine.Vector3 PracticeMovement::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_7;
	// System.Int32 PracticeMovement::pixelDistToDetect
	int32_t ___pixelDistToDetect_8;
	// System.Boolean PracticeMovement::fingerDown
	bool ___fingerDown_9;
	// System.Single PracticeMovement::movementSpeed
	float ___movementSpeed_10;
	// UnityEngine.Animator PracticeMovement::playerAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___playerAnim_11;
	// System.Single PracticeMovement::countDown
	float ___countDown_12;
};

// Test
struct Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Test::countDown
	float ___countDown_4;
	// UnityEngine.BoxCollider Test::hurdle
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___hurdle_5;
	// Movement Test::ms
	Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* ___ms_6;
	// UnityEngine.GameObject Test::script
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___script_7;
	// UnityEngine.GameObject Test::ColliderObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ColliderObj_8;
};

// ThiefMovement
struct ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ThiefMovement::thiefSpeed
	float ___thiefSpeed_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WorldGeneration
struct WorldGeneration_t28002E89B20EBD9DE09419AA6BC46B6E48BBE883  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single WorldGeneration::chunkSpawnZ
	float ___chunkSpawnZ_4;
	// System.Collections.Generic.Queue`1<Chunk> WorldGeneration::activeChunks
	Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7* ___activeChunks_5;
	// System.Collections.Generic.List`1<Chunk> WorldGeneration::chunkPool
	List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* ___chunkPool_6;
	// System.Int32 WorldGeneration::firstChunkSpawnPosition
	int32_t ___firstChunkSpawnPosition_7;
	// System.Int32 WorldGeneration::chunkOnScreen
	int32_t ___chunkOnScreen_8;
	// System.Single WorldGeneration::despawnDistance
	float ___despawnDistance_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WorldGeneration::chunkPrefab
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___chunkPrefab_10;
	// UnityEngine.Transform WorldGeneration::cameraTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraTransform_11;
};

// fsound
struct fsound_tCEA99A909ADAD477FE4DFAB2E512C2718B503E15  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource fsound::s
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___s_4;
};

// peacocksound
struct peacocksound_tFA4F9DCEBAE98A0979BF162820033BEBB76740B3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource peacocksound::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_4;
	// System.Single peacocksound::timeBetweenShots
	float ___timeBetweenShots_5;
	// System.Single peacocksound::timer
	float ___timer_6;
};

// thiefhurdles
struct thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.BoxCollider thiefhurdles::hitCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___hitCollider_4;
	// UnityEngine.BoxCollider thiefhurdles::safeCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___safeCollider_5;
	// System.Boolean thiefhurdles::thiefHit
	bool ___thiefHit_6;
	// System.Single thiefhurdles::countDown
	float ___countDown_7;
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m8D6171F09AC784866255D2634A3986A75644BE6C (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Movement>()
inline Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* GameObject_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_mDC661C12914A5AAA816F06BA8E61E8EF1CD9A9EB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CameraStop::StartCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraStop_StartCounter_mDBEF9E44648A003DBA8B952E33B5C6A5DA29E7B5 (CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Void CameraStop/<StartCounter>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__9__ctor_m4C193B5D46A5F89A98C7369A164F438DA4B0002B (U3CStartCounterU3Ed__9_tFE67EB76304B6B738B2178234317143C42C3E1F0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_smoothDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_smoothDeltaTime_m41881A3290CC95E6EF2D55289D1D872A45DC1775 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Points>()
inline Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8* Component_GetComponent_TisPoints_tF10CC61A9E818CA28C573D89F911610BFDB894F8_mD56439A2EC629C0D92FF9B896D9384C2CE4322AC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<ThiefMovement>()
inline ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757* GameObject_GetComponent_TisThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757_m839F9D6E425D030F66BA5CD7932654C2A260986F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF (const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void Movement::Roll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Roll_m3B07E37D69AB4F932BD5E1B8DCD5911D79547F28 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Movement::StartCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Movement_StartCounter_mD1C1DB33C26EE5C0BF5ADD56AD385D1430E01297 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Void Movement/<StartCounter>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__24__ctor_m688AFE23EEC07C45D76C473BE3287AB3A31DDAB4 (U3CStartCounterU3Ed__24_tA1B2BF8985CE33F85821F135F5A5EAE061B26151* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PracticeMovement::StartCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PracticeMovement_StartCounter_m54A45D1970012E270631F34C21CFAE87A3BB6DA6 (PracticeMovement_t589868FEBB017B36EF94E472EF37BC154C58DB9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void PracticeMovement/<StartCounter>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__11__ctor_mC792810E725214BBE278C290E95DF43C3BDD2477 (U3CStartCounterU3Ed__11_t671C889661B37D3F3644C480B3408D7E374559DC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Test::StartCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Test_StartCounter_m816068F24CF187223515E2DC48E97B8639D76DCE (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, const RuntimeMethod* method) ;
// System.Void Test/<StartCounter>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__7__ctor_m9E014F38F3C221B5C7C23489F5376F09D87BCB44 (U3CStartCounterU3Ed__7_t9D6AA2F70F71C305F2E6C25E8584327862AC4F50* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void WorldGeneration::ResetWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_ResetWorld_mF5212E2D01C69C1E5B555BCAE1B5D6526A511794 (WorldGeneration_t28002E89B20EBD9DE09419AA6BC46B6E48BBE883* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void WorldGeneration::ScanPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_ScanPosition_mC225017E5CE28DF48DEFE6745B9B0175A2899BA1 (WorldGeneration_t28002E89B20EBD9DE09419AA6BC46B6E48BBE883* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<Chunk>::Peek()
inline Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* Queue_1_Peek_m81722792FCF279A9949BC5756A69F6AB1F7BF487 (Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7* __this, const RuntimeMethod* method)
{
	return ((  Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* (*) (Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7*, const RuntimeMethod*))Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared)(__this, method);
}
// System.Void WorldGeneration::SpawnNewChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_SpawnNewChunk_m6DB83D4013330ACA4A88B328F1DF8C3CB282A452 (WorldGeneration_t28002E89B20EBD9DE09419AA6BC46B6E48BBE883* __this, const RuntimeMethod* method) ;
// System.Void WorldGeneration::DeleteLastChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_DeleteLastChunk_m3999ED347332EF5818E44C7B3632945D9D3CCBFB (WorldGeneration_t28002E89B20EBD9DE09419AA6BC46B6E48BBE883* __this, const RuntimeMethod* method) ;
// System.Void WorldGeneration/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mA3274F3AD7703FE53CB05DE35665E8F27719168A (U3CU3Ec__DisplayClass12_0_tD0C4448D99B23B077376EDF2365AF240B17A68E0* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Chunk>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mB4B9ED69B4B946B2B7ADCBD0731864ABA8B34A3F (Predicate_1_t423A1CF921F241C3EA1C98E4944C4ECE91797DEB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t423A1CF921F241C3EA1C98E4944C4ECE91797DEB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<Chunk>::Find(System.Predicate`1<T>)
inline Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* List_1_Find_m2B2E04A3752853ED494FC90212428ADA20628B95 (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* __this, Predicate_1_t423A1CF921F241C3EA1C98E4944C4ECE91797DEB* ___match0, const RuntimeMethod* method)
{
	return ((  Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* (*) (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA*, Predicate_1_t423A1CF921F241C3EA1C98E4944C4ECE91797DEB*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<Chunk>()
inline Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* GameObject_GetComponent_TisChunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060_mD6C9C746C2686E4AD5C82E179B336F6C6AC1E05A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Chunk>::Enqueue(T)
inline void Queue_1_Enqueue_mA0EDC6D6C7BC37213598C7C1E20B09D70CE6B60E (Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7* __this, Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7*, Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// Chunk Chunk::ShowChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* Chunk_ShowChunk_m38B7A130142DA413145307F22C2F620ECA2801DC (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<Chunk>::Dequeue()
inline Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* Queue_1_Dequeue_mC0B346D7350B815D69F2EFD41040192EFA1B881B (Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7* __this, const RuntimeMethod* method)
{
	return ((  Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* (*) (Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// Chunk Chunk::HideChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* Chunk_HideChunk_mFB0F7B469F21AEF9675D4785E490F2F146D6A216 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Chunk>::Add(T)
inline void List_1_Add_m40E5A66F960153686935BD4FF642E19D4D36BA1A_inline (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* __this, Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA*, Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<Chunk>::get_Count()
inline int32_t Queue_1_get_Count_m6FC054CCCB216A116527B3839B6A0FB1BB7A5EA7_inline (Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Chunk>::.ctor()
inline void Queue_1__ctor_m473EABB76EE736DF1E6ABD4DA8051B16F4A3557E (Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Chunk>::.ctor()
inline void List_1__ctor_mAEBFD74C6C8CF3E70E6E414A7349E8EC3C476605 (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator thiefhurdles::StartCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* thiefhurdles_StartCounter_m224B8D48B9714FDC3DAC6890FD7346E72EC1CF7D (thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E* __this, const RuntimeMethod* method) ;
// System.Void thiefhurdles/<StartCounter>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__8__ctor_mAF21AFDEC79F049FFCD004C137D4F23FE137B131 (U3CStartCounterU3Ed__8_t622EA1C78CA0BFEC2FFFC408DEFC114E6BFB3395* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void BrokenVector.LowPolyFencePack.DoorController::Animate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController_Animate_mF330E38A70AD7554637FE4703D4388D5573C098D (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) ;
// BrokenVector.LowPolyFencePack.DoorController/DoorState BrokenVector.LowPolyFencePack.DoorController::get_CurrentState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DoorController_get_CurrentState_m10DFDE50F042C43A25528B905B73559B5C94AFA1_inline (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animation>()
inline Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animation::set_playAutomatically(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_set_playAutomatically_mF293663249E24B5D595F669515551F06309C96D0 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::set_legacy(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_AddClip_m10EDEAA1060E0356379BFE9AB24F97C9EBBED1A3 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip0, String_t* ___newName1, const RuntimeMethod* method) ;
// System.String BrokenVector.LowPolyFencePack.DoorController::GetCurrentAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DoorController_GetCurrentAnimation_m7A212994A7997783D313B5F39C347474C49AAD77 (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* Animation_get_Item_m60997A8CDE7F415FC55FBB0D6D3F28339C4B32E8 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationState::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_speed_m9FADB34E8FA313E07ABF8F90B6F4179D2DAF9E7D (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animation::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___animation0, const RuntimeMethod* method) ;
// System.Boolean BrokenVector.LowPolyFencePack.DoorController::get_IsDoorClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DoorController_get_IsDoorClosed_m8D72CCCE18CCDC51FEF860817274E3E6A83E8287 (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) ;
// System.Void BrokenVector.LowPolyFencePack.DoorController::set_CurrentState(BrokenVector.LowPolyFencePack.DoorController/DoorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController_set_CurrentState_mED5164D84AA548BB5DB9BF851FE7252F06302425 (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean BrokenVector.LowPolyFencePack.DoorController::get_IsDoorOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DoorController_get_IsDoorOpen_mED0E43F2137FAC2A1D958EBA93C65BFBC57C2E59 (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) ;
// System.Void BrokenVector.LowPolyFencePack.DoorController::CloseDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController_CloseDoor_m9B2BEC56EAB5EA626A31E20C7001749C50014CBA (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) ;
// System.Void BrokenVector.LowPolyFencePack.DoorController::OpenDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController_OpenDoor_mAD7D25AF52286A8143F9C3470ECDEEB748F7900D (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<BrokenVector.LowPolyFencePack.DoorController>()
inline DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* Component_GetComponent_TisDoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607_mA09EE932A000C0F2F0A2B9BD90A1952CE4E41D50 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void BrokenVector.LowPolyFencePack.DoorController::ToggleDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController_ToggleDoor_mB8CF6CD38A611CBF095A133AFB9F8585E64E39B6 (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void MouseLook::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Start_m08FD16A47A96624540CD1B8EBA5FFAA1FD75E686 (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// }
		return;
	}
}
// System.Void MouseLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Update_m18C0A114A78C19B888A9F74CA1FE5A837DF9E42A (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float mouseX = Input.GetAxis("Mouse X") * mouseSensitivity * Time.deltaTime;
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_1 = __this->___mouseSensitivity_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		// float mouseY = Input.GetAxis("Mouse Y") * mouseSensitivity * Time.deltaTime;
		float L_3;
		L_3 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_4 = __this->___mouseSensitivity_4;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5));
		// xRotation -= mouseY;
		float L_6 = __this->___xRotation_6;
		float L_7 = V_1;
		__this->___xRotation_6 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// xRotation = Mathf.Clamp(xRotation, -90f, 90f);
		float L_8 = __this->___xRotation_6;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_8, (-90.0f), (90.0f), NULL);
		__this->___xRotation_6 = L_9;
		// transform.localRotation = Quaternion.Euler(xRotation, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_11 = __this->___xRotation_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_11, (0.0f), (0.0f), NULL);
		NullCheck(L_10);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_10, L_12, NULL);
		// playerBody.Rotate(Vector3.up * mouseX);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___playerBody_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		NullCheck(L_13);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_13, L_16, NULL);
		// }
		return;
	}
}
// System.Void MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_m4C8A79A3CB8D46D3E22E3AB1F645D41ED589312B (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	{
		// public float mouseSensitivity = 100f;
		__this->___mouseSensitivity_4 = (100.0f);
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
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_m5BB6CE35AF68EE00CFEB4BA5EBA17E10667551D3 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB3F795AD10CDB181A2D20BB90B9D6B2E1E5A4F7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// isGrounded = Physics.CheckSphere(groundCheck.position, groundDistance, groundMask);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___groundCheck_8;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = __this->___groundDistance_9;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->___groundMask_10;
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_3, NULL);
		bool L_5;
		L_5 = Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F(L_1, L_2, L_4, NULL);
		__this->___isGrounded_12 = L_5;
		// if (isGrounded && velocity.y < 0)
		bool L_6 = __this->___isGrounded_12;
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___velocity_11);
		float L_8 = L_7->___y_3;
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		// velocity.y = -2f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___velocity_11);
		L_9->___y_3 = (-2.0f);
	}

IL_0051:
	{
		// if (Input.GetKey("left shift") && isGrounded)
		bool L_10;
		L_10 = Input_GetKey_m8D6171F09AC784866255D2634A3986A75644BE6C(_stringLiteralBB3F795AD10CDB181A2D20BB90B9D6B2E1E5A4F7, NULL);
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		bool L_11 = __this->___isGrounded_12;
		if (!L_11)
		{
			goto IL_0072;
		}
	}
	{
		// speed = 10;
		__this->___speed_5 = (10.0f);
		goto IL_007d;
	}

IL_0072:
	{
		// speed = 5;
		__this->___speed_5 = (5.0f);
	}

IL_007d:
	{
		// float x = Input.GetAxis("Horizontal");
		float L_12;
		L_12 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_12;
		// float z = Input.GetAxis("Vertical");
		float L_13;
		L_13 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_13;
		// Vector3 move = transform.right * x + transform.forward * z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_14, NULL);
		float L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_18, NULL);
		float L_20 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_21, NULL);
		V_2 = L_22;
		// controller.Move(move * speed * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_23 = __this->___controller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
		float L_25 = __this->___speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_24, L_25, NULL);
		float L_27;
		L_27 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, L_27, NULL);
		NullCheck(L_23);
		int32_t L_29;
		L_29 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_23, L_28, NULL);
		// if (Input.GetButtonDown("Jump") && isGrounded)
		bool L_30;
		L_30 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_30)
		{
			goto IL_0114;
		}
	}
	{
		bool L_31 = __this->___isGrounded_12;
		if (!L_31)
		{
			goto IL_0114;
		}
	}
	{
		// velocity.y = Mathf.Sqrt(jumpHeight * -2f * gravity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&__this->___velocity_11);
		float L_33 = __this->___jumpHeight_7;
		float L_34 = __this->___gravity_6;
		float L_35;
		L_35 = sqrtf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_33, (-2.0f))), L_34)));
		L_32->___y_3 = L_35;
	}

IL_0114:
	{
		// velocity.y += gravity * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = (&__this->___velocity_11);
		float* L_37 = (&L_36->___y_3);
		float* L_38 = L_37;
		float L_39 = *((float*)L_38);
		float L_40 = __this->___gravity_6;
		float L_41;
		L_41 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		*((float*)L_38) = (float)((float)il2cpp_codegen_add(L_39, ((float)il2cpp_codegen_multiply(L_40, L_41))));
		// controller.Move(velocity * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_42 = __this->___controller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = __this->___velocity_11;
		float L_44;
		L_44 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_43, L_44, NULL);
		NullCheck(L_42);
		int32_t L_46;
		L_46 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_42, L_45, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mB37559C5B0638161878D20E00B7C672FC38BBBAA (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 5;
		__this->___speed_5 = (5.0f);
		// public float gravity = -9.18f;
		__this->___gravity_6 = (-9.18000031f);
		// public float jumpHeight = 3f;
		__this->___jumpHeight_7 = (3.0f);
		// public float groundDistance = 0.4f;
		__this->___groundDistance_9 = (0.400000006f);
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
// System.Void CameraStop::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraStop_Awake_mFF799F9AB6DA072FEA79FA2F926AB1CCCE164BFE (CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_mDC661C12914A5AAA816F06BA8E61E8EF1CD9A9EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ms = Player.GetComponent<Movement>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Player_5;
		NullCheck(L_0);
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_1;
		L_1 = GameObject_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_mDC661C12914A5AAA816F06BA8E61E8EF1CD9A9EB(L_0, GameObject_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_mDC661C12914A5AAA816F06BA8E61E8EF1CD9A9EB_RuntimeMethod_var);
		__this->___ms_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ms_4), (void*)L_1);
		// cameraSpeed = ms.speed;
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_2 = __this->___ms_4;
		NullCheck(L_2);
		float L_3 = L_2->___speed_4;
		__this->___cameraSpeed_6 = L_3;
		// }
		return;
	}
}
// System.Void CameraStop::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraStop_Update_m618B33A5C7F3BCAD429C72F2451F8E005584815F (CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6831801479D0DE0C14710FFC8F34F0A895D00DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(ms.hit)
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_0 = __this->___ms_4;
		NullCheck(L_0);
		bool L_1 = L_0->___hit_11;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// Debug.Log("Camera is conneccted");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD6831801479D0DE0C14710FFC8F34F0A895D00DD, NULL);
		// StartCoroutine(StartCounter());
		RuntimeObject* L_2;
		L_2 = CameraStop_StartCounter_mDBEF9E44648A003DBA8B952E33B5C6A5DA29E7B5(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void CameraStop::ReplayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraStop_ReplayButton_m3C0B5134BBFCC13B9EBEBAEBA8EE06CC507F9A51 (CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3849E3193D7B963F2106FF02694FC3989D46E373);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("L1");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3849E3193D7B963F2106FF02694FC3989D46E373, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void CameraStop::HomeButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraStop_HomeButton_m4AA5B066145E96401029E4CE2C077B8138060C93 (CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Menu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CameraStop::StartCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraStop_StartCounter_mDBEF9E44648A003DBA8B952E33B5C6A5DA29E7B5 (CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartCounterU3Ed__9_tFE67EB76304B6B738B2178234317143C42C3E1F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartCounterU3Ed__9_tFE67EB76304B6B738B2178234317143C42C3E1F0* L_0 = (U3CStartCounterU3Ed__9_tFE67EB76304B6B738B2178234317143C42C3E1F0*)il2cpp_codegen_object_new(U3CStartCounterU3Ed__9_tFE67EB76304B6B738B2178234317143C42C3E1F0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartCounterU3Ed__9__ctor_m4C193B5D46A5F89A98C7369A164F438DA4B0002B(L_0, 0, NULL);
		U3CStartCounterU3Ed__9_tFE67EB76304B6B738B2178234317143C42C3E1F0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CameraStop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraStop__ctor_m1F4CCB5DC1488347836BF5DB8239E41723F9C517 (CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F* __this, const RuntimeMethod* method) 
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
// System.Void CameraStop/<StartCounter>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__9__ctor_m4C193B5D46A5F89A98C7369A164F438DA4B0002B (U3CStartCounterU3Ed__9_tFE67EB76304B6B738B2178234317143C42C3E1F0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CameraStop/<StartCounter>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__9_System_IDisposable_Dispose_m3F381EA30A65480F3E677AEA86E2649FE37055C7 (U3CStartCounterU3Ed__9_tFE67EB76304B6B738B2178234317143C42C3E1F0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CameraStop/<StartCounter>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartCounterU3Ed__9_MoveNext_mB2B59537881779A9930B287F17779DA98B8D6B03 (U3CStartCounterU3Ed__9_tFE67EB76304B6B738B2178234317143C42C3E1F0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0054;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// countDown = 2.0f;
		CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F* L_4 = V_1;
		NullCheck(L_4);
		L_4->___countDown_7 = (2.0f);
		// for (int i = 0; i < 10000; i++)
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_008e;
	}

IL_0032:
	{
		// countDown -= Time.smoothDeltaTime;
		CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F* L_5 = V_1;
		CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___countDown_7;
		float L_8;
		L_8 = Time_get_smoothDeltaTime_m41881A3290CC95E6EF2D55289D1D872A45DC1775(NULL);
		NullCheck(L_5);
		L_5->___countDown_7 = ((float)il2cpp_codegen_subtract(L_7, L_8));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0054:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005b:
	{
		// while (countDown >= 0)
		CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___countDown_7;
		if ((((float)L_10) >= ((float)(0.0f))))
		{
			goto IL_0032;
		}
	}
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// StopScreen.SetActive(true);
		CameraStop_t71CD731D5D65A00475B315629C3E0C97643CAD0F* L_11 = V_1;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___StopScreen_8;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// for (int i = 0; i < 10000; i++)
		int32_t L_13 = __this->___U3CiU3E5__2_3;
		V_2 = L_13;
		int32_t L_14 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_008e:
	{
		// for (int i = 0; i < 10000; i++)
		int32_t L_15 = __this->___U3CiU3E5__2_3;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)10000))))
		{
			goto IL_005b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object CameraStop/<StartCounter>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartCounterU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBFE90D0604EA353A47AF5BFD25EE0028A9CB900E (U3CStartCounterU3Ed__9_tFE67EB76304B6B738B2178234317143C42C3E1F0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CameraStop/<StartCounter>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__9_System_Collections_IEnumerator_Reset_m37DC563F1E9DDA997A029459AFFDFEE4D6123707 (U3CStartCounterU3Ed__9_tFE67EB76304B6B738B2178234317143C42C3E1F0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartCounterU3Ed__9_System_Collections_IEnumerator_Reset_m37DC563F1E9DDA997A029459AFFDFEE4D6123707_RuntimeMethod_var)));
	}
}
// System.Object CameraStop/<StartCounter>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartCounterU3Ed__9_System_Collections_IEnumerator_get_Current_mC0735B816B1614356B339142012F874E89CD4E70 (U3CStartCounterU3Ed__9_tFE67EB76304B6B738B2178234317143C42C3E1F0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void FeatherRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatherRotate_Update_m7E1533FB71B4E02943D1EF16A0D3AC290E1B6D62 (FeatherRotate_t2BDB602C0B3AB1733DEF7677DC04AFEE3478DF6B* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(0, rotateSpeed, 0, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = __this->___rotateSpeed_4;
		NullCheck(L_0);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_0, (0.0f), L_1, (0.0f), 0, NULL);
		// }
		return;
	}
}
// System.Void FeatherRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatherRotate__ctor_mE12ECCAD49D16C6004EC33ED5C3BD3B32BBC8AEC (FeatherRotate_t2BDB602C0B3AB1733DEF7677DC04AFEE3478DF6B* __this, const RuntimeMethod* method) 
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
// System.Void fsound::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsound_OnTriggerEnter_mD6158D0F996F76B8D7DCBDC4688C5DCD0D6B97D1 (fsound_tCEA99A909ADAD477FE4DFAB2E512C2718B503E15* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// s.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___s_4;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void fsound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsound__ctor_mA41CB77ECAA2C4E70110FA60BA03A0B91FC41DDF (fsound_tCEA99A909ADAD477FE4DFAB2E512C2718B503E15* __this, const RuntimeMethod* method) 
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
// System.Void Pickup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickup_Start_m08358465309E69925EF4EFA6E6BF3D942B1742F0 (Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Pickup::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickup_FixedUpdate_mD54911BA475513F2BE1083A1C325B6EA2BB8BFFB (Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPoints_tF10CC61A9E818CA28C573D89F911610BFDB894F8_mD56439A2EC629C0D92FF9B896D9384C2CE4322AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E5D337A129DB732D8854886BC9FED657DAF3083);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2CDF032B5B27C8A0079D889B168525579BA30AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBF394BFD43F20CA2D96FFA5FB3FFBA9D0EC58E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7FB7A38EFE58FF6514B976E1F21EE4D80176370);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(GetComponent<Points>().points == 25 && tm.thiefSpeed >= 0)
		Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8* L_0;
		L_0 = Component_GetComponent_TisPoints_tF10CC61A9E818CA28C573D89F911610BFDB894F8_mD56439A2EC629C0D92FF9B896D9384C2CE4322AC(__this, Component_GetComponent_TisPoints_tF10CC61A9E818CA28C573D89F911610BFDB894F8_mD56439A2EC629C0D92FF9B896D9384C2CE4322AC_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1 = L_0->___points_5;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)25)))))
		{
			goto IL_003c;
		}
	}
	{
		ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757* L_2 = __this->___tm_4;
		NullCheck(L_2);
		float L_3 = L_2->___thiefSpeed_4;
		if ((!(((float)L_3) >= ((float)(0.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		// tm.thiefSpeed = 5.5f;
		ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757* L_4 = __this->___tm_4;
		NullCheck(L_4);
		L_4->___thiefSpeed_4 = (5.5f);
		// Debug.Log("Thief speed is 5.5");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD2CDF032B5B27C8A0079D889B168525579BA30AE, NULL);
		return;
	}

IL_003c:
	{
		// else if (GetComponent<Points>().points == 65 && tm.thiefSpeed >= 0)
		Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8* L_5;
		L_5 = Component_GetComponent_TisPoints_tF10CC61A9E818CA28C573D89F911610BFDB894F8_mD56439A2EC629C0D92FF9B896D9384C2CE4322AC(__this, Component_GetComponent_TisPoints_tF10CC61A9E818CA28C573D89F911610BFDB894F8_mD56439A2EC629C0D92FF9B896D9384C2CE4322AC_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6 = L_5->___points_5;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)65)))))
		{
			goto IL_0078;
		}
	}
	{
		ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757* L_7 = __this->___tm_4;
		NullCheck(L_7);
		float L_8 = L_7->___thiefSpeed_4;
		if ((!(((float)L_8) >= ((float)(0.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		// tm.thiefSpeed = 5.25f;
		ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757* L_9 = __this->___tm_4;
		NullCheck(L_9);
		L_9->___thiefSpeed_4 = (5.25f);
		// Debug.Log("Thief speed is 5.25");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF7FB7A38EFE58FF6514B976E1F21EE4D80176370, NULL);
		return;
	}

IL_0078:
	{
		// else if (GetComponent<Points>().points == 100 && tm.thiefSpeed >= 0)
		Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8* L_10;
		L_10 = Component_GetComponent_TisPoints_tF10CC61A9E818CA28C573D89F911610BFDB894F8_mD56439A2EC629C0D92FF9B896D9384C2CE4322AC(__this, Component_GetComponent_TisPoints_tF10CC61A9E818CA28C573D89F911610BFDB894F8_mD56439A2EC629C0D92FF9B896D9384C2CE4322AC_RuntimeMethod_var);
		NullCheck(L_10);
		int32_t L_11 = L_10->___points_5;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_00b4;
		}
	}
	{
		ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757* L_12 = __this->___tm_4;
		NullCheck(L_12);
		float L_13 = L_12->___thiefSpeed_4;
		if ((!(((float)L_13) >= ((float)(0.0f)))))
		{
			goto IL_00b4;
		}
	}
	{
		// tm.thiefSpeed = 5.0f;
		ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757* L_14 = __this->___tm_4;
		NullCheck(L_14);
		L_14->___thiefSpeed_4 = (5.0f);
		// Debug.Log("Thief speed is 5.0");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDBF394BFD43F20CA2D96FFA5FB3FFBA9D0EC58E5, NULL);
		return;
	}

IL_00b4:
	{
		// else if (GetComponent<Points>().points == 125 && tm.thiefSpeed >= 0)
		Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8* L_15;
		L_15 = Component_GetComponent_TisPoints_tF10CC61A9E818CA28C573D89F911610BFDB894F8_mD56439A2EC629C0D92FF9B896D9384C2CE4322AC(__this, Component_GetComponent_TisPoints_tF10CC61A9E818CA28C573D89F911610BFDB894F8_mD56439A2EC629C0D92FF9B896D9384C2CE4322AC_RuntimeMethod_var);
		NullCheck(L_15);
		int32_t L_16 = L_15->___points_5;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00ef;
		}
	}
	{
		ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757* L_17 = __this->___tm_4;
		NullCheck(L_17);
		float L_18 = L_17->___thiefSpeed_4;
		if ((!(((float)L_18) >= ((float)(0.0f)))))
		{
			goto IL_00ef;
		}
	}
	{
		// tm.thiefSpeed = 4.75f;
		ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757* L_19 = __this->___tm_4;
		NullCheck(L_19);
		L_19->___thiefSpeed_4 = (4.75f);
		// Debug.Log("Thief speed is 4.5");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1E5D337A129DB732D8854886BC9FED657DAF3083, NULL);
	}

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void Pickup::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickup_Awake_m0586C7EE94714DC1E48372A4C565A62B23E65920 (Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757_m839F9D6E425D030F66BA5CD7932654C2A260986F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tm = script.GetComponent<ThiefMovement>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___script_5;
		NullCheck(L_0);
		ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757* L_1;
		L_1 = GameObject_GetComponent_TisThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757_m839F9D6E425D030F66BA5CD7932654C2A260986F(L_0, GameObject_GetComponent_TisThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757_m839F9D6E425D030F66BA5CD7932654C2A260986F_RuntimeMethod_var);
		__this->___tm_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tm_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void Pickup::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickup_OnTriggerEnter_mC5437D0F49F83A610736A4A2B159D0159E5ABC13 (Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___Col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPoints_tF10CC61A9E818CA28C573D89F911610BFDB894F8_mD56439A2EC629C0D92FF9B896D9384C2CE4322AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4F9925936E0E3F6DFDEB59F5F6C228A9FF1A1E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Col.gameObject.tag == "Feather")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___Col0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralF4F9925936E0E3F6DFDEB59F5F6C228A9FF1A1E3, NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// GetComponent<Points>().points++; // Add 1 Point
		Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8* L_4;
		L_4 = Component_GetComponent_TisPoints_tF10CC61A9E818CA28C573D89F911610BFDB894F8_mD56439A2EC629C0D92FF9B896D9384C2CE4322AC(__this, Component_GetComponent_TisPoints_tF10CC61A9E818CA28C573D89F911610BFDB894F8_mD56439A2EC629C0D92FF9B896D9384C2CE4322AC_RuntimeMethod_var);
		Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8* L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = L_5->___points_5;
		NullCheck(L_5);
		L_5->___points_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// Col.gameObject.SetActive(false);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = ___Col0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Pickup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickup__ctor_m35A93842B4E2401E38CF814A00D57E6A2969852E (Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8* __this, const RuntimeMethod* method) 
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
// System.Void Points::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Points_Start_m55A63EA1585B07668509C57130A71ED3DF44515B (Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Points::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Points_Update_m9134B106A2BE7F1549EE0107ED7034DF6619A214 (Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score.text = " " + points;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___score_4;
		int32_t* L_1 = (&__this->___points_5);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void Points::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Points_OnGUI_m0ECC9BBF00A60BF086862D0ACADB9678BD2209EB (Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Points::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Points__ctor_m27630D36B2C2A49D4F9A260781CDD1210315BF69 (Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8* __this, const RuntimeMethod* method) 
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
// System.Void Menu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Start_mC49986718939F87924A1391044721CAC6E28919D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// melody = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___melody_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___melody_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Menu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Update_m664984862D794DB3E17B79AFC35D12A9ED961B5D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Menu::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_PlayGame_mB3BBBB5BF9F14D79F02AE8CEE052CC1F7B2858E4 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3849E3193D7B963F2106FF02694FC3989D46E373);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("L1");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3849E3193D7B963F2106FF02694FC3989D46E373, NULL);
		// }
		return;
	}
}
// System.Void Menu::PlayMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_PlayMusic_m194815208DAC663C95E095A90F74F576A306061F (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// playSound.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___playSound_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// pauseSound.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___pauseSound_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// melody.Pause();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___melody_6;
		NullCheck(L_2);
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_2, NULL);
		// }
		return;
	}
}
// System.Void Menu::StopMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_StopMusic_m9DCA131AC627E1676A31853618930B0113BA8DAD (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// playSound.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___playSound_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// pauseSound.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___pauseSound_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// melody.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___melody_6;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// }
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_mBEF2B96BC9E3D64E020EBE40FEF9CF25E6C3ED00 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
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
// System.Void Movement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Start_m3D09153FD03F06C31BBD151C21BA361EA49FA72B (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerRb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___playerRb_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerRb_22), (void*)L_0);
		// playerAnim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___playerAnim_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerAnim_21), (void*)L_1);
		// transform.position = new Vector3(0, 0, -5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), (0.0f), (-5.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Movement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Update_m4B99F519DF0A29B476F90FE4314A770CD53EC418 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23B4237CD57C98463074F50A9168192F28DC9F95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E320281B34C5351DD426E6D028E4C903AD77887);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(fingerDown == false && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
		bool L_0 = __this->___fingerDown_17;
		if (L_0)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_1;
		L_1 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_2;
		L_2 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		if (L_3)
		{
			goto IL_0044;
		}
	}
	{
		// startPos = Input.touches[0].position;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_4;
		L_4 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		__this->___startPos_15 = L_6;
		// fingerDown = true;
		__this->___fingerDown_17 = (bool)1;
	}

IL_0044:
	{
		// if(fingerDown)
		bool L_7 = __this->___fingerDown_17;
		if (!L_7)
		{
			goto IL_017d;
		}
	}
	{
		// if ((Input.touches[0].position.y >= startPos.y + pixelDistToDetect) && isGround || (Input.touches[0].position.y >= startPos.y + pixelDistToDetect) && isPlatform)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_8;
		L_8 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		float L_10 = L_9.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___startPos_15);
		float L_12 = L_11->___y_3;
		int32_t L_13 = __this->___pixelDistToDetect_16;
		if ((!(((float)L_10) >= ((float)((float)il2cpp_codegen_add(L_12, ((float)L_13)))))))
		{
			goto IL_0081;
		}
	}
	{
		bool L_14 = __this->___isGround_8;
		if (L_14)
		{
			goto IL_00b3;
		}
	}

IL_0081:
	{
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_15;
		L_15 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		float L_17 = L_16.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = (&__this->___startPos_15);
		float L_19 = L_18->___y_3;
		int32_t L_20 = __this->___pixelDistToDetect_16;
		if ((!(((float)L_17) >= ((float)((float)il2cpp_codegen_add(L_19, ((float)L_20)))))))
		{
			goto IL_011f;
		}
	}
	{
		bool L_21 = __this->___isPlatform_9;
		if (!L_21)
		{
			goto IL_011f;
		}
	}

IL_00b3:
	{
		// fingerDown = false;
		__this->___fingerDown_17 = (bool)0;
		// Debug.Log("Swipe Up");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral23B4237CD57C98463074F50A9168192F28DC9F95, NULL);
		// playerRb.AddForce(Vector3.up * force, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_22 = __this->___playerRb_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_24 = __this->___force_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		NullCheck(L_22);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_22, L_25, 1, NULL);
		// isGround = false;
		__this->___isGround_8 = (bool)0;
		// isPlatform = false;
		__this->___isPlatform_9 = (bool)0;
		// jump = true;
		__this->___jump_10 = (bool)1;
		// playerAnim.SetBool("jump", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26 = __this->___playerAnim_21;
		NullCheck(L_26);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_26, _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7, (bool)1, NULL);
		// if(jump == false)
		bool L_27 = __this->___jump_10;
		if (L_27)
		{
			goto IL_011f;
		}
	}
	{
		// playerAnim.SetBool("jump", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_28 = __this->___playerAnim_21;
		NullCheck(L_28);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_28, _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7, (bool)0, NULL);
	}

IL_011f:
	{
		// if (Input.touches[0].position.y <=  startPos.y - pixelDistToDetect)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_29;
		L_29 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_29);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		float L_31 = L_30.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&__this->___startPos_15);
		float L_33 = L_32->___y_3;
		int32_t L_34 = __this->___pixelDistToDetect_16;
		if ((!(((float)L_31) <= ((float)((float)il2cpp_codegen_subtract(L_33, ((float)L_34)))))))
		{
			goto IL_0165;
		}
	}
	{
		// fingerDown = false;
		__this->___fingerDown_17 = (bool)0;
		// Roll();
		Movement_Roll_m3B07E37D69AB4F932BD5E1B8DCD5911D79547F28(__this, NULL);
		// StartCoroutine(StartCounter());
		RuntimeObject* L_35;
		L_35 = Movement_StartCounter_mD1C1DB33C26EE5C0BF5ADD56AD385D1430E01297(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_36;
		L_36 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_35, NULL);
		goto IL_017d;
	}

IL_0165:
	{
		// playerAnim.SetBool("roll", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_37 = __this->___playerAnim_21;
		NullCheck(L_37);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_37, _stringLiteral4E320281B34C5351DD426E6D028E4C903AD77887, (bool)0, NULL);
		// slide = false;
		__this->___slide_20 = (bool)0;
	}

IL_017d:
	{
		// if(fingerDown && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Ended)
		bool L_38 = __this->___fingerDown_17;
		if (!L_38)
		{
			goto IL_01a7;
		}
	}
	{
		int32_t L_39;
		L_39 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_01a7;
		}
	}
	{
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_40;
		L_40 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_40);
		int32_t L_41;
		L_41 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		if ((!(((uint32_t)L_41) == ((uint32_t)3))))
		{
			goto IL_01a7;
		}
	}
	{
		// fingerDown = false;
		__this->___fingerDown_17 = (bool)0;
	}

IL_01a7:
	{
		// if (Input.GetKeyDown(KeyCode.UpArrow) && isGround || Input.GetKeyDown(KeyCode.UpArrow) && isPlatform)
		bool L_42;
		L_42 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)273), NULL);
		if (!L_42)
		{
			goto IL_01bb;
		}
	}
	{
		bool L_43 = __this->___isGround_8;
		if (L_43)
		{
			goto IL_01cf;
		}
	}

IL_01bb:
	{
		bool L_44;
		L_44 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)273), NULL);
		if (!L_44)
		{
			goto IL_0200;
		}
	}
	{
		bool L_45 = __this->___isPlatform_9;
		if (!L_45)
		{
			goto IL_0200;
		}
	}

IL_01cf:
	{
		// playerRb.AddForce(Vector3.up * force, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_46 = __this->___playerRb_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_48 = __this->___force_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_47, L_48, NULL);
		NullCheck(L_46);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_46, L_49, 1, NULL);
		// isGround = false;
		__this->___isGround_8 = (bool)0;
		// isPlatform = false;
		__this->___isPlatform_9 = (bool)0;
		// jump = true;
		__this->___jump_10 = (bool)1;
	}

IL_0200:
	{
		// if (jump == false)
		bool L_50 = __this->___jump_10;
		if (L_50)
		{
			goto IL_0219;
		}
	}
	{
		// playerAnim.SetBool("jump", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_51 = __this->___playerAnim_21;
		NullCheck(L_51);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_51, _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7, (bool)0, NULL);
	}

IL_0219:
	{
		// if (Input.GetKey(KeyCode.UpArrow))
		bool L_52;
		L_52 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)273), NULL);
		if (!L_52)
		{
			goto IL_0236;
		}
	}
	{
		// playerAnim.SetBool("jump", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_53 = __this->___playerAnim_21;
		NullCheck(L_53);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_53, _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7, (bool)1, NULL);
	}

IL_0236:
	{
		// Roll();
		Movement_Roll_m3B07E37D69AB4F932BD5E1B8DCD5911D79547F28(__this, NULL);
		// }
		return;
	}
}
// System.Void Movement::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_OnCollisionEnter_m65359528EC5A6B8741D80CBFA1051A0CCE80635E (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F10C8F01816F23DEE001DE0E3A831AAB792D49C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BCBEAFFC2969EB94D44226C09BB3187F28C5CC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral868C14486CE381CE50BB45602F8FDA59E5A2CD29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8871F82DA08C9029B3CB5BAEC197673B3D77DD91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F1A25FA63CB4637BD115DB082C2037A3705D754);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC25210E7FCBA74C0F373D81EBA94B9782D32D05B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5653402EEBA3CF8877DFAF1E895C2A0478DA01D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Ground")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// isGround = true;
		__this->___isGround_8 = (bool)1;
		// isPlatform = false;
		__this->___isPlatform_9 = (bool)0;
		// Debug.Log("On Ground");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral868C14486CE381CE50BB45602F8FDA59E5A2CD29, NULL);
		// jump = false;
		__this->___jump_10 = (bool)0;
	}

IL_0036:
	{
		// if (collision.gameObject.tag == "Platform")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28, NULL);
		if (!L_7)
		{
			goto IL_006c;
		}
	}
	{
		// isPlatform = true;
		__this->___isPlatform_9 = (bool)1;
		// isGround = false;
		__this->___isGround_8 = (bool)0;
		// Debug.Log("On Platform");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF5653402EEBA3CF8877DFAF1E895C2A0478DA01D, NULL);
		// jump = false;
		__this->___jump_10 = (bool)0;
	}

IL_006c:
	{
		// if (collision.gameObject.tag == "Rock")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_8 = ___collision0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral0F10C8F01816F23DEE001DE0E3A831AAB792D49C, NULL);
		if (!L_11)
		{
			goto IL_00a5;
		}
	}
	{
		// playerAnim.SetBool("hit", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___playerAnim_21;
		NullCheck(L_12);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_12, _stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2, (bool)1, NULL);
		// Debug.Log("Hit on Rock");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9F1A25FA63CB4637BD115DB082C2037A3705D754, NULL);
		// hit = true;
		__this->___hit_11 = (bool)1;
	}

IL_00a5:
	{
		// if (collision.gameObject.tag == "Blocker")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_13 = ___collision0;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_13, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_14, NULL);
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral8871F82DA08C9029B3CB5BAEC197673B3D77DD91, NULL);
		if (!L_16)
		{
			goto IL_00de;
		}
	}
	{
		// playerAnim.SetBool("blocker", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_17 = __this->___playerAnim_21;
		NullCheck(L_17);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_17, _stringLiteral6BCBEAFFC2969EB94D44226C09BB3187F28C5CC0, (bool)1, NULL);
		// Debug.Log("Hit on Blocker");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC25210E7FCBA74C0F373D81EBA94B9782D32D05B, NULL);
		// hit = true;
		__this->___hit_11 = (bool)1;
	}

IL_00de:
	{
		// }
		return;
	}
}
// System.Void Movement::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_OnCollisionExit_m7A95C986EEA4813A0D9007E440DA732EEC0B5994 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFF50CFB09F5152A98877EEC4435908A899EA45E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Platform")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28, NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// isGround = false;
		__this->___isGround_8 = (bool)0;
		// isPlatform = false;
		__this->___isPlatform_9 = (bool)0;
		// Debug.Log("NOT Ground and Platform");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAFF50CFB09F5152A98877EEC4435908A899EA45E, NULL);
		// jump = true;
		__this->___jump_10 = (bool)1;
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Movement::Roll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Roll_m3B07E37D69AB4F932BD5E1B8DCD5911D79547F28 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E320281B34C5351DD426E6D028E4C903AD77887);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (/*Input.GetKey(KeyCode.DownArrow) ||*/ (Input.touches[0].position.y <= startPos.y - pixelDistToDetect)) //&& isGround && !jump)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_0;
		L_0 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		float L_2 = L_1.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___startPos_15);
		float L_4 = L_3->___y_3;
		int32_t L_5 = __this->___pixelDistToDetect_16;
		if ((!(((float)L_2) <= ((float)((float)il2cpp_codegen_subtract(L_4, ((float)L_5)))))))
		{
			goto IL_0070;
		}
	}
	{
		// playerAnim.SetBool("roll", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___playerAnim_21;
		NullCheck(L_6);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteral4E320281B34C5351DD426E6D028E4C903AD77887, (bool)1, NULL);
		// slide = true;
		__this->___slide_20 = (bool)1;
		// playerRb.AddForce(Vector3.down * downForce, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___playerRb_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_9 = __this->___downForce_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		NullCheck(L_7);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_7, L_10, 1, NULL);
		// playerAnim.SetBool("run", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___playerAnim_21;
		NullCheck(L_11);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_11, _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B, (bool)1, NULL);
		return;
	}

IL_0070:
	{
		// playerAnim.SetBool("roll", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___playerAnim_21;
		NullCheck(L_12);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_12, _stringLiteral4E320281B34C5351DD426E6D028E4C903AD77887, (bool)0, NULL);
		// slide = false;
		__this->___slide_20 = (bool)0;
		// }
		return;
	}
}
// System.Collections.IEnumerator Movement::StartCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Movement_StartCounter_mD1C1DB33C26EE5C0BF5ADD56AD385D1430E01297 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartCounterU3Ed__24_tA1B2BF8985CE33F85821F135F5A5EAE061B26151_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartCounterU3Ed__24_tA1B2BF8985CE33F85821F135F5A5EAE061B26151* L_0 = (U3CStartCounterU3Ed__24_tA1B2BF8985CE33F85821F135F5A5EAE061B26151*)il2cpp_codegen_object_new(U3CStartCounterU3Ed__24_tA1B2BF8985CE33F85821F135F5A5EAE061B26151_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartCounterU3Ed__24__ctor_m688AFE23EEC07C45D76C473BE3287AB3A31DDAB4(L_0, 0, NULL);
		U3CStartCounterU3Ed__24_tA1B2BF8985CE33F85821F135F5A5EAE061B26151* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Movement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement__ctor_mCB72C1AD57256D73959D74FB86C5D0AA69EAE7ED (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 5.0f;
		__this->___speed_4 = (5.0f);
		// public float force = 3.0f;
		__this->___force_5 = (3.0f);
		// public float turnSpeed = 3.0f;
		__this->___turnSpeed_6 = (3.0f);
		// public float downForce = 2.0f;
		__this->___downForce_7 = (2.0f);
		// public bool stand = true;
		__this->___stand_12 = (bool)1;
		// public int pixelDistToDetect = 50;
		__this->___pixelDistToDetect_16 = ((int32_t)50);
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
// System.Void Movement/<StartCounter>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__24__ctor_m688AFE23EEC07C45D76C473BE3287AB3A31DDAB4 (U3CStartCounterU3Ed__24_tA1B2BF8985CE33F85821F135F5A5EAE061B26151* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Movement/<StartCounter>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__24_System_IDisposable_Dispose_m063F7484E617FB401F1077BD6953C65F38B7FF64 (U3CStartCounterU3Ed__24_tA1B2BF8985CE33F85821F135F5A5EAE061B26151* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Movement/<StartCounter>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartCounterU3Ed__24_MoveNext_m10366C72597C8F067EEB20E47481316905D45D79 (U3CStartCounterU3Ed__24_tA1B2BF8985CE33F85821F135F5A5EAE061B26151* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E320281B34C5351DD426E6D028E4C903AD77887);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0054;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// countDown = 0.5f;
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_4 = V_1;
		NullCheck(L_4);
		L_4->___countDown_14 = (0.5f);
		// for (int i = 0; i < 10000; i++)
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_0078;
	}

IL_0032:
	{
		// countDown -= Time.smoothDeltaTime;
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_5 = V_1;
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___countDown_14;
		float L_8;
		L_8 = Time_get_smoothDeltaTime_m41881A3290CC95E6EF2D55289D1D872A45DC1775(NULL);
		NullCheck(L_5);
		L_5->___countDown_14 = ((float)il2cpp_codegen_subtract(L_7, L_8));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0054:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005b:
	{
		// while (countDown >= 0)
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___countDown_14;
		if ((((float)L_10) >= ((float)(0.0f))))
		{
			goto IL_0032;
		}
	}
	{
		// for (int i = 0; i < 10000; i++)
		int32_t L_11 = __this->___U3CiU3E5__2_3;
		V_2 = L_11;
		int32_t L_12 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0078:
	{
		// for (int i = 0; i < 10000; i++)
		int32_t L_13 = __this->___U3CiU3E5__2_3;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)10000))))
		{
			goto IL_005b;
		}
	}
	{
		// playerAnim.SetBool("roll", false);
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_14 = V_1;
		NullCheck(L_14);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = L_14->___playerAnim_21;
		NullCheck(L_15);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_15, _stringLiteral4E320281B34C5351DD426E6D028E4C903AD77887, (bool)0, NULL);
		// slide = false;
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_16 = V_1;
		NullCheck(L_16);
		L_16->___slide_20 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object Movement/<StartCounter>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartCounterU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m61C8E3B81722E6E794736ACAF509E36CD745ACE7 (U3CStartCounterU3Ed__24_tA1B2BF8985CE33F85821F135F5A5EAE061B26151* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Movement/<StartCounter>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__24_System_Collections_IEnumerator_Reset_m73851DDE715628F001D45C430B9F6272BEA10069 (U3CStartCounterU3Ed__24_tA1B2BF8985CE33F85821F135F5A5EAE061B26151* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartCounterU3Ed__24_System_Collections_IEnumerator_Reset_m73851DDE715628F001D45C430B9F6272BEA10069_RuntimeMethod_var)));
	}
}
// System.Object Movement/<StartCounter>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartCounterU3Ed__24_System_Collections_IEnumerator_get_Current_m577623FA6461580BD7B40EAA1F487316690CF9D3 (U3CStartCounterU3Ed__24_tA1B2BF8985CE33F85821F135F5A5EAE061B26151* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void peacocksound::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void peacocksound_Start_m28DC7C3E232A3C3729D3ACCD8DF8F6DEDE9260FA (peacocksound_tFA4F9DCEBAE98A0979BF162820033BEBB76740B3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void peacocksound::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void peacocksound_Update_m82EB0C2AB29B2FD89DCB89870451B8182C65C0F3 (peacocksound_tFA4F9DCEBAE98A0979BF162820033BEBB76740B3* __this, const RuntimeMethod* method) 
{
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_6;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_6 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (timer > timeBetweenShots)
		float L_2 = __this->___timer_6;
		float L_3 = __this->___timeBetweenShots_5;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0036;
		}
	}
	{
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___audioSource_4;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// timer = 0;
		__this->___timer_6 = (0.0f);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void peacocksound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void peacocksound__ctor_m77356FD2E85FD707FE8AC68C617DCB7282B57CE4 (peacocksound_tFA4F9DCEBAE98A0979BF162820033BEBB76740B3* __this, const RuntimeMethod* method) 
{
	{
		// public float timeBetweenShots = 5.00f;
		__this->___timeBetweenShots_5 = (5.0f);
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
// System.Void PracticeMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PracticeMovement_Start_m2BA6E94ECF20B3CA3CF4288C8CB475F7155628E6 (PracticeMovement_t589868FEBB017B36EF94E472EF37BC154C58DB9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerAnim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___playerAnim_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerAnim_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void PracticeMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PracticeMovement_FixedUpdate_m219D660DB190481D395B9E5A8A0589565DC5628C (PracticeMovement_t589868FEBB017B36EF94E472EF37BC154C58DB9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral812B8B9C8CDEB9CDFD3BEA80925AE9C09D7B187C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B1CF05486392B109EE5E1C6F8F3769A8C65518F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (fingerDown == false && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
		bool L_0 = __this->___fingerDown_9;
		if (L_0)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_1;
		L_1 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_2;
		L_2 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		if (L_3)
		{
			goto IL_0066;
		}
	}
	{
		// startPos = Input.touches[0].position;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_4;
		L_4 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		__this->___startPos_7 = L_6;
		// fingerDown = true;
		__this->___fingerDown_9 = (bool)1;
		// playerAnim.SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___playerAnim_11;
		NullCheck(L_7);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_7, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// playerAnim.SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___playerAnim_11;
		NullCheck(L_8);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
	}

IL_0066:
	{
		// if (fingerDown)
		bool L_9 = __this->___fingerDown_9;
		if (!L_9)
		{
			goto IL_01d4;
		}
	}
	{
		// if (Input.touches[0].position.x >= startPos.x + pixelDistToDetect || Input.GetKey(KeyCode.RightArrow))
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_10;
		L_10 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		float L_12 = L_11.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___startPos_7);
		float L_14 = L_13->___x_2;
		int32_t L_15 = __this->___pixelDistToDetect_8;
		if ((((float)L_12) >= ((float)((float)il2cpp_codegen_add(L_14, ((float)L_15))))))
		{
			goto IL_00a7;
		}
	}
	{
		bool L_16;
		L_16 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)275), NULL);
		if (!L_16)
		{
			goto IL_0120;
		}
	}

IL_00a7:
	{
		// playerAnim.SetBool("right", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_17 = __this->___playerAnim_11;
		NullCheck(L_17);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_17, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)1, NULL);
		// playerAnim.SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = __this->___playerAnim_11;
		NullCheck(L_18);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_18, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// fingerDown = false;
		__this->___fingerDown_9 = (bool)0;
		// Debug.Log("Swipe Right");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9B1CF05486392B109EE5E1C6F8F3769A8C65518F, NULL);
		// if (transform.position.x >= -1.5 && transform.position.x <= 1.5)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = L_20.___x_2;
		if ((!(((double)((double)L_21)) >= ((double)(-1.5)))))
		{
			goto IL_0120;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24 = L_23.___x_2;
		if ((!(((double)((double)L_24)) <= ((double)(1.5)))))
		{
			goto IL_0120;
		}
	}
	{
		// right = true;
		__this->___right_5 = (bool)1;
		// left = false;
		__this->___left_6 = (bool)0;
	}

IL_0120:
	{
		// if (Input.touches[0].position.x <= startPos.x - pixelDistToDetect || Input.GetKey(KeyCode.LeftArrow))
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_25;
		L_25 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		float L_27 = L_26.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___startPos_7);
		float L_29 = L_28->___x_2;
		int32_t L_30 = __this->___pixelDistToDetect_8;
		if ((((float)L_27) <= ((float)((float)il2cpp_codegen_subtract(L_29, ((float)L_30))))))
		{
			goto IL_0159;
		}
	}
	{
		bool L_31;
		L_31 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)276), NULL);
		if (!L_31)
		{
			goto IL_01e1;
		}
	}

IL_0159:
	{
		// playerAnim.SetBool("left", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_32 = __this->___playerAnim_11;
		NullCheck(L_32);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_32, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)1, NULL);
		// playerAnim.SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_33 = __this->___playerAnim_11;
		NullCheck(L_33);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_33, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// fingerDown = false;
		__this->___fingerDown_9 = (bool)0;
		// Debug.Log("swipe Left");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral812B8B9C8CDEB9CDFD3BEA80925AE9C09D7B187C, NULL);
		// if (transform.position.x >= -1.5 && transform.position.x <= 1.5)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		float L_36 = L_35.___x_2;
		if ((!(((double)((double)L_36)) >= ((double)(-1.5)))))
		{
			goto IL_01e1;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		float L_39 = L_38.___x_2;
		if ((!(((double)((double)L_39)) <= ((double)(1.5)))))
		{
			goto IL_01e1;
		}
	}
	{
		// right = false;
		__this->___right_5 = (bool)0;
		// left = true;
		__this->___left_6 = (bool)1;
		goto IL_01e1;
	}

IL_01d4:
	{
		// StartCoroutine(StartCounter());
		RuntimeObject* L_40;
		L_40 = PracticeMovement_StartCounter_m54A45D1970012E270631F34C21CFAE87A3BB6DA6(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_41;
		L_41 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_40, NULL);
	}

IL_01e1:
	{
		// if (fingerDown && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Ended)
		bool L_42 = __this->___fingerDown_9;
		if (!L_42)
		{
			goto IL_022d;
		}
	}
	{
		int32_t L_43;
		L_43 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_43) <= ((int32_t)0)))
		{
			goto IL_022d;
		}
	}
	{
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_44;
		L_44 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_44);
		int32_t L_45;
		L_45 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		if ((!(((uint32_t)L_45) == ((uint32_t)3))))
		{
			goto IL_022d;
		}
	}
	{
		// fingerDown = false;
		__this->___fingerDown_9 = (bool)0;
		// playerAnim.SetBool("left", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_46 = __this->___playerAnim_11;
		NullCheck(L_46);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_46, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// playerAnim.SetBool("right", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_47 = __this->___playerAnim_11;
		NullCheck(L_47);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_47, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
	}

IL_022d:
	{
		// float movementSpeed = 10.0f;
		V_0 = (10.0f);
		// transform.Translate(Vector3.forward * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_50 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_49, L_50, NULL);
		float L_52;
		L_52 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_51, L_52, NULL);
		NullCheck(L_48);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_48, L_53, NULL);
		// if (transform.position.x >= -1.5 && transform.position.x <= 1.5)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_54, NULL);
		float L_56 = L_55.___x_2;
		if ((!(((double)((double)L_56)) >= ((double)(-1.5)))))
		{
			goto IL_02c6;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_57, NULL);
		float L_59 = L_58.___x_2;
		if ((!(((double)((double)L_59)) <= ((double)(1.5)))))
		{
			goto IL_02c6;
		}
	}
	{
		// if (Input.GetKey(KeyCode.RightArrow))
		bool L_60;
		L_60 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)275), NULL);
		if (!L_60)
		{
			goto IL_02ac;
		}
	}
	{
		// right = true;
		__this->___right_5 = (bool)1;
		// left = false;
		__this->___left_6 = (bool)0;
		goto IL_02c6;
	}

IL_02ac:
	{
		// else if (Input.GetKey(KeyCode.LeftArrow))
		bool L_61;
		L_61 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)276), NULL);
		if (!L_61)
		{
			goto IL_02c6;
		}
	}
	{
		// right = false;
		__this->___right_5 = (bool)0;
		// left = true;
		__this->___left_6 = (bool)1;
	}

IL_02c6:
	{
		// if (right)
		bool L_62 = __this->___right_5;
		if (!L_62)
		{
			goto IL_03cf;
		}
	}
	{
		// if(transform.position.x >= 0 && right)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_63, NULL);
		float L_65 = L_64.___x_2;
		if ((!(((float)L_65) >= ((float)(0.0f)))))
		{
			goto IL_0341;
		}
	}
	{
		bool L_66 = __this->___right_5;
		if (!L_66)
		{
			goto IL_0341;
		}
	}
	{
		// transform.position = Vector3.MoveTowards(transform.position, new Vector3(1.5f, transform.position.y, transform.position.z), movementSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_68, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_70, NULL);
		float L_72 = L_71.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_73);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_73, NULL);
		float L_75 = L_74.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_76), (1.5f), L_72, L_75, /*hidden argument*/NULL);
		float L_77 = V_0;
		float L_78;
		L_78 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_69, L_76, ((float)il2cpp_codegen_multiply(L_77, L_78)), NULL);
		NullCheck(L_67);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_67, L_79, NULL);
		goto IL_03cf;
	}

IL_0341:
	{
		// else if (transform.position.x >= -1.5 && right)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_80);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_80, NULL);
		float L_82 = L_81.___x_2;
		if ((!(((double)((double)L_82)) >= ((double)(-1.5)))))
		{
			goto IL_03cf;
		}
	}
	{
		bool L_83 = __this->___right_5;
		if (!L_83)
		{
			goto IL_03cf;
		}
	}
	{
		// transform.position = Vector3.MoveTowards(transform.position, new Vector3(0, transform.position.y, transform.position.z), movementSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_85, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_87, NULL);
		float L_89 = L_88.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90;
		L_90 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_90);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_90, NULL);
		float L_92 = L_91.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		memset((&L_93), 0, sizeof(L_93));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_93), (0.0f), L_89, L_92, /*hidden argument*/NULL);
		float L_94 = V_0;
		float L_95;
		L_95 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_86, L_93, ((float)il2cpp_codegen_multiply(L_94, L_95)), NULL);
		NullCheck(L_84);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_84, L_96, NULL);
		// if (transform.position.x == 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97;
		L_97 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_97);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_97, NULL);
		float L_99 = L_98.___x_2;
		if ((!(((float)L_99) == ((float)(0.0f)))))
		{
			goto IL_03cf;
		}
	}
	{
		// right = false;
		__this->___right_5 = (bool)0;
	}

IL_03cf:
	{
		// if (left)
		bool L_100 = __this->___left_6;
		if (!L_100)
		{
			goto IL_04d4;
		}
	}
	{
		// if (transform.position.x <= 0 && left)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_101);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_101, NULL);
		float L_103 = L_102.___x_2;
		if ((!(((float)L_103) <= ((float)(0.0f)))))
		{
			goto IL_0446;
		}
	}
	{
		bool L_104 = __this->___left_6;
		if (!L_104)
		{
			goto IL_0446;
		}
	}
	{
		// transform.position = Vector3.MoveTowards(transform.position, new Vector3(-1.5f, transform.position.y, transform.position.z), movementSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_105;
		L_105 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_106;
		L_106 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_106);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_106, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108;
		L_108 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_108);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_108, NULL);
		float L_110 = L_109.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_111;
		L_111 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_111);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_111, NULL);
		float L_113 = L_112.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		memset((&L_114), 0, sizeof(L_114));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_114), (-1.5f), L_110, L_113, /*hidden argument*/NULL);
		float L_115 = V_0;
		float L_116;
		L_116 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_107, L_114, ((float)il2cpp_codegen_multiply(L_115, L_116)), NULL);
		NullCheck(L_105);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_105, L_117, NULL);
		return;
	}

IL_0446:
	{
		// else if(transform.position.x <= 1.5 && left)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_118);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_118, NULL);
		float L_120 = L_119.___x_2;
		if ((!(((double)((double)L_120)) <= ((double)(1.5)))))
		{
			goto IL_04d4;
		}
	}
	{
		bool L_121 = __this->___left_6;
		if (!L_121)
		{
			goto IL_04d4;
		}
	}
	{
		// transform.position = Vector3.MoveTowards(transform.position, new Vector3(0, transform.position.y, transform.position.z), movementSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_122;
		L_122 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123;
		L_123 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_123);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		L_124 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_123, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125;
		L_125 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_125);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126;
		L_126 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_125, NULL);
		float L_127 = L_126.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_128;
		L_128 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_128);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		L_129 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_128, NULL);
		float L_130 = L_129.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		memset((&L_131), 0, sizeof(L_131));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_131), (0.0f), L_127, L_130, /*hidden argument*/NULL);
		float L_132 = V_0;
		float L_133;
		L_133 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_124, L_131, ((float)il2cpp_codegen_multiply(L_132, L_133)), NULL);
		NullCheck(L_122);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_122, L_134, NULL);
		// if (transform.position.x == 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_135;
		L_135 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_135);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136;
		L_136 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_135, NULL);
		float L_137 = L_136.___x_2;
		if ((!(((float)L_137) == ((float)(0.0f)))))
		{
			goto IL_04d4;
		}
	}
	{
		// left = false;
		__this->___left_6 = (bool)0;
	}

IL_04d4:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PracticeMovement::StartCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PracticeMovement_StartCounter_m54A45D1970012E270631F34C21CFAE87A3BB6DA6 (PracticeMovement_t589868FEBB017B36EF94E472EF37BC154C58DB9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartCounterU3Ed__11_t671C889661B37D3F3644C480B3408D7E374559DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartCounterU3Ed__11_t671C889661B37D3F3644C480B3408D7E374559DC* L_0 = (U3CStartCounterU3Ed__11_t671C889661B37D3F3644C480B3408D7E374559DC*)il2cpp_codegen_object_new(U3CStartCounterU3Ed__11_t671C889661B37D3F3644C480B3408D7E374559DC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartCounterU3Ed__11__ctor_mC792810E725214BBE278C290E95DF43C3BDD2477(L_0, 0, NULL);
		U3CStartCounterU3Ed__11_t671C889661B37D3F3644C480B3408D7E374559DC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PracticeMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PracticeMovement__ctor_m17EE903D598352B3FB1E6DF0471A213038DBB855 (PracticeMovement_t589868FEBB017B36EF94E472EF37BC154C58DB9E* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 5.0f;
		__this->___speed_4 = (5.0f);
		// public int pixelDistToDetect = 50;
		__this->___pixelDistToDetect_8 = ((int32_t)50);
		// float movementSpeed = 10.0f;
		__this->___movementSpeed_10 = (10.0f);
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
// System.Void PracticeMovement/<StartCounter>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__11__ctor_mC792810E725214BBE278C290E95DF43C3BDD2477 (U3CStartCounterU3Ed__11_t671C889661B37D3F3644C480B3408D7E374559DC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PracticeMovement/<StartCounter>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__11_System_IDisposable_Dispose_m706D2169FAC907E489AC68AAD3E919C998A6244A (U3CStartCounterU3Ed__11_t671C889661B37D3F3644C480B3408D7E374559DC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PracticeMovement/<StartCounter>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartCounterU3Ed__11_MoveNext_m51711E84AF0D3B5CFB4874C78A2EA4C73A68BFA5 (U3CStartCounterU3Ed__11_t671C889661B37D3F3644C480B3408D7E374559DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PracticeMovement_t589868FEBB017B36EF94E472EF37BC154C58DB9E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PracticeMovement_t589868FEBB017B36EF94E472EF37BC154C58DB9E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0054;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// countDown = 0.25f;
		PracticeMovement_t589868FEBB017B36EF94E472EF37BC154C58DB9E* L_4 = V_1;
		NullCheck(L_4);
		L_4->___countDown_12 = (0.25f);
		// for (int i = 0; i < 10000; i++)
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_009a;
	}

IL_0032:
	{
		// countDown -= Time.smoothDeltaTime;
		PracticeMovement_t589868FEBB017B36EF94E472EF37BC154C58DB9E* L_5 = V_1;
		PracticeMovement_t589868FEBB017B36EF94E472EF37BC154C58DB9E* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___countDown_12;
		float L_8;
		L_8 = Time_get_smoothDeltaTime_m41881A3290CC95E6EF2D55289D1D872A45DC1775(NULL);
		NullCheck(L_5);
		L_5->___countDown_12 = ((float)il2cpp_codegen_subtract(L_7, L_8));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0054:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005b:
	{
		// while (countDown >= 0)
		PracticeMovement_t589868FEBB017B36EF94E472EF37BC154C58DB9E* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___countDown_12;
		if ((((float)L_10) >= ((float)(0.0f))))
		{
			goto IL_0032;
		}
	}
	{
		// playerAnim.SetBool("right", false);
		PracticeMovement_t589868FEBB017B36EF94E472EF37BC154C58DB9E* L_11 = V_1;
		NullCheck(L_11);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = L_11->___playerAnim_11;
		NullCheck(L_12);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_12, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, (bool)0, NULL);
		// playerAnim.SetBool("left", false);
		PracticeMovement_t589868FEBB017B36EF94E472EF37BC154C58DB9E* L_13 = V_1;
		NullCheck(L_13);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = L_13->___playerAnim_11;
		NullCheck(L_14);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_14, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, (bool)0, NULL);
		// for (int i = 0; i < 10000; i++)
		int32_t L_15 = __this->___U3CiU3E5__2_3;
		V_2 = L_15;
		int32_t L_16 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_009a:
	{
		// for (int i = 0; i < 10000; i++)
		int32_t L_17 = __this->___U3CiU3E5__2_3;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)10000))))
		{
			goto IL_005b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object PracticeMovement/<StartCounter>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartCounterU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m122C9ED586DD4257FA039FFBF069C11EF1A1DCCA (U3CStartCounterU3Ed__11_t671C889661B37D3F3644C480B3408D7E374559DC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PracticeMovement/<StartCounter>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__11_System_Collections_IEnumerator_Reset_m8CD462EB20D51A24E4C3EFA95D96C20C29ED41C6 (U3CStartCounterU3Ed__11_t671C889661B37D3F3644C480B3408D7E374559DC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartCounterU3Ed__11_System_Collections_IEnumerator_Reset_m8CD462EB20D51A24E4C3EFA95D96C20C29ED41C6_RuntimeMethod_var)));
	}
}
// System.Object PracticeMovement/<StartCounter>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartCounterU3Ed__11_System_Collections_IEnumerator_get_Current_mE6FBCFDC395C260925D2D2AB3C4854EBD0677B03 (U3CStartCounterU3Ed__11_t671C889661B37D3F3644C480B3408D7E374559DC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Test::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_Awake_m13A7B7938BA67D1CD19AE89EA693B5E3D32580AD (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_mDC661C12914A5AAA816F06BA8E61E8EF1CD9A9EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ms = script.GetComponent<Movement>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___script_7;
		NullCheck(L_0);
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_1;
		L_1 = GameObject_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_mDC661C12914A5AAA816F06BA8E61E8EF1CD9A9EB(L_0, GameObject_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_mDC661C12914A5AAA816F06BA8E61E8EF1CD9A9EB_RuntimeMethod_var);
		__this->___ms_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ms_6), (void*)L_1);
		// transform.position = new Vector3(0, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Test::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_FixedUpdate_mF681BD62D97E5E4D59B0A64DC8A0866507E056DD (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral959DE0B85DCF036EB7C121B3C52E31A6769A7975);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ACE48B98024B3AB3A1E0F2729BB672A3D313E21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(ms.slide == true)
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_0 = __this->___ms_6;
		NullCheck(L_0);
		bool L_1 = L_0->___slide_20;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// Debug.Log("SLIDING");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral959DE0B85DCF036EB7C121B3C52E31A6769A7975, NULL);
		// StartCoroutine(StartCounter());
		RuntimeObject* L_2;
		L_2 = Test_StartCounter_m816068F24CF187223515E2DC48E97B8639D76DCE(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
	}

IL_0024:
	{
		// if(ms.slide == false)
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_4 = __this->___ms_6;
		NullCheck(L_4);
		bool L_5 = L_4->___slide_20;
		if (L_5)
		{
			goto IL_003b;
		}
	}
	{
		// Debug.Log("NOT SLIDING");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9ACE48B98024B3AB3A1E0F2729BB672A3D313E21, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Test::StartCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Test_StartCounter_m816068F24CF187223515E2DC48E97B8639D76DCE (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartCounterU3Ed__7_t9D6AA2F70F71C305F2E6C25E8584327862AC4F50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartCounterU3Ed__7_t9D6AA2F70F71C305F2E6C25E8584327862AC4F50* L_0 = (U3CStartCounterU3Ed__7_t9D6AA2F70F71C305F2E6C25E8584327862AC4F50*)il2cpp_codegen_object_new(U3CStartCounterU3Ed__7_t9D6AA2F70F71C305F2E6C25E8584327862AC4F50_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartCounterU3Ed__7__ctor_m9E014F38F3C221B5C7C23489F5376F09D87BCB44(L_0, 0, NULL);
		U3CStartCounterU3Ed__7_t9D6AA2F70F71C305F2E6C25E8584327862AC4F50* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Test::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test__ctor_mB84DF4A3888723C395E76E3879FDFB8AA1EFEDCB (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, const RuntimeMethod* method) 
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
// System.Void Test/<StartCounter>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__7__ctor_m9E014F38F3C221B5C7C23489F5376F09D87BCB44 (U3CStartCounterU3Ed__7_t9D6AA2F70F71C305F2E6C25E8584327862AC4F50* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Test/<StartCounter>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__7_System_IDisposable_Dispose_m531CB87FE0C57946302A00BD4AC6FF5419EE9BF8 (U3CStartCounterU3Ed__7_t9D6AA2F70F71C305F2E6C25E8584327862AC4F50* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Test/<StartCounter>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartCounterU3Ed__7_MoveNext_m700CD229EAB3B4856FF31C6F41178CAC1C697C6D (U3CStartCounterU3Ed__7_t9D6AA2F70F71C305F2E6C25E8584327862AC4F50* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// countDown = 10.0f;
		Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* L_4 = V_1;
		NullCheck(L_4);
		L_4->___countDown_4 = (10.0f);
		// for (int i = 0; i < 10000; i++)
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_0090;
	}

IL_0032:
	{
		// countDown -= Time.smoothDeltaTime;
		Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* L_5 = V_1;
		Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___countDown_4;
		float L_8;
		L_8 = Time_get_smoothDeltaTime_m41881A3290CC95E6EF2D55289D1D872A45DC1775(NULL);
		NullCheck(L_5);
		L_5->___countDown_4 = ((float)il2cpp_codegen_subtract(L_7, L_8));
		// ColliderObj.SetActive(false);
		Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* L_9 = V_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___ColliderObj_8;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0060:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0067:
	{
		// while (countDown >= 0)
		Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->___countDown_4;
		if ((((float)L_12) >= ((float)(0.0f))))
		{
			goto IL_0032;
		}
	}
	{
		// ColliderObj.SetActive(true);
		Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* L_13 = V_1;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___ColliderObj_8;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// for (int i = 0; i < 10000; i++)
		int32_t L_15 = __this->___U3CiU3E5__2_3;
		V_2 = L_15;
		int32_t L_16 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0090:
	{
		// for (int i = 0; i < 10000; i++)
		int32_t L_17 = __this->___U3CiU3E5__2_3;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)10000))))
		{
			goto IL_0067;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Test/<StartCounter>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartCounterU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAE8891DA5EB5C6AB08AC39796582AFD28C8035BC (U3CStartCounterU3Ed__7_t9D6AA2F70F71C305F2E6C25E8584327862AC4F50* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Test/<StartCounter>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__7_System_Collections_IEnumerator_Reset_m22EF52331D4F9DC943F8AFA46879EFAD2BD5CE2D (U3CStartCounterU3Ed__7_t9D6AA2F70F71C305F2E6C25E8584327862AC4F50* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartCounterU3Ed__7_System_Collections_IEnumerator_Reset_m22EF52331D4F9DC943F8AFA46879EFAD2BD5CE2D_RuntimeMethod_var)));
	}
}
// System.Object Test/<StartCounter>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartCounterU3Ed__7_System_Collections_IEnumerator_get_Current_mBAAC50FEBBCB299C481C13177275157D77181D4B (U3CStartCounterU3Ed__7_t9D6AA2F70F71C305F2E6C25E8584327862AC4F50* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void ThiefMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThiefMovement_Start_m62291C6C4A0F807628FFEA314A527FEFBED0F306 (ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ThiefMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThiefMovement_Update_mC28D8B65714CD73C59747DA89290FA64F871B717 (ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(Vector3.forward * thiefSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_2 = __this->___thiefSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void ThiefMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThiefMovement__ctor_m57D4B1FAB07A731B1523B7DD69E52841B63841FB (ThiefMovement_t912E96B70C0ED1FE29688B708F1F27D1D5ADF757* __this, const RuntimeMethod* method) 
{
	{
		// public float thiefSpeed = 6.0f;
		__this->___thiefSpeed_4 = (6.0f);
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
// Chunk Chunk::ShowChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* Chunk_ShowChunk_m38B7A130142DA413145307F22C2F620ECA2801DC (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// return this;
		return __this;
	}
}
// Chunk Chunk::HideChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* Chunk_HideChunk_mFB0F7B469F21AEF9675D4785E490F2F146D6A216 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// return this;
		return __this;
	}
}
// System.Void Chunk::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk__ctor_m15FE9E61CAE19C4DE60C2D86C3FF39F4FE22205D (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) 
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
// System.Void WorldGeneration::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_Awake_m7CDE9CC44C1820A9203B7B7ABE05908E48947E74 (WorldGeneration_t28002E89B20EBD9DE09419AA6BC46B6E48BBE883* __this, const RuntimeMethod* method) 
{
	{
		// ResetWorld();
		WorldGeneration_ResetWorld_mF5212E2D01C69C1E5B555BCAE1B5D6526A511794(__this, NULL);
		// }
		return;
	}
}
// System.Void WorldGeneration::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_Start_mB06F8D594078B45968D7C7754AD8E87FC8FE60F3 (WorldGeneration_t28002E89B20EBD9DE09419AA6BC46B6E48BBE883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2ED775A4F7E82062A0C8050479640FEC049A97A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBA56742EA9B24F90D9401B0A33A583AF1C5CB3A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(chunkPrefab.Count == 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___chunkPrefab_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogError("No chunk prefab found on the world generator, please assign some chunks");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFBA56742EA9B24F90D9401B0A33A583AF1C5CB3A, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// if (!cameraTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___cameraTransform_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		// cameraTransform = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		__this->___cameraTransform_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraTransform_11), (void*)L_5);
		// Debug.Log("We have assigned cameraTransform automaticly");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD2ED775A4F7E82062A0C8050479640FEC049A97A, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void WorldGeneration::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_Update_m5A69BC7EA3ACDE72DAB75D574C8BFA15F4F54B1A (WorldGeneration_t28002E89B20EBD9DE09419AA6BC46B6E48BBE883* __this, const RuntimeMethod* method) 
{
	{
		// ScanPosition();
		WorldGeneration_ScanPosition_mC225017E5CE28DF48DEFE6745B9B0175A2899BA1(__this, NULL);
		// }
		return;
	}
}
// System.Void WorldGeneration::ScanPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_ScanPosition_mC225017E5CE28DF48DEFE6745B9B0175A2899BA1 (WorldGeneration_t28002E89B20EBD9DE09419AA6BC46B6E48BBE883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m81722792FCF279A9949BC5756A69F6AB1F7BF487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* V_0 = NULL;
	{
		// float cameraZ = cameraTransform.position.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___cameraTransform_11;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___z_4;
		// Chunk lastChunk = activeChunks.Peek();
		Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7* L_3 = __this->___activeChunks_5;
		NullCheck(L_3);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_4;
		L_4 = Queue_1_Peek_m81722792FCF279A9949BC5756A69F6AB1F7BF487(L_3, Queue_1_Peek_m81722792FCF279A9949BC5756A69F6AB1F7BF487_RuntimeMethod_var);
		V_0 = L_4;
		// if (cameraZ > lastChunk.transform.position.z + lastChunk.chunkLength + despawnDistance)
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_5 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___z_4;
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_9 = V_0;
		NullCheck(L_9);
		float L_10 = L_9->___chunkLength_4;
		float L_11 = __this->___despawnDistance_9;
		if ((!(((float)L_2) > ((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_8, L_10)), L_11))))))
		{
			goto IL_0048;
		}
	}
	{
		// SpawnNewChunk();
		WorldGeneration_SpawnNewChunk_m6DB83D4013330ACA4A88B328F1DF8C3CB282A452(__this, NULL);
		// DeleteLastChunk();
		WorldGeneration_DeleteLastChunk_m3999ED347332EF5818E44C7B3632945D9D3CCBFB(__this, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void WorldGeneration::SpawnNewChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_SpawnNewChunk_m6DB83D4013330ACA4A88B328F1DF8C3CB282A452 (WorldGeneration_t28002E89B20EBD9DE09419AA6BC46B6E48BBE883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisChunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060_mD6C9C746C2686E4AD5C82E179B336F6C6AC1E05A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m2B2E04A3752853ED494FC90212428ADA20628B95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t423A1CF921F241C3EA1C98E4944C4ECE91797DEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mA0EDC6D6C7BC37213598C7C1E20B09D70CE6B60E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CSpawnNewChunkU3Eb__0_m8BC3793561AF1B26562A040F05394A0E1DB4A99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_tD0C4448D99B23B077376EDF2365AF240B17A68E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_tD0C4448D99B23B077376EDF2365AF240B17A68E0* V_0 = NULL;
	Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_tD0C4448D99B23B077376EDF2365AF240B17A68E0* L_0 = (U3CU3Ec__DisplayClass12_0_tD0C4448D99B23B077376EDF2365AF240B17A68E0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_tD0C4448D99B23B077376EDF2365AF240B17A68E0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_mA3274F3AD7703FE53CB05DE35665E8F27719168A(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_tD0C4448D99B23B077376EDF2365AF240B17A68E0* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// int randomIndex = Random.Range(0, chunkPrefab.Count);
		U3CU3Ec__DisplayClass12_0_tD0C4448D99B23B077376EDF2365AF240B17A68E0* L_2 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___chunkPrefab_10;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_3, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_4, NULL);
		NullCheck(L_2);
		L_2->___randomIndex_1 = L_5;
		// Chunk chunk = chunkPool.Find(x => !x.gameObject.activeSelf && x.name == (chunkPrefab[randomIndex].name + "(Clone)"));
		List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* L_6 = __this->___chunkPool_6;
		U3CU3Ec__DisplayClass12_0_tD0C4448D99B23B077376EDF2365AF240B17A68E0* L_7 = V_0;
		Predicate_1_t423A1CF921F241C3EA1C98E4944C4ECE91797DEB* L_8 = (Predicate_1_t423A1CF921F241C3EA1C98E4944C4ECE91797DEB*)il2cpp_codegen_object_new(Predicate_1_t423A1CF921F241C3EA1C98E4944C4ECE91797DEB_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Predicate_1__ctor_mB4B9ED69B4B946B2B7ADCBD0731864ABA8B34A3F(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CSpawnNewChunkU3Eb__0_m8BC3793561AF1B26562A040F05394A0E1DB4A99D_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_9;
		L_9 = List_1_Find_m2B2E04A3752853ED494FC90212428ADA20628B95(L_6, L_8, List_1_Find_m2B2E04A3752853ED494FC90212428ADA20628B95_RuntimeMethod_var);
		V_1 = L_9;
		// if(chunk == null)
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		// GameObject go = Instantiate(chunkPrefab[randomIndex], transform);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->___chunkPrefab_10;
		U3CU3Ec__DisplayClass12_0_tD0C4448D99B23B077376EDF2365AF240B17A68E0* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___randomIndex_1;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_12, L_14, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// chunk = go.GetComponent<Chunk>();
		NullCheck(L_17);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_18;
		L_18 = GameObject_GetComponent_TisChunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060_mD6C9C746C2686E4AD5C82E179B336F6C6AC1E05A(L_17, GameObject_GetComponent_TisChunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060_mD6C9C746C2686E4AD5C82E179B336F6C6AC1E05A_RuntimeMethod_var);
		V_1 = L_18;
	}

IL_0067:
	{
		// chunk.transform.position = new Vector3(0, 0, chunkSpawnZ);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_19 = V_1;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		float L_21 = __this->___chunkSpawnZ_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (0.0f), (0.0f), L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_22, NULL);
		// chunkSpawnZ += chunk.chunkLength;
		float L_23 = __this->___chunkSpawnZ_4;
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_24 = V_1;
		NullCheck(L_24);
		float L_25 = L_24->___chunkLength_4;
		__this->___chunkSpawnZ_4 = ((float)il2cpp_codegen_add(L_23, L_25));
		// activeChunks.Enqueue(chunk);
		Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7* L_26 = __this->___activeChunks_5;
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_27 = V_1;
		NullCheck(L_26);
		Queue_1_Enqueue_mA0EDC6D6C7BC37213598C7C1E20B09D70CE6B60E(L_26, L_27, Queue_1_Enqueue_mA0EDC6D6C7BC37213598C7C1E20B09D70CE6B60E_RuntimeMethod_var);
		// chunk.ShowChunk();
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_28 = V_1;
		NullCheck(L_28);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_29;
		L_29 = Chunk_ShowChunk_m38B7A130142DA413145307F22C2F620ECA2801DC(L_28, NULL);
		// }
		return;
	}
}
// System.Void WorldGeneration::DeleteLastChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_DeleteLastChunk_m3999ED347332EF5818E44C7B3632945D9D3CCBFB (WorldGeneration_t28002E89B20EBD9DE09419AA6BC46B6E48BBE883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m40E5A66F960153686935BD4FF642E19D4D36BA1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mC0B346D7350B815D69F2EFD41040192EFA1B881B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* V_0 = NULL;
	{
		// Chunk chunk = activeChunks.Dequeue();
		Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7* L_0 = __this->___activeChunks_5;
		NullCheck(L_0);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_1;
		L_1 = Queue_1_Dequeue_mC0B346D7350B815D69F2EFD41040192EFA1B881B(L_0, Queue_1_Dequeue_mC0B346D7350B815D69F2EFD41040192EFA1B881B_RuntimeMethod_var);
		V_0 = L_1;
		// chunk.HideChunk();
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_2 = V_0;
		NullCheck(L_2);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_3;
		L_3 = Chunk_HideChunk_mFB0F7B469F21AEF9675D4785E490F2F146D6A216(L_2, NULL);
		// chunkPool.Add(chunk);
		List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* L_4 = __this->___chunkPool_6;
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_5 = V_0;
		NullCheck(L_4);
		List_1_Add_m40E5A66F960153686935BD4FF642E19D4D36BA1A_inline(L_4, L_5, List_1_Add_m40E5A66F960153686935BD4FF642E19D4D36BA1A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void WorldGeneration::ResetWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration_ResetWorld_mF5212E2D01C69C1E5B555BCAE1B5D6526A511794 (WorldGeneration_t28002E89B20EBD9DE09419AA6BC46B6E48BBE883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m6FC054CCCB216A116527B3839B6A0FB1BB7A5EA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// chunkSpawnZ = firstChunkSpawnPosition;
		int32_t L_0 = __this->___firstChunkSpawnPosition_7;
		__this->___chunkSpawnZ_4 = ((float)L_0);
		// for (int i = activeChunks.Count; i != 0; i--)
		Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7* L_1 = __this->___activeChunks_5;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_m6FC054CCCB216A116527B3839B6A0FB1BB7A5EA7_inline(L_1, Queue_1_get_Count_m6FC054CCCB216A116527B3839B6A0FB1BB7A5EA7_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0025;
	}

IL_001b:
	{
		// DeleteLastChunk();
		WorldGeneration_DeleteLastChunk_m3999ED347332EF5818E44C7B3632945D9D3CCBFB(__this, NULL);
		// for (int i = activeChunks.Count; i != 0; i--)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
	}

IL_0025:
	{
		// for (int i = activeChunks.Count; i != 0; i--)
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		// for (int i = 0; i < chunkOnScreen; i++)
		V_1 = 0;
		goto IL_0036;
	}

IL_002c:
	{
		// SpawnNewChunk();
		WorldGeneration_SpawnNewChunk_m6DB83D4013330ACA4A88B328F1DF8C3CB282A452(__this, NULL);
		// for (int i = 0; i < chunkOnScreen; i++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0036:
	{
		// for (int i = 0; i < chunkOnScreen; i++)
		int32_t L_6 = V_1;
		int32_t L_7 = __this->___chunkOnScreen_8;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_002c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void WorldGeneration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldGeneration__ctor_m3F856F35C25D1D14970F1B8E3AC23AA4A5E2F9E3 (WorldGeneration_t28002E89B20EBD9DE09419AA6BC46B6E48BBE883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAEBFD74C6C8CF3E70E6E414A7349E8EC3C476605_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m473EABB76EE736DF1E6ABD4DA8051B16F4A3557E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Queue<Chunk> activeChunks = new Queue<Chunk>();
		Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7* L_0 = (Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7*)il2cpp_codegen_object_new(Queue_1_t1BAEDB75AE7553F1AC8C24FC923E8B04887DA9E7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m473EABB76EE736DF1E6ABD4DA8051B16F4A3557E(L_0, Queue_1__ctor_m473EABB76EE736DF1E6ABD4DA8051B16F4A3557E_RuntimeMethod_var);
		__this->___activeChunks_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeChunks_5), (void*)L_0);
		// private List<Chunk> chunkPool = new List<Chunk>();
		List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* L_1 = (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA*)il2cpp_codegen_object_new(List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mAEBFD74C6C8CF3E70E6E414A7349E8EC3C476605(L_1, List_1__ctor_mAEBFD74C6C8CF3E70E6E414A7349E8EC3C476605_RuntimeMethod_var);
		__this->___chunkPool_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chunkPool_6), (void*)L_1);
		// [SerializeField] private int firstChunkSpawnPosition = -10;
		__this->___firstChunkSpawnPosition_7 = ((int32_t)-10);
		// [SerializeField] private int chunkOnScreen = 5;
		__this->___chunkOnScreen_8 = 5;
		// [SerializeField] private float despawnDistance = 5.0f;
		__this->___despawnDistance_9 = (5.0f);
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
// System.Void WorldGeneration/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mA3274F3AD7703FE53CB05DE35665E8F27719168A (U3CU3Ec__DisplayClass12_0_tD0C4448D99B23B077376EDF2365AF240B17A68E0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean WorldGeneration/<>c__DisplayClass12_0::<SpawnNewChunk>b__0(Chunk)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CSpawnNewChunkU3Eb__0_m8BC3793561AF1B26562A040F05394A0E1DB4A99D (U3CU3Ec__DisplayClass12_0_tD0C4448D99B23B077376EDF2365AF240B17A68E0* __this, Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Chunk chunk = chunkPool.Find(x => !x.gameObject.activeSelf && x.name == (chunkPrefab[randomIndex].name + "(Clone)"));
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_0 = ___x0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_3 = ___x0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		WorldGeneration_t28002E89B20EBD9DE09419AA6BC46B6E48BBE883* L_5 = __this->___U3CU3E4__this_0;
		NullCheck(L_5);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = L_5->___chunkPrefab_10;
		int32_t L_7 = __this->___randomIndex_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, L_7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F, NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_10, NULL);
		return L_11;
	}

IL_003e:
	{
		return (bool)0;
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
// System.Void thiefhurdles::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void thiefhurdles_Start_m879A57DB9679FBD642DDD4B0B215079550085EDE (thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hitCollider = GetComponent<BoxCollider>();
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_0;
		L_0 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(__this, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		__this->___hitCollider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hitCollider_4), (void*)L_0);
		// safeCollider = GetComponent<BoxCollider>();
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_1;
		L_1 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(__this, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		__this->___safeCollider_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___safeCollider_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void thiefhurdles::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void thiefhurdles_Update_m27D9C1A3A9046BC0D29991DFA66ECEE828B8EE62 (thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E* __this, const RuntimeMethod* method) 
{
	{
		// if (thiefHit == true)
		bool L_0 = __this->___thiefHit_6;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// hitCollider.isTrigger = true;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_1 = __this->___hitCollider_4;
		NullCheck(L_1);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_1, (bool)1, NULL);
		// safeCollider.isTrigger = true;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_2 = __this->___safeCollider_5;
		NullCheck(L_2);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_2, (bool)1, NULL);
	}

IL_0020:
	{
		// if (thiefHit == false)
		bool L_3 = __this->___thiefHit_6;
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		// StartCoroutine(StartCounter());
		RuntimeObject* L_4;
		L_4 = thiefhurdles_StartCounter_m224B8D48B9714FDC3DAC6890FD7346E72EC1CF7D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void thiefhurdles::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void thiefhurdles_OnCollisionEnter_m3F5158710C6236CDEDCAE94D919CA92AE5D31EED (thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092F767D1737D0F2FE7F997B865FCA98D64AF9F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DB39EDEC2EDFD929BEDD954CA23656E072385C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Thief")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral092F767D1737D0F2FE7F997B865FCA98D64AF9F2, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.Log("Thief is colliding");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3DB39EDEC2EDFD929BEDD954CA23656E072385C5, NULL);
		// thiefHit = true;
		__this->___thiefHit_6 = (bool)1;
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void thiefhurdles::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void thiefhurdles_OnCollisionExit_mC06486FDD2761802E3FEDB6F553E0DFA063F6099 (thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092F767D1737D0F2FE7F997B865FCA98D64AF9F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25A1451C7BCC7FBE9AF710A8211A11E79F51AB1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Thief")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral092F767D1737D0F2FE7F997B865FCA98D64AF9F2, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.Log("Thief is out of collider");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral25A1451C7BCC7FBE9AF710A8211A11E79F51AB1D, NULL);
		// thiefHit = false;
		__this->___thiefHit_6 = (bool)0;
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator thiefhurdles::StartCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* thiefhurdles_StartCounter_m224B8D48B9714FDC3DAC6890FD7346E72EC1CF7D (thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartCounterU3Ed__8_t622EA1C78CA0BFEC2FFFC408DEFC114E6BFB3395_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartCounterU3Ed__8_t622EA1C78CA0BFEC2FFFC408DEFC114E6BFB3395* L_0 = (U3CStartCounterU3Ed__8_t622EA1C78CA0BFEC2FFFC408DEFC114E6BFB3395*)il2cpp_codegen_object_new(U3CStartCounterU3Ed__8_t622EA1C78CA0BFEC2FFFC408DEFC114E6BFB3395_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartCounterU3Ed__8__ctor_mAF21AFDEC79F049FFCD004C137D4F23FE137B131(L_0, 0, NULL);
		U3CStartCounterU3Ed__8_t622EA1C78CA0BFEC2FFFC408DEFC114E6BFB3395* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void thiefhurdles::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void thiefhurdles__ctor_m3C6BFDC1FEDD73A9068F1E0198587A030F68CC75 (thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E* __this, const RuntimeMethod* method) 
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
// System.Void thiefhurdles/<StartCounter>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__8__ctor_mAF21AFDEC79F049FFCD004C137D4F23FE137B131 (U3CStartCounterU3Ed__8_t622EA1C78CA0BFEC2FFFC408DEFC114E6BFB3395* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void thiefhurdles/<StartCounter>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__8_System_IDisposable_Dispose_mAF28420B7173AEDB4668F50BB63B6759EE9FD777 (U3CStartCounterU3Ed__8_t622EA1C78CA0BFEC2FFFC408DEFC114E6BFB3395* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean thiefhurdles/<StartCounter>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartCounterU3Ed__8_MoveNext_mBC9E0885E1B054301B0D5DB195A8D94747B3CE3D (U3CStartCounterU3Ed__8_t622EA1C78CA0BFEC2FFFC408DEFC114E6BFB3395* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0054;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// countDown = 0.8f;
		thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E* L_4 = V_1;
		NullCheck(L_4);
		L_4->___countDown_7 = (0.800000012f);
		// for (int i = 0; i < 10000; i++)
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_0078;
	}

IL_0032:
	{
		// countDown -= Time.smoothDeltaTime;
		thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E* L_5 = V_1;
		thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___countDown_7;
		float L_8;
		L_8 = Time_get_smoothDeltaTime_m41881A3290CC95E6EF2D55289D1D872A45DC1775(NULL);
		NullCheck(L_5);
		L_5->___countDown_7 = ((float)il2cpp_codegen_subtract(L_7, L_8));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0054:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005b:
	{
		// while (countDown >= 0)
		thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___countDown_7;
		if ((((float)L_10) >= ((float)(0.0f))))
		{
			goto IL_0032;
		}
	}
	{
		// for (int i = 0; i < 10000; i++)
		int32_t L_11 = __this->___U3CiU3E5__2_3;
		V_2 = L_11;
		int32_t L_12 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0078:
	{
		// for (int i = 0; i < 10000; i++)
		int32_t L_13 = __this->___U3CiU3E5__2_3;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)10000))))
		{
			goto IL_005b;
		}
	}
	{
		// hitCollider.isTrigger = false;
		thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E* L_14 = V_1;
		NullCheck(L_14);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_15 = L_14->___hitCollider_4;
		NullCheck(L_15);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_15, (bool)0, NULL);
		// safeCollider.isTrigger = false;
		thiefhurdles_t462172B8CECBD389EF19E805D681722ECF0CBB6E* L_16 = V_1;
		NullCheck(L_16);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_17 = L_16->___safeCollider_5;
		NullCheck(L_17);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_17, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object thiefhurdles/<StartCounter>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartCounterU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD5E95C7F37033162377B0AFB8C68B5D50CE83503 (U3CStartCounterU3Ed__8_t622EA1C78CA0BFEC2FFFC408DEFC114E6BFB3395* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void thiefhurdles/<StartCounter>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCounterU3Ed__8_System_Collections_IEnumerator_Reset_m9DB1471EB8D08F8904D06D4604E6DEDC84804BCB (U3CStartCounterU3Ed__8_t622EA1C78CA0BFEC2FFFC408DEFC114E6BFB3395* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartCounterU3Ed__8_System_Collections_IEnumerator_Reset_m9DB1471EB8D08F8904D06D4604E6DEDC84804BCB_RuntimeMethod_var)));
	}
}
// System.Object thiefhurdles/<StartCounter>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartCounterU3Ed__8_System_Collections_IEnumerator_get_Current_m87DE51564BF058DFBD8A2FD02DCC558DF635037E (U3CStartCounterU3Ed__8_t622EA1C78CA0BFEC2FFFC408DEFC114E6BFB3395* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// BrokenVector.LowPolyFencePack.DoorController/DoorState BrokenVector.LowPolyFencePack.DoorController::get_CurrentState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DoorController_get_CurrentState_m10DFDE50F042C43A25528B905B73559B5C94AFA1 (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) 
{
	{
		// return currentState;
		int32_t L_0 = __this->___currentState_9;
		return L_0;
	}
}
// System.Void BrokenVector.LowPolyFencePack.DoorController::set_CurrentState(BrokenVector.LowPolyFencePack.DoorController/DoorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController_set_CurrentState_mED5164D84AA548BB5DB9BF851FE7252F06302425 (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// currentState = value;
		int32_t L_0 = ___value0;
		__this->___currentState_9 = L_0;
		// Animate();
		DoorController_Animate_mF330E38A70AD7554637FE4703D4388D5573C098D(__this, NULL);
		// }
		return;
	}
}
// System.Boolean BrokenVector.LowPolyFencePack.DoorController::get_IsDoorOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DoorController_get_IsDoorOpen_mED0E43F2137FAC2A1D958EBA93C65BFBC57C2E59 (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDoorOpen { get { return CurrentState == DoorState.Open; } }
		int32_t L_0;
		L_0 = DoorController_get_CurrentState_m10DFDE50F042C43A25528B905B73559B5C94AFA1_inline(__this, NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean BrokenVector.LowPolyFencePack.DoorController::get_IsDoorClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DoorController_get_IsDoorClosed_m8D72CCCE18CCDC51FEF860817274E3E6A83E8287 (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDoorClosed { get { return CurrentState == DoorState.Closed; } }
		int32_t L_0;
		L_0 = DoorController_get_CurrentState_m10DFDE50F042C43A25528B905B73559B5C94AFA1_inline(__this, NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void BrokenVector.LowPolyFencePack.DoorController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController_Awake_m41A67CDA59EBE84C1E7540CF44B3AC23D8646810 (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoorState_tB65DA677E161529FF9A9DF0DFFFE5F2EFAFCE67F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAF6653D53BF80AD7987AA17C0764CF3B1797FD4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// animator = GetComponent<Animation>();
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0;
		L_0 = Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290(__this, Component_GetComponent_TisAnimation_t6593B06C39E3B139808B19F2C719C860F3F61040_mC2FF017155293B66CD07DC5916A37D54F3DCC290_RuntimeMethod_var);
		__this->___animator_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_8), (void*)L_0);
		// if (animator == null)
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_1 = __this->___animator_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// Debug.LogError("Every DoorController needs an Animator.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralAAF6653D53BF80AD7987AA17C0764CF3B1797FD4, NULL);
		// return;
		return;
	}

IL_0025:
	{
		// animator.playAutomatically = false;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_3 = __this->___animator_8;
		NullCheck(L_3);
		Animation_set_playAutomatically_mF293663249E24B5D595F669515551F06309C96D0(L_3, (bool)0, NULL);
		// openAnimation.legacy = true;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_4 = __this->___openAnimation_6;
		NullCheck(L_4);
		AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377(L_4, (bool)1, NULL);
		// closeAnimation.legacy = true;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_5 = __this->___closeAnimation_7;
		NullCheck(L_5);
		AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377(L_5, (bool)1, NULL);
		// animator.AddClip(openAnimation, DoorState.Open.ToString());
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_6 = __this->___animator_8;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_7 = __this->___openAnimation_6;
		V_0 = 0;
		Il2CppFakeBox<int32_t> L_8(DoorState_tB65DA677E161529FF9A9DF0DFFFE5F2EFAFCE67F_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_9;
		L_9 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), NULL);
		NullCheck(L_6);
		Animation_AddClip_m10EDEAA1060E0356379BFE9AB24F97C9EBBED1A3(L_6, L_7, L_9, NULL);
		// animator.AddClip(closeAnimation, DoorState.Closed.ToString());
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_10 = __this->___animator_8;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_11 = __this->___closeAnimation_7;
		V_0 = 1;
		Il2CppFakeBox<int32_t> L_12(DoorState_tB65DA677E161529FF9A9DF0DFFFE5F2EFAFCE67F_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_13;
		L_13 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_12), NULL);
		NullCheck(L_10);
		Animation_AddClip_m10EDEAA1060E0356379BFE9AB24F97C9EBBED1A3(L_10, L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void BrokenVector.LowPolyFencePack.DoorController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController_Start_mF030C0AB6F969D4EA6A506E6472E32D79BAE4C5E (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// currentState = InitialState;
		int32_t L_0 = __this->___InitialState_4;
		__this->___currentState_9 = L_0;
		// var clip = GetCurrentAnimation();
		String_t* L_1;
		L_1 = DoorController_GetCurrentAnimation_m7A212994A7997783D313B5F39C347474C49AAD77(__this, NULL);
		V_0 = L_1;
		// animator[clip].speed = 9999;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_2 = __this->___animator_8;
		String_t* L_3 = V_0;
		NullCheck(L_2);
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_4;
		L_4 = Animation_get_Item_m60997A8CDE7F415FC55FBB0D6D3F28339C4B32E8(L_2, L_3, NULL);
		NullCheck(L_4);
		AnimationState_set_speed_m9FADB34E8FA313E07ABF8F90B6F4179D2DAF9E7D(L_4, (9999.0f), NULL);
		// animator.Play(clip);
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_5 = __this->___animator_8;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void BrokenVector.LowPolyFencePack.DoorController::CloseDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController_CloseDoor_m9B2BEC56EAB5EA626A31E20C7001749C50014CBA (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) 
{
	{
		// if (IsDoorClosed)
		bool L_0;
		L_0 = DoorController_get_IsDoorClosed_m8D72CCCE18CCDC51FEF860817274E3E6A83E8287(__this, NULL);
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
		// CurrentState = DoorState.Closed;
		DoorController_set_CurrentState_mED5164D84AA548BB5DB9BF851FE7252F06302425(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void BrokenVector.LowPolyFencePack.DoorController::OpenDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController_OpenDoor_mAD7D25AF52286A8143F9C3470ECDEEB748F7900D (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) 
{
	{
		// if (IsDoorOpen)
		bool L_0;
		L_0 = DoorController_get_IsDoorOpen_mED0E43F2137FAC2A1D958EBA93C65BFBC57C2E59(__this, NULL);
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
		// CurrentState = DoorState.Open;
		DoorController_set_CurrentState_mED5164D84AA548BB5DB9BF851FE7252F06302425(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void BrokenVector.LowPolyFencePack.DoorController::ToggleDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController_ToggleDoor_mB8CF6CD38A611CBF095A133AFB9F8585E64E39B6 (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) 
{
	{
		// if (IsDoorOpen)
		bool L_0;
		L_0 = DoorController_get_IsDoorOpen_mED0E43F2137FAC2A1D958EBA93C65BFBC57C2E59(__this, NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// CloseDoor();
		DoorController_CloseDoor_m9B2BEC56EAB5EA626A31E20C7001749C50014CBA(__this, NULL);
		return;
	}

IL_000f:
	{
		// OpenDoor();
		DoorController_OpenDoor_mAD7D25AF52286A8143F9C3470ECDEEB748F7900D(__this, NULL);
		// }
		return;
	}
}
// System.Void BrokenVector.LowPolyFencePack.DoorController::Animate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController_Animate_mF330E38A70AD7554637FE4703D4388D5573C098D (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// var clip = GetCurrentAnimation();
		String_t* L_0;
		L_0 = DoorController_GetCurrentAnimation_m7A212994A7997783D313B5F39C347474C49AAD77(__this, NULL);
		V_0 = L_0;
		// animator[clip].speed = AnimationSpeed;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_1 = __this->___animator_8;
		String_t* L_2 = V_0;
		NullCheck(L_1);
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_3;
		L_3 = Animation_get_Item_m60997A8CDE7F415FC55FBB0D6D3F28339C4B32E8(L_1, L_2, NULL);
		float L_4 = __this->___AnimationSpeed_5;
		NullCheck(L_3);
		AnimationState_set_speed_m9FADB34E8FA313E07ABF8F90B6F4179D2DAF9E7D(L_3, L_4, NULL);
		// animator.Play(clip);
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_5 = __this->___animator_8;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.String BrokenVector.LowPolyFencePack.DoorController::GetCurrentAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DoorController_GetCurrentAnimation_m7A212994A7997783D313B5F39C347474C49AAD77 (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoorState_tB65DA677E161529FF9A9DF0DFFFE5F2EFAFCE67F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return CurrentState.ToString();
		int32_t L_0;
		L_0 = DoorController_get_CurrentState_m10DFDE50F042C43A25528B905B73559B5C94AFA1_inline(__this, NULL);
		V_0 = L_0;
		Il2CppFakeBox<int32_t> L_1(DoorState_tB65DA677E161529FF9A9DF0DFFFE5F2EFAFCE67F_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		return L_2;
	}
}
// System.Void BrokenVector.LowPolyFencePack.DoorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorController__ctor_m7B71D990849C0F95580BFBA82487CD93B412850A (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) 
{
	{
		// public DoorState InitialState = DoorState.Closed;
		__this->___InitialState_4 = 1;
		// public float AnimationSpeed = 1;
		__this->___AnimationSpeed_5 = (1.0f);
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
// System.Void BrokenVector.LowPolyFencePack.DoorToggle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorToggle_Awake_m0D47CE1711163AE3CDE876AD857549C5B3C3E375 (DoorToggle_t637CE7CD5986F59649EBE877E7446F77E595279D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607_mA09EE932A000C0F2F0A2B9BD90A1952CE4E41D50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// doorController = GetComponent<DoorController>();
		DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* L_0;
		L_0 = Component_GetComponent_TisDoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607_mA09EE932A000C0F2F0A2B9BD90A1952CE4E41D50(__this, Component_GetComponent_TisDoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607_mA09EE932A000C0F2F0A2B9BD90A1952CE4E41D50_RuntimeMethod_var);
		__this->___doorController_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___doorController_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void BrokenVector.LowPolyFencePack.DoorToggle::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorToggle_OnMouseDown_mDACA186648D0AD96738A924CB0EAB03AD72A2E5D (DoorToggle_t637CE7CD5986F59649EBE877E7446F77E595279D* __this, const RuntimeMethod* method) 
{
	{
		// doorController.ToggleDoor();
		DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* L_0 = __this->___doorController_4;
		NullCheck(L_0);
		DoorController_ToggleDoor_mB8CF6CD38A611CBF095A133AFB9F8585E64E39B6(L_0, NULL);
		// }
		return;
	}
}
// System.Void BrokenVector.LowPolyFencePack.DoorToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorToggle__ctor_mA23E454284DE2CDFC5AD29F51C7464E15B2B4377 (DoorToggle_t637CE7CD5986F59649EBE877E7446F77E595279D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
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
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
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
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DoorController_get_CurrentState_m10DFDE50F042C43A25528B905B73559B5C94AFA1_inline (DoorController_t8AFEC046D83FAC50A16C994C5E662C86C71B7607* __this, const RuntimeMethod* method) 
{
	{
		// return currentState;
		int32_t L_0 = __this->___currentState_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
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
		NullCheck(L_4);
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
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
