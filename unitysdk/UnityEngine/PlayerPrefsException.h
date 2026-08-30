#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define UNITYENGINE_PLAYERPREFSEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED455B0)

namespace UnityEngine
{
	inline static constexpr unsigned int PlayerPrefsException_TypeDefinitionIndex = 4233;

	class PlayerPrefsException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYERPREFSEXCEPTION__CTOR_OFFSET))(this, a1);
		}
	};
}
