#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/PInfo.h"
#include "unitysdk/System/Reflection/PropertyAttributes.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class MonoProperty; }

#define SYSTEM_REFLECTION_MONOPROPERTYINFO_METHOD_2_0C6643DF02B338C4_OFFSET UNITYSDK_OFFSET(0x1DDE1360)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoPropertyInfo_TypeDefinitionIndex = 600;

	struct alignas(8) MonoPropertyInfo
	{
		::System::Type* Field_2_1; // 0x10
		::System::Type* Field_2_0; // 0x18
		::System::String* Field_2_7; // 0x20
		::System::Reflection::MethodInfo* Field_2_6; // 0x28
		::System::Reflection::MethodInfo* Field_2_5; // 0x30
		::System::Reflection::PropertyAttributes Field_2_4; // 0x38

		static ::System::Void Method_2_0C6643DF02B338C4(::System::Reflection::MonoProperty* prop, ::System::Reflection::MonoPropertyInfo& info, ::System::Reflection::PInfo req_info)
		{
			return ((::System::Void(*)(::System::Reflection::MonoProperty*, ::System::Reflection::MonoPropertyInfo&, ::System::Reflection::PInfo))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTYINFO_METHOD_2_0C6643DF02B338C4_OFFSET))(prop, info, req_info);
		}
	};
}
