#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/FieldInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_3_45DB550DE2BB43E0_OFFSET UNITYSDK_OFFSET(0x1D8C1FE0)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_3_658233F71CDC01ED_1_OFFSET UNITYSDK_OFFSET(0x1D8C20E0)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_3_658233F71CDC01ED_OFFSET UNITYSDK_OFFSET(0x1D8C2070)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1D8C2290)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_3_C3AAC3717C02EBB8_OFFSET UNITYSDK_OFFSET(0x1D8C2150)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_3_E0730323297BCBC5_OFFSET UNITYSDK_OFFSET(0x1D8C1F50)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeFieldInfo_TypeDefinitionIndex = 588;

	class RuntimeFieldInfo : public ::System::Reflection::FieldInfo
	{
	public:
		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Reflection::Module* Method_3_E0730323297BCBC5()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_3_E0730323297BCBC5_OFFSET))(this);
		}

		::System::RuntimeType* Method_3_658233F71CDC01ED()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_3_658233F71CDC01ED_OFFSET))(this);
		}

		::System::RuntimeType* Method_3_658233F71CDC01ED_1()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_3_658233F71CDC01ED_1_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* Method_3_45DB550DE2BB43E0()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_3_45DB550DE2BB43E0_OFFSET))(this);
		}

		::System::Void Method_3_C3AAC3717C02EBB8(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_3_C3AAC3717C02EBB8_OFFSET))(this, info, context);
		}
	};
}
