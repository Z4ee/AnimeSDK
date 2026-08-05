#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE8D230)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8D180)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SafeSerializationEventArgs_TypeDefinitionIndex = 1156;

	class SafeSerializationEventArgs : public ::System::EventArgs
	{
	public:
		::System::Runtime::Serialization::StreamingContext m_streamingContext; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* m_serializedStates; // 0x20

		::System::Void _ctor(::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONEVENTARGS__CTOR_OFFSET))(this, streamingContext);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONEVENTARGS__CTOR_1_OFFSET))(this);
		}
	};
}
