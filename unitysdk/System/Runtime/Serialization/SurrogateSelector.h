#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Type; }
namespace System::Runtime::Serialization { class ISerializationSurrogate; }
namespace System::Runtime::Serialization { class ISurrogateSelector; }
namespace System::Runtime::Serialization { class SurrogateHashtable; }

#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR_ADDSURROGATE_OFFSET UNITYSDK_OFFSET(0x17A22780)
#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR_GETSURROGATE_OFFSET UNITYSDK_OFFSET(0x17A22870)
#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17A22720)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SurrogateSelector_TypeDefinitionIndex = 1128;

	class SurrogateSelector : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::SurrogateHashtable* m_surrogates; // 0x10
		::System::Runtime::Serialization::ISurrogateSelector* m_nextSelector; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR__CTOR_OFFSET))(this);
		}

		::System::Void AddSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ISerializationSurrogate* surrogate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ISerializationSurrogate*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR_ADDSURROGATE_OFFSET))(this, type, context, surrogate);
		}

		::System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ISurrogateSelector*& selector)
		{
			return ((::System::Runtime::Serialization::ISerializationSurrogate*(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ISurrogateSelector*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATESELECTOR_GETSURROGATE_OFFSET))(this, type, context, selector);
		}
	};
}
