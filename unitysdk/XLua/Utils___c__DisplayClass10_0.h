#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class EventInfo; }

#define XLUA_UTILS___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1174C010)
#define XLUA_UTILS___C__DISPLAYCLASS10_0__MAKEREFLECTIONWRAP_B__3_OFFSET UNITYSDK_OFFSET(0x11756080)

namespace XLua
{
	inline static constexpr unsigned int Utils___c__DisplayClass10_0_TypeDefinitionIndex = 46457;

	class Utils___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::String* fieldName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _makeReflectionWrap_b__3(::System::Reflection::EventInfo* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS10_0__MAKEREFLECTIONWRAP_B__3_OFFSET))(this, e);
		}
	};
}
