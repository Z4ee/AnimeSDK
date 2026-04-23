#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define UNITYENGINE_UNASSIGNEDREFERENCEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4929E0)
#define UNITYENGINE_UNASSIGNEDREFERENCEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A492A50)
#define UNITYENGINE_UNASSIGNEDREFERENCEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A492940)

namespace UnityEngine
{
	inline static constexpr unsigned int UnassignedReferenceException_TypeDefinitionIndex = 4154;

	class UnassignedReferenceException : public ::System::Exception
	{
	public:
		::System::String* unityStackTrace; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNASSIGNEDREFERENCEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UNASSIGNEDREFERENCEEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + UNITYENGINE_UNASSIGNEDREFERENCEEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
