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

#define UNITYCHAN_SPRINGMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD0EC4E0)
#define UNITYCHAN_SPRINGMANAGER_BINDCONTROLLER_OFFSET UNITYSDK_OFFSET(0xD0EC750)
#define UNITYCHAN_SPRINGMANAGER_COLLECTBONECHAIN_OFFSET UNITYSDK_OFFSET(0xD0EDD40)
#define UNITYCHAN_SPRINGMANAGER_DISABLERESETALLPOSITION_OFFSET UNITYSDK_OFFSET(0xD0ED830)
#define UNITYCHAN_SPRINGMANAGER_FINDINDEXINBONES_OFFSET UNITYSDK_OFFSET(0xD0EC910)
#define UNITYCHAN_SPRINGMANAGER_GETRESETPOSITIONSTATE_OFFSET UNITYSDK_OFFSET(0xD0EDD30)
#define UNITYCHAN_SPRINGMANAGER_GETTYPEWEIGHT_OFFSET UNITYSDK_OFFSET(0xD0ED5C0)
#define UNITYCHAN_SPRINGMANAGER_GETVECTORSCALE_OFFSET UNITYSDK_OFFSET(0xD0EC9B0)
#define UNITYCHAN_SPRINGMANAGER_GET_ALLOWMULTITHREAD_OFFSET UNITYSDK_OFFSET(0xD0EC8C0)
#define UNITYCHAN_SPRINGMANAGER_GET_ALWAYSMODERATIO_OFFSET UNITYSDK_OFFSET(0xD0EB080)
#define UNITYCHAN_SPRINGMANAGER_GET_COMMONCONFIG_OFFSET UNITYSDK_OFFSET(0xD0EAF80)
#define UNITYCHAN_SPRINGMANAGER_GET_DYNAMICRATIO_OFFSET UNITYSDK_OFFSET(0xD0EB070)
#define UNITYCHAN_SPRINGMANAGER_GET_MOTIONTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD0EB810)
#define UNITYCHAN_SPRINGMANAGER_GET_PASSIVEDELTAPOSITION_OFFSET UNITYSDK_OFFSET(0xD0EB860)
#define UNITYCHAN_SPRINGMANAGER_INITCUSTOMTAGBLENDDATA_OFFSET UNITYSDK_OFFSET(0xD0EC510)
#define UNITYCHAN_SPRINGMANAGER_ISSET_OFFSET UNITYSDK_OFFSET(0xD0ED890)
#define UNITYCHAN_SPRINGMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD0ECF50)
#define UNITYCHAN_SPRINGMANAGER_METHOD_5_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xD0EBCF0)
#define UNITYCHAN_SPRINGMANAGER_METHOD_5_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0xD0EB090)
#define UNITYCHAN_SPRINGMANAGER_METHOD_5_26DEC114610F10A5_OFFSET UNITYSDK_OFFSET(0xD0ED950)
#define UNITYCHAN_SPRINGMANAGER_METHOD_5_7EDA82E1A56BE1B3_OFFSET UNITYSDK_OFFSET(0xD0ECF80)
#define UNITYCHAN_SPRINGMANAGER_METHOD_5_8013CD60ABB99387_OFFSET UNITYSDK_OFFSET(0xD0ED520)
#define UNITYCHAN_SPRINGMANAGER_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xD0EB420)
#define UNITYCHAN_SPRINGMANAGER_METHOD_5_832676CAFE65C167_OFFSET UNITYSDK_OFFSET(0xD0EC180)
#define UNITYCHAN_SPRINGMANAGER_METHOD_5_A6380BA1D9359AB8_OFFSET UNITYSDK_OFFSET(0xD0EB430)
#define UNITYCHAN_SPRINGMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD0ECE70)
#define UNITYCHAN_SPRINGMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD0ECD00)
#define UNITYCHAN_SPRINGMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD0ECB80)
#define UNITYCHAN_SPRINGMANAGER_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0xD0ECB70)
#define UNITYCHAN_SPRINGMANAGER_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xD0ECCF0)
#define UNITYCHAN_SPRINGMANAGER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xD0ED870)
#define UNITYCHAN_SPRINGMANAGER_REMOVETYPEWEIGHT_1_OFFSET UNITYSDK_OFFSET(0xD0EDCC0)
#define UNITYCHAN_SPRINGMANAGER_REMOVETYPEWEIGHT_OFFSET UNITYSDK_OFFSET(0xD0EDC30)
#define UNITYCHAN_SPRINGMANAGER_RESETALLDATA_OFFSET UNITYSDK_OFFSET(0xD0EB910)
#define UNITYCHAN_SPRINGMANAGER_RESETALLPOSITION_OFFSET UNITYSDK_OFFSET(0xD0EBDF0)
#define UNITYCHAN_SPRINGMANAGER_RESETALWAYSMODERATIO_OFFSET UNITYSDK_OFFSET(0xD0ED860)
#define UNITYCHAN_SPRINGMANAGER_RESETDYNAMICRATIO_OFFSET UNITYSDK_OFFSET(0xD0EBE00)
#define UNITYCHAN_SPRINGMANAGER_RESETPASSIVEDELTAPOSITION_OFFSET UNITYSDK_OFFSET(0xD0ED840)
#define UNITYCHAN_SPRINGMANAGER_RESETTURNRATIO_OFFSET UNITYSDK_OFFSET(0xD0EB990)
#define UNITYCHAN_SPRINGMANAGER_RESETTYPEDICRATIO_OFFSET UNITYSDK_OFFSET(0xD0EBEE0)
#define UNITYCHAN_SPRINGMANAGER_SAFEINIT_OFFSET UNITYSDK_OFFSET(0xD0EC740)
#define UNITYCHAN_SPRINGMANAGER_SETTYPEWEIGHT_1_OFFSET UNITYSDK_OFFSET(0xD0EDAE0)
#define UNITYCHAN_SPRINGMANAGER_SETTYPEWEIGHT_OFFSET UNITYSDK_OFFSET(0xD0ED8A0)
#define UNITYCHAN_SPRINGMANAGER_SETUPTURNRATIO_OFFSET UNITYSDK_OFFSET(0xD0EB8A0)
#define UNITYCHAN_SPRINGMANAGER_SET_COMMONCONFIG_OFFSET UNITYSDK_OFFSET(0xD0EB010)
#define UNITYCHAN_SPRINGMANAGER_SET_MOTIONTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD0EB850)
#define UNITYCHAN_SPRINGMANAGER_SET_PASSIVEDELTAPOSITION_OFFSET UNITYSDK_OFFSET(0xD0EB880)
#define UNITYCHAN_SPRINGMANAGER_SYNCCONFIGTOMANAGEDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xD0ED880)
#define UNITYCHAN_SPRINGMANAGER_UPDATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0xD0EDD50)
#define UNITYCHAN_SPRINGMANAGER_UPDATEPARAMETER_OFFSET UNITYSDK_OFFSET(0xD0EDD60)
#define UNITYCHAN_SPRINGMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD0EC710)
#define UNITYCHAN_SPRINGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0EDEB0)
#define UNITYCHAN_SPRINGMANAGER__CREATETHREADTASK_OFFSET UNITYSDK_OFFSET(0xD0EC810)
#define UNITYCHAN_SPRINGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD0EDD70)
#define UNITYCHAN_SPRINGMANAGER__DISPOSETHREADTASK_OFFSET UNITYSDK_OFFSET(0xD0EBBE0)

