#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/Matrix2D.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class Shape; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1C6190D0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE_GET_CLIPPER_OFFSET UNITYSDK_OFFSET(0x1C619140)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE_GET_SHAPES_OFFSET UNITYSDK_OFFSET(0x1C6190F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C619110)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE_SET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1C6190E0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE_SET_CLIPPER_OFFSET UNITYSDK_OFFSET(0x1C619150)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE_SET_SHAPES_OFFSET UNITYSDK_OFFSET(0x1C619100)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C619130)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C601470)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SceneNode_TypeDefinitionIndex = 31174;

	class SceneNode : public ::System::Object
	{
	public:
		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* _Clipper_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::Shape*>* _Shapes_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>* _Children_k__BackingField; // 0x20
		::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D m_Transform; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>* get_Children()
		{
			return ((::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void set_Children(::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE_SET_CHILDREN_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::Shape*>* get_Shapes()
		{
			return ((::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::Shape*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE_GET_SHAPES_OFFSET))(this);
		}

		::System::Void set_Shapes(::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::Shape*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ToolBuddy::ThirdParty::VectorGraphics::Shape*>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE_SET_SHAPES_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D get_Transform()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void set_Transform(::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE_SET_TRANSFORM_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* get_Clipper()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE_GET_CLIPPER_OFFSET))(this);
		}

		::System::Void set_Clipper(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SCENENODE_SET_CLIPPER_OFFSET))(this, value);
		}
	};
}
