#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_OPENEDHOST__CTOR_OFFSET UNITYSDK_OFFSET(0x19F908F0)

namespace System::Xml
{
	inline static constexpr unsigned int OpenedHost_TypeDefinitionIndex = 1940;

	class OpenedHost : public ::System::Object
	{
	public:
		::System::Int32 nonCachedConnectionsCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_OPENEDHOST__CTOR_OFFSET))(this);
		}
	};
}
