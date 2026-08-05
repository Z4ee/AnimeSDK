#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_Offset.h"

namespace System { class Object; }

#define UNITYENGINE_UI_EXTENSION_NAP_HIGHLIGHTSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x885A60)
#define UNITYENGINE_UI_EXTENSION_NAP_HIGHLIGHTSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x885B60)
#define UNITYENGINE_UI_EXTENSION_NAP_HIGHLIGHTSTATE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18B4D180)
#define UNITYENGINE_UI_EXTENSION_NAP_HIGHLIGHTSTATE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18B4D300)
#define UNITYENGINE_UI_EXTENSION_NAP_HIGHLIGHTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x41EAF0)
#define UNITYENGINE_UI_EXTENSION_NAP_HIGHLIGHTSTATE___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x885B70)
#define UNITYENGINE_UI_EXTENSION_NAP_HIGHLIGHTSTATE___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x885BE0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_HighlightState_TypeDefinitionIndex = 65421;

	struct alignas(4) NAP_HighlightState
	{
		::UnityEngine::Color32 color; // 0x10
		::UnityEngine::UI::Extension::NAP_Offset padding; // 0x14

		::System::Void _ctor(::UnityEngine::Color32 color, ::UnityEngine::UI::Extension::NAP_Offset padding)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32, ::UnityEngine::UI::Extension::NAP_Offset))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_HIGHLIGHTSTATE__CTOR_OFFSET))(this, color, padding);
		}

		static ::System::Boolean op_Equality(::UnityEngine::UI::Extension::NAP_HighlightState lhs, ::UnityEngine::UI::Extension::NAP_HighlightState rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::Extension::NAP_HighlightState, ::UnityEngine::UI::Extension::NAP_HighlightState))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_HIGHLIGHTSTATE_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::UI::Extension::NAP_HighlightState lhs, ::UnityEngine::UI::Extension::NAP_HighlightState rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::Extension::NAP_HighlightState, ::UnityEngine::UI::Extension::NAP_HighlightState))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_HIGHLIGHTSTATE_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_HIGHLIGHTSTATE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_HIGHLIGHTSTATE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_HIGHLIGHTSTATE___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_HIGHLIGHTSTATE___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
