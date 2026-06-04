#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Shadow.h"

namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_OUTLINE_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1B3CD9C0)
#define UNITYENGINE_UI_OUTLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3CD980)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Outline_TypeDefinitionIndex = 6047;

	class Outline : public ::UnityEngine::UI::Shadow
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINE__CTOR_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINE_MODIFYMESH_OFFSET))(this, a1);
		}
	};
}