namespace UnityChan
{
	inline static constexpr unsigned int SpringManager_TypeDefinitionIndex = 44981;

	class SpringManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_JobBatchSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SpringManager_TypeDefinitionIndex)->GetStaticField(0x7A30);
		}
		static ::System::Boolean* StaticGet_QualitySettingEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpringManager_TypeDefinitionIndex)->GetStaticField(0x7A34);
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
		::System::Boolean Field_5_24; // 0x88
		::System::String* Field_5_25; // 0x90
		::System::Single Field_5_26; // 0x98
		::System::Single Field_5_27; // 0x9C
		::System::Single Field_5_28; // 0xA0
		::System::Boolean Field_5_29; // 0xA4
		::System::Single Field_5_30; // 0xA8
		::System::Single Field_5_31; // 0xAC
		::System::Single Field_5_32; // 0xB0
		::System::Boolean Field_5_33; // 0xB4
		::UnityEngine::GameObject* Field_5_34; // 0xB8
		::System::String* Field_5_35; // 0xC0
		::System::Boolean Field_5_36; // 0xC8
		::UnityEngine::Transform* Field_5_37; // 0xD0
		::UnityEngine::Vector3 Field_5_38; // 0xD8
		::RPG::GameCore::AdventureCharacterController* Field_5_39; // 0xE8
		::Class_2_2FE2076DA950FCCD* Field_5_40; // 0xF0
		::System::Boolean Field_5_41; // 0xF8

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

		::System::Void Method_5_19FB5FBEA9EA66CD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_METHOD_5_19FB5FBEA9EA66CD_OFFSET))(this);
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

		::System::Void Method_5_A6380BA1D9359AB8(::UnityChan::SpringBone* a1, ::System::Collections::Generic::List_1<::UnityChan::SpringBone*>*& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityChan::SpringBone*, ::System::Collections::Generic::List_1<::UnityChan::SpringBone*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_METHOD_5_A6380BA1D9359AB8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_832676CAFE65C167(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*&))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_METHOD_5_832676CAFE65C167_OFFSET))(this, a1, a2);
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
