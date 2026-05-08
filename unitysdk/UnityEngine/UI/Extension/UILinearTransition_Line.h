#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_LINE_GETLINECOEFFICIENTS_OFFSET UNITYSDK_OFFSET(0x815990)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_LINE_INTERSECTION_OFFSET UNITYSDK_OFFSET(0x18CCB530)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_LINE_NORMALIZEINRECT_OFFSET UNITYSDK_OFFSET(0x815A20)
#define UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_LINE__CTOR_OFFSET UNITYSDK_OFFSET(0x815940)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILinearTransition_Line_TypeDefinitionIndex = 39926;

	struct alignas(4) UILinearTransition_Line
	{
		::UnityEngine::Vector2 _p; // 0x10
		::UnityEngine::Vector2 _d; // 0x18

		::System::Void _ctor(::UnityEngine::Vector2 p, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_LINE__CTOR_OFFSET))(this, p, angle);
		}

		::System::Void GetLineCoefficients(::System::Single& a, ::System::Single& b, ::System::Single& c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_LINE_GETLINECOEFFICIENTS_OFFSET))(this, a, b, c);
		}

		static ::System::Boolean Intersection(::UnityEngine::UI::Extension::UILinearTransition_Line line1, ::UnityEngine::UI::Extension::UILinearTransition_Line line2, ::UnityEngine::Vector2& point)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::Extension::UILinearTransition_Line, ::UnityEngine::UI::Extension::UILinearTransition_Line, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_LINE_INTERSECTION_OFFSET))(line1, line2, point);
		}

		/*
		::System::Void NormalizeInRect(::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILINEARTRANSITION_LINE_NORMALIZEINRECT_OFFSET))(this, rect);
		}
		*/
	};
}
