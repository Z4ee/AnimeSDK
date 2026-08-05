#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering::Unversal { class SRPHelperExecuteContext; }

#define UNITYENGINE_RENDERING_UNVERSAL_SRPTHREADSHAREDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB42710)

namespace UnityEngine::Rendering::Unversal
{
	inline static constexpr unsigned int SRPThreadSharedData_TypeDefinitionIndex = 27622;

	class SRPThreadSharedData : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Unversal::SRPHelperExecuteContext* Context; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNVERSAL_SRPTHREADSHAREDDATA__CTOR_OFFSET))(this);
		}
	};
}
