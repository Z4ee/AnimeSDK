#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define ZLINQ_LINQ_FROMENUMERABLECONTENT_THROWIFNOENUMERABLE_OFFSET UNITYSDK_OFFSET(0x3BDF230)
#define ZLINQ_LINQ_FROMENUMERABLECONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x3BDF220)
#define ZLINQ_LINQ_FROMENUMERABLECONTENT__THROWIFNOENUMERABLE_G__THROW_3_0_OFFSET UNITYSDK_OFFSET(0x1EFC9F40)

namespace ZLinq::Linq
{
	inline static constexpr unsigned int FromEnumerableContent_TypeDefinitionIndex = 6088;

	struct alignas(8) FromEnumerableContent
	{
		::System::Object* Source; // 0x10
		::System::Int32 Index; // 0x18

		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMENUMERABLECONTENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void ThrowIfNoEnumerable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMENUMERABLECONTENT_THROWIFNOENUMERABLE_OFFSET))(this);
		}

		static ::System::Void _ThrowIfNoEnumerable_g__Throw_3_0()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZLINQ_LINQ_FROMENUMERABLECONTENT__THROWIFNOENUMERABLE_G__THROW_3_0_OFFSET))();
		}
	};
}
