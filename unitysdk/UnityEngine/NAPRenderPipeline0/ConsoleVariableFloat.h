#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ConsoleVariableT_1.h"

namespace System { class String; }

#define UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEVARIABLEFLOAT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E94C5A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEVARIABLEFLOAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E94C620)
#define UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEVARIABLEFLOAT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E94C5E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEVARIABLEFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E94C580)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ConsoleVariableFloat_TypeDefinitionIndex = 5693;

	class ConsoleVariableFloat : public ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>
	{
	public:
		::System::Void _ctor(::System::String* name, ::System::Single defaultValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEVARIABLEFLOAT__CTOR_OFFSET))(this, name, defaultValue);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEVARIABLEFLOAT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEVARIABLEFLOAT_SET_VALUE_OFFSET))(this, value);
		}

		static ::System::Single op_Implicit(::UnityEngine::NAPRenderPipeline0::ConsoleVariableFloat* v)
		{
			return ((::System::Single(*)(::UnityEngine::NAPRenderPipeline0::ConsoleVariableFloat*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEVARIABLEFLOAT_OP_IMPLICIT_OFFSET))(v);
		}
	};
}
