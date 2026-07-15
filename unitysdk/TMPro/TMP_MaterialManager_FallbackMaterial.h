#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define TMPRO_TMP_MATERIALMANAGER_FALLBACKMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x171C5070)

namespace TMPro
{
	inline static constexpr unsigned int TMP_MaterialManager_FallbackMaterial_TypeDefinitionIndex = 41810;

	class TMP_MaterialManager_FallbackMaterial : public ::System::Object
	{
	public:
		::UnityEngine::Material* fallbackMaterial; // 0x10
		::UnityEngine::Material* sourceMaterial; // 0x18
		::System::Int32 count; // 0x20
		::System::Int32 sourceMaterialCRC; // 0x24
		::System::Int64 fallbackID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_FALLBACKMATERIAL__CTOR_OFFSET))(this);
		}
	};
}
