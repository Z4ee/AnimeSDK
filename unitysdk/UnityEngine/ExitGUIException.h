#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define UNITYENGINE_EXITGUIEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18A67360)
#define UNITYENGINE_EXITGUIEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18A672E0)

namespace UnityEngine
{
	inline static constexpr unsigned int ExitGUIException_TypeDefinitionIndex = 5127;

	class ExitGUIException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXITGUIEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXITGUIEXCEPTION__CTOR_1_OFFSET))(this, message);
		}
	};
}
