#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_CONVERT_OFFSET UNITYSDK_OFFSET(0x179F54F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x179F5570)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x179F55F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x179F5670)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x179F56F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x179F5770)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x179F54E0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int FormatterConverter_TypeDefinitionIndex = 1088;

	class FormatterConverter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Object* Convert(::System::Object* value, ::System::Type* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_CONVERT_OFFSET))(this, value, type);
		}

		::System::Boolean ToBoolean(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOBOOLEAN_OFFSET))(this, value);
		}

		::System::Int32 ToInt32(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOINT32_OFFSET))(this, value);
		}

		::System::Int64 ToInt64(::System::Object* value)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOINT64_OFFSET))(this, value);
		}

		::System::Single ToSingle(::System::Object* value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOSINGLE_OFFSET))(this, value);
		}

		::System::String* ToString(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOSTRING_OFFSET))(this, value);
		}
	};
}
