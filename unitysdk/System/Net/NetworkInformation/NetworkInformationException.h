#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Win32Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x1AF9AF00)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF9AD90)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AF9AE40)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF99FD0)

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

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_ErrorCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION_GET_ERRORCODE_OFFSET))(this);
		}
	};
}
