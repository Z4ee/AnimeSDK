#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityChan/SpringManager_BoneTag.h"
#include "unitysdk/UnityChan/SpringManager_SpringBonePropertyType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_2FE2076DA950FCCD;
namespace RPG::Client { class SpringBoneCommonConfig; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityChan { class SpringBone; }
namespace UnityChan { class SpringManager_Class_1_44494F1EF855DA72; }
namespace UnityChan { class SpringManager_SpringBoneClass; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define UNITYCHAN_SPRINGMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE994200)
#define UNITYCHAN_SPRINGMANAGER_BINDCONTROLLER_OFFSET UNITYSDK_OFFSET(0xE994470)
#define UNITYCHAN_SPRINGMANAGER_COLLECTBONECHAIN_OFFSET UNITYSDK_OFFSET(0xE995B40)
#define UNITYCHAN_SPRINGMANAGER_DISABLERESETALLPOSITION_OFFSET UNITYSDK_OFFSET(0xE995630)
#define UNITYCHAN_SPRINGMANAGER_FINDINDEXINBONES_OFFSET UNITYSDK_OFFSET(0xE994630)
#define UNITYCHAN_SPRINGMANAGER_GETRESETPOSITIONSTATE_OFFSET UNITYSDK_OFFSET(0xE995B30)
#define UNITYCHAN_SPRINGMANAGER_GETTYPEWEIGHT_OFFSET UNITYSDK_OFFSET(0xE9953C0)
#define UNITYCHAN_SPRINGMANAGER_GETVECTORSCALE_OFFSET UNITYSDK_OFFSET(0xE9946D0)
#define UNITYCHAN_SPRINGMANAGER_GET_ALLOWMULTITHREAD_OFFSET UNITYSDK_OFFSET(0xE9945E0)
#define UNITYCHAN_SPRINGMANAGER_GET_ALWAYSMODERATIO_OFFSET UNITYSDK_OFFSET(0xE992CF0)
#define UNITYCHAN_SPRINGMANAGER_GET_COMMONCONFIG_OFFSET UNITYSDK_OFFSET(0xE992BF0)
#define UNITYCHAN_SPRINGMANAGER_GET_DYNAMICRATIO_OFFSET UNITYSDK_OFFSET(0xE992CE0)
#define UNITYCHAN_SPRINGMANAGER_GET_MOTIONTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE9933A0)
#define UNITYCHAN_SPRINGMANAGER_GET_PASSIVEDELTAPOSITION_OFFSET UNITYSDK_OFFSET(0xE9933F0)
#define UNITYCHAN_SPRINGMANAGER_INITCUSTOMTAGBLENDDATA_OFFSET UNITYSDK_OFFSET(0xE994230)
#define UNITYCHAN_SPRINGMANAGER_ISSET_OFFSET UNITYSDK_OFFSET(0xE995690)
#define UNITYCHAN_SPRINGMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE994D40)
#define UNITYCHAN_SPRINGMANAGER_METHOD_5_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xE9938E0)
#define UNITYCHAN_SPRINGMANAGER_METHOD_5_19AF8B4A7850E7F2_OFFSET UNITYSDK_OFFSET(0xE993D70)
#define UNITYCHAN_SPRINGMANAGER_METHOD_5_26DEC114610F10A5_OFFSET UNITYSDK_OFFSET(0xE995750)
#define UNITYCHAN_SPRINGMANAGER_METHOD_5_7EDA82E1A56BE1B3_OFFSET UNITYSDK_OFFSET(0xE994D70)
#define UNITYCHAN_SPRINGMANAGER_METHOD_5_8013CD60ABB99387_OFFSET UNITYSDK_OFFSET(0xE995320)
#define UNITYCHAN_SPRINGMANAGER_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xE993020)
#define UNITYCHAN_SPRINGMANAGER_METHOD_5_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0xE992D00)
#define UNITYCHAN_SPRINGMANAGER_METHOD_5_C9D23F9BA824950F_OFFSET UNITYSDK_OFFSET(0xE993030)
#define UNITYCHAN_SPRINGMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE994C60)
#define UNITYCHAN_SPRINGMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE994A90)
#define UNITYCHAN_SPRINGMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE9948A0)
#define UNITYCHAN_SPRINGMANAGER_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0xE994890)
#define UNITYCHAN_SPRINGMANAGER_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xE994A80)
#define UNITYCHAN_SPRINGMANAGER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xE995670)
#define UNITYCHAN_SPRINGMANAGER_REMOVETYPEWEIGHT_1_OFFSET UNITYSDK_OFFSET(0xE995AC0)
#define UNITYCHAN_SPRINGMANAGER_REMOVETYPEWEIGHT_OFFSET UNITYSDK_OFFSET(0xE995A30)
#define UNITYCHAN_SPRINGMANAGER_RESETALLDATA_OFFSET UNITYSDK_OFFSET(0xE9934A0)
#define UNITYCHAN_SPRINGMANAGER_RESETALLPOSITION_OFFSET UNITYSDK_OFFSET(0xE9939E0)
#define UNITYCHAN_SPRINGMANAGER_RESETALWAYSMODERATIO_OFFSET UNITYSDK_OFFSET(0xE995660)
#define UNITYCHAN_SPRINGMANAGER_RESETDYNAMICRATIO_OFFSET UNITYSDK_OFFSET(0xE9939F0)
#define UNITYCHAN_SPRINGMANAGER_RESETPASSIVEDELTAPOSITION_OFFSET UNITYSDK_OFFSET(0xE995640)
#define UNITYCHAN_SPRINGMANAGER_RESETTURNRATIO_OFFSET UNITYSDK_OFFSET(0xE993520)
#define UNITYCHAN_SPRINGMANAGER_RESETTYPEDICRATIO_OFFSET UNITYSDK_OFFSET(0xE993AD0)
#define UNITYCHAN_SPRINGMANAGER_SAFEINIT_OFFSET UNITYSDK_OFFSET(0xE994460)
#define UNITYCHAN_SPRINGMANAGER_SETTYPEWEIGHT_1_OFFSET UNITYSDK_OFFSET(0xE9958E0)
#define UNITYCHAN_SPRINGMANAGER_SETTYPEWEIGHT_OFFSET UNITYSDK_OFFSET(0xE9956A0)
#define UNITYCHAN_SPRINGMANAGER_SETUPTURNRATIO_OFFSET UNITYSDK_OFFSET(0xE993430)
#define UNITYCHAN_SPRINGMANAGER_SET_COMMONCONFIG_OFFSET UNITYSDK_OFFSET(0xE992C80)
#define UNITYCHAN_SPRINGMANAGER_SET_MOTIONTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE9933E0)
#define UNITYCHAN_SPRINGMANAGER_SET_PASSIVEDELTAPOSITION_OFFSET UNITYSDK_OFFSET(0xE993410)
#define UNITYCHAN_SPRINGMANAGER_SYNCCONFIGTOMANAGEDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xE995680)
#define UNITYCHAN_SPRINGMANAGER_UPDATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0xE995B50)
#define UNITYCHAN_SPRINGMANAGER_UPDATEPARAMETER_OFFSET UNITYSDK_OFFSET(0xE995B60)
#define UNITYCHAN_SPRINGMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE994430)
#define UNITYCHAN_SPRINGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE995CB0)
#define UNITYCHAN_SPRINGMANAGER__CREATETHREADTASK_OFFSET UNITYSDK_OFFSET(0xE994530)
#define UNITYCHAN_SPRINGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xE995B70)
#define UNITYCHAN_SPRINGMANAGER__DISPOSETHREADTASK_OFFSET UNITYSDK_OFFSET(0xE993770)

namespace UnityChan
{
	inline static constexpr unsigned int SpringManager_TypeDefinitionIndex = 48153;

