#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONBINDER_BINDTONAME_OFFSET UNITYSDK_OFFSET(0x1CB2A1D0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB2A1E0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationBinder_TypeDefinitionIndex = 1164;

	class SerializationBinder : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONBINDER__CTOR_OFFSET))(this);
		}

		::System::Void BindToName(::System::Type* serializedType, ::System::String*& assemblyName, ::System::String*& typeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONBINDER_BINDTONAME_OFFSET))(this, serializedType, assemblyName, typeName);
		}
	};
}
