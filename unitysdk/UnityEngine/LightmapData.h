#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture2D; }

namespace UnityEngine
{
	inline static constexpr unsigned int LightmapData_TypeDefinitionIndex = 4116;

	class LightmapData : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* m_Light; // 0x10
		::UnityEngine::Texture2D* m_Dir; // 0x18
		::UnityEngine::Texture2D* m_ShadowMask; // 0x20
	};
}
