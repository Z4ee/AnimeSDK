#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_UI_EXTENSION_MINDSCAPELINE_GETLINECOEFFICIENTS_OFFSET UNITYSDK_OFFSET(0x1788A8D0)
#define UNITYENGINE_UI_EXTENSION_MINDSCAPELINE_GET_ANGLE_OFFSET UNITYSDK_OFFSET(0x1788A1E0)
#define UNITYENGINE_UI_EXTENSION_MINDSCAPELINE_INTERSECTION_OFFSET UNITYSDK_OFFSET(0x1788A6A0)
#define UNITYENGINE_UI_EXTENSION_MINDSCAPELINE_LERP_OFFSET UNITYSDK_OFFSET(0x1788A2A0)
#define UNITYENGINE_UI_EXTENSION_MINDSCAPELINE_NORMALIZEINRECT_OFFSET UNITYSDK_OFFSET(0x1788AA60)
#define UNITYENGINE_UI_EXTENSION_MINDSCAPELINE_POINTONLINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1788A960)
#define UNITYENGINE_UI_EXTENSION_MINDSCAPELINE_SET_ANGLE_OFFSET UNITYSDK_OFFSET(0x1788A1F0)
#define UNITYENGINE_UI_EXTENSION_MINDSCAPELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1788A200)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int MindscapeLine_TypeDefinitionIndex = 79799;

	class MindscapeLine : public ::System::Object
	{
	public:
		::System::Single _t; // 0x10
		::UnityEngine::Vector2 _d; // 0x14
		::System::Single _Angle_k__BackingField; // 0x1C
		::UnityEngine::Vector2 _p; // 0x20

		::System::Void _ctor(::UnityEngine::Vector2 p, ::System::Single angle, ::System::Single length)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MINDSCAPELINE__CTOR_OFFSET))(this, p, angle, length);
		}

		::System::Single get_Angle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MINDSCAPELINE_GET_ANGLE_OFFSET))(this);
		}

		::System::Void set_Angle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MINDSCAPELINE_SET_ANGLE_OFFSET))(this, value);
		}

		static ::UnityEngine::UI::Extension::MindscapeLine* Lerp(::UnityEngine::UI::Extension::MindscapeLine* lineA, ::UnityEngine::UI::Extension::MindscapeLine* lineB, ::System::Single factor, ::System::Boolean isObtuse)
		{
			return ((::UnityEngine::UI::Extension::MindscapeLine*(*)(::UnityEngine::UI::Extension::MindscapeLine*, ::UnityEngine::UI::Extension::MindscapeLine*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MINDSCAPELINE_LERP_OFFSET))(lineA, lineB, factor, isObtuse);
		}

		::System::Void GetLineCoefficients(::System::Single& a, ::System::Single& b, ::System::Single& c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MINDSCAPELINE_GETLINECOEFFICIENTS_OFFSET))(this, a, b, c);
		}

		::System::Single PointOnLinePosition(::UnityEngine::Vector2 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MINDSCAPELINE_POINTONLINEPOSITION_OFFSET))(this, point);
		}

		::System::Boolean Intersection(::UnityEngine::UI::Extension::MindscapeLine* mindscapeLineB, ::UnityEngine::Vector2& point, ::System::Single& k)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::MindscapeLine*, ::UnityEngine::Vector2&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MINDSCAPELINE_INTERSECTION_OFFSET))(this, mindscapeLineB, point, k);
		}

		::System::Void NormalizeInRect(::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_MINDSCAPELINE_NORMALIZEINRECT_OFFSET))(this, rect);
		}
	};
}
