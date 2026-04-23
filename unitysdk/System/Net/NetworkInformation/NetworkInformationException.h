#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Win32Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x1A136340)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A136130)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A136260)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A135200)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInformationException_TypeDefinitionIndex = 2920;

	class NetworkInformationException : public ::System::ComponentModel::Win32Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 errorCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION__CTOR_1_OFFSET))(this, errorCode);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION__CTOR_2_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Int32 get_ErrorCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION_GET_ERRORCODE_OFFSET))(this);
		}
	};
}
