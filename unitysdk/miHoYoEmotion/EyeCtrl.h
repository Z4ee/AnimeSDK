#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/miHoYoEmotion/EmoMgrUser.h"

namespace System { class Action; }
namespace UnityEngine { class Transform; }
namespace miHoYoEmotion { class BaseShape; }
namespace miHoYoEmotion { class EyeKey; }

#define MIHOYOEMOTION_EYECTRL_APPLYEYETARGET_1_OFFSET UNITYSDK_OFFSET(0x1D043EA0)
#define MIHOYOEMOTION_EYECTRL_APPLYEYETARGET_OFFSET UNITYSDK_OFFSET(0x1D0440C0)
#define MIHOYOEMOTION_EYECTRL_BLINKFINISH_OFFSET UNITYSDK_OFFSET(0x1D0435E0)
#define MIHOYOEMOTION_EYECTRL_BLINK_OFFSET UNITYSDK_OFFSET(0x1D0432D0)
#define MIHOYOEMOTION_EYECTRL_CHECKMINANGLE_OFFSET UNITYSDK_OFFSET(0x1D0442F0)
#define MIHOYOEMOTION_EYECTRL_CLEARLOOKAT_OFFSET UNITYSDK_OFFSET(0x1D043710)
#define MIHOYOEMOTION_EYECTRL_FORCEUPDATELOOKTARGET_OFFSET UNITYSDK_OFFSET(0x1D043690)
#define MIHOYOEMOTION_EYECTRL_GET_LEFTEYELOOKATBONE_OFFSET UNITYSDK_OFFSET(0x1D0419B0)
#define MIHOYOEMOTION_EYECTRL_GET_RIGHTEYELOOKATBONE_OFFSET UNITYSDK_OFFSET(0x1D041A60)
#define MIHOYOEMOTION_EYECTRL_INITEYELOOKATBONE_OFFSET UNITYSDK_OFFSET(0x1D0420F0)
#define MIHOYOEMOTION_EYECTRL_INTERRUPTBLINK_OFFSET UNITYSDK_OFFSET(0x1D043530)
#define MIHOYOEMOTION_EYECTRL_LATETICK_OFFSET UNITYSDK_OFFSET(0x1D0426C0)
#define MIHOYOEMOTION_EYECTRL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D0425B0)
#define MIHOYOEMOTION_EYECTRL_SET_LEFTEYELOOKATBONE_OFFSET UNITYSDK_OFFSET(0x1D0419C0)
#define MIHOYOEMOTION_EYECTRL_SET_RIGHTEYELOOKATBONE_OFFSET UNITYSDK_OFFSET(0x1D041A70)
#define MIHOYOEMOTION_EYECTRL_START_OFFSET UNITYSDK_OFFSET(0x1D041B10)
#define MIHOYOEMOTION_EYECTRL_TOGGLEBLINK_OFFSET UNITYSDK_OFFSET(0x1D0434A0)
#define MIHOYOEMOTION_EYECTRL_UPDATEBLINK_OFFSET UNITYSDK_OFFSET(0x1D0427B0)
#define MIHOYOEMOTION_EYECTRL_UPDATEEYETARGET_OFFSET UNITYSDK_OFFSET(0x1D043760)
#define MIHOYOEMOTION_EYECTRL_UPDATELOOKTARGET_OFFSET UNITYSDK_OFFSET(0x1D042910)
#define MIHOYOEMOTION_EYECTRL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D044570)
#define MIHOYOEMOTION_EYECTRL___BASE_LATETICK_OFFSET UNITYSDK_OFFSET(0x1D044600)
#define MIHOYOEMOTION_EYECTRL___BASE_START_OFFSET UNITYSDK_OFFSET(0x1D0446A0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EyeCtrl_TypeDefinitionIndex = 40003;

	class EyeCtrl : public ::miHoYoEmotion::EmoMgrUser
	{
	public:
		::System::Boolean autoBlinkingEnabled; // 0x38
		::miHoYoEmotion::BaseShape* defaultBlinkShape; // 0x40
		::System::Single minimumBlinkGap; // 0x48
		::System::Single maximumBlinkGap; // 0x4C
		::UnityEngine::Transform* _leftEyeLookAtBone; // 0x50
		::UnityEngine::Transform* _rightEyeLookAtBone; // 0x58
		::UnityEngine::Vector2 eyeRotationRangeX; // 0x60
		::UnityEngine::Vector2 eyeRotationRangeY; // 0x68
		::System::Boolean targetEnabled; // 0x70
		::UnityEngine::Transform* viewTarget; // 0x78
		::UnityEngine::Transform* headTransform; // 0x80
		::System::Single blinkTimer; // 0x88
		::System::Boolean blinking; // 0x8C
		::UnityEngine::Vector3 leftEuler; // 0x90
		::UnityEngine::Vector3 rightEuler; // 0x9C
		::UnityEngine::Transform* target; // 0xA8
		::UnityEngine::Vector3 targetPosition; // 0xB0
		::System::Action* blinkCb; // 0xC0
		::System::Boolean _isLookatWaiting; // 0xC8
		::System::Single _lookatWaitingTime; // 0xCC
		::miHoYoEmotion::EyeKey* eyeKey; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_LeftEyeLookAtBone()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_GET_LEFTEYELOOKATBONE_OFFSET))(this);
		}

		::System::Void set_LeftEyeLookAtBone(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_SET_LEFTEYELOOKATBONE_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_RightEyeLookAtBone()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_GET_RIGHTEYELOOKATBONE_OFFSET))(this);
		}

		::System::Void set_RightEyeLookAtBone(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_SET_RIGHTEYELOOKATBONE_OFFSET))(this, value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_START_OFFSET))(this);
		}

		::System::Void InitEyeLookAtBone(::UnityEngine::Transform* left, ::UnityEngine::Transform* right)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_INITEYELOOKATBONE_OFFSET))(this, left, right);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_LATETICK_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateBlink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_UPDATEBLINK_OFFSET))(this);
		}

		::System::Void ToggleBlink(::System::Boolean toggle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_TOGGLEBLINK_OFFSET))(this, toggle);
		}

		::System::Void InterruptBlink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_INTERRUPTBLINK_OFFSET))(this);
		}

		::System::Void Blink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_BLINK_OFFSET))(this);
		}

		::System::Void BlinkFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_BLINKFINISH_OFFSET))(this);
		}

		::System::Void ForceUpdateLookTarget(::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_FORCEUPDATELOOKTARGET_OFFSET))(this, duration);
		}

		::System::Void ClearLookat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_CLEARLOOKAT_OFFSET))(this);
		}

		::System::Void UpdateLookTarget(::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_UPDATELOOKTARGET_OFFSET))(this, duration);
		}

		::System::Void UpdateEyeTarget(::UnityEngine::Vector3 targetPosition, ::UnityEngine::Transform* eyeBone, ::UnityEngine::Vector3 originEuler, ::UnityEngine::Vector3& deltaEulerRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_UPDATEEYETARGET_OFFSET))(this, targetPosition, eyeBone, originEuler, deltaEulerRot);
		}

		::System::Void ApplyEyeTarget(::UnityEngine::Transform* leftEyeBone, ::UnityEngine::Transform* rightEyeBone, ::UnityEngine::Vector3 leftOriginEuler, ::UnityEngine::Vector3 rightOriginEuler, ::UnityEngine::Vector3 leftDeltaRot, ::UnityEngine::Vector3 rightDeltaRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_APPLYEYETARGET_OFFSET))(this, leftEyeBone, rightEyeBone, leftOriginEuler, rightOriginEuler, leftDeltaRot, rightDeltaRot);
		}

		::System::Void ApplyEyeTarget_1(::miHoYoEmotion::EyeKey* eyeKey, ::UnityEngine::Vector3 leftDeltaRot, ::UnityEngine::Vector3 rightDeltaRot, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EyeKey*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_APPLYEYETARGET_1_OFFSET))(this, eyeKey, leftDeltaRot, rightDeltaRot, duration);
		}

		::System::Void CheckMinAngle(::UnityEngine::Vector3& euler)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL_CHECKMINANGLE_OFFSET))(this, euler);
		}

		::System::Void __base_LateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL___BASE_LATETICK_OFFSET))(this, P0);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRL___BASE_START_OFFSET))(this);
		}
	};
}
