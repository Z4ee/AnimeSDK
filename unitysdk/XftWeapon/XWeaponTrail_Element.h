#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define XFTWEAPON_XWEAPONTRAIL_ELEMENT_GET_POS_OFFSET UNITYSDK_OFFSET(0x1B17E300)
#define XFTWEAPON_XWEAPONTRAIL_ELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1801E0)
#define XFTWEAPON_XWEAPONTRAIL_ELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B180150)

namespace XftWeapon
{
	inline static constexpr unsigned int XWeaponTrail_Element_TypeDefinitionIndex = 37681;

	class XWeaponTrail_Element : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points; // 0x10
		::UnityEngine::Vector3 PointStart; // 0x18
		::UnityEngine::Vector3 up; // 0x24
		::UnityEngine::Vector3 forward; // 0x30
		::UnityEngine::Vector3 right; // 0x3C
		::UnityEngine::Vector3 PointEnd; // 0x48

		::System::Void _ctor(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ELEMENT__CTOR_OFFSET))(this, start, end);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ELEMENT__CTOR_1_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Pos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ELEMENT_GET_POS_OFFSET))(this);
		}
	};
}
