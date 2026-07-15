#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_DOCUMENTATIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F0630)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DocumentationInfo_TypeDefinitionIndex = 34120;

	class DocumentationInfo : public ::System::Object
	{
	public:
		// static const ::System::String* version; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DOCUMENTATIONINFO__CTOR_OFFSET))(this);
		}
	};
}
