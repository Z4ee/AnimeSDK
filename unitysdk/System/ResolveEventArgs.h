#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_RESOLVEEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D8C2300)
#define SYSTEM_RESOLVEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C22A0)

namespace System
{
	inline static constexpr unsigned int ResolveEventArgs_TypeDefinitionIndex = 404;

	class ResolveEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* m_Name; // 0x10
		::System::Reflection::Assembly* m_Requesting; // 0x18

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOLVEEVENTARGS__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Reflection::Assembly* requestingAssembly)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_RESOLVEEVENTARGS__CTOR_1_OFFSET))(this, name, requestingAssembly);
		}
	};
}
