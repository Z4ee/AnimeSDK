#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ToolBuddy::ThirdParty::VectorGraphics { class SceneNode; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENE_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x1C6190B0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENE_SET_ROOT_OFFSET UNITYSDK_OFFSET(0x1C6190C0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6156B0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int Scene_TypeDefinitionIndex = 31175;

	class Scene : public ::System::Object
	{
	public:
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* _Root_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENE__CTOR_OFFSET))(this);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* get_Root()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENE_GET_ROOT_OFFSET))(this);
		}

		::System::Void set_Root(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENE_SET_ROOT_OFFSET))(this, value);
		}
	};
}
