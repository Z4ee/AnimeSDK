#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ObjectDisposedException.h"

#define UNITY_THROWSTUB_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D1A6EA0)

namespace Unity
{
	inline static constexpr unsigned int ThrowStub_TypeDefinitionIndex = 3904;

	class ThrowStub : public ::System::ObjectDisposedException
	{
	public:
		static ::System::Void ThrowNotSupportedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_THROWSTUB_THROWNOTSUPPORTEDEXCEPTION_OFFSET))();
		}
	};
}
