#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONEVENTARGS_GET_SERIALIZEDSTATES_OFFSET UNITYSDK_OFFSET(0x17A1E580)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1E520)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SafeSerializationEventArgs_TypeDefinitionIndex = 1109;

	class SafeSerializationEventArgs : public ::System::EventArgs
	{
	public:
		::System::Runtime::Serialization::StreamingContext m_streamingContext; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* m_serializedStates; // 0x20

		::System::Void _ctor(::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONEVENTARGS__CTOR_OFFSET))(this, streamingContext);
		}

		::System::Collections::Generic::IList_1<::System::Object*>* get_SerializedStates()
		{
			return ((::System::Collections::Generic::IList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONEVENTARGS_GET_SERIALIZEDSTATES_OFFSET))(this);
		}
	};
}
