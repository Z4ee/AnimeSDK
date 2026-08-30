#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Type; }
namespace System::Runtime::Serialization { class ISerializationSurrogate; }
namespace System::Runtime::Serialization { class ISurrogateSelector; }
namespace System::Runtime::Serialization { class SurrogateHashtable; }

#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR_ADDSURROGATE_OFFSET UNITYSDK_OFFSET(0x19B9CDE0)
#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR_GETSURROGATE_OFFSET UNITYSDK_OFFSET(0x19B9CED0)
#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9CD80)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SurrogateSelector_TypeDefinitionIndex = 1136;

	class SurrogateSelector : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::SurrogateHashtable* m_surrogates; // 0x10
		::System::Runtime::Serialization::ISurrogateSelector* m_nextSelector; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR__CTOR_OFFSET))(this);
		}

		::System::Void AddSurrogate(::System::Type* a1, ::System::Runtime::Serialization::StreamingContext a2, ::System::Runtime::Serialization::ISerializationSurrogate* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ISerializationSurrogate*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR_ADDSURROGATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(::System::Type* a1, ::System::Runtime::Serialization::StreamingContext a2, ::System::Runtime::Serialization::ISurrogateSelector*& a3)
		{
			return ((::System::Runtime::Serialization::ISerializationSurrogate*(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ISurrogateSelector*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR_GETSURROGATE_OFFSET))(this, a1, a2, a3);
		}
	};
}
