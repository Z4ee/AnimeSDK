#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/StringIDWrapper.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/WeaponRaycast_LimitState.h"
#include "unitysdk/WeaponRaycast_TransitionMode.h"

class AMLegIK;
namespace System { class String; }
namespace UnityEngine { class AnimageComponent; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define WEAPONRAYCAST_DOCALCULATETARGET_OFFSET UNITYSDK_OFFSET(0x1C1527E0)
#define WEAPONRAYCAST_GETBIPROOTPOSITION_OFFSET UNITYSDK_OFFSET(0x1C151650)
#define WEAPONRAYCAST_GETDELTAFROMRIGIDBODYTOTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C151FF0)
#define WEAPONRAYCAST_GETRAYCASTHIT_OFFSET UNITYSDK_OFFSET(0x1C1519E0)
#define WEAPONRAYCAST_GETSTAGEGROUNDPOSHIT_OFFSET UNITYSDK_OFFSET(0x1C151BD0)
#define WEAPONRAYCAST_GET_BLENDVALUE_OFFSET UNITYSDK_OFFSET(0x1C1524A0)
#define WEAPONRAYCAST_GET_CALCPROCESSTIME_OFFSET UNITYSDK_OFFSET(0x1C152390)
#define WEAPONRAYCAST_GET_ENABLEDEBUG_OFFSET UNITYSDK_OFFSET(0x1C151610)
#define WEAPONRAYCAST_GET_GIZMOSLASTTIME_OFFSET UNITYSDK_OFFSET(0x1C151630)
#define WEAPONRAYCAST_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C152E80)
#define WEAPONRAYCAST_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x1C152D90)
#define WEAPONRAYCAST_SET_DISABLEDAMPING_OFFSET UNITYSDK_OFFSET(0x1C151830)
#define WEAPONRAYCAST_SET_ENABLEDEBUG_OFFSET UNITYSDK_OFFSET(0x1C151620)
#define WEAPONRAYCAST_SET_GIZMOSLASTTIME_OFFSET UNITYSDK_OFFSET(0x1C151640)
#define WEAPONRAYCAST_SMOOTHSTEP_OFFSET UNITYSDK_OFFSET(0x1C152300)
#define WEAPONRAYCAST_START_OFFSET UNITYSDK_OFFSET(0x1C151840)
#define WEAPONRAYCAST_TRIGGERRAYCASTCLOSE_OFFSET UNITYSDK_OFFSET(0x1C1526D0)
#define WEAPONRAYCAST_TRIGGERRAYCASTOPEN_OFFSET UNITYSDK_OFFSET(0x1C1525D0)
#define WEAPONRAYCAST_UPDATESETTIME_OFFSET UNITYSDK_OFFSET(0x1C152430)
#define WEAPONRAYCAST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C153390)
#define WEAPONRAYCAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1532B0)

inline static constexpr unsigned int WeaponRaycast_TypeDefinitionIndex = 73653;

class WeaponRaycast : public ::UnityEngine::MonoBehaviour
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_rayCastHitResults()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(WeaponRaycast_TypeDefinitionIndex)->GetStaticField(0x41350);
	}
	static ::System::String** StaticGet_GroundTag()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WeaponRaycast_TypeDefinitionIndex)->GetStaticField(0x41358);
	}
	::System::Single RayCastHeight; // 0x18
	::UnityEngine::Transform* Weapon; // 0x20
	::System::Single velocityLimit; // 0x28
	::System::Boolean UseIKDelta; // 0x2C
	::System::Boolean CheckGroundTag; // 0x2D
	::WeaponRaycast_TransitionMode transitionMode; // 0x30
	::UnityEngine::Vector3 raycastOffset; // 0x34
	::System::Boolean EnableRangeMin; // 0x40
	::System::Boolean EnableRangeMax; // 0x41
	::UnityEngine::Vector2 range; // 0x44
	::System::Boolean EnableRadiusRetaining; // 0x4C
	::System::Single radius; // 0x50
	::System::Single SubsideDepth; // 0x54
	::System::Boolean EnableClamp; // 0x58
	::UnityEngine::Vector2 ClampRange; // 0x5C
	::System::Boolean _enableDebug_k__BackingField; // 0x64
	::System::Single _GizmosLastTime_k__BackingField; // 0x68
	::UnityEngine::Transform* Player; // 0x70
	::System::String* bipRootCpName; // 0x78
	::UnityEngine::StringIDWrapper bipRootNameWrapper; // 0x80
	::UnityEngine::AnimageComponent* animageComponent; // 0x88
	::AMLegIK* legIK; // 0x90
	::UnityEngine::LayerMask IKLayerMask; // 0x98
	::System::Single deltaTime; // 0x9C
	::System::Single lastFrameDist; // 0xA0
	::WeaponRaycast_LimitState lastFrameLimitState; // 0xA4
	::UnityEngine::Vector3 BipRootPositionBeforeIK; // 0xA8
	::System::Boolean disableDamping; // 0xB4
	::System::Boolean isZoneOpenState; // 0xB5
	::System::Single setTime; // 0xB8
	::System::Single transitionTime; // 0xBC
	::System::Boolean isAnimatorIKPrepared; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONRAYCAST__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + WEAPONRAYCAST__CCTOR_OFFSET))();
	}

	::System::Boolean get_enableDebug()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_GET_ENABLEDEBUG_OFFSET))(this);
	}

	::System::Void set_enableDebug(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_SET_ENABLEDEBUG_OFFSET))(this, value);
	}

	::System::Single get_GizmosLastTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_GET_GIZMOSLASTTIME_OFFSET))(this);
	}

	::System::Void set_GizmosLastTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_SET_GIZMOSLASTTIME_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 GetBipRootPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_GETBIPROOTPOSITION_OFFSET))(this);
	}

	::System::Void set_DisableDamping(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_SET_DISABLEDAMPING_OFFSET))(this, value);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_START_OFFSET))(this);
	}

	::UnityEngine::RaycastHit GetRaycastHit(::UnityEngine::Vector3 startPoint, ::System::Single castDistance)
	{
		return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_GETRAYCASTHIT_OFFSET))(this, startPoint, castDistance);
	}

	::UnityEngine::RaycastHit GetStageGroundPosHit(::UnityEngine::Vector3 targetPos, ::System::Single castDistance)
	{
		return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_GETSTAGEGROUNDPOSHIT_OFFSET))(this, targetPos, castDistance);
	}

	::UnityEngine::Vector3 GetDeltaFromRigidbodyToTransform(::UnityEngine::Transform* transform, ::UnityEngine::Rigidbody* rigidbody)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_GETDELTAFROMRIGIDBODYTOTRANSFORM_OFFSET))(this, transform, rigidbody);
	}

	::System::Single SmoothStep(::System::Single alpha)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_SMOOTHSTEP_OFFSET))(this, alpha);
	}

	::System::Single get_calcProcessTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_GET_CALCPROCESSTIME_OFFSET))(this);
	}

	::System::Void UpdateSetTime(::System::Single deltaTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_UPDATESETTIME_OFFSET))(this, deltaTime);
	}

	::System::Single get_blendValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_GET_BLENDVALUE_OFFSET))(this);
	}

	::System::Void TriggerRaycastOpen(::System::Single newTransitionTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_TRIGGERRAYCASTOPEN_OFFSET))(this, newTransitionTime);
	}

	::System::Void TriggerRaycastClose(::System::Single newTransitionTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_TRIGGERRAYCASTCLOSE_OFFSET))(this, newTransitionTime);
	}

	::System::Void doCalculateTarget(::UnityEngine::RaycastHit hitInfo, ::System::Single& dist)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit, ::System::Single&))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_DOCALCULATETARGET_OFFSET))(this, hitInfo, dist);
	}

	::System::Void OnAnimatorIK(::System::Int32 layerIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_ONANIMATORIK_OFFSET))(this, layerIndex);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONRAYCAST_LATEUPDATE_OFFSET))(this);
	}
};
