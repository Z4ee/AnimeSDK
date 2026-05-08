#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/PropertyInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System { class String; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_45DB550DE2BB43E0_OFFSET UNITYSDK_OFFSET(0x19ED2CE0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_4944A8256F09EC34_1_OFFSET UNITYSDK_OFFSET(0x19ED30F0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_4944A8256F09EC34_OFFSET UNITYSDK_OFFSET(0x19ED2E50)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_658233F71CDC01ED_1_OFFSET UNITYSDK_OFFSET(0x19ED2DE0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_658233F71CDC01ED_OFFSET UNITYSDK_OFFSET(0x19ED2D70)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19ED3100)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_DC4D0E49726141FD_OFFSET UNITYSDK_OFFSET(0x19ED2FB0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_E0730323297BCBC5_OFFSET UNITYSDK_OFFSET(0x19ED2C50)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_F76FEDFA1A270FE3_OFFSET UNITYSDK_OFFSET(0x19ED2E60)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimePropertyInfo_TypeDefinitionIndex = 602;

	class RuntimePropertyInfo : public ::System::Reflection::PropertyInfo
	{
	public:
		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Reflection::Module* Method_3_E0730323297BCBC5()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_E0730323297BCBC5_OFFSET))(this);
		}

		::System::RuntimeType* Method_3_658233F71CDC01ED()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_658233F71CDC01ED_OFFSET))(this);
		}

		::System::RuntimeType* Method_3_658233F71CDC01ED_1()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_658233F71CDC01ED_1_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* Method_3_45DB550DE2BB43E0()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_45DB550DE2BB43E0_OFFSET))(this);
		}

		::System::String* Method_3_4944A8256F09EC34()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_4944A8256F09EC34_OFFSET))(this);
		}

		::System::String* Method_3_F76FEDFA1A270FE3(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_F76FEDFA1A270FE3_OFFSET))(this, serialization);
		}

		::System::Void Method_3_DC4D0E49726141FD(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_DC4D0E49726141FD_OFFSET))(this, info, context);
		}

		::System::String* Method_3_4944A8256F09EC34_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_4944A8256F09EC34_1_OFFSET))(this);
		}
	};
}
