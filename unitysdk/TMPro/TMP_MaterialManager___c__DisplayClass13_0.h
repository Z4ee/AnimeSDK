#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class TMP_MaterialManager_MaskingMaterial; }
namespace UnityEngine { class Material; }

#define TMPRO_TMP_MATERIALMANAGER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC4FDC0)
#define TMPRO_TMP_MATERIALMANAGER___C__DISPLAYCLASS13_0__RELEASEBASEMATERIAL_B__0_OFFSET UNITYSDK_OFFSET(0x1EC519F0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_MaterialManager___c__DisplayClass13_0_TypeDefinitionIndex = 43425;

	class TMP_MaterialManager___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::UnityEngine::Material* baseMaterial; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ReleaseBaseMaterial_b__0(::TMPro::TMP_MaterialManager_MaskingMaterial* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::TMPro::TMP_MaterialManager_MaskingMaterial*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER___C__DISPLAYCLASS13_0__RELEASEBASEMATERIAL_B__0_OFFSET))(this, a1);
		}
	};
}
