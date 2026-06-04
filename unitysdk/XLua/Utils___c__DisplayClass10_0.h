#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class EventInfo; }

#define XLUA_UTILS___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13443A40)
#define XLUA_UTILS___C__DISPLAYCLASS10_0__MAKEREFLECTIONWRAP_B__3_OFFSET UNITYSDK_OFFSET(0x1344DE10)

namespace XLua
{
	inline static constexpr unsigned int Utils___c__DisplayClass10_0_TypeDefinitionIndex = 47047;

	class Utils___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::String* fieldName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _makeReflectionWrap_b__3(::System::Reflection::EventInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS10_0__MAKEREFLECTIONWRAP_B__3_OFFSET))(this, a1);
		}
	};
}