	class SpringManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_QualitySettingEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpringManager_TypeDefinitionIndex)->GetStaticField(0x7560);
		}
		static ::System::Int32* StaticGet_JobBatchSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SpringManager_TypeDefinitionIndex)->GetStaticField(0x7564);
		}
		::System::Boolean bManualLateUpdate; // 0x18
		::System::Boolean DisableSpringBone; // 0x19
		::System::Boolean bUseSPMultiThread; // 0x1A
		::UnityEngine::Vector3 mLastRootPos; // 0x1C
		::System::Boolean saveDuringPlay; // 0x28
		::System::String* clonePrefabPath; // 0x30
		::System::String* clonePrefabName; // 0x38
		::System::Int32 clonePrefabRootUpIndex; // 0x40
		::System::Single globalDynamicRatio; // 0x44
		::UnityEngine::AnimationCurve* turnAngleToRatioCurve; // 0x48
		::System::Single decayRate; // 0x50
		::System::Single TurnRatioKeepTime; // 0x54
		::System::Boolean UseCustomLookAtTagBlend; // 0x58
		::System::Single LookAtTagDecayRate; // 0x5C
		::System::Single LookAtTagTurnRatioKeepTime; // 0x60
		::System::Boolean OnlyEnableCollider; // 0x64
		::System::Boolean AlwaysEnableSpringBone; // 0x65
		::System::Boolean DisableCommonConfig; // 0x66
		::Il2CppArray<::UnityChan::SpringManager_SpringBoneClass*>* TableList; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* rootTransforms; // 0x70
		::Il2CppArray<::UnityChan::SpringBone*>* springBones; // 0x78
		::System::Collections::Generic::Dictionary_2<::UnityChan::SpringManager_BoneTag, ::UnityChan::SpringManager_Class_1_44494F1EF855DA72*>* TypeRatioDic; // 0x80
		::System::Boolean IKAGGMEHKDM; // 0x88
		::System::String* CAJPAGKBBML; // 0x90
		::System::Single GIJJLFAMHCM; // 0x98
		::System::Single IJMAIGHGBOG; // 0x9C
		::System::Single CDLLOJBMGEH; // 0xA0
		::System::Boolean CDEBEGFNCLH; // 0xA4
		::System::Single BMBDFABILEH; // 0xA8
		::System::Single HIJEFPILHIG; // 0xAC
		::System::Single GNFHJJEELHI; // 0xB0
		::System::Boolean LPJIKAIFDMJ; // 0xB4
		::UnityEngine::GameObject* KEJEGBHKJOI; // 0xB8
		::System::String* JAJKLEANJAP; // 0xC0
		::System::Boolean IKCCHHCDBCO; // 0xC8
		::UnityEngine::Transform* FNPEAHHCJIJ; // 0xD0
		::UnityEngine::Vector3 DKJOOHNBHEN; // 0xD8
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0xE8
		::Class_2_2FE2076DA950FCCD* GDDBNMMBBMC; // 0xF0
		::System::Boolean LGLHPNPJJKH; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER__CCTOR_OFFSET))();
		}

		::RPG::Client::SpringBoneCommonConfig* get_CommonConfig()
		{
			return ((::RPG::Client::SpringBoneCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_GET_COMMONCONFIG_OFFSET))(this);
		}

		::System::Void set_CommonConfig(::RPG::Client::SpringBoneCommonConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpringBoneCommonConfig*))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_SET_COMMONCONFIG_OFFSET))(this, a1);
		}

		::System::Single get_DynamicRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_GET_DYNAMICRATIO_OFFSET))(this);
		}

		::System::Single get_AlwaysModeRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_GET_ALWAYSMODERATIO_OFFSET))(this);
		}

		::System::Void Method_5_C706B1EC6D2E1C64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_METHOD_5_C706B1EC6D2E1C64_OFFSET))(this);
		}

		::UnityEngine::Transform* get_MotionTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_GET_MOTIONTRANSFORM_OFFSET))(this);
		}

		::System::Void set_MotionTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_SET_MOTIONTRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_PassiveDeltaPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_GET_PASSIVEDELTAPOSITION_OFFSET))(this);
		}

		::System::Void set_PassiveDeltaPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_SET_PASSIVEDELTAPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetupTurnRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_SETUPTURNRATIO_OFFSET))(this, a1);
		}

		::System::Void ResetAllData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_RESETALLDATA_OFFSET))(this);
		}

		::System::Void ResetTurnRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_RESETTURNRATIO_OFFSET))(this);
		}

		::System::Void ResetDynamicRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_RESETDYNAMICRATIO_OFFSET))(this, a1);
		}

		::System::Void ResetTypeDicRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_RESETTYPEDICRATIO_OFFSET))(this, a1);
		}

		::System::Void Method_5_C9D23F9BA824950F(::UnityChan::SpringBone* a1, ::System::Collections::Generic::List_1<::UnityChan::SpringBone*>*& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityChan::SpringBone*, ::System::Collections::Generic::List_1<::UnityChan::SpringBone*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_METHOD_5_C9D23F9BA824950F_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_19AF8B4A7850E7F2(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*&))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_METHOD_5_19AF8B4A7850E7F2_OFFSET))(this, a1, a2);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void SafeInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_SAFEINIT_OFFSET))(this);
		}

		::System::Void InitCustomTagBlendData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_INITCUSTOMTAGBLENDDATA_OFFSET))(this);
		}

		::System::Void BindController(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_BINDCONTROLLER_OFFSET))(this, a1);
		}

		::System::Boolean get_AllowMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_GET_ALLOWMULTITHREAD_OFFSET))(this);
		}

		::System::Void Method_5_0865E94460F11643()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_METHOD_5_0865E94460F11643_OFFSET))(this);
		}

		::System::Void _CreateThreadTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER__CREATETHREADTASK_OFFSET))(this);
		}

		::System::Void _DisposeThreadTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER__DISPOSETHREADTASK_OFFSET))(this);
		}

		::System::Int32 FindIndexInBones(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_FINDINDEXINBONES_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetVectorScale(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_GETVECTORSCALE_OFFSET))(this, a1);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_7EDA82E1A56BE1B3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_METHOD_5_7EDA82E1A56BE1B3_OFFSET))(this, a1);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_ONVALIDATE_OFFSET))(this);
		}

		static ::System::Boolean IsSet(::UnityChan::SpringManager_BoneTag a1, ::UnityChan::SpringManager_BoneTag a2)
		{
			return ((::System::Boolean(*)(::UnityChan::SpringManager_BoneTag, ::UnityChan::SpringManager_BoneTag))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_ISSET_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetTypeWeight(::System::Collections::Generic::Dictionary_2<::UnityChan::SpringManager_BoneTag, ::UnityChan::SpringManager_Class_1_44494F1EF855DA72*>* a1, ::UnityChan::SpringManager_BoneTag a2, ::System::Single& a3, ::System::Boolean& a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::UnityChan::SpringManager_BoneTag, ::UnityChan::SpringManager_Class_1_44494F1EF855DA72*>*, ::UnityChan::SpringManager_BoneTag, ::System::Single&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_GETTYPEWEIGHT_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void SetTypeWeight(::UnityChan::SpringManager_BoneTag a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager_BoneTag, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_SETTYPEWEIGHT_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void SetTypeWeight_1(::System::Collections::Generic::Dictionary_2<::UnityChan::SpringManager_BoneTag, ::UnityChan::SpringManager_Class_1_44494F1EF855DA72*>* a1, ::UnityChan::SpringManager_BoneTag a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::UnityChan::SpringManager_BoneTag, ::UnityChan::SpringManager_Class_1_44494F1EF855DA72*>*, ::UnityChan::SpringManager_BoneTag, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_SETTYPEWEIGHT_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void RemoveTypeWeight(::UnityChan::SpringManager_BoneTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager_BoneTag))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_REMOVETYPEWEIGHT_OFFSET))(this, a1);
		}

		::System::Void ResetAllPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_RESETALLPOSITION_OFFSET))(this);
		}

		::System::Void ResetPassiveDeltaPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_RESETPASSIVEDELTAPOSITION_OFFSET))(this);
		}

		::System::Void ResetAlwaysModeRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_RESETALWAYSMODERATIO_OFFSET))(this);
		}

		::System::Void DisableResetAllPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_DISABLERESETALLPOSITION_OFFSET))(this);
		}

		::System::Boolean GetResetPositionState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_GETRESETPOSITIONSTATE_OFFSET))(this);
		}

		static ::System::Void RemoveTypeWeight_1(::System::Collections::Generic::Dictionary_2<::UnityChan::SpringManager_BoneTag, ::UnityChan::SpringManager_Class_1_44494F1EF855DA72*>* a1, ::UnityChan::SpringManager_BoneTag a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::UnityChan::SpringManager_BoneTag, ::UnityChan::SpringManager_Class_1_44494F1EF855DA72*>*, ::UnityChan::SpringManager_BoneTag))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_REMOVETYPEWEIGHT_1_OFFSET))(a1, a2);
		}

		::System::Void SyncConfigToManagedComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_SYNCCONFIGTOMANAGEDCOMPONENTS_OFFSET))(this);
		}

		::System::Void CollectBoneChain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_COLLECTBONECHAIN_OFFSET))(this);
		}

		::System::Void UpdateParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_UPDATEPARAMETERS_OFFSET))(this);
		}

		::System::Void UpdateParameter(::UnityChan::SpringManager_SpringBonePropertyType a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3, ::UnityChan::SpringManager_SpringBoneClass* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager_SpringBonePropertyType, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityChan::SpringManager_SpringBoneClass*))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_UPDATEPARAMETER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_5_26DEC114610F10A5(::UnityChan::SpringManager_BoneTag a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityChan::SpringManager_BoneTag, ::System::Single))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_METHOD_5_26DEC114610F10A5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Boolean Method_5_8013CD60ABB99387(::UnityChan::SpringBone* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityChan::SpringBone*))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_METHOD_5_8013CD60ABB99387_OFFSET))(this, a1);
		}
	};
}
