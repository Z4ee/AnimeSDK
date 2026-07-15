#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_RESOLVEEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A80F510)
#define SYSTEM_RESOLVEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A80F4E0)

namespace System
{
	inline static constexpr unsigned int ResolveEventArgs_TypeDefinitionIndex = 416;

	class ResolveEventArgs : public ::System::EventArgs
	{
	public:
		::System::Reflection::Assembly* m_Requesting; // 0x10
		::System::String* m_Name; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOLVEEVENTARGS__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Reflection::Assembly* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_RESOLVEEVENTARGS__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
