#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace XftWeapon { class XWeaponTrail_Element; }

#define XFTWEAPON_XWEAPONTRAIL_ELEMENTPOOL_GET_COUNTACTIVE_OFFSET UNITYSDK_OFFSET(0x1E930040)
#define XFTWEAPON_XWEAPONTRAIL_ELEMENTPOOL_GET_COUNTALL_OFFSET UNITYSDK_OFFSET(0x1E930020)
#define XFTWEAPON_XWEAPONTRAIL_ELEMENTPOOL_GET_COUNTINACTIVE_OFFSET UNITYSDK_OFFSET(0x1E930060)
#define XFTWEAPON_XWEAPONTRAIL_ELEMENTPOOL_GET_OFFSET UNITYSDK_OFFSET(0x1E92FB70)
#define XFTWEAPON_XWEAPONTRAIL_ELEMENTPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x1E92FBE0)
#define XFTWEAPON_XWEAPONTRAIL_ELEMENTPOOL_SET_COUNTALL_OFFSET UNITYSDK_OFFSET(0x1E930030)
#define XFTWEAPON_XWEAPONTRAIL_ELEMENTPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E92C9D0)

namespace XftWeapon
{
	inline static constexpr unsigned int XWeaponTrail_ElementPool_TypeDefinitionIndex = 39974;

	class XWeaponTrail_ElementPool : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::XftWeapon::XWeaponTrail_Element*>* _stack; // 0x10
		::System::Int32 _CountAll_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 preCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ELEMENTPOOL__CTOR_OFFSET))(this, preCount);
		}

		::System::Int32 get_CountAll()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ELEMENTPOOL_GET_COUNTALL_OFFSET))(this);
		}

		::System::Void set_CountAll(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ELEMENTPOOL_SET_COUNTALL_OFFSET))(this, value);
		}

		::System::Int32 get_CountActive()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ELEMENTPOOL_GET_COUNTACTIVE_OFFSET))(this);
		}

		::System::Int32 get_CountInactive()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ELEMENTPOOL_GET_COUNTINACTIVE_OFFSET))(this);
		}

		::XftWeapon::XWeaponTrail_Element* Get()
		{
			return ((::XftWeapon::XWeaponTrail_Element*(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ELEMENTPOOL_GET_OFFSET))(this);
		}

		::System::Void Release(::XftWeapon::XWeaponTrail_Element* element)
		{
			return ((::System::Void(*)(::PVOID, ::XftWeapon::XWeaponTrail_Element*))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_ELEMENTPOOL_RELEASE_OFFSET))(this, element);
		}
	};
}
