#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DocumentationInfo.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_DOCUMENTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B179520)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Documentation_TypeDefinitionIndex = 33750;

	class Documentation : public ::UnityEngine::Rendering::DocumentationInfo
	{
	public:
		// static const ::System::String* baseURL; // 0x0
		// static const ::System::String* subURL; // 0x0
		// static const ::System::String* endURL; // 0x0
		// static const ::System::String* releaseVersion; // 0x0
		// static const ::System::String* baseURLHDRP; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DOCUMENTATION__CTOR_OFFSET))(this);
		}
	};
}
