#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class TMP_MaterialManager_MaskingMaterial; }
namespace UnityEngine { class Material; }

#define TMPRO_TMP_MATERIALMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B55270)
#define TMPRO_TMP_MATERIALMANAGER___C__DISPLAYCLASS9_0__GETBASEMATERIAL_B__0_OFFSET UNITYSDK_OFFSET(0x18B57BC0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_MaterialManager___c__DisplayClass9_0_TypeDefinitionIndex = 43426;

	class TMP_MaterialManager___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::UnityEngine::Material* stencilMaterial; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBaseMaterial_b__0(::TMPro::TMP_MaterialManager_MaskingMaterial* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::TMPro::TMP_MaterialManager_MaskingMaterial*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER___C__DISPLAYCLASS9_0__GETBASEMATERIAL_B__0_OFFSET))(this, a1);
		}
	};
}
