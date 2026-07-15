#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define UNITYENGINE_MISSINGREFERENCEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D119EC0)
#define UNITYENGINE_MISSINGREFERENCEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D119E20)

namespace UnityEngine
{
	inline static constexpr unsigned int MissingReferenceException_TypeDefinitionIndex = 4334;

	class MissingReferenceException : public ::System::Exception
	{
	public:
		::System::String* unityStackTrace; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MISSINGREFERENCEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + UNITYENGINE_MISSINGREFERENCEEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
