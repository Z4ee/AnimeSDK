#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define UNITYENGINE_UNITYEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2DC840)
#define UNITYENGINE_UNITYEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B2E3810)
#define UNITYENGINE_UNITYEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E3770)

namespace UnityEngine
{
	inline static constexpr unsigned int UnityException_TypeDefinitionIndex = 4326;

	class UnityException : public ::System::Exception
	{
	public:
		::System::String* unityStackTrace; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}
	};
}
