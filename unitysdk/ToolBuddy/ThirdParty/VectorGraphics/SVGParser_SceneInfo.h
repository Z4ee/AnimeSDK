#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class Scene; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SceneNode; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPARSER_SCENEINFO_GET_SCENE_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPARSER_SCENEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x71A1F0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGParser_SceneInfo_TypeDefinitionIndex = 28455;

	struct alignas(8) SVGParser_SceneInfo
	{
		::ToolBuddy::ThirdParty::VectorGraphics::Scene* _Scene_k__BackingField; // 0x10
		::UnityEngine::Rect _SceneViewport_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::System::Single>* _NodeOpacity_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>* _NodeIDs_k__BackingField; // 0x30

		::System::Void _ctor(::ToolBuddy::ThirdParty::VectorGraphics::Scene* scene, ::UnityEngine::Rect sceneViewport, ::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::System::Single>* nodeOpacities, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>* nodeIDs)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::Scene*, ::UnityEngine::Rect, ::System::Collections::Generic::Dictionary_2<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPARSER_SCENEINFO__CTOR_OFFSET))(this, scene, sceneViewport, nodeOpacities, nodeIDs);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::Scene* get_Scene()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Scene*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPARSER_SCENEINFO_GET_SCENE_OFFSET))(this);
		}
	};
}
