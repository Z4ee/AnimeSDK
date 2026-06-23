#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_ASSEMBLYISEDITORASSEMBLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D72A960)

namespace UnityEngine
{
	inline static constexpr unsigned int AssemblyIsEditorAssembly_TypeDefinitionIndex = 5332;

	class AssemblyIsEditorAssembly : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSEMBLYISEDITORASSEMBLY__CTOR_OFFSET))(this);
		}
	};
}
