#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class MethodInfo; }
namespace XLua { class MethodWrapsCache; }

#define XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1186A100)
#define XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS11_0__GETEVENTWRAP_B__0_OFFSET UNITYSDK_OFFSET(0x1186A4E0)

namespace XLua
{
	inline static constexpr unsigned int MethodWrapsCache___c__DisplayClass11_0_TypeDefinitionIndex = 50548;

	class MethodWrapsCache___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::String* eventName; // 0x10
		::System::Type* type; // 0x18
		::System::Reflection::MethodInfo* add; // 0x20
		::System::Reflection::EventInfo* eventInfo; // 0x28
		::System::Reflection::MethodInfo* remove; // 0x30
		::XLua::MethodWrapsCache* __4__this; // 0x38
		::System::Int32 start_idx; // 0x40
		::System::Boolean is_static; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetEventWrap_b__0(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS11_0__GETEVENTWRAP_B__0_OFFSET))(this, a1);
		}
	};
}
