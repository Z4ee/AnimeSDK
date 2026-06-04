#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"

#define TMPRO_TMP_SELECTIONCARET_CULL_OFFSET UNITYSDK_OFFSET(0x1B1D2B60)
#define TMPRO_TMP_SELECTIONCARET_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1B1D2C10)
#define TMPRO_TMP_SELECTIONCARET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D2C20)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SelectionCaret_TypeDefinitionIndex = 41010;

	class TMP_SelectionCaret : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SELECTIONCARET__CTOR_OFFSET))(this);
		}

		::System::Void Cull(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_SELECTIONCARET_CULL_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SELECTIONCARET_UPDATEGEOMETRY_OFFSET))(this);
		}
	};
}
