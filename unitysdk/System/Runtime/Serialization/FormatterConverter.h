#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_CONVERT_OFFSET UNITYSDK_OFFSET(0x1790FE10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1790FE90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x1790FF10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x1790FF90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x17910010)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17910090)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1790FE00)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int FormatterConverter_TypeDefinitionIndex = 1089;

	class FormatterConverter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Object* Convert(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_CONVERT_OFFSET))(this, a1, a2);
		}

		::System::Boolean ToBoolean(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOBOOLEAN_OFFSET))(this, a1);
		}

		::System::Int32 ToInt32(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOINT32_OFFSET))(this, a1);
		}

		::System::Int64 ToInt64(::System::Object* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOINT64_OFFSET))(this, a1);
		}

		::System::Single ToSingle(::System::Object* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOSINGLE_OFFSET))(this, a1);
		}

		::System::String* ToString(::System::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOSTRING_OFFSET))(this, a1);
		}
	};
}
