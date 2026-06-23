#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_EXCEPTIONHELPERS_ISEXCEPTIONINDICATINGBUGINCODE_OFFSET UNITYSDK_OFFSET(0x1DD082B0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int ExceptionHelpers_TypeDefinitionIndex = 32045;

	class ExceptionHelpers : public ::System::Object
	{
	public:
		static ::System::Boolean IsExceptionIndicatingBugInCode(::System::Exception* exception)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_EXCEPTIONHELPERS_ISEXCEPTIONINDICATINGBUGINCODE_OFFSET))(exception);
		}
	};
}
