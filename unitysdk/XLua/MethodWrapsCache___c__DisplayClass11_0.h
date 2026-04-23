#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class MethodInfo; }
namespace XLua { class MethodWrapsCache; }

#define XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1123B6F0)
#define XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS11_0__GETEVENTWRAP_B__0_OFFSET UNITYSDK_OFFSET(0x1123BA20)

namespace XLua
{
	inline static constexpr unsigned int MethodWrapsCache___c__DisplayClass11_0_TypeDefinitionIndex = 46409;

	class MethodWrapsCache___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* remove; // 0x10
		::System::String* eventName; // 0x18
		::System::Reflection::MethodInfo* add; // 0x20
		::System::Type* type; // 0x28
		::XLua::MethodWrapsCache* __4__this; // 0x30
		::System::Reflection::EventInfo* eventInfo; // 0x38
		::System::Boolean is_static; // 0x40
		::System::Int32 start_idx; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetEventWrap_b__0(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS11_0__GETEVENTWRAP_B__0_OFFSET))(this, L);
		}
	};
}
