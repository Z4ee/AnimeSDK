#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/EventAttributes.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class MonoEvent; }

#define SYSTEM_REFLECTION_MONOEVENTINFO_METHOD_2_281EB7823C690AC0_OFFSET UNITYSDK_OFFSET(0x1D68C5F0)
#define SYSTEM_REFLECTION_MONOEVENTINFO_METHOD_2_A976D940CDA3F64A_OFFSET UNITYSDK_OFFSET(0x1D68C5E0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoEventInfo_TypeDefinitionIndex = 585;

	struct alignas(8) MonoEventInfo
	{
		::System::Type* Field_2_3; // 0x10
		::System::Type* Field_2_2; // 0x18
		::System::String* Field_2_1; // 0x20
		::System::Reflection::MethodInfo* Field_2_0; // 0x28
		::System::Reflection::MethodInfo* Field_2_7; // 0x30
		::System::Reflection::MethodInfo* Field_2_6; // 0x38
		::System::Reflection::EventAttributes Field_2_5; // 0x40
		::Il2CppArray<::System::Reflection::MethodInfo*>* Field_2_4; // 0x48

		static ::System::Void Method_2_A976D940CDA3F64A(::System::Reflection::MonoEvent* ev, ::System::Reflection::MonoEventInfo& info)
		{
			return ((::System::Void(*)(::System::Reflection::MonoEvent*, ::System::Reflection::MonoEventInfo&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENTINFO_METHOD_2_A976D940CDA3F64A_OFFSET))(ev, info);
		}

		static ::System::Reflection::MonoEventInfo Method_2_281EB7823C690AC0(::System::Reflection::MonoEvent* ev)
		{
			return ((::System::Reflection::MonoEventInfo(*)(::System::Reflection::MonoEvent*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENTINFO_METHOD_2_281EB7823C690AC0_OFFSET))(ev);
		}
	};
}
