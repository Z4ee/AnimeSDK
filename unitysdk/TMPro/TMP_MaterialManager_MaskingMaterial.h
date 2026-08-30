#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define TMPRO_TMP_MATERIALMANAGER_MASKINGMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18B54CC0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_MaterialManager_MaskingMaterial_TypeDefinitionIndex = 43422;

	class TMP_MaterialManager_MaskingMaterial : public ::System::Object
	{
	public:
		::UnityEngine::Material* baseMaterial; // 0x10
		::UnityEngine::Material* stencilMaterial; // 0x18
		::System::Int32 stencilID; // 0x20
		::System::Int32 count; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_MASKINGMATERIAL__CTOR_OFFSET))(this);
		}
	};
}
