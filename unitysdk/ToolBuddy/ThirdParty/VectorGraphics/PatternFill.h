#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/FillMode.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace ToolBuddy::ThirdParty::VectorGraphics { class SceneNode; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1C5F91B0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL_GET_OPACITY_OFFSET UNITYSDK_OFFSET(0x1C5F91D0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL_GET_PATTERN_OFFSET UNITYSDK_OFFSET(0x1C5F91F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL_GET_RECT_OFFSET UNITYSDK_OFFSET(0x1C5F9210)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1C5F91C0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL_SET_OPACITY_OFFSET UNITYSDK_OFFSET(0x1C5F91E0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL_SET_PATTERN_OFFSET UNITYSDK_OFFSET(0x1C5F9200)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL_SET_RECT_OFFSET UNITYSDK_OFFSET(0x1C5F9220)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F9230)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int PatternFill_TypeDefinitionIndex = 31170;

	class PatternFill : public ::System::Object
	{
	public:
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* _Pattern_k__BackingField; // 0x10
		::UnityEngine::Rect _Rect_k__BackingField; // 0x18
		::ToolBuddy::ThirdParty::VectorGraphics::FillMode _Mode_k__BackingField; // 0x28
		::System::Single m_Opacity; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL__CTOR_OFFSET))(this);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::FillMode get_Mode()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::FillMode(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::ToolBuddy::ThirdParty::VectorGraphics::FillMode value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::FillMode))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL_SET_MODE_OFFSET))(this, value);
		}

		::System::Single get_Opacity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL_GET_OPACITY_OFFSET))(this);
		}

		::System::Void set_Opacity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL_SET_OPACITY_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* get_Pattern()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL_GET_PATTERN_OFFSET))(this);
		}

		::System::Void set_Pattern(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL_SET_PATTERN_OFFSET))(this, value);
		}

		::UnityEngine::Rect get_Rect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL_GET_RECT_OFFSET))(this);
		}

		::System::Void set_Rect(::UnityEngine::Rect value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_PATTERNFILL_SET_RECT_OFFSET))(this, value);
		}
	};
}
