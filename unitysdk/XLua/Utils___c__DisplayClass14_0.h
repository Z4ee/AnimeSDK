#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class MethodInfo; }

#define XLUA_UTILS___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13445270)
#define XLUA_UTILS___C__DISPLAYCLASS14_0__LAZYREFLECTIONCALL_B__0_OFFSET UNITYSDK_OFFSET(0x1344DE70)

namespace XLua
{
	inline static constexpr unsigned int Utils___c__DisplayClass14_0_TypeDefinitionIndex = 47048;

	class Utils___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::String* memberName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _LazyReflectionCall_b__0(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS14_0__LAZYREFLECTIONCALL_B__0_OFFSET))(this, a1);
		}
	};
}
