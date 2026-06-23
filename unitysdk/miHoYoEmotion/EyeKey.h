#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/miHoYoEmotion/ClipShapeManager_CurveBinding_BoneParamType.h"
#include "unitysdk/miHoYoEmotion/EyeKey_EyeKeyController.h"
#include "unitysdk/miHoYoEmotion/EyeKey_MouseShapeAnimationJob.h"
#include "unitysdk/miHoYoEmotion/EyeKey_TickFrom.h"
#include "unitysdk/miHoYoEmotion/EyeKey___c__DisplayClass94_0.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace miHoYoEmotion { class EyeKey_BoneItem; }

#define MIHOYOEMOTION_EYEKEY_APPLYBONEDATA_OFFSET UNITYSDK_OFFSET(0x1BAF6140)
#define MIHOYOEMOTION_EYEKEY_APPLYBONEVALUE_OFFSET UNITYSDK_OFFSET(0x1BAF7B70)
#define MIHOYOEMOTION_EYEKEY_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1BB02910)
#define MIHOYOEMOTION_EYEKEY_APPLY_OFFSET UNITYSDK_OFFSET(0x1BB02B50)
#define MIHOYOEMOTION_EYEKEY_CHECKINIT_1_OFFSET UNITYSDK_OFFSET(0x1BB02360)
#define MIHOYOEMOTION_EYEKEY_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x1BB02090)
#define MIHOYOEMOTION_EYEKEY_CHECKRESET_OFFSET UNITYSDK_OFFSET(0x1BB02FB0)
#define MIHOYOEMOTION_EYEKEY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BAFC9D0)
#define MIHOYOEMOTION_EYEKEY_GETBONEVALUE_OFFSET UNITYSDK_OFFSET(0x1BAF7D30)
#define MIHOYOEMOTION_EYEKEY_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x1BB018F0)
#define MIHOYOEMOTION_EYEKEY_GET_PREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1BB01AC0)
#define MIHOYOEMOTION_EYEKEY_GET_SCRIPTENABLE_OFFSET UNITYSDK_OFFSET(0x1BB01B00)
#define MIHOYOEMOTION_EYEKEY_GET_TICKABLE_OFFSET UNITYSDK_OFFSET(0x1BB01AE0)
#define MIHOYOEMOTION_EYEKEY_INITBONEDATA_OFFSET UNITYSDK_OFFSET(0x1BAF2DB0)
#define MIHOYOEMOTION_EYEKEY_INIT_OFFSET UNITYSDK_OFFSET(0x1BB01F40)
#define MIHOYOEMOTION_EYEKEY_LATETICK_OFFSET UNITYSDK_OFFSET(0x1BB026E0)
#define MIHOYOEMOTION_EYEKEY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BB03680)
#define MIHOYOEMOTION_EYEKEY_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1BB02690)
#define MIHOYOEMOTION_EYEKEY_RESET_OFFSET UNITYSDK_OFFSET(0x1BB02E40)
#define MIHOYOEMOTION_EYEKEY_SETTARGETROT_OFFSET UNITYSDK_OFFSET(0x1BB01580)
#define MIHOYOEMOTION_EYEKEY_SETTARGETSCALE_OFFSET UNITYSDK_OFFSET(0x1BB01CB0)
#define MIHOYOEMOTION_EYEKEY_SET_PREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1BB01AD0)
#define MIHOYOEMOTION_EYEKEY_SET_SCRIPTENABLE_OFFSET UNITYSDK_OFFSET(0x1BB01B10)
#define MIHOYOEMOTION_EYEKEY_SET_TICKABLE_OFFSET UNITYSDK_OFFSET(0x1BB01AF0)
#define MIHOYOEMOTION_EYEKEY_TICKTARGETROT_OFFSET UNITYSDK_OFFSET(0x1BB01B20)
#define MIHOYOEMOTION_EYEKEY_TICKTARGETSCALE_OFFSET UNITYSDK_OFFSET(0x1BB01DE0)
#define MIHOYOEMOTION_EYEKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB039F0)
#define MIHOYOEMOTION_EYEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB036D0)
#define MIHOYOEMOTION_EYEKEY__INITBONEDATA_G__FINDBONE_94_0_OFFSET UNITYSDK_OFFSET(0x1BB032E0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EyeKey_TypeDefinitionIndex = 39361;

	class EyeKey : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_boneNameList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EyeKey_TypeDefinitionIndex)->GetStaticField(0x2AFB0);
		}
		// static const ::System::String* LEFT_EYE_BONE_NAME; // 0x0
		// static const ::System::String* RIGHT_EYE_BONE_NAME; // 0x0
		// static const ::System::String* LEFT_EYE_BALL_NAME; // 0x0
		// static const ::System::String* RIGHT_EYE_BALL_NAME; // 0x0
		// static const ::System::String* TEETH_UP_NAME; // 0x0
		// static const ::System::String* TEETH_DOWN_NAME; // 0x0
		::miHoYoEmotion::EyeKey_EyeKeyController currentController; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::miHoYoEmotion::EyeKey_BoneItem*>* boneDic; // 0x20
		::System::Collections::Generic::List_1<::miHoYoEmotion::EyeKey_BoneItem*>* boneList; // 0x28
		::UnityEngine::Animations::AnimationScriptPlayable animationScriptPlayable; // 0x30
		::miHoYoEmotion::EyeKey_MouseShapeAnimationJob animationJob; // 0x40
		::UnityEngine::Animator* animator; // 0xB0
		::UnityEngine::Transform* leftEyeBone; // 0xB8
		::UnityEngine::Transform* rightEyeBone; // 0xC0
		::UnityEngine::Transform* leftEyeBallBone; // 0xC8
		::UnityEngine::Transform* rightEyeBallBone; // 0xD0
		::UnityEngine::Vector3 leftEyeRot; // 0xD8
		::UnityEngine::Vector3 rightEyeRot; // 0xE4
		::System::Boolean _previewMode_k__BackingField; // 0xF0
		::System::Boolean _tickable_k__BackingField; // 0xF1
		::System::Boolean _ScriptEnable_k__BackingField; // 0xF2
		::UnityEngine::Vector3 _leftEyeRotTarget; // 0xF4
		::UnityEngine::Vector3 _rightEyeRotTarget; // 0x100
		::System::Single _rotTargetCurrtime; // 0x10C
		::System::Single _rotDuration; // 0x110
		::System::Boolean ControlledByInteractionManager; // 0x114
		::System::Boolean enableApply; // 0x115
		::UnityEngine::Vector3 leftEyeBallScale; // 0x118
		::UnityEngine::Vector3 rightEyeBallScale; // 0x124
		::UnityEngine::Vector3 _leftEyeBallScaleTarget; // 0x130
		::UnityEngine::Vector3 _rightEyeBallScaleTarget; // 0x13C
		::System::Single _scaleTargetCurrtime; // 0x148
		::System::Single _scaleDuration; // 0x14C
		::UnityEngine::Vector3 leftEyeScale; // 0x150
		::UnityEngine::Vector3 rightEyeScale; // 0x15C
		::UnityEngine::Vector3 leftEyeBallRot; // 0x168
		::UnityEngine::Vector3 rightEyeBallRot; // 0x174
		::UnityEngine::Transform* teethUpBone; // 0x180
		::UnityEngine::Transform* teethDownBone; // 0x188
		::UnityEngine::Vector3 teethUpRot; // 0x190
		::UnityEngine::Vector3 teethDownRot; // 0x19C
		::UnityEngine::Vector3 teethUpScale; // 0x1A8
		::UnityEngine::Vector3 teethDownScale; // 0x1B4
		::UnityEngine::Vector3 teethDownPos; // 0x1C0
		::System::Int32 _leftEyeBoneHash; // 0x1CC
		::System::Int32 _rightEyeBoneHash; // 0x1D0
		::System::Int32 _leftEyeBallBoneHash; // 0x1D4
		::System::Int32 _rightEyeBallBoneHash; // 0x1D8
		::System::Int32 _teethUpHash; // 0x1DC
		::System::Int32 _teethDownHash; // 0x1E0
		::UnityEngine::Vector3 _originLeftEyeRot; // 0x1E4
		::UnityEngine::Vector3 _originRightEyeRot; // 0x1F0
		::UnityEngine::Vector3 _originLeftEyeScale; // 0x1FC
		::UnityEngine::Vector3 _originRightEyeScale; // 0x208
		::UnityEngine::Vector3 _originLeftEyeBallRot; // 0x214
		::UnityEngine::Vector3 _originRightEyeBallRot; // 0x220
		::UnityEngine::Vector3 _originLeftEyeBallScale; // 0x22C
		::UnityEngine::Vector3 _originRightEyeBallScale; // 0x238
		::UnityEngine::Vector3 _originUpTeethRot; // 0x244
		::UnityEngine::Vector3 _originDownTeethRot; // 0x250
		::UnityEngine::Vector3 _originUpTeethScale; // 0x25C
		::UnityEngine::Vector3 _originDownTeethScale; // 0x268
		::UnityEngine::Vector3 _originDownTeethPos; // 0x274

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY__CCTOR_OFFSET))();
		}

		::System::Void ApplyBoneValue(::System::String* boneName, ::miHoYoEmotion::ClipShapeManager_CurveBinding_BoneParamType boneParamType, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::miHoYoEmotion::ClipShapeManager_CurveBinding_BoneParamType, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_APPLYBONEVALUE_OFFSET))(this, boneName, boneParamType, value);
		}

		::System::Single GetBoneValue(::System::String* boneName, ::miHoYoEmotion::ClipShapeManager_CurveBinding_BoneParamType boneParamType)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::miHoYoEmotion::ClipShapeManager_CurveBinding_BoneParamType))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_GETBONEVALUE_OFFSET))(this, boneName, boneParamType);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_GET_ANIMATOR_OFFSET))(this);
		}

		::System::Boolean get_previewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_GET_PREVIEWMODE_OFFSET))(this);
		}

		::System::Void set_previewMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_SET_PREVIEWMODE_OFFSET))(this, value);
		}

		::System::Boolean get_tickable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_GET_TICKABLE_OFFSET))(this);
		}

		::System::Void set_tickable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_SET_TICKABLE_OFFSET))(this, value);
		}

		::System::Boolean get_ScriptEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_GET_SCRIPTENABLE_OFFSET))(this);
		}

		::System::Void set_ScriptEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_SET_SCRIPTENABLE_OFFSET))(this, value);
		}

		::System::Void SetTargetRot(::System::Single duration, ::UnityEngine::Vector3 leftRot, ::UnityEngine::Vector3 rightRot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_SETTARGETROT_OFFSET))(this, duration, leftRot, rightRot);
		}

		::System::Void TickTargetRot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_TICKTARGETROT_OFFSET))(this);
		}

		::System::Void SetTargetScale(::System::Single duration, ::UnityEngine::Vector3 leftScale, ::UnityEngine::Vector3 rightScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_SETTARGETSCALE_OFFSET))(this, duration, leftScale, rightScale);
		}

		::System::Void TickTargetScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_TICKTARGETSCALE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_INIT_OFFSET))(this);
		}

		::System::Void CheckInit(::UnityEngine::Transform* bone, ::System::Int32& hash, ::UnityEngine::Vector3& originRot, ::UnityEngine::Vector3& originScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_CHECKINIT_OFFSET))(this, bone, hash, originRot, originScale);
		}

		::System::Void CheckInit_1(::UnityEngine::Transform* bone, ::System::Int32& hash, ::UnityEngine::Vector3& originPos, ::UnityEngine::Vector3& originRot, ::UnityEngine::Vector3& originScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_CHECKINIT_1_OFFSET))(this, bone, hash, originPos, originRot, originScale);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single deltaTime, ::miHoYoEmotion::EyeKey_TickFrom tickFrom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::miHoYoEmotion::EyeKey_TickFrom))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_LATETICK_OFFSET))(this, deltaTime, tickFrom);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_RESET_OFFSET))(this);
		}

		::System::Void CheckReset(::UnityEngine::Transform*& bone, ::System::Int32 hash, ::UnityEngine::Vector3 rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*&, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_CHECKRESET_OFFSET))(this, bone, hash, rot);
		}

		::System::Void Apply(::UnityEngine::Transform* bone, ::UnityEngine::Vector3 originPos, ::UnityEngine::Vector3 originRot, ::UnityEngine::Vector3 originScale, ::UnityEngine::Vector3& deltaPos, ::UnityEngine::Vector3& deltaRot, ::UnityEngine::Vector3& deltaScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_APPLY_OFFSET))(this, bone, originPos, originRot, originScale, deltaPos, deltaRot, deltaScale);
		}

		::System::Void Apply_1(::UnityEngine::Transform* bone, ::UnityEngine::Vector3& originRot, ::UnityEngine::Vector3& originScale, ::UnityEngine::Vector3& deltaRot, ::UnityEngine::Vector3& deltaScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_APPLY_1_OFFSET))(this, bone, originRot, originScale, deltaRot, deltaScale);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_CLEAR_OFFSET))(this);
		}

		::System::Void ApplyBoneData(::System::Boolean isStopped)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_APPLYBONEDATA_OFFSET))(this, isStopped);
		}

		::System::Void InitBoneData(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_INITBONEDATA_OFFSET))(this, force);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_ONDESTROY_OFFSET))(this);
		}

		static ::UnityEngine::Transform* _InitBoneData_g__FindBone_94_0(::System::String* boneName, ::miHoYoEmotion::EyeKey___c__DisplayClass94_0& a2)
		{
			return ((::UnityEngine::Transform*(*)(::System::String*, ::miHoYoEmotion::EyeKey___c__DisplayClass94_0&))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY__INITBONEDATA_G__FINDBONE_94_0_OFFSET))(boneName, a2);
		}
	};
}
