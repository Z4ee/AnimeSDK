#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_EMPTY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1790D660)
#define SYSTEM_EMPTY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1790D650)
#define SYSTEM_EMPTY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1790D6E0)
#define SYSTEM_EMPTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1790D640)

namespace System
{
	inline static constexpr unsigned int Empty_TypeDefinitionIndex = 236;

	class Empty : public ::System::Object
	{
	public:
		static ::System::Empty** StaticGet_Value()
		{
			return (::System::Empty**)Il2CppClass::FromTypeDefinitionIndex(Empty_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EMPTY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_EMPTY__CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EMPTY_TOSTRING_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_EMPTY_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
