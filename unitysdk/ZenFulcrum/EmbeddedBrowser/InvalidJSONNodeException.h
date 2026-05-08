#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_INVALIDJSONNODEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C41AC20)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int InvalidJSONNodeException_TypeDefinitionIndex = 31139;

	class InvalidJSONNodeException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_INVALIDJSONNODEEXCEPTION__CTOR_OFFSET))(this);
		}
	};
}
