#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animation; }
namespace XftWeapon { class XWeaponTrail; }

#define XWEAPONTRAILDEMO_ONGUI_OFFSET UNITYSDK_OFFSET(0x1E91B1D0)
#define XWEAPONTRAILDEMO_START_OFFSET UNITYSDK_OFFSET(0x1E91AB30)
#define XWEAPONTRAILDEMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E91BA90)

inline static constexpr unsigned int XWeaponTrailDemo_TypeDefinitionIndex = 39963;

class XWeaponTrailDemo : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Animation* SwordAnimation; // 0x18
	::XftWeapon::XWeaponTrail* ProTrailDistort; // 0x20
	::XftWeapon::XWeaponTrail* ProTrailShort; // 0x28
	::XftWeapon::XWeaponTrail* ProTraillong; // 0x30
	::XftWeapon::XWeaponTrail* SimpleTrail; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XWEAPONTRAILDEMO__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XWEAPONTRAILDEMO_START_OFFSET))(this);
	}

	::System::Void OnGUI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XWEAPONTRAILDEMO_ONGUI_OFFSET))(this);
	}
};
