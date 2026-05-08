#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define XFTWEAPON_XWEAPONUTIL_FLOATEQUAL_OFFSET UNITYSDK_OFFSET(0x1B180AC0)
#define XFTWEAPON_XWEAPONUTIL_VECTOR3EQUAL_OFFSET UNITYSDK_OFFSET(0x1B175640)

namespace XftWeapon
{
	inline static constexpr unsigned int XWeaponUtil_TypeDefinitionIndex = 37684;

	class XWeaponUtil : public ::System::Object
	{
	public:
		static ::System::Boolean FloatEqual(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONUTIL_FLOATEQUAL_OFFSET))(a, b);
		}

		static ::System::Boolean Vector3Equal(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONUTIL_VECTOR3EQUAL_OFFSET))(a, b);
		}
	};
}
