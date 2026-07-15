#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define UNITYENGINE_SCRIPTING_MODULEINITIALIZEHELPER_RUNCLASSCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1BFAF940)

namespace UnityEngine::Scripting
{
	inline static constexpr unsigned int ModuleInitializeHelper_TypeDefinitionIndex = 4489;

	class ModuleInitializeHelper : public ::System::Object
	{
	public:
		static ::System::Void RunClassConstructor(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_MODULEINITIALIZEHELPER_RUNCLASSCONSTRUCTOR_OFFSET))(a1);
		}
	};
}
