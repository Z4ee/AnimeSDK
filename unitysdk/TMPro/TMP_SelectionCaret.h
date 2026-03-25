#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"

#define TMPRO_TMP_SELECTIONCARET_CULL_OFFSET UNITYSDK_OFFSET(0x1893F8A0)
#define TMPRO_TMP_SELECTIONCARET_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1893F950)
#define TMPRO_TMP_SELECTIONCARET__CTOR_OFFSET UNITYSDK_OFFSET(0x1893F960)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SelectionCaret_TypeDefinitionIndex = 34364;

	class TMP_SelectionCaret : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SELECTIONCARET__CTOR_OFFSET))(this);
		}

		::System::Void Cull(::UnityEngine::Rect clipRect, ::System::Boolean validRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_SELECTIONCARET_CULL_OFFSET))(this, clipRect, validRect);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SELECTIONCARET_UPDATEGEOMETRY_OFFSET))(this);
		}
	};
}
