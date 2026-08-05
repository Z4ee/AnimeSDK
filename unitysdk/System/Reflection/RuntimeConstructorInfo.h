#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/ConstructorInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System { class String; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_1ADF6331E3555071_OFFSET UNITYSDK_OFFSET(0x1DDE1490)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_45DB550DE2BB43E0_OFFSET UNITYSDK_OFFSET(0x1DDE13F0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_5E743DD0B15D861F_OFFSET UNITYSDK_OFFSET(0x1DDE1660)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_658233F71CDC01ED_OFFSET UNITYSDK_OFFSET(0x1DDE14A0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1DDE1800)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_8C04D472A6B3B7A0_OFFSET UNITYSDK_OFFSET(0x1DDE1670)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_DC4D0E49726141FD_OFFSET UNITYSDK_OFFSET(0x1DDE1510)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_E0730323297BCBC5_OFFSET UNITYSDK_OFFSET(0x1DDE1370)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeConstructorInfo_TypeDefinitionIndex = 594;

	class RuntimeConstructorInfo : public ::System::Reflection::ConstructorInfo
	{
	public:
		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::Reflection::Module* Method_4_E0730323297BCBC5()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_E0730323297BCBC5_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* Method_4_45DB550DE2BB43E0()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_45DB550DE2BB43E0_OFFSET))(this);
		}

		::System::Reflection::BindingFlags Method_4_1ADF6331E3555071()
		{
			return ((::System::Reflection::BindingFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_1ADF6331E3555071_OFFSET))(this);
		}

		::System::RuntimeType* Method_4_658233F71CDC01ED()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_658233F71CDC01ED_OFFSET))(this);
		}

		::System::Void Method_4_DC4D0E49726141FD(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_DC4D0E49726141FD_OFFSET))(this, info, context);
		}

		::System::String* Method_4_5E743DD0B15D861F()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_5E743DD0B15D861F_OFFSET))(this);
		}

		::System::Void Method_4_8C04D472A6B3B7A0(::System::Object* target, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_8C04D472A6B3B7A0_OFFSET))(this, target, info, context);
		}
	};
}
