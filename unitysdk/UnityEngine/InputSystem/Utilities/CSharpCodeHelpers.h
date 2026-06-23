#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_ISEMPTYORPROPERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1D74ACC0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_ISEMPTYORPROPERNAMESPACENAME_OFFSET UNITYSDK_OFFSET(0x1D74ACE0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_ISPROPERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1D74AB90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_MAKEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1D74ADC0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_MAKETYPENAME_OFFSET UNITYSDK_OFFSET(0x1D74B0F0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int CSharpCodeHelpers_TypeDefinitionIndex = 32039;

	class CSharpCodeHelpers : public ::System::Object
	{
	public:
		static ::System::Boolean IsProperIdentifier(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_ISPROPERIDENTIFIER_OFFSET))(name);
		}

		static ::System::Boolean IsEmptyOrProperIdentifier(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_ISEMPTYORPROPERIDENTIFIER_OFFSET))(name);
		}

		static ::System::Boolean IsEmptyOrProperNamespaceName(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_ISEMPTYORPROPERNAMESPACENAME_OFFSET))(name);
		}

		static ::System::String* MakeIdentifier(::System::String* name, ::System::String* suffix)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_MAKEIDENTIFIER_OFFSET))(name, suffix);
		}

		static ::System::String* MakeTypeName(::System::String* name, ::System::String* suffix)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_MAKETYPENAME_OFFSET))(name, suffix);
		}
	};
}
