#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ObjectDisposedException.h"

#define UNITY_THROWSTUB_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EF24170)

namespace Unity
{
	inline static constexpr unsigned int ThrowStub_TypeDefinitionIndex = 39443;

	class ThrowStub : public ::System::ObjectDisposedException
	{
	public:
		static ::System::Void ThrowNotSupportedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_THROWSTUB_THROWNOTSUPPORTEDEXCEPTION_OFFSET))();
		}
	};
}
