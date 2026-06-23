#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/GraphicRegistry_2.h"

namespace UnityEngine::UI { class IMeshModifier; }

#define UNITYENGINE_UI_MESHMODIFIERREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E65DC30)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int MeshModifierRegistry_TypeDefinitionIndex = 18991;

	class MeshModifierRegistry : public ::UnityEngine::UI::GraphicRegistry_2<::UnityEngine::UI::MeshModifierRegistry*, ::UnityEngine::UI::IMeshModifier*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MESHMODIFIERREGISTRY__CTOR_OFFSET))(this);
		}
	};
}
