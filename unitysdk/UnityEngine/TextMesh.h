#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"

namespace System { class String; }

#define UNITYENGINE_TEXTMESH_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x18AC7400)

namespace UnityEngine
{
	inline static constexpr unsigned int TextMesh_TypeDefinitionIndex = 4941;

	class TextMesh : public ::UnityEngine::Component
	{
	public:
		::System::Void set_text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_TEXT_OFFSET))(this, value);
		}
	};
}
