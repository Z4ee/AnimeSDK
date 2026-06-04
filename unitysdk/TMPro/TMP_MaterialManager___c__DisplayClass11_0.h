#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class TMP_MaterialManager_MaskingMaterial; }
namespace UnityEngine { class Material; }

#define TMPRO_TMP_MATERIALMANAGER___C__DISPLAYCLASS11_0__ADDMASKINGMATERIAL_B__0_OFFSET UNITYSDK_OFFSET(0x1B1CDF00)
#define TMPRO_TMP_MATERIALMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1CBB30)

namespace TMPro
{
	inline static constexpr unsigned int TMP_MaterialManager___c__DisplayClass11_0_TypeDefinitionIndex = 40997;

	class TMP_MaterialManager___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::UnityEngine::Material* stencilMaterial; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddMaskingMaterial_b__0(::TMPro::TMP_MaterialManager_MaskingMaterial* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::TMPro::TMP_MaterialManager_MaskingMaterial*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER___C__DISPLAYCLASS11_0__ADDMASKINGMATERIAL_B__0_OFFSET))(this, a1);
		}
	};
}
